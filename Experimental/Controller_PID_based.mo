within ProsNet.Experimental;
package Controller_PID_based
  model PID_dP_dDeltaT

    import Modelica.Units.SI;
    import T_AbsZeroDegC = Modelica.Constants.T_zero;

    // !!!!! variables !!!!!
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
    Real Qdot_relev_des
        "desired value of heat transfer relevant for control";
    Real Qdot_relev_is
        "current value of heat transfer relevant for control";
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
    Real X_prim_is;
    Real X_prim_des;
    Real X_sec_is;
    Real X_sec_des;

    // !!!!! parameters !!!!!
    parameter SI.Temperature T_prim_hot_des(min=277) = -T_AbsZeroDegC + 65
        "desired temperature supply primary side";
    parameter SI.Temperature T_sec_hot_des(min=277) = -T_AbsZeroDegC + 60
        "desired temperature supply secondary side";
    parameter SI.TemperatureDifference DeltaT_prim_des = 15
        "desired temperature difference primary side";
    parameter SI.TemperatureDifference DeltaT_sec_des = 15
        "desired temperature difference secondary side";
    parameter Real alpha = 1
      "weight for the relevance of the error of the transferred heat";
    parameter Real beta = 1
      "weight for the relevance of the error of the temperature(difference)";
    parameter Real tol = 0.1
      "tolerance [kW] for idle mode concerning heat transfer setpoint dotQ";

    // !!!!! ports !!!!!
    Modelica.Blocks.Interfaces.RealOutput u_set
      "Normalized velocity of feed-in pump"
        annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-100}),iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={90,120})));
    Modelica.Blocks.Interfaces.RealOutput kappa_set
      "Normalized flow coefficient for control valve"
       annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-60}),iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={136,120})));
    Modelica.Blocks.Interfaces.IntegerOutput pi_set
      "Participation" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,20}),   iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={-126,120})));
    Modelica.Blocks.Interfaces.IntegerOutput mu_set
      "Operating mode" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-20}), iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={-80,120})));
    Modelica.Blocks.Interfaces.RealInput T_sec_hot(
      unit="K",
      displayUnit="degC",
      min=277) "current temperature hot level secondary side"      annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=270,
          origin={-30,100})));
    Modelica.Blocks.Interfaces.RealInput T_sec_cold(
      unit="K",
      displayUnit="degC",
      min=277)
             "current temperature cold  level secondary side"    annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=270,
          origin={30,100})));
    Modelica.Blocks.Interfaces.RealInput T_prim_hot(
      unit="K",
      displayUnit="degC",
      min=277)
             "current temperature hot level primary side"        annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={-30,-100})));
    Modelica.Blocks.Interfaces.RealInput T_prim_cold(
      unit="K",
      displayUnit="degC",
      min=277)
              "current temperature cold level primary side"       annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=90,
          origin={30,-100})));
    Modelica.Blocks.Interfaces.RealInput Qdot_set(unit="kW", displayUnit="kW")
      "setpoint heat transfer (positive production, negative consumption)"
      annotation (Placement(transformation(extent={{-120,0},{-80,40}})));
    Modelica.Blocks.Interfaces.RealInput V_dot_prim
      annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
    Modelica.Blocks.Interfaces.RealInput V_dot_sec
      annotation (Placement(transformation(extent={{-120,40},{-80,80}})));

    Modelica.Blocks.Interfaces.RealInput Qdot_is(unit="kW", displayUnit="kW")
      "currently transferred heat (positive production, negative consumption)"
      annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
    Modelica.Blocks.Continuous.LimPID PID_prim_cons(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=0.1,
      Ti=1,
      Td=0.1,
      yMax=1,
      yMin=0,
      initType=Modelica.Blocks.Types.Init.InitialOutput,
      y_start=1)
      annotation (Placement(transformation(extent={{-42,-38},{-22,-18}})));
    Modelica.Blocks.Continuous.LimPID PID_sec_cons(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=0.1,
      Ti=5,
      Td=0.1,
      yMax=10,
      yMin=0,
      initType=Modelica.Blocks.Types.Init.InitialOutput,
      y_start=1)
      annotation (Placement(transformation(extent={{-42,28},{-22,48}})));
    Modelica.Blocks.Continuous.LimPID PID_prim_prod(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=0.1,
      Ti=1,
      Td=0.1,
      yMax=1,
      yMin=0,
      initType=Modelica.Blocks.Types.Init.InitialOutput,
      y_start=1) annotation (Placement(transformation(extent={{6,-38},{26,-18}})));
    Modelica.Blocks.Continuous.LimPID PID_sec_prod(
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      k=0.1,
      Ti=5,
      Td=0.1,
      yMax=10,
      yMin=0,
      initType=Modelica.Blocks.Types.Init.InitialOutput,
      y_start=1) annotation (Placement(transformation(extent={{6,28},{26,48}})));
    Modelica.Blocks.Interfaces.RealOutput T_sec_set(unit="K", displayUnit="degC")
       "Temperature on the secondary side" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,100})));
    Modelica.Blocks.Interfaces.RealOutput m_flow_sec_set(unit="kg/s", displayUnit=
         "kg/s") "Mass flow rate on the secondary side" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,60})));
    Modelica.Blocks.Interfaces.RealInput T_sec_sim(unit="K", displayUnit="degC")
  "Temperature on the secondary side" annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-100,100})));
  equation
    // determine easy static values that just depend on prosumer mode
    if  Qdot_set < 0-tol then // consumption mode
      prosumer_mode = -1;
      pi_set = 1;
      mu_set = -1;
      T_prim_relev_des = DeltaT_prim_des;
      T_prim_relev_is = T_prim_hot-T_prim_cold;
      T_sec_relev_des = T_sec_hot_des;
      T_sec_relev_is = T_sec_hot;
      Qdot_relev_des = Qdot_set;
      Qdot_relev_is = Qdot_is;
    elseif Qdot_set > 0+tol then // production mode
      prosumer_mode = +1;
      pi_set = 1;
      mu_set = 1;
      T_prim_relev_des = DeltaT_sec_des;
      T_prim_relev_is = T_sec_hot-T_sec_cold;
      T_sec_relev_des = T_prim_hot_des;
      T_sec_relev_is = T_prim_hot;
      Qdot_relev_des = Qdot_set;
      Qdot_relev_is = Qdot_is;
    else // idle mode
      prosumer_mode = 0;
      pi_set = 0;
      mu_set = -1;
      T_prim_relev_des = 0;
      T_prim_relev_is = 0;
      T_sec_relev_des = 0;
      T_sec_relev_is = 0;
      Qdot_relev_des = 0;
      Qdot_relev_is = 0;
    end if;

     // determine inputs for the four PIDs
     // four PIDs in order to be able to have different gains for each situation
     //   explanation:
     //   e_tot = alpha*e_Q + beta*e_T
     //   e_Q   = Q_is - Q_set;  e_T = e_is - e_set
     //   e_tot = [ alpha*Q_is + beta*T_is ] - [ alpha*Q_set + beta * T_set ]
     //   e_tot = PIDin_is_weighted - PIDin_des_weighted
    X_prim_is    = alpha*Qdot_relev_is + beta*T_prim_relev_is;
    X_prim_des   = alpha*Qdot_relev_des + beta*T_prim_relev_des;
    X_sec_is     = alpha*Qdot_relev_is + beta*T_sec_relev_is;
    X_sec_des    = alpha*Qdot_relev_des + beta*T_sec_relev_des;
    if prosumer_mode == 1 then // production mode
      PIDin_prim_cons_is_weighted    = 0;
      PIDin_prim_cons_des_weighted   = 0;
      PIDin_prim_prod_is_weighted    = X_prim_is;
      PIDin_prim_prod_des_weighted   = X_prim_des;
      PIDin_sec_cons_is_weighted     = 0;
      PIDin_sec_cons_des_weighted    = 0;
      PIDin_sec_prod_is_weighted     = X_sec_is;
      PIDin_sec_prod_des_weighted    = X_sec_des;
    else// consumption mode and idle mode - PID of consumption mode is active
        // for idle mode the values of T_des, T_is, Qdot_des and Qdot_is
        // are already adjusted in the if-clause above
      PIDin_prim_cons_is_weighted    = X_prim_is;
      PIDin_prim_cons_des_weighted   = X_prim_des;
      PIDin_prim_prod_is_weighted    = 0;
      PIDin_prim_prod_des_weighted   = 0;
      PIDin_sec_cons_is_weighted     = X_sec_is;
      PIDin_sec_cons_des_weighted    = X_sec_des;
      PIDin_sec_prod_is_weighted     = 0;
      PIDin_sec_prod_des_weighted    = 0;
    end if;

    // assign PID controller inputs
    PID_prim_cons.u_s    = PIDin_prim_cons_is_weighted;
    PID_prim_cons.u_m    = PIDin_prim_cons_des_weighted;
    PID_prim_prod.u_s    = PIDin_prim_prod_is_weighted;
    PID_prim_prod.u_m    = PIDin_prim_prod_des_weighted;
    PID_sec_cons.u_s     = PIDin_sec_cons_is_weighted;
    PID_sec_cons.u_m     = PIDin_sec_cons_des_weighted;
    PID_sec_prod.u_s     = PIDin_sec_prod_is_weighted;
    PID_sec_prod.u_m     = PIDin_sec_prod_des_weighted;

    // connect secondary side temperature setpoint
    T_sec_set    =  T_sec_sim;

    // assign PID outputs to controller outputs
    if prosumer_mode == -1 then // consumption mode
      u_set = 0;
      kappa_set =PID_prim_cons.y;
      m_flow_sec_set = PID_sec_cons.y;
    elseif prosumer_mode == 1 then // production mode
      u_set =PID_prim_prod.y;
      kappa_set = 0;
      m_flow_sec_set = PID_sec_prod.y;
    else // idle mode
      m_flow_sec_set = 0;
      u_set = 0;
      kappa_set = 0;
    end if;
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PID_dP_dDeltaT;

  model Test_controller_v1
    Prosumers.ProsumerIdeal pros(
      use_mu_set_in=true,
      use_pi_set_in=true,
      use_kappa_set_in=true,
      use_u_set_in=true,
      use_T_set_in=true,
      use_m_flow_set_in=true)
      annotation (Placement(transformation(extent={{-14,-6},{24,32}})));
    PID_dP_dDeltaT pID_dP_dDeltaT
      annotation (Placement(transformation(extent={{-78,58},{-58,78}})));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Test_controller_v1;
end Controller_PID_based;
