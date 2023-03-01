within ProsNet.Under_Development.Tests;
model Test_Controller_2Pros "Producer and Consumer with Controller"
  Real Losses;

  new_prosumer_models.heat_transfer_station HOUSE1(
    redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180 feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    tau_feedPump=3,
    use_inputFilter_feedPump=true,
    riseTime_feedPump=35,
    init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
    use_inputFilter_conVal=true,
    riseTime_conVal=35,
    init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
    R_ins_transferpipe=7.56,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    tau_pumpsSec=3,
    use_inputFilter_pumpsSec=true,
    riseTime_pumpsSec=35,
    tau_cv=10,
    T_start_cv=313.15)
    annotation (Placement(transformation(extent={{-200,2},{-138,58}})));

  new_prosumer_models.heat_transfer_station HOUSE2(
    redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180 feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    tau_feedPump=3,
    use_inputFilter_feedPump=true,
    riseTime_feedPump=35,
    init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
    use_inputFilter_conVal=true,
    riseTime_conVal=35,
    init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
    R_ins_transferpipe=7.56,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    tau_pumpsSec=3,
    use_inputFilter_pumpsSec=true,
    riseTime_pumpsSec=35,
    energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
    tau_cv=10,
    T_start_cv=313.15)
    annotation (Placement(transformation(extent={{-20,0},{-82,56}})));

  inner Modelica.Fluid.System system(
    T_ambient=285.15,
    energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    T_start=313.15)
    annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
  Fluid.Pipes.InsulatedPipe pipe_hot(allowFlowReversal=true, T_amb=system.T_ambient,
    R_ins=7.56,
    length=40,
    diameter(displayUnit="mm") = 0.025,
    zeta=10,
    energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    T_start=313.15)
    annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
  Fluid.Pipes.InsulatedPipe pipe_cold(
    allowFlowReversal=true,
    T_amb=system.T_ambient,
    R_ins=7.56,
    length=40,
    diameter(displayUnit="mm") = 0.025,
    zeta=10,
    energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
    T_start=313.15)
    annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
  Fluid.Sources.Boundary_pT bou(
    T=313.15,                   nPorts=1, redeclare final package Medium =
        Media.Water)
    annotation (Placement(transformation(extent={{70,-94},{50,-74}})));
  Controller_PID_based.PID_Q_T_weighted Controller_1(
    Delta_T_norm=3,
    T_prim_hot_des=316.65,
    T_sec_hot_des=313.15,
    DeltaT_prim_des=14,
    DeltaT_sec_des=10,
    V_dot_sec_max=25,
    k_prim_prod=1.5,
    Ti_prim_prod=35,
    alpha_prim_prod=0.3,
    k_sec_prod=1.5,
    Ti_sec_prod=35,
    alpha_sec_prod=0.8,
    k_prim_cons=1.5,
    Ti_prim_cons=35,
    alpha_prim_cons=0.8,
    k_sec_cons=1.5,
    Ti_sec_cons=35,
    alpha_sec_cons=0.3,
    controllerType=Modelica.Blocks.Types.SimpleController.PI)
    annotation (Placement(transformation(extent={{-148,78},{-190,126}})));
  Controller_PID_based.PID_Q_T_weighted Controller_2(
    Delta_T_norm=3,
    T_prim_hot_des=316.65,
    T_sec_hot_des=313.15,
    DeltaT_prim_des=14,
    DeltaT_sec_des=10,
    V_dot_sec_max=25,
    k_prim_prod=1.5,
    Ti_prim_prod=35,
    alpha_prim_prod=0.3,
    k_sec_prod=1.5,
    Ti_sec_prod=35,
    alpha_sec_prod=0.8,
    k_prim_cons=1.5,
    Ti_prim_cons=35,
    alpha_prim_cons=0.8,
    k_sec_cons=1.5,
    Ti_sec_cons=35,
    alpha_sec_cons=0.3,
    controllerType=Modelica.Blocks.Types.SimpleController.PI)
    annotation (Placement(transformation(extent={{-74,76},{-32,124}})));
  inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
      fixedSeed=4345)
    annotation (Placement(transformation(extent={{34,-188},{54,-168}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp                   Q_management_array_1(table=[0,
        5; 900,5; 1800,12; 2700,12; 3600,-5; 4500,-5; 5400,-12; 6300,-12])
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-142,170})));
  Controller_PID_based.auxiliary.TimeTable_noInterp                   T_sec_in_array_1(table=[0,
        341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,318.15; 4500,318.15; 5400,
        318.15; 6300,318.15])
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-196,170})));
  Controller_PID_based.auxiliary.TimeTable_noInterp                   T_sec_in_array_2(table=[0,
        318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,341.15; 4500,341.15; 5400,
        341.15; 6300,341.15])
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-26,172})));
  Controller_PID_based.auxiliary.TimeTable_noInterp                   Q_management_array_2(table=[0,
        -5; 900,-5; 1800,-12; 2700,-12; 3600,5; 4500,5; 5400,12; 6300,12])
    annotation (Placement(transformation(extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-72,174})));
equation
  Losses = HOUSE1.Q_dot_is+HOUSE2.Q_dot_is;

  connect(pipe_hot.port_a, HOUSE1.hot_prim) annotation (Line(points={{-126,-84},{-190.7,
          -84},{-190.7,1.68889}},  color={0,127,255}));
  connect(pipe_hot.port_b, HOUSE2.hot_prim) annotation (Line(points={{-106,-84},{-29.3,-84},
          {-29.3,-0.311111}},              color={0,127,255}));
  connect(pipe_cold.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,-48},{-72.7,
          -48},{-72.7,0}},                             color={0,127,255}));
  connect(HOUSE1.cold_prim, pipe_cold.port_b) annotation (Line(points={{-147.3,2},{-147.3,
          -48},{-126,-48}},       color={0,127,255}));
  connect(bou.ports[1], pipe_hot.port_b)
    annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
  connect(HOUSE1.contr_vars_real, Controller_1.contr_vars_real) annotation (Line(points={{-200.31,
          30},{-208,30},{-208,100.588},{-190,100.588}},          color={0,0,127}));
  connect(Controller_1.states, HOUSE1.states) annotation (Line(points={{-148,100.588},{
          -128,100.588},{-128,30},{-138,30}},
                                         color={0,0,127}));
  connect(Controller_2.states, HOUSE2.states) annotation (Line(points={{-74,98.5882},{
          -92,98.5882},{-92,28},{-82,28}},
                                       color={0,0,127}));
  connect(Controller_2.contr_vars_real, HOUSE2.contr_vars_real) annotation (Line(points={{-32,
          98.5882},{-10,98.5882},{-10,28},{-19.69,28}},      color={0,0,127}));
  connect(Q_management_array_1.y, Controller_1.Q_dot_set) annotation (Line(points={{-142,
          159},{-142,136},{-158.5,136},{-158.5,127.129}},      color={0,0,127}));
  connect(T_sec_in_array_1.y, Controller_1.T_sec_in_is) annotation (Line(points={{-196,
          159},{-196,136},{-178,136},{-178,132},{-179.5,132},{-179.5,127.412}}, color={
          0,0,127}));
  connect(Q_management_array_2.y, Controller_2.Q_dot_set) annotation (Line(points={{-72,163},
          {-72,130},{-63.5,130},{-63.5,125.129}},      color={0,0,127}));
  connect(T_sec_in_array_2.y, Controller_2.T_sec_in_is) annotation (Line(points={{-26,161},
          {-26,134},{-42.5,134},{-42.5,125.412}},      color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,-200},{140,
            220}})),            Diagram(coordinateSystem(preserveAspectRatio=
            false, extent={{-320,-200},{140,220}}), graphics={
        Text(
          extent={{-196,214},{-128,200}},
          textColor={238,46,47},
          textString="House1"),
        Text(
          extent={{-84,216},{-16,202}},
          textColor={28,108,200},
          textString="House2"),
        Text(
          extent={{-134,-30},{-98,-38}},
          textColor={28,108,200},
          textString="cold"),
        Text(
          extent={{-134,-106},{-98,-114}},
          textColor={238,46,47},
          textString="hot"),
        Rectangle(extent={{-218,194},{-118,-8}}, lineColor={0,0,0}),
        Rectangle(extent={{-98,194},{2,-8}}, lineColor={0,0,0})}),
    experiment(
      StopTime=18000,
      Interval=10,
      __Dymola_Algorithm="Dassl"));
end Test_Controller_2Pros;
