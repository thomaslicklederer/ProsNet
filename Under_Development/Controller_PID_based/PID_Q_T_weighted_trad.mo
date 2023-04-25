within ProsNet.Under_Development.Controller_PID_based;
model PID_Q_T_weighted_trad

  import Modelica.Units.SI;
  import T_AbsZeroDegC = Modelica.Constants.T_zero;
  import Modelica.Blocks.Types.Init;
  import Modelica.Blocks.Types.SimpleController;

    // !!!!! parameters !!!!!
  parameter Real Delta_Qdot_norm = 1
      "Heat power value for normalizing the error (deviation) of the transferred heat.
      For alpha=0.5 a deviation of Delta_Qdot_norm in heat transfer is weigthed equal to a deviation of Delta_T_norm in temperature."
      annotation(Dialog(group="Normalizing values"));
  parameter SI.TemperatureDifference Delta_T_norm(min=0) = 3
      "Temperature difference for normalizing the error (deviation) of the temperature.
      For alpha=0.5 a deviation of Delta_T_norm in temperature is weighted equal to a deviation of Delta_Qdot_norm in heat transfer."
      annotation(Dialog(group="Normalizing values"));

  parameter SI.Temperature T_prim_hot_des(min=277)= - T_AbsZeroDegC + 53.5
      "desired temperature supply primary side"
      annotation(Dialog(group="Temperature objectives"));
  parameter SI.Temperature T_sec_hot_des(min=277)= - T_AbsZeroDegC + 50
      "desired temperature supply secondary side"
      annotation(Dialog(group="Temperature objectives"));
  parameter SI.TemperatureDifference DeltaT_prim_des(min=1) =   20
      "desired temperature difference primary side"
      annotation(Dialog(group="Temperature objectives"));
  parameter SI.TemperatureDifference DeltaT_sec_des(min=1) =   20
      "desired temperature difference secondary side"
      annotation(Dialog(group="Temperature objectives"));
  parameter Real V_dot_sec_max(unit="l/min", displayUnit="l/min") = 8.5
    "maximum secondary side volume flow in [l/min]"
    annotation(Dialog(group="General PID settings"));
  parameter Real k_prim_prod = 1.5
    "Proportional gain for controller in [-]"
    annotation(Dialog(group="PID primary side - producer mode - tuning"));
  parameter Real Ti_prim_prod = 8
    "Integral time constant for controller in [s]"
    annotation(Dialog(group="PID primary side - producer mode - tuning"));
  parameter Real Td_prim_prod = 0
    "Derivative time constant for controller in [s]"
    annotation(Dialog(group="PID primary side - producer mode - tuning"));
  parameter Real alpha_prim_prod(min=0, max=1) = 0.75
    "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
    annotation(Dialog(group="PID primary side - producer mode - tuning"));
  parameter Real k_sec_prod = 1.5
    "Proportional gain for controller in [-]"
    annotation(Dialog(group="PID secondary side - producer mode - tuning"));
  parameter Real Ti_sec_prod = 8
    "Integral time constant for controller in [s]"
    annotation(Dialog(group="PID secondary side - producer mode - tuning"));
  parameter Real Td_sec_prod = 0
    "Derivative time constant for controller in [s]"
    annotation(Dialog(group="PID secondary side - producer mode - tuning"));
  parameter Real alpha_sec_prod(min=0, max=1) = 0.25
    "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
    annotation(Dialog(group="PID secondary side - producer mode - tuning"));
  parameter Real k_prim_cons = 1.0
    "Proportional gain for controller in [-]"
    annotation(Dialog(group="PID primary side - consumer mode - tuning"));
  parameter Real Ti_prim_cons = 35
    "Integral time constant for controller in [s]"
    annotation(Dialog(group="PID primary side - consumer mode - tuning"));
  parameter Real Td_prim_cons = 0
    "Derivative time constant for controller in [s]"
    annotation(Dialog(group="PID primary side - consumer mode - tuning"));
  parameter Real alpha_prim_cons(min=0, max=1) = 0.25
    "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
    annotation(Dialog(group="PID primary side - consumer mode - tuning"));
  parameter Real k_sec_cons = 1.5
    "Proportional gain for controller in [-]"
    annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
  parameter Real Ti_sec_cons = 8
    "Integral time constant for controller in [s]"
    annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
  parameter Real Td_sec_cons = 0
    "Derivative time constant for controller in [s]"
    annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
  parameter Real alpha_sec_cons(min=0, max=1) = 0.75
    "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
    annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
  parameter .Modelica.Blocks.Types.SimpleController controllerType=
         Modelica.Blocks.Types.SimpleController.PID "Type of controller"
         annotation(Dialog(tab="Advanced", group="PIDs general"));
  parameter Init initType = Modelica.Blocks.Types.Init.NoInit
    "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output)"
    annotation(Dialog(tab="Advanced", group="PIDs general"));
  parameter Real tol = 0.1
    "tolerance [kW] for idle mode concerning heat transfer setpoint dotQ"
    annotation(Dialog(tab="Advanced", group="Miscellaneous"));

  // !!!!! variables !!!!!
  Real beta_prim_prod(min=0, max=1)
    "weight for the relevance of the error of the temperature(difference)";
  Real beta_sec_prod(min=0, max=1)
    "weight for the relevance of the error of the temperature(difference)";
  Real beta_prim_cons(min=0, max=1)
    "weight for the relevance of the error of the temperature(difference)";
  Real beta_sec_cons(min=0, max=1)
    "weight for the relevance of the error of the temperature(difference)";
  Integer  prosumer_mode
    "prosumer mode {-1;0;1}";
  Real T_prim_relev_des
      "desired value of relevant temperature (difference)
      for control of primary side";
  Real T_prim_relev_is
      "current value of relevant temperature (difference)
      for control of primary side";
  Real T_sec_relev_des
      "desired value of relevant temperature (difference)
      for control of secondary side";
  Real T_sec_relev_is
      "current value of relevant temperature (difference)
      for control of secondary side";

  Real PIDin_prim_cons_is_weighted
      "weighted input of is-values for PID_prim_cons";
  Real PIDin_prim_cons_des_weighted
      "weighted input of desired values for PID_prim_cons";
  Real PIDin_prim_prod_is_weighted
      "weighted input of is-values for PID_prim_prod";
  Real PIDin_prim_prod_des_weighted
      "weighted input of desired values for PID_prim_prod";
  Real PIDin_sec_cons_is_weighted
      "weighted input of is-values for PID_sec_cons";
  Real PIDin_sec_cons_des_weighted
      "weighted input of desired values for PID_sec_cons";
  Real PIDin_sec_prod_is_weighted
      "weighted input of is-values for PID_sec_prod";
  Real PIDin_sec_prod_des_weighted
      "weighted input of desired values for PID_sec_prod";

  Real error_prim_weighted
      "weighted overall error of primary side controller";

  Real error_sec_weighted
      "weighted overall error of primary side controller";

  Real error_T_prim_abs
      "temperature error of primary side controller";

  Real error_T_sec_abs
      "temperature error of primary side controller";

  Real error_Q_abs
      "temperature error of primary side controller";

  Real error_T_high_prio_abs
      "error of higher prioritized temperature objective";

  Real error_T_low_prio_abs
      "error of lower prioritized temperature objective";

  Real Delta_T_prim
      "weighted overall error of primary side controller";

  Real Delta_T_sec
      "weighted overall error of primary side controller";

   Real Delta_p_prim(unit="Pa", displayUnit="bar") annotation (
      Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=180,
        origin={-80,-140})));

  // !!!!! ports !!!!!

  Modelica.Blocks.Interfaces.RealVectorInput states[8]
    annotation (Placement(transformation(extent={{-140,-20},{-100,20}})));

  Modelica.Blocks.Interfaces.RealVectorOutput contr_vars_real[6]
    annotation (Placement(transformation(extent={{100,-20},{140,20}})));

  Real u_set
    "Normalized velocity of feed-in pump"
      annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,-60}),  iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={100,-60})));
  Real kappa_set
    "Normalized flow coefficient for control valve"
     annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,-100}),iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={100,-100})));
  Real pi_set
    "Participation" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,20}),    iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={100,20})));
  Real mu_set
    "Operating mode" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,-20}),  iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={100,-20})));
  Real T_sec_hot(
    unit="K",
    displayUnit="degC",
    min=277) "current temperature hot level secondary side"      annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-80,60})));
  Real T_sec_cold(
    unit="K",
    displayUnit="degC",
    min=277)
           "current temperature cold  level secondary side"    annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-80,20})));
  Real T_prim_hot(
    unit="K",
    displayUnit="degC",
    min=277)
           "current temperature hot level primary side"        annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-80,140})));
  Real T_prim_cold(
    unit="K",
    displayUnit="degC",
    min=277)
            "current temperature cold level primary side"       annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={-80,100})));
  Modelica.Blocks.Interfaces.RealInput Q_dot_set(unit="kW", displayUnit="kW")
    "setpoint heat transfer (positive production, negative consumption)"
    annotation (Placement(transformation(extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-60,188})));
  Real V_dot_prim(unit="l/min", displayUnit="l/min")
    annotation (Placement(transformation(extent={{-100,-40},{-60,0}})));
  Real V_dot_sec(unit="l/min", displayUnit="l/min")
    annotation (Placement(transformation(extent={{-100,-80},{-60,-40}})));

  Real Q_dot_is(unit="kW", displayUnit="kW")
    "currently transferred heat (positive production, negative consumption)"
    annotation (Placement(transformation(extent={{-100,-120},{-60,-80}})));
  Modelica.Blocks.Continuous.LimPID PID_prim_cons(
    controllerType=controllerType,
    k=k_prim_cons,
    Ti=Ti_prim_cons,
    Td=Td_prim_cons,
    yMax=1,
    yMin=0.25,
    initType=initType,
    y_start=PID_prim_cons.yMax)
    annotation (Placement(transformation(extent={{-30,-32},{-10,-12}})));
  Modelica.Blocks.Continuous.LimPID PID_sec_cons(
    controllerType=controllerType,
    k=k_sec_cons,
    Ti=Ti_sec_cons,
    Td=Td_sec_cons,
    yMax=V_dot_sec_max,
    yMin=2,
    initType=initType,
    y_start=PID_sec_cons.yMax)
    annotation (Placement(transformation(extent={{-34,28},{-14,48}})));
  Modelica.Blocks.Continuous.LimPID PID_prim_prod(
    controllerType=controllerType,
    k=k_prim_prod,
    Ti=Ti_prim_prod,
    Td=Td_prim_prod,
    yMax=1,
    yMin=0.25,
    initType=initType,
    y_start=PID_prim_prod.yMax) annotation (Placement(transformation(extent={{12,-30},
            {32,-10}})));
  Modelica.Blocks.Continuous.LimPID PID_sec_prod(
    controllerType=controllerType,
    k=k_sec_prod,
    Ti=Ti_sec_prod,
    Td=Td_sec_prod,
    yMax=V_dot_sec_max,
    yMin=2,
    initType=initType,
    y_start=PID_sec_prod.yMax) annotation (Placement(transformation(extent={{10,28},
            {30,48}})));
  Real T_sec_set(unit="K", displayUnit="degC")
     "Temperature on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,100})));
  Real V_dot_sec_set(unit="l/min", displayUnit=
       "l/min") "volume flow rate setpoint on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=0,
        origin={80,60})));
  Modelica.Blocks.Interfaces.RealInput T_sec_in_is(unit="K", displayUnit="degC")
    "Temperature on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=270,
        origin={60,190})));

equation

  // assign inputs
  T_prim_hot   = states[1];
  T_prim_cold  = states[2];
  T_sec_hot    = states[3];
  T_sec_cold   = states[4];
  V_dot_prim   = states[5];
  V_dot_sec    = states[6];
  Q_dot_is     = states[7];
  Delta_p_prim = states[8];

  Delta_T_prim      = T_prim_hot -T_prim_cold;
  Delta_T_sec       = T_sec_hot  -T_sec_cold;

  beta_prim_prod = 1 - alpha_prim_prod;
  beta_sec_prod  = 1 - alpha_sec_prod;
  beta_prim_cons = 1 - alpha_prim_cons;
  beta_sec_cons  = 1 - alpha_sec_cons;

  // determine easy static values that just depend on prosumer mode
  // determine inputs for the four PIDs
  // four PIDs in order to be able to have different gains for each situation

  if  Q_dot_set <= 0-tol then // consumption mode
    prosumer_mode = -1;
    pi_set = 1;
    mu_set = -1;
    T_prim_relev_des = T_sec_hot_des;
    T_prim_relev_is = T_sec_hot;
    T_sec_relev_des = DeltaT_prim_des;
    T_sec_relev_is = T_prim_hot-T_prim_cold;

    PIDin_prim_cons_is_weighted    = alpha_prim_cons*(-1)*Q_dot_is/Delta_Qdot_norm + beta_prim_cons*T_prim_relev_is/Delta_T_norm;
    PIDin_prim_cons_des_weighted   = alpha_prim_cons*(-1)*Q_dot_set/Delta_Qdot_norm + beta_prim_cons*T_prim_relev_des/Delta_T_norm;
    PIDin_prim_prod_is_weighted    = 0;
    PIDin_prim_prod_des_weighted   = 0;
    PIDin_sec_cons_is_weighted     = alpha_sec_cons*(-1)*Q_dot_is/Delta_Qdot_norm + beta_sec_cons*T_sec_relev_is/Delta_T_norm;
    PIDin_sec_cons_des_weighted    = alpha_sec_cons*(-1)*Q_dot_set/Delta_Qdot_norm + beta_sec_cons*T_sec_relev_des/Delta_T_norm;
    PIDin_sec_prod_is_weighted     = 0;
    PIDin_sec_prod_des_weighted    = 0;

    error_prim_weighted            = PIDin_prim_cons_des_weighted - PIDin_prim_cons_is_weighted;
    error_sec_weighted             = PIDin_sec_cons_des_weighted - PIDin_sec_cons_is_weighted;

    error_T_prim_abs               = DeltaT_prim_des - Delta_T_prim;
    error_T_sec_abs                = T_sec_hot_des - T_sec_hot;

    error_T_high_prio_abs          = T_sec_hot_des - T_sec_hot; // T_sec_hot
    error_T_low_prio_abs           = DeltaT_prim_des - Delta_T_prim; // Delta_T_prim

  elseif Q_dot_set >= 0+tol then // production mode
    prosumer_mode = +1;
    pi_set = 1;
    mu_set = 1;
    T_prim_relev_des = DeltaT_sec_des;
    T_prim_relev_is = T_sec_hot-T_sec_cold;
    T_sec_relev_des = T_prim_hot_des;
    T_sec_relev_is = T_prim_hot;

    PIDin_prim_cons_is_weighted    = 0;
    PIDin_prim_cons_des_weighted   = 0;
    PIDin_prim_prod_is_weighted    = alpha_prim_prod*Q_dot_is/Delta_Qdot_norm + beta_prim_prod*T_prim_relev_is/Delta_T_norm;
    PIDin_prim_prod_des_weighted   = alpha_prim_prod*Q_dot_set/Delta_Qdot_norm + beta_prim_prod*T_prim_relev_des/Delta_T_norm;
    PIDin_sec_cons_is_weighted     = 0;
    PIDin_sec_cons_des_weighted    = 0;
    PIDin_sec_prod_is_weighted     = alpha_sec_prod*Q_dot_is/Delta_Qdot_norm + beta_sec_prod*T_sec_relev_is/Delta_T_norm;
    PIDin_sec_prod_des_weighted    = alpha_sec_prod*Q_dot_set/Delta_Qdot_norm + beta_sec_prod*T_sec_relev_des/Delta_T_norm;

    error_prim_weighted            = PIDin_prim_prod_des_weighted - PIDin_prim_prod_is_weighted;
    error_sec_weighted             = PIDin_sec_prod_des_weighted - PIDin_sec_prod_is_weighted;

    error_T_prim_abs               = T_prim_hot_des - T_prim_hot;
    error_T_sec_abs                = DeltaT_sec_des - Delta_T_sec;

    error_T_high_prio_abs          = T_prim_hot_des - T_prim_hot; // T_pim_hot
    error_T_low_prio_abs           = DeltaT_sec_des - Delta_T_sec; // Deltat_T_sec

  else // idle mode
    prosumer_mode = 0;
    pi_set = 0;
    mu_set = -1;
    T_prim_relev_des = 0;
    T_prim_relev_is = 0;
    T_sec_relev_des = 0;
    T_sec_relev_is = 0;

    PIDin_prim_cons_is_weighted    = 0;
    PIDin_prim_cons_des_weighted   = 0;
    PIDin_prim_prod_is_weighted    = 0;
    PIDin_prim_prod_des_weighted   = 0;
    PIDin_sec_cons_is_weighted     = 0;
    PIDin_sec_cons_des_weighted    = 0;
    PIDin_sec_prod_is_weighted     = 0;
    PIDin_sec_prod_des_weighted    = 0;

    error_prim_weighted            = 0;
    error_sec_weighted             = 0;

    error_T_prim_abs               = 0;
    error_T_sec_abs                = 0;

    error_T_high_prio_abs          = 0;
    error_T_low_prio_abs           = 0;

  end if;

  // assign PID controller inputs
  PID_prim_cons.u_s    = PIDin_prim_cons_des_weighted;
  PID_prim_cons.u_m    = PIDin_prim_cons_is_weighted;
  PID_prim_prod.u_s    = PIDin_prim_prod_des_weighted;
  PID_prim_prod.u_m    = PIDin_prim_prod_is_weighted;
  PID_sec_cons.u_s     = PIDin_sec_cons_des_weighted;
  PID_sec_cons.u_m     = PIDin_sec_cons_is_weighted;
  PID_sec_prod.u_s     = PIDin_sec_prod_des_weighted;
  PID_sec_prod.u_m     = PIDin_sec_prod_is_weighted;

  // connect secondary side temperature setpoint
  T_sec_set    =  T_sec_in_is;

  // assign PID outputs to controller outputs
  if prosumer_mode == -1 then // consumption mode
    u_set = 0;
    kappa_set =PID_prim_cons.y;
    V_dot_sec_set = PID_sec_cons.y;
  elseif prosumer_mode == 1 then // production mode
    u_set =PID_prim_prod.y;
    kappa_set = 0;
    V_dot_sec_set = PID_sec_prod.y;
  else // idle mode
    V_dot_sec_set = 0;
    u_set = 0;
    kappa_set = 0;
  end if;

  error_Q_abs = Q_dot_set - Q_dot_is;

  // assign control variables vector
  contr_vars_real[1]   =  T_sec_set;
  contr_vars_real[2]   =  V_dot_sec_set;
  contr_vars_real[3]   =  pi_set;
  contr_vars_real[4]   =  mu_set;
  contr_vars_real[5]   =  u_set;
  contr_vars_real[6]   =  kappa_set;

    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-120,-160},{
            120,180}}),                                           graphics={
          Text(
          extent={{-70,56},{64,-56}},
          textColor={28,108,200},
          textString="weighted
PID"), Rectangle(extent={{-120,180},{120,-160}}, lineColor={0,0,0})}),
                                                                   Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-120,-160},{120,180}})));
end PID_Q_T_weighted_trad;
