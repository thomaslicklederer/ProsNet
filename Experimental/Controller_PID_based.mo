within ProsNet.Experimental;
package Controller_PID_based
  model PID_Q_T_weighted

    import Modelica.Units.SI;
    import T_AbsZeroDegC = Modelica.Constants.T_zero;
    import Modelica.Blocks.Types.Init;
    import Modelica.Blocks.Types.SimpleController;

      // !!!!! parameters !!!!!
    parameter SI.Temperature T_prim_hot_des(min=277)=
          -T_AbsZeroDegC + 65
        "desired temperature supply primary side"
        annotation(Dialog(group="Temperature objectives"));
    parameter SI.Temperature T_sec_hot_des(min=277)=
          -T_AbsZeroDegC + 60
        "desired temperature supply secondary side"
        annotation(Dialog(group="Temperature objectives"));
    parameter SI.TemperatureDifference DeltaT_prim_des(min=1) =   15
        "desired temperature difference primary side"
        annotation(Dialog(group="Temperature objectives"));
    parameter SI.TemperatureDifference DeltaT_sec_des(min=1) =   15
        "desired temperature difference secondary side"
        annotation(Dialog(group="Temperature objectives"));
    parameter Real V_dot_sec_max(unit="l/min", displayUnit="l/min") = 10
      "maximum secondary side volume flow in [l/min]"
      annotation(Dialog(group="General PID settings"));
    parameter Real k_prim_prod = 1
      "Proportional gain for controller in [-]"
      annotation(Dialog(group="PID primary side - producer mode - tuning"));
    parameter Real Ti_prim_prod = 0.5
      "Integral time constant for controller in [s]"
      annotation(Dialog(group="PID primary side - producer mode - tuning"));
    parameter Real Td_prim_prod = 0.1
      "Derivative time constant for controller in [s]"
      annotation(Dialog(group="PID primary side - producer mode - tuning"));
    parameter Real alpha_prim_prod(min=0, max=1) = 1
      "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
      annotation(Dialog(group="PID primary side - producer mode - tuning"));
    parameter Real k_sec_prod = 1
      "Proportional gain for controller in [-]"
      annotation(Dialog(group="PID secondary side - producer mode - tuning"));
    parameter Real Ti_sec_prod = 0.5
      "Integral time constant for controller in [s]"
      annotation(Dialog(group="PID secondary side - producer mode - tuning"));
    parameter Real Td_sec_prod = 0.1
      "Derivative time constant for controller in [s]"
      annotation(Dialog(group="PID secondary side - producer mode - tuning"));
    parameter Real alpha_sec_prod(min=0, max=1) = 1
      "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
      annotation(Dialog(group="PID secondary side - producer mode - tuning"));
    parameter Real k_prim_cons = 1
      "Proportional gain for controller in [-]"
      annotation(Dialog(group="PID primary side - consumer mode - tuning"));
    parameter Real Ti_prim_cons = 0.5
      "Integral time constant for controller in [s]"
      annotation(Dialog(group="PID primary side - consumer mode - tuning"));
    parameter Real Td_prim_cons = 0.1
      "Derivative time constant for controller in [s]"
      annotation(Dialog(group="PID primary side - consumer mode - tuning"));
    parameter Real alpha_prim_cons(min=0, max=1) = 1
      "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
      annotation(Dialog(group="PID primary side - consumer mode - tuning"));
    parameter Real k_sec_cons = 1
      "Proportional gain for controller in [-]"
      annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
    parameter Real Ti_sec_cons = 0.5
      "Integral time constant for controller in [s]"
      annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
    parameter Real Td_sec_cons = 0.1
      "Derivative time constant for controller in [s]"
      annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
    parameter Real alpha_sec_cons(min=0, max=1) = 1
      "weight for the relevance of the error of the transferred heat in comparison to the error of temperature objectives (sum is one)"
      annotation(Dialog(group="PID secondary side - consumer mode - tuning"));
    parameter .Modelica.Blocks.Types.SimpleController controllerType=
           Modelica.Blocks.Types.SimpleController.P "Type of controller"
           annotation(Dialog(tab="Advanced", group="PIDs general"));
    parameter Init initType = Modelica.Blocks.Types.Init.SteadyState
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

    // !!!!! ports !!!!!
    Modelica.Blocks.Interfaces.RealOutput u_set
      "Normalized velocity of feed-in pump"
        annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-60}), iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-60})));
    Modelica.Blocks.Interfaces.RealOutput kappa_set
      "Normalized flow coefficient for control valve"
       annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-100}),
                            iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-100})));
    Modelica.Blocks.Interfaces.IntegerOutput pi_set
      "Participation" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,20}),   iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,20})));
    Modelica.Blocks.Interfaces.IntegerOutput mu_set
      "Operating mode" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-20}), iconTransformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,-20})));
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
    Modelica.Blocks.Interfaces.RealInput V_dot_prim(unit="l/min", displayUnit="l/min")
      annotation (Placement(transformation(extent={{-120,-80},{-80,-40}})));
    Modelica.Blocks.Interfaces.RealInput V_dot_sec(unit="l/min", displayUnit="l/min")
      annotation (Placement(transformation(extent={{-120,40},{-80,80}})));

    Modelica.Blocks.Interfaces.RealInput Qdot_is(unit="kW", displayUnit="kW")
      "currently transferred heat (positive production, negative consumption)"
      annotation (Placement(transformation(extent={{-120,-40},{-80,0}})));
    Modelica.Blocks.Continuous.LimPID PID_prim_cons(
      controllerType=controllerType,
      k=k_prim_cons,
      Ti=Ti_prim_cons,
      Td=Td_prim_cons,
      yMax=1,
      yMin=0,
      initType=initType,
      y_start=PID_prim_cons.yMax)
      annotation (Placement(transformation(extent={{-42,-38},{-22,-18}})));
    Modelica.Blocks.Continuous.LimPID PID_sec_cons(
      controllerType=controllerType,
      k=k_sec_cons,
      Ti=Ti_sec_cons,
      Td=Td_sec_cons,
      yMax=V_dot_sec_max,
      yMin=0,
      initType=initType,
      y_start=PID_sec_cons.yMax)
      annotation (Placement(transformation(extent={{-42,28},{-22,48}})));
    Modelica.Blocks.Continuous.LimPID PID_prim_prod(
      controllerType=controllerType,
      k=k_prim_prod,
      Ti=Ti_prim_prod,
      Td=Td_prim_prod,
      yMax=1,
      yMin=0,
      initType=initType,
      y_start=PID_prim_prod.yMax) annotation (Placement(transformation(extent={{6,-38},{26,-18}})));
    Modelica.Blocks.Continuous.LimPID PID_sec_prod(
      controllerType=controllerType,
      k=k_sec_prod,
      Ti=Ti_sec_prod,
      Td=Td_sec_prod,
      yMax=V_dot_sec_max,
      yMin=0,
      initType=initType,
      y_start=PID_sec_prod.yMax) annotation (Placement(transformation(extent={{6,28},{26,48}})));
    Modelica.Blocks.Interfaces.RealOutput T_sec_set(unit="K", displayUnit="degC")
       "Temperature on the secondary side" annotation (Placement(transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={100,100})));
    Modelica.Blocks.Interfaces.RealOutput V_dot_sec_set(unit="l/min", displayUnit=
         "l/min") "volume flow rate setpoint on the secondary side" annotation (Placement(transformation(
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

    beta_prim_prod = 1 - alpha_prim_prod;
    beta_sec_prod  = 1 - alpha_sec_prod;
    beta_prim_cons = 1 - alpha_prim_cons;
    beta_sec_cons  = 1 - alpha_sec_cons;


    // determine easy static values that just depend on prosumer mode
    if  Qdot_set <= 0-tol then // consumption mode
      prosumer_mode = -1;
      pi_set = 1;
      mu_set = -1;
      T_prim_relev_des = DeltaT_prim_des;
      T_prim_relev_is = T_prim_hot-T_prim_cold;
      T_sec_relev_des = T_sec_hot_des;
      T_sec_relev_is = T_sec_hot;
      Qdot_relev_des = Qdot_set;
      Qdot_relev_is = Qdot_is;
    elseif Qdot_set >= 0+tol then // production mode
      prosumer_mode = +1;
      pi_set = 1;
      mu_set = 1;
      T_prim_relev_des = T_prim_hot_des;
      T_prim_relev_is = T_prim_hot;
      T_sec_relev_des = DeltaT_sec_des;
      T_sec_relev_is = T_sec_hot-T_sec_cold;
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

    if prosumer_mode == 1 then // production mode
      PIDin_prim_cons_is_weighted    = 0;
      PIDin_prim_cons_des_weighted   = 0;
      PIDin_prim_prod_is_weighted    = alpha_prim_prod*Qdot_relev_is + beta_prim_prod*T_prim_relev_is;
      PIDin_prim_prod_des_weighted   = alpha_prim_prod*Qdot_relev_des + beta_prim_prod*T_prim_relev_des;
      PIDin_sec_cons_is_weighted     = 0;
      PIDin_sec_cons_des_weighted    = 0;
      PIDin_sec_prod_is_weighted     = alpha_sec_prod*Qdot_relev_is + beta_sec_prod*T_sec_relev_is;
      PIDin_sec_prod_des_weighted    = alpha_sec_prod*Qdot_relev_des + beta_sec_prod*T_sec_relev_des;
    else// consumption mode and idle mode - PID of consumption mode is active
        // for idle mode the values of T_des, T_is, Qdot_des and Qdot_is
        // are already adjusted in the if-clause above
      PIDin_prim_cons_is_weighted    = alpha_prim_cons*Qdot_relev_is + beta_prim_cons*T_prim_relev_is;
      PIDin_prim_cons_des_weighted   = alpha_prim_cons*Qdot_relev_des + beta_prim_cons*T_prim_relev_des;
      PIDin_prim_prod_is_weighted    = 0;
      PIDin_prim_prod_des_weighted   = 0;
      PIDin_sec_cons_is_weighted     = alpha_sec_cons*Qdot_relev_is + beta_sec_cons*T_sec_relev_is;
      PIDin_sec_cons_des_weighted    = alpha_sec_cons*Qdot_relev_des + beta_sec_cons*T_sec_relev_des;
      PIDin_sec_prod_is_weighted     = 0;
      PIDin_sec_prod_des_weighted    = 0;
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
    T_sec_set    =  T_sec_sim;

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
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PID_Q_T_weighted;

  package auxiliary
    block TimeTable_noInterp
      "Generate a discontinuous and non-interpolated signal from a table by using the forward value."

      parameter Real table[:, 2] = fill(0.0, 0, 2)
        "Table matrix (time = first column; e.g., table=[0, 0; 1, 1; 2, 4])"
        annotation(Dialog(groupImage="modelica://Modelica/Resources/Images/Blocks/Sources/TimeTable.png"));
      parameter Modelica.Units.SI.Time timeScale(min=Modelica.Constants.eps)=1
        "Time scale of first table column" annotation (Evaluate=true);
      extends Modelica.Blocks.Interfaces.SignalSource;
      parameter Modelica.Units.SI.Time shiftTime=startTime
        "Shift time of first table column";
    protected
      discrete Real a "Interpolation coefficient a of actual interval (y=a*x+b)";
      discrete Real b "Interpolation coefficient b of actual interval (y=a*x+b)";
      Integer last(start=1) "Last used lower grid index";
      discrete Modelica.Units.SI.Time nextEvent(start=0, fixed=true)
        "Next event instant";
      discrete Real nextEventScaled(start=0, fixed=true)
        "Next scaled event instant";
      Real timeScaled "Scaled time";

      function getInterpolationCoefficients
        "Determine interpolation coefficients and next time event"
        extends Modelica.Icons.Function;
        input Real table[:, 2] "Table for interpolation";
        input Real offset "y-offset";
        input Real startTimeScaled "Scaled time-offset";
        input Real timeScaled "Actual scaled time instant";
        input Integer last "Last used lower grid index";
        input Real TimeEps "Relative epsilon to check for identical time instants";
        input Real shiftTimeScaled "Time shift";
        output Real a "Interpolation coefficient a (y=a*x + b)";
        output Real b "Interpolation coefficient b (y=a*x + b)";
        output Real nextEventScaled "Next scaled event instant";
        output Integer next "New lower grid index";
      protected
        Integer columns=2 "Column to be interpolated";
        Integer ncol=2 "Number of columns to be interpolated";
        Integer nrow=size(table, 1) "Number of table rows";
        Integer next0;
        Real tp;
        Real dt;
      algorithm
        next := last;
        nextEventScaled := timeScaled - TimeEps*abs(timeScaled);
        // in case there are no more time events
        tp := timeScaled + TimeEps*abs(timeScaled);

        if tp < startTimeScaled then
          // First event not yet reached
          nextEventScaled := startTimeScaled;
          a := 0;
          b := offset;
        elseif nrow < 2 then
          // Special action if table has only one row
          a := 0;
          b := offset + table[1, columns];
        else
          tp := tp - shiftTimeScaled;
          // Find next time event instant. Note, that two consecutive time instants
          // in the table may be identical due to a discontinuous point.
          while next < nrow and tp >= table[next, 1] loop
            next := next + 1;
          end while;

          // Define next time event, if last table entry not reached
          if next < nrow then
            nextEventScaled := shiftTimeScaled + table[next, 1];
          end if;

          // Determine interpolation coefficients
          if next == 1 then
            next := 2;
          end if;
          next0 := next - 1;
          dt := table[next, 1] - table[next0, 1];
          if dt <= TimeEps*abs(table[next, 1]) then
            // Interpolation interval is not big enough, use "next" value
            a := 0;
            b := offset + table[next, columns];
          else
            a := table[next0, columns]; // (table[next, columns] - table[next0, columns])/dt;
            b := 0; // offset + table[next0, columns] - a*table[next0, 1];
          end if;
        end if;
        // Take into account shiftTimeScaled "a*(time - shiftTime) + b"
        b := b - a*shiftTimeScaled;
      end getInterpolationCoefficients;
    algorithm
      if noEvent(size(table, 1) > 1) then
        assert(not (table[1, 1] > 0.0 or table[1, 1] < 0.0), "The first point in time has to be set to 0, but is table[1,1] = " + String(table[1, 1]));
      end if;
      when {time >= pre(nextEvent),initial()} then
        (a,b,nextEventScaled,last) := getInterpolationCoefficients(
            table,
            offset,
            startTime/timeScale,
            timeScaled,
            last,
            100*Modelica.Constants.eps,
            shiftTime/timeScale);
        nextEvent := nextEventScaled*timeScale;
      end when;
    equation
      assert(size(table, 1) > 0, "No table values defined.");
      timeScaled = time/timeScale;
      y = a; // a*timeScaled + b;
      annotation (
        Icon(coordinateSystem(
            preserveAspectRatio=true,
            extent={{-100,-100},{100,100}}), graphics={
            Line(points={{-80,68},{-80,-80}}, color={192,192,192}),
            Polygon(
              points={{-80,90},{-88,68},{-72,68},{-80,90}},
              lineColor={192,192,192},
              fillColor={192,192,192},
              fillPattern=FillPattern.Solid),
            Line(points={{-90,-70},{82,-70}}, color={192,192,192}),
            Polygon(
              points={{90,-70},{68,-62},{68,-78},{90,-70}},
              lineColor={192,192,192},
              fillColor={192,192,192},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{-48,70},{2,-50}},
              lineColor={255,255,255},
              fillColor={192,192,192},
              fillPattern=FillPattern.Solid),
            Line(points={{-48,-50},{-48,70},{52,70},{52,-50},{-48,-50},{-48,-20},
                  {52,-20},{52,10},{-48,10},{-48,40},{52,40},{52,70},{2,70},{2,-51}}),
            Text(
              extent={{-150,-150},{150,-110}},
              textString="offset=%offset")}),
            Documentation(info="<html>
<p>
This block generates an output signal by <strong>linear interpolation</strong> in
a table. The time points and function values are stored in a matrix
<strong>table[i,j]</strong>, where the first column table[:,1] contains the
time points and the second column contains the data to be interpolated.
The table interpolation has the following properties:
</p>
<ul>
<li>The interpolation interval is found by a linear search where the interval used in the
    last call is used as start interval.</li>
<li>The time points need to be <strong>monotonically increasing</strong>.</li>
<li><strong>Discontinuities</strong> are allowed, by providing the same
    time point twice in the table.</li>
<li>Values <strong>outside</strong> of the table range, are computed by
    <strong>extrapolation</strong> through the last or first two points of the
    table.</li>
<li>If the table has only <strong>one row</strong>, no interpolation is performed and
    the function value is just returned independently of the actual time instant.</li>
<li>Via parameters <strong>shiftTime</strong> and <strong>offset</strong> the curve defined
    by the table can be shifted both in time and in the ordinate value.
    The time instants stored in the table are therefore <strong>relative</strong>
    to <strong>shiftTime</strong>.</li>
<li>If time &lt; startTime, no interpolation is performed and the offset
    is used as ordinate value for the output.</li>
<li>If the table has more than one row, the first point in time <strong>always</strong> has to be set to <strong>0</strong>, e.g.,
    <strong>table=[1,1;2,2]</strong> is <strong>illegal</strong>. If you want to
    shift the time table in time use the <strong>shiftTime</strong> parameter instead.</li>
<li>The table is implemented in a numerically sound way by
    generating <strong>time events</strong> at interval boundaries.
    This generates continuously differentiable values for the integrator.</li>
<li>Via parameter <strong>timeScale</strong> the first column of the table array can
    be scaled, e.g., if the table array is given in hours (instead of seconds)
    <strong>timeScale</strong> shall be set to 3600.</li>
</ul>
<p>
Example:
</p>
<blockquote><pre>
   table = [0, 0;
            1, 0;
            1, 1;
            2, 4;
            3, 9;
            4, 16];
If, e.g., time = 1.0, the output y =  0.0 (before event), 1.0 (after event)
    e.g., time = 1.5, the output y =  2.5,
    e.g., time = 2.0, the output y =  4.0,
    e.g., time = 5.0, the output y = 23.0 (i.e., extrapolation).
</pre></blockquote>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Sources/TimeTable.png\"
     alt=\"TimeTable.png\">
</p>

</html>",   revisions="<html>
<h4>Release Notes</h4>
<ul>
<li><em>Oct. 21, 2002</em>
       by Christian Schweiger:<br>
       Corrected interface from
<blockquote><pre>
parameter Real table[:, :]=[0, 0; 1, 1; 2, 4];
</pre></blockquote>
       to
<blockquote><pre>
parameter Real table[:, <strong>2</strong>]=[0, 0; 1, 1; 2, 4];
</pre></blockquote>
       </li>
<li><em>Nov. 7, 1999</em>
       by <a href=\"http://www.robotic.dlr.de/Martin.Otter/\">Martin Otter</a>:<br>
       Realized.</li>
</ul>
</html>"));
    end TimeTable_noInterp;
  end auxiliary;
end Controller_PID_based;
