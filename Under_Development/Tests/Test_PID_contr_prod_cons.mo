within ProsNet.Under_Development.Tests;
model Test_PID_contr_prod_cons "Producer and Consumer with Controller"
  new_prosumer_models.heat_transfer_station producer(
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_feedPump=true,
    init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
    use_inputFilter_conVal=true,
    init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_pumpsSec=true)
    annotation (Placement(transformation(extent={{-202,0},{-172,36}})));

  new_prosumer_models.heat_transfer_station consumer(
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_feedPump=true,
    init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
    use_inputFilter_conVal=true,
    init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_pumpsSec=true,
    energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState)
    annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

  inner Modelica.Fluid.System system(T_ambient=285.15)
    annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
  Fluid.Pipes.InsulatedPipe pipe_hot(allowFlowReversal=true, T_amb=system.T_ambient)
    annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
  Fluid.Pipes.InsulatedPipe pipe_cold(
    allowFlowReversal=true,
    T_amb=system.T_ambient,
    energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
    annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
  Fluid.Sources.Boundary_pT bou(nPorts=1, redeclare final package Medium =
        Media.Water)
    annotation (Placement(transformation(extent={{70,-94},{50,-74}})));
  Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_2
    annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
        273.15 + 65; 300,273.15 + 65; 600,273.15 + 65; 900,273.15 + 65; 1200,
        273.15 + 65; 1500,273.15 + 65; 1800,273.15 + 65; 2100,273.15 + 65])
    annotation (Placement(transformation(extent={{-308,44},{-288,64}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
        0; 300,6.5; 600,0; 900,5; 1200,10; 1500,6.5; 1800,0; 2100,0.0])
    annotation (Placement(transformation(extent={{-318,-2},{-298,18}})));
  Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_1
    annotation (Placement(transformation(extent={{64,6},{22,54}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array1(table=[0,
        273.15 + 65; 300,273.15 + 65; 600,273.15 + 65; 900,273.15 + 65;
        1200,273.15 + 65; 1500,273.15 + 65; 1800,273.15 + 65; 2100,273.15
         + 65])
    annotation (Placement(transformation(extent={{128,38},{108,58}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array1(table=[0,
        0; 300,6.5; 600,0; 900,5; 1200,10; 1500,6.5; 1800,0; 2100,0.0])
    annotation (Placement(transformation(extent={{118,-8},{98,12}})));
equation
  connect(pipe_hot.port_a, producer.hot_prim) annotation (Line(points={{-126,
          -84},{-188,-84},{-188,-0.2}}, color={0,127,255}));
  connect(pipe_hot.port_b, consumer.hot_prim) annotation (Line(points={{-106,
          -84},{-34.2667,-84},{-34.2667,-0.3}},
                                      color={0,127,255}));
  connect(pipe_cold.port_a, consumer.cold_prim) annotation (Line(points={{-106,
          -48},{-50,-48},{-50,-4},{-51.6,-4},{-51.6,-0.3}},
                                           color={0,127,255}));
  connect(producer.cold_prim, pipe_cold.port_b) annotation (Line(points={{-178,
          -0.2},{-178,-48},{-126,-48}},      color={0,127,255}));
  connect(bou.ports[1], pipe_hot.port_b)
    annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
  connect(PID_Q_T_weighted_2.T_sec_set, producer.T_sec_in_set) annotation (
      Line(points={{-226,42},{-226,52},{-210,52},{-210,32},{-202,32}}, color=
          {0,0,127}));
  connect(PID_Q_T_weighted_2.V_dot_sec_set, producer.V_dot_sec_set)
    annotation (Line(points={{-226,32.4},{-212,32.4},{-212,28},{-202,28}},
        color={0,0,127}));
  connect(PID_Q_T_weighted_2.pi_set, producer.pi)
    annotation (Line(points={{-226,22.8},{-202,22}}, color={255,127,0}));
  connect(PID_Q_T_weighted_2.mu_set, producer.mu) annotation (Line(points={{-226,
          13.2},{-210,13.2},{-210,18},{-202,18}}, color={255,127,0}));
  connect(producer.u_set, PID_Q_T_weighted_2.u_set) annotation (Line(points={
          {-202,14},{-208,14},{-208,3.6},{-226,3.6}}, color={0,0,127}));
  connect(producer.kappa_set, PID_Q_T_weighted_2.kappa_set) annotation (Line(
        points={{-202,10},{-212,10},{-212,-16},{-226,-16},{-226,-6}}, color={
          0,0,127}));
  connect(producer.T_sec_hot, PID_Q_T_weighted_2.T_sec_hot) annotation (Line(
        points={{-190,36},{-190,54},{-252,54},{-252,46},{-253.3,46},{-253.3,
          42}}, color={0,0,127}));
  connect(producer.T_sec_cold, PID_Q_T_weighted_2.T_sec_cold) annotation (
      Line(points={{-174,36},{-174,44},{-218,44},{-218,48},{-240.7,48},{-240.7,
          42}}, color={0,0,127}));
  connect(producer.V_dot_sec, PID_Q_T_weighted_2.V_dot_sec) annotation (Line(
        points={{-182,36},{-182,58},{-278,58},{-278,32.4},{-268,32.4}}, color=
         {0,0,127}));
  connect(producer.T_prim_hot, PID_Q_T_weighted_2.T_prim_hot) annotation (
      Line(points={{-190,0},{-190,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,
          -6}}, color={0,0,127}));
  connect(producer.T_prim_cold, PID_Q_T_weighted_2.T_prim_cold) annotation (
      Line(points={{-174,0},{-174,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,
          -6}}, color={0,0,127}));
  connect(PID_Q_T_weighted_2.V_dot_prim, producer.V_dot_prim) annotation (
      Line(points={{-268,3.6},{-278,3.6},{-278,-22},{-182,-22},{-182,0}},
        color={0,0,127}));
  connect(producer.Q_dot_trnsf_is, PID_Q_T_weighted_2.Qdot_is) annotation (
      Line(points={{-202,4},{-214,4},{-214,-24},{-280,-24},{-280,13.2},{-268,
          13.2}}, color={0,0,127}));
  connect(Q_management_array.y, PID_Q_T_weighted_2.Qdot_set) annotation (Line(
        points={{-297,8},{-282,8},{-282,22.8},{-268,22.8}}, color={0,0,127}));
  connect(T_sec_in_array.y, PID_Q_T_weighted_2.T_sec_sim) annotation (Line(
        points={{-287,54},{-268,54},{-268,42}}, color={0,0,127}));
  connect(PID_Q_T_weighted_1.T_sec_set, consumer.T_sec_in_set) annotation (
      Line(points={{22,54},{22,64},{0,64},{0,48},{-10,48}}, color={0,0,127}));
  connect(PID_Q_T_weighted_1.V_dot_sec_set, consumer.V_dot_sec_set)
    annotation (Line(points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,
          0,127}));
  connect(PID_Q_T_weighted_1.pi_set, consumer.pi)
    annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
  connect(PID_Q_T_weighted_1.mu_set, consumer.mu) annotation (Line(points={
          {22,25.2},{0,25.2},{0,27},{-10,27}}, color={255,127,0}));
  connect(PID_Q_T_weighted_1.u_set, consumer.u_set) annotation (Line(points=
         {{22,15.6},{0,15.6},{0,21},{-10,21}}, color={0,0,127}));
  connect(PID_Q_T_weighted_1.kappa_set, consumer.kappa_set) annotation (
      Line(points={{22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}},
        color={0,0,127}));
  connect(consumer.T_sec_hot, PID_Q_T_weighted_1.T_sec_hot) annotation (
      Line(points={{-30.8,54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}},
        color={0,0,127}));
  connect(consumer.T_sec_cold, PID_Q_T_weighted_1.T_sec_cold) annotation (
      Line(points={{-58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},
        color={0,0,127}));
  connect(consumer.V_dot_sec, PID_Q_T_weighted_1.V_dot_sec) annotation (
      Line(points={{-44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}},
        color={0,0,127}));
  connect(consumer.T_prim_hot, PID_Q_T_weighted_1.T_prim_hot) annotation (
      Line(points={{-30.8,0},{-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}},
        color={0,0,127}));
  connect(consumer.T_prim_cold, PID_Q_T_weighted_1.T_prim_cold) annotation (
     Line(points={{-58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},
        color={0,0,127}));
  connect(consumer.V_dot_prim, PID_Q_T_weighted_1.V_dot_prim) annotation (
      Line(points={{-44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,
          15.6}}, color={0,0,127}));
  connect(consumer.Q_dot_trnsf_is, PID_Q_T_weighted_1.Qdot_is) annotation (
      Line(points={{-10,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}},
        color={0,0,127}));
  connect(T_sec_in_array1.y, PID_Q_T_weighted_1.T_sec_sim) annotation (Line(
        points={{107,48},{84,48},{84,58},{64,58},{64,54}}, color={0,0,127}));
  connect(Q_management_array1.y, PID_Q_T_weighted_1.Qdot_set) annotation (
      Line(points={{97,2},{82,2},{82,34.8},{64,34.8}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
            -200},{140,100}})), Diagram(coordinateSystem(preserveAspectRatio=
            false, extent={{-320,-200},{140,100}}), graphics={
        Text(
          extent={{-214,82},{-146,68}},
          textColor={238,46,47},
          textString="Producer"),
        Text(
          extent={{-62,84},{6,70}},
          textColor={28,108,200},
          textString="Consumer"),
        Text(
          extent={{-134,-30},{-98,-38}},
          textColor={28,108,200},
          textString="cold"),
        Text(
          extent={{-134,-106},{-98,-114}},
          textColor={238,46,47},
          textString="hot")}),
    experiment(
      StopTime=1000,
      Interval=1,
      __Dymola_Algorithm="Dassl"));
end Test_PID_contr_prod_cons;
