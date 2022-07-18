within ProsNet.Under_Development.Tests;
model Test_prod_cons
  new_prosumer_models.heat_transfer_station producer(
    redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
      feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.SteadyState,
    use_inputFilter_feedPump=true,
    init_feedPump=Modelica.Blocks.Types.Init.SteadyState,
    use_inputFilter_conVal=true,
    init_conVal=Modelica.Blocks.Types.Init.SteadyState,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.SteadyState,
    use_inputFilter_pumpsSec=true)
    annotation (Placement(transformation(extent={{-202,0},{-172,36}})));

  new_prosumer_models.heat_transfer_station consumer(
    redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
      feedinPer,
    energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_feedPump=true,
    init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
    use_inputFilter_conVal=true,
    init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
    ambient_temperature=system.T_ambient,
    energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
    use_inputFilter_pumpsSec=true,
    energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState)
    annotation (Placement(transformation(extent={{-20,4},{-60,42}})));

  inner Modelica.Fluid.System system(T_ambient=285.15)
    annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
  Fluid.Pipes.InsulatedPipe pipe_hot(allowFlowReversal=true, T_amb=system.T_ambient,
    length=180,
    zeta=1000)
    annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
  Fluid.Pipes.InsulatedPipe pipe_cold(
    allowFlowReversal=true,
    T_amb=system.T_ambient,
    length=180,
    zeta=1000,
    energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
    annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
  Fluid.Sources.Boundary_pT bou(nPorts=1, redeclare final package Medium =
        Media.Water)
    annotation (Placement(transformation(extent={{70,-94},{50,-74}})));
  Modelica.Blocks.Sources.RealExpression T_house1(y=273.15 + 30)
    annotation (Placement(transformation(extent={{134,54},{114,74}})));
  Modelica.Blocks.Sources.IntegerExpression pi1(y=1)
    annotation (Placement(transformation(extent={{134,24},{114,44}})));
  Modelica.Blocks.Sources.IntegerExpression mu1(y=-1)
    annotation (Placement(transformation(extent={{134,10},{114,30}})));
  Modelica.Blocks.Sources.RealExpression u_pump1(y=0.5)
    annotation (Placement(transformation(extent={{134,-8},{114,12}})));
  Modelica.Blocks.Sources.RealExpression flow_house1(y=6)
    annotation (Placement(transformation(extent={{134,42},{114,62}})));
  Modelica.Blocks.Sources.RealExpression T_house2(y=273.15 + 45)
    annotation (Placement(transformation(extent={{-304,44},{-284,64}})));
  Modelica.Blocks.Sources.IntegerExpression pi2(y=1)
    annotation (Placement(transformation(extent={{-304,14},{-284,34}})));
  Modelica.Blocks.Sources.IntegerExpression mu2(y=1)
    annotation (Placement(transformation(extent={{-304,0},{-284,20}})));
  Modelica.Blocks.Sources.RealExpression u_pump2(y=1)
    annotation (Placement(transformation(extent={{-304,-18},{-284,2}})));
  Modelica.Blocks.Sources.RealExpression kappa2(y=0.8)
    annotation (Placement(transformation(extent={{-304,-32},{-284,-12}})));
  Modelica.Blocks.Sources.RealExpression flow_house2(y=6)
    annotation (Placement(transformation(extent={{-304,32},{-284,52}})));
  Modelica.Blocks.Sources.RealExpression kappa1(y=1)
    annotation (Placement(transformation(extent={{140,-28},{120,-8}})));
equation
  connect(pipe_hot.port_a, producer.hot_prim) annotation (Line(points={{-126,
          -84},{-188,-84},{-188,-0.2}}, color={0,127,255}));
  connect(pipe_hot.port_b, consumer.hot_prim) annotation (Line(points={{-106,
          -84},{-38.6667,-84},{-38.6667,3.78889}},
                                      color={0,127,255}));
  connect(pipe_cold.port_a, consumer.cold_prim) annotation (Line(points={{-106,
          -48},{-52,-48},{-52,3.78889}},   color={0,127,255}));
  connect(producer.cold_prim, pipe_cold.port_b) annotation (Line(points={{-178,
          -0.2},{-178,-48},{-126,-48}},      color={0,127,255}));
  connect(bou.ports[1], pipe_hot.port_b)
    annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
  connect(T_house1.y, consumer.T_sec_in_set)
    annotation (Line(points={{113,64},{-12,64},{-12,44},{-10,44},{-10,
          37.7778},{-20,37.7778}},                       color={0,0,127}));
  connect(flow_house1.y, consumer.V_dot_sec_set)
    annotation (Line(points={{113,52},{-20,52},{-20,33.5556}},
                                                         color={0,0,127}));
  connect(pi1.y, consumer.pi)
    annotation (Line(points={{113,34},{-6,34},{-6,27.2222},{-20,27.2222}},
                                                         color={255,127,0}));
  connect(mu1.y, consumer.mu)
    annotation (Line(points={{113,20},{-10,20},{-10,23},{-20,23}},
                                                         color={255,127,0}));
  connect(u_pump1.y, consumer.u_set) annotation (Line(points={{113,2},{-8,2},
          {-8,18.7778},{-20,18.7778}},color={0,0,127}));
  connect(T_house2.y, producer.T_sec_in_set) annotation (Line(points={{-283,
          54},{-212,54},{-212,32},{-202,32}}, color={0,0,127}));
  connect(flow_house2.y, producer.V_dot_sec_set) annotation (Line(points={{
          -283,42},{-214,42},{-214,28},{-202,28}}, color={0,0,127}));
  connect(pi2.y, producer.pi) annotation (Line(points={{-283,24},{-210,24},
          {-210,22},{-202,22}}, color={255,127,0}));
  connect(mu2.y, producer.mu) annotation (Line(points={{-283,10},{-276,10},
          {-276,18},{-202,18}}, color={255,127,0}));
  connect(u_pump2.y, producer.u_set) annotation (Line(points={{-283,-8},{
          -272,-8},{-272,14},{-202,14}}, color={0,0,127}));
  connect(kappa2.y, producer.kappa_set) annotation (Line(points={{-283,-22},
          {-272,-22},{-272,-10},{-260,-10},{-260,10},{-202,10}}, color={0,0,
          127}));
  connect(consumer.kappa_set, kappa1.y) annotation (Line(points={{-20,
          14.5556},{-10,14.5556},{-10,-18},{119,-18}}, color={0,0,127}));
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
      StopTime=10000,
      Interval=10,
      __Dymola_Algorithm="Dassl"));
end Test_prod_cons;
