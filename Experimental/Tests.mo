within ProsNet.Experimental;
package Tests "Testing the new models and especially controllers"

  model Test_2houses_v1
    Modelica.Blocks.Sources.RealExpression T_house(y=273.15 + 70)
      annotation (Placement(transformation(extent={{-284,34},{-264,54}})));
    Modelica.Blocks.Sources.IntegerExpression pi(y=1)
      annotation (Placement(transformation(extent={{-284,4},{-264,24}})));
    Modelica.Blocks.Sources.IntegerExpression mu(y=1)
      annotation (Placement(transformation(extent={{-284,-10},{-264,10}})));
    Modelica.Blocks.Sources.RealExpression u_pump(y=0.5)
      annotation (Placement(transformation(extent={{-284,-28},{-264,-8}})));
    Modelica.Blocks.Sources.RealExpression kappa(y=0.8)
      annotation (Placement(transformation(extent={{-284,-42},{-264,-22}})));
    Modelica.Blocks.Sources.RealExpression flow_house(y=5)
      annotation (Placement(transformation(extent={{-284,22},{-264,42}})));
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
      annotation (Placement(transformation(extent={{-200,0},{-170,36}})));
    Modelica.Blocks.Sources.RealExpression T_house1(y=273.15 + 45)
      annotation (Placement(transformation(extent={{60,46},{40,66}})));
    Modelica.Blocks.Sources.IntegerExpression pi1(y=1)
      annotation (Placement(transformation(extent={{60,16},{40,36}})));
    Modelica.Blocks.Sources.IntegerExpression mu1(y=-1)
      annotation (Placement(transformation(extent={{60,2},{40,22}})));
    Modelica.Blocks.Sources.RealExpression u_pump1(y=0.5)
      annotation (Placement(transformation(extent={{60,-16},{40,4}})));
    Modelica.Blocks.Sources.RealExpression kappa1(y=0.8)
      annotation (Placement(transformation(extent={{60,-30},{40,-10}})));
    Modelica.Blocks.Sources.RealExpression flow_house1(y=5)
      annotation (Placement(transformation(extent={{60,34},{40,54}})));
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
      annotation (Placement(transformation(extent={{-10,0},{-40,36}})));
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
  equation
    connect(T_house.y, producer.T_sec_in_set) annotation (Line(points={{-263,44},
            {-206,44},{-206,32},{-200,32}}, color={0,0,127}));
    connect(flow_house.y, producer.V_dot_sec_set) annotation (Line(points={{
            -263,32},{-208,32},{-208,28},{-200,28}}, color={0,0,127}));
    connect(pi.y, producer.pi) annotation (Line(points={{-263,14},{-208,14},{
            -208,22},{-200,22}}, color={255,127,0}));
    connect(mu.y, producer.mu) annotation (Line(points={{-263,0},{-206,0},{-206,
            18},{-200,18}}, color={255,127,0}));
    connect(u_pump.y, producer.u_set) annotation (Line(points={{-263,-18},{-258,
            -18},{-258,12},{-252,12},{-252,14},{-200,14}}, color={0,0,127}));
    connect(kappa.y, producer.kappa_set) annotation (Line(points={{-263,-32},{
            -250,-32},{-250,10},{-200,10}}, color={0,0,127}));
    connect(T_house1.y, consumer.T_sec_in_set)
      annotation (Line(points={{39,56},{-10,56},{-10,32}}, color={0,0,127}));
    connect(flow_house1.y, consumer.V_dot_sec_set)
      annotation (Line(points={{39,44},{-10,44},{-10,28}}, color={0,0,127}));
    connect(pi1.y, consumer.pi)
      annotation (Line(points={{39,26},{-10,26},{-10,22}}, color={255,127,0}));
    connect(mu1.y, consumer.mu)
      annotation (Line(points={{39,12},{-10,12},{-10,18}}, color={255,127,0}));
    connect(u_pump1.y, consumer.u_set) annotation (Line(points={{39,-6},{-4,-6},
            {-4,24},{-10,24},{-10,14}}, color={0,0,127}));
    connect(kappa1.y, consumer.kappa_set)
      annotation (Line(points={{39,-20},{-10,-20},{-10,10}}, color={0,0,127}));
    connect(pipe_hot.port_a, producer.hot_prim) annotation (Line(points={{-126,
            -84},{-186,-84},{-186,-0.2}}, color={0,127,255}));
    connect(pipe_hot.port_b, consumer.hot_prim) annotation (Line(points={{-106,
            -84},{-24,-84},{-24,-0.2}}, color={0,127,255}));
    connect(pipe_cold.port_a, consumer.cold_prim) annotation (Line(points={{
            -106,-48},{-34,-48},{-34,-0.2}}, color={0,127,255}));
    connect(producer.cold_prim, pipe_cold.port_b) annotation (Line(points={{
            -176,-0.2},{-176,-48},{-126,-48}}, color={0,127,255}));
    connect(bou.ports[1], pipe_hot.port_b)
      annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
              -200},{100,100}})), Diagram(coordinateSystem(preserveAspectRatio=
              false, extent={{-320,-200},{100,100}}), graphics={
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
            textString="hot")}));
  end Test_2houses_v1;
end Tests;
