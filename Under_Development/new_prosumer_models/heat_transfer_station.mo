within ProsNet.Under_Development.new_prosumer_models;
model heat_transfer_station

  replaceable package Medium_prim = ProsNet.Media.Water;
  replaceable package Medium_sec = ProsNet.Media.Water;

  extends ProsNet.Prosumers.BaseClasses.PrimarySideParameters;
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.PumpsPairDynParam;
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.ControlVolumeDynParam;

  Real cp_prim;

  Fluid.HeatExchangers.LiquidToLiquid heat_exchanger(
    redeclare package Medium2 = Medium_sec,
    redeclare package Medium1 = Medium_prim,
    m1_flow_nominal=m_flow_nominal_1,
    m2_flow_nominal=m_flow_nominal_2,
    show_T=true,
    dp1_nominal=dp1_nominal,
    dp2_nominal=dp2_nominal,
    Q_flow_nominal=Q_flow_nominal,
    T_a1_nominal=338.15,
    T_a2_nominal=313.15)
    annotation (Placement(transformation(extent={{-10,12},{10,-8}})));

  Fluid.Pumps.FlowControlled_m_flow pump_sec_cons(
    redeclare package Medium = Medium_sec,
    final energyDynamics=energyDynamics_pumpsSec,
    T_start=313.15,
    final tau=tau_pumpsSec,
    final m_flow_nominal=m_flow_nominal_2,
    final use_inputFilter=use_inputFilter_pumpsSec,
    final riseTime=riseTime_pumpsSec,
    final dp_nominal=dp2_nominal,
    final m_flow_start=m_flow_start_pumpsSec,
    final y_start=y_start_pumpsSec) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=270,
        origin={20,70})));
  Fluid.Pumps.FlowControlled_m_flow pump_sec_prod(
    redeclare package Medium = Medium_sec,
    final energyDynamics=energyDynamics_pumpsSec,
    T_start=313.15,
    final tau=tau_pumpsSec,
    final m_flow_nominal=m_flow_nominal_2,
    final use_inputFilter=use_inputFilter_pumpsSec,
    final riseTime=riseTime_pumpsSec,
    final dp_nominal=dp2_nominal,
    final m_flow_start=m_flow_start_pumpsSec,
    final y_start=y_start_pumpsSec) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={60,42})));
  Fluid.FixedResistances.CheckValve cheVa_sec_cons(
    m_flow_nominal=m_flow_nominal_2,
    redeclare final package Medium = Medium_sec,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_cheVal,
    final l=l_cheVal) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=270,
        origin={20,42})));
  Fluid.FixedResistances.CheckValve cheVal_sec_prod(
    m_flow_nominal=m_flow_nominal_2,
    redeclare final package Medium = Medium_sec,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_cheVal,
    final l=l_cheVal) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=270,
        origin={60,70})));
  Fluid.Valves.TwoWayEqualPercentage valve_prim_cons(
    m_flow_nominal=m_flow_nominal_1,
    redeclare final package Medium = Medium_prim,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_conVal,
    final use_inputFilter=use_inputFilter_conVal,
    final riseTime=riseTime_conVal,
    final init=init_conVal,
    final y_start=y_start_conVal,
    final l=l_conVal) annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=-90,
        origin={20,-40})));
  Fluid.Pumps.SpeedControlled_y pump_prim_prod(
    redeclare final package Medium = Medium_prim,
    final energyDynamics=energyDynamics_feedPump,
    T_start=313.15,
    final tau=tau_feedPump,
    final per=feedinPer,
    final use_inputFilter=use_inputFilter_feedPump,
    final riseTime=riseTime_feedPump,
    final init=init_feedPump,
    final y_start=y_start_feedPump) annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=-90,
        origin={60,-70})));
  Fluid.FixedResistances.CheckValve cheVal_prim_prod(
    m_flow_nominal=m_flow_nominal_1,
    redeclare final package Medium = Medium_prim,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_cheVal,
    final l=l_cheVal) annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=-90,
        origin={60,-40})));
  Fluid.FixedResistances.CheckValve cheVal_prim_cons(
    m_flow_nominal=m_flow_nominal_1,
    redeclare final package Medium = Medium_prim,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_cheVal,
    final l=l_cheVal) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={22,-70})));
  Modelica.Fluid.Interfaces.FluidPort_b cold_prim(
  redeclare final package Medium = Medium_prim)
    annotation (Placement(transformation(extent={{30,-192},{50,-172}})));
  Modelica.Fluid.Interfaces.FluidPort_a hot_prim(
  redeclare final package Medium = Medium_prim)
    annotation (Placement(transformation(extent={{-70,-192},{-50,-172}})));
  heat_source_sink_ideal ideal_house(
    energyDynamics_cv=Modelica.Fluid.Types.Dynamics.FixedInitial,
    tau_cv=10,
    T_start_cv=313.15)
    annotation (Placement(transformation(extent={{-22,120},{22,152}})));
  Conversion conversion
    annotation (Placement(transformation(extent={{-140,-4},{-92,66}})));
  Modelica.Fluid.Sensors.MassFlowRate m_dot_sens_prim(
    redeclare package Medium = Medium_prim, allowFlowReversal=true)
                                            annotation (Placement(
        transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-60,-72})));
  Modelica.Fluid.Sensors.TemperatureTwoPort T_sens_prim_hot(
    redeclare package Medium = Medium_prim, allowFlowReversal=true)
   annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-60,-110})));
  Modelica.Fluid.Sensors.TemperatureTwoPort T_sens_prim_cold(
    redeclare package Medium = Medium_prim, allowFlowReversal=true)
                                            annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={40,-110})));
  Fluid.Sources.Boundary_pT bou(redeclare package Medium = Medium_sec,
    T=313.15,
      nPorts=1)
    annotation (Placement(transformation(extent={{88,118},{68,138}})));
  Fluid.Pipes.InsulatedPipe pipe_prim_hot(
    allowFlowReversal=true,
    T_amb = ambient_temperature,
    R_ins=R_ins_transferpipe,
    length=length_transfer_pipe_tot/2,
    diameter=d_transferpipe,
    zeta=zeta_transferstation/2,
    energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    T_start=313.15)                      annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-60,-138})));
  Fluid.Pipes.InsulatedPipe pipe_prim_cold(
    allowFlowReversal=true,
    T_amb = ambient_temperature,
    R_ins=R_ins_transferpipe,
    length=length_transfer_pipe_tot/2,
    diameter=d_transferpipe,
    zeta=zeta_transferstation/2,
    energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    T_start=313.15)               annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={40,-136})));

  Fluid.Sensors.RelativePressure          pressureDifference(
  redeclare package Medium = Medium_prim)
    annotation (Placement(transformation(extent={{-36,-164},{-16,-144}})));

  Modelica.Blocks.Interfaces.RealInput T_sec_in_set(unit="K", displayUnit="degC") "K"
    annotation (Placement(transformation(extent={{-220,120},{-180,160}})));
  Modelica.Blocks.Interfaces.RealInput V_dot_sec_set(unit="l/min", displayUnit="l/min") "l/min"
    annotation (Placement(transformation(extent={{-220,80},{-180,120}})));
  Modelica.Blocks.Interfaces.IntegerInput pi
    annotation (Placement(transformation(extent={{-220,20},{-180,60}})));
  Modelica.Blocks.Interfaces.IntegerInput mu
    annotation (Placement(transformation(extent={{-220,-20},{-180,20}})));
  Modelica.Blocks.Interfaces.RealInput u_set
    annotation (Placement(transformation(extent={{-220,-60},{-180,-20}})));
  Modelica.Blocks.Interfaces.RealInput kappa_set
    annotation (Placement(transformation(extent={{-220,-100},{-180,-60}})));

  Modelica.Blocks.Interfaces.RealOutput V_dot_prim(unit="l/min", displayUnit="l/min") "l/min"
                                                   annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={0,-180})));
  Modelica.Blocks.Interfaces.RealOutput V_dot_sec(unit="l/min", displayUnit="l/min") "l/min"
                                                  annotation (Placement(
        transformation(
        extent={{10,-10},{-10,10}},
        rotation=-90,
        origin={0,180})));
  Modelica.Blocks.Interfaces.RealOutput T_prim_cold(unit="K", displayUnit="degC")
                                                                                 "K"
                                                    annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={80,-180})));
  Modelica.Blocks.Interfaces.RealOutput T_prim_hot(unit="K", displayUnit="degC")
                                                                                "K"
                                                   annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-80,-180})));
  Modelica.Blocks.Interfaces.RealOutput T_sec_hot(unit="K", displayUnit="degC",
    start=45 + 273.15)                                                         "K"
                                                  annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,180})));
  Modelica.Blocks.Interfaces.RealOutput T_sec_cold(unit="K", displayUnit="degC",
    start=30 + 273.15)                                                           "K"
                                                   annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={80,180})));

  Modelica.Blocks.Interfaces.RealOutput Delta_p_prim(unit="Pa", displayUnit="bar") annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-26,-180})));
  Modelica.Blocks.Interfaces.RealOutput Q_dot_trnsf_is(unit="kW", displayUnit="kW")
    "kW" annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=0,
        origin={-200,-140})));
equation

  cp_prim = 4200;
  Q_dot_trnsf_is = m_dot_sens_prim.port_a.m_flow * cp_prim *(T_sens_prim_hot.T - T_sens_prim_cold.T)/1000;
  connect(heat_exchanger.port_b1, valve_prim_cons.port_b)
    annotation (Line(points={{10,-4},{20,-4},{20,-30}}, color={0,127,255}));
  connect(cheVal_prim_prod.port_b,heat_exchanger. port_b1)
    annotation (Line(points={{60,-30},{60,-4},{10,-4}}, color={0,127,255}));
  connect(cheVa_sec_cons.port_b,heat_exchanger. port_a2)
    annotation (Line(points={{20,32},{20,8},{10,8}}, color={0,127,255}));
  connect(pump_sec_prod.port_a,heat_exchanger. port_a2)
    annotation (Line(points={{60,32},{60,8},{10,8}}, color={0,127,255}));
  connect(pump_sec_cons.port_b, cheVa_sec_cons.port_a)
    annotation (Line(points={{20,60},{20,52}}, color={0,127,255}));
  connect(cheVal_sec_prod.port_a, pump_sec_prod.port_b)
    annotation (Line(points={{60,60},{60,52}}, color={0,127,255}));
  connect(valve_prim_cons.port_a, cheVal_prim_cons.port_a)
    annotation (Line(points={{20,-50},{20,-60},{22,-60}},
                                                 color={0,127,255}));
  connect(cheVal_prim_prod.port_a, pump_prim_prod.port_b)
    annotation (Line(points={{60,-50},{60,-60}}, color={0,127,255}));
  connect(T_sec_in_set, conversion.T_sec_in_set) annotation (Line(points={{-200,
          140},{-148,140},{-148,57.7647},{-140,57.7647}}, color={0,0,127}));
  connect(conversion.V_dot_sec_set, V_dot_sec_set) annotation (Line(points={{-140,
          49.5294},{-174,49.5294},{-174,100},{-200,100}}, color={0,0,127}));
  connect(pi, conversion.pi) annotation (Line(points={{-200,40},{-150,40},{-150,
          28.9412},{-140,28.9412}}, color={255,127,0}));
  connect(mu, conversion.mu) annotation (Line(points={{-200,0},{-150,0},{-150,
          20.2941},{-140,20.2941}},
                           color={255,127,0}));
  connect(u_set, conversion.u_set) annotation (Line(points={{-200,-40},{-176,
          -40},{-176,-2},{-174,-2},{-174,12.4706},{-140,12.4706}},
                                                              color={0,0,127}));
  connect(kappa_set, conversion.kappa_set) annotation (Line(points={{-200,-80},{
          -170,-80},{-170,4.23529},{-140,4.23529}}, color={0,0,127}));
  connect(conversion.T_sec_in, ideal_house.T_set) annotation (Line(points={{-106.4,
          66},{-110,66},{-110,158},{0,158},{0,152}}, color={0,0,127}));
  connect(conversion.pump_contr, pump_prim_prod.y) annotation (Line(points={{-92,
          20.7059},{-78,20.7059},{-78,20},{-64,20},{-64,-24},{42,-24},{42,-70},
          {48,-70}},color={0,0,127}));
  connect(conversion.valve_contr, valve_prim_cons.y) annotation (Line(points={{-92,
          12.4706},{-82,12.4706},{-82,12},{-72,12},{-72,-40},{8,-40}}, color={0,
          0,127}));
  connect(conversion.m_dot_cons, pump_sec_cons.m_flow_in) annotation (Line(
        points={{-92,37.1765},{2,37.1765},{2,70},{8,70}}, color={0,0,127}));
  connect(conversion.m_dot_prod, pump_sec_prod.m_flow_in) annotation (Line(
        points={{-92,45.4118},{-52,45.4118},{-52,46},{-12,46},{-12,24},{42,24},
          {42,42},{48,42}},color={0,0,127}));
  connect(ideal_house.T_sec_hot, T_sec_hot);
  connect(ideal_house.T_sec_cold, T_sec_cold);
  connect(ideal_house.m_dot_sec_is, conversion.m_dot_sec_is);
  connect(conversion.V_dot_sec_is, V_dot_sec);
  connect(T_sens_prim_hot.T, T_prim_hot);
  connect(m_dot_sens_prim.m_flow, conversion.m_dot_prim_is);
  connect(cheVal_prim_cons.port_b, T_sens_prim_cold.port_a) annotation (Line(
        points={{22,-80},{22,-90},{40,-90},{40,-100}}, color={0,127,255}));
  connect(pump_prim_prod.port_a, T_sens_prim_cold.port_a) annotation (Line(
        points={{60,-80},{60,-90},{40,-90},{40,-100}}, color={0,127,255}));
  connect(T_sens_prim_cold.T, T_prim_cold);
  connect(conversion.V_dot_prim_is, V_dot_prim);
  connect(ideal_house.port_cold, cheVal_sec_prod.port_b) annotation (Line(
        points={{13.2,120},{14,120},{14,100},{40,100},{40,88},{60,88},{60,80}},
        color={0,127,255}));
  connect(ideal_house.port_cold, pump_sec_cons.port_a) annotation (Line(points={
          {13.2,120},{14,120},{14,100},{40,100},{40,88},{20,88},{20,80}}, color=
         {0,127,255}));
  connect(ideal_house.port_hot, heat_exchanger.port_b2) annotation (Line(points=
         {{-13.2,120},{-8,120},{-8,100},{-40,100},{-40,8},{-10,8}}, color={0,127,
          255}));
  connect(bou.ports[1], cheVal_sec_prod.port_b)
    annotation (Line(points={{68,128},{60,128},{60,80}}, color={0,127,255}));
  connect(hot_prim, pipe_prim_hot.port_a)
    annotation (Line(points={{-60,-182},{-60,-148}}, color={0,127,255}));
  connect(pipe_prim_hot.port_b, T_sens_prim_hot.port_a)
    annotation (Line(points={{-60,-128},{-60,-120}}, color={0,127,255}));
  connect(T_sens_prim_cold.port_b, pipe_prim_cold.port_a)
    annotation (Line(points={{40,-120},{40,-126}}, color={0,127,255}));
  connect(pipe_prim_cold.port_b, cold_prim)
    annotation (Line(points={{40,-146},{40,-182}}, color={0,127,255}));
  connect(hot_prim, pressureDifference.port_a) annotation (Line(points={{-60,-182},
          {-60,-154},{-36,-154}}, color={0,127,255}));
  connect(pressureDifference.port_b, cold_prim) annotation (Line(points={{-16,-154},
          {40,-154},{40,-182}}, color={0,127,255}));
  connect(pressureDifference.p_rel, Delta_p_prim)
    annotation (Line(points={{-26,-163},{-26,-180}}, color={0,0,127}));
  connect(heat_exchanger.port_a1, m_dot_sens_prim.port_a)
    annotation (Line(points={{-10,-4},{-60,-4},{-60,-62}}, color={0,127,255}));
  connect(m_dot_sens_prim.port_b, T_sens_prim_hot.port_b)
    annotation (Line(points={{-60,-82},{-60,-100}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,-180},
            {100,180}}),       graphics={
        Rectangle(
          extent={{-200,180},{100,-180}},
          lineColor={28,108,200},
          fillColor={203,203,203},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{0,-60},{100,-100}},
          lineColor={0,0,0},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-100,-60},{0,-100}},
          lineColor={0,0,0},
          lineThickness=1,
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{0,100},{100,60}},
          lineColor={0,0,0},
          lineThickness=1,
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-100,100},{0,60}},
          lineColor={0,0,0},
          lineThickness=1,
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-86,48},{84,-6}},
          textColor={0,0,0},
          textString="(house)
secondary side
"),     Text(
          extent={{-76,-6},{72,-44}},
          textColor={0,0,0},
          textString="primary side
(network)"),
        Line(
          points={{-100,0},{100,0}},
          color={0,0,0},
          thickness=1),
        Line(
          points={{100,60},{100,-60}},
          color={0,0,0},
          thickness=1),
        Line(
          points={{-100,60},{-100,-60}},
          color={0,0,0},
          thickness=1)}), Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-200,-180},{100,180}})));
end heat_transfer_station;
