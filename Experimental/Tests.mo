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
            textString="hot")}),
      experiment(
        StopTime=1000,
        Interval=1,
        __Dymola_Algorithm="Dassl"));
  end Test_2houses_v1;

  model Test_PID_contr_cons
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
    Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=
          [0,0; 300,-6.5; 600,0; 900,-5; 1200,-10; 1500,-6.5; 1800,0; 2100,0.0])
      annotation (Placement(transformation(extent={{130,12},{110,32}})));
    Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
          273.15 + 45; 300,273.15 + 45; 600,273.15 + 45; 900,273.15 + 45; 1200,
          273.15 + 45; 1500,273.15 + 45; 1800,273.15 + 45; 2100,273.15 + 45])
      annotation (Placement(transformation(extent={{128,56},{108,76}})));
    Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted(controllerType=
          Modelica.Blocks.Types.SimpleController.P)
      annotation (Placement(transformation(extent={{76,4},{30,48}})));
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
    connect(pipe_hot.port_a, producer.hot_prim) annotation (Line(points={{-126,
            -84},{-186,-84},{-186,-0.2}}, color={0,127,255}));
    connect(pipe_hot.port_b, consumer.hot_prim) annotation (Line(points={{-106,
            -84},{-34.2667,-84},{-34.2667,-0.3}},
                                        color={0,127,255}));
    connect(pipe_cold.port_a, consumer.cold_prim) annotation (Line(points={{-106,
            -48},{-50,-48},{-50,-4},{-51.6,-4},{-51.6,-0.3}},
                                             color={0,127,255}));
    connect(producer.cold_prim, pipe_cold.port_b) annotation (Line(points={{
            -176,-0.2},{-176,-48},{-126,-48}}, color={0,127,255}));
    connect(bou.ports[1], pipe_hot.port_b)
      annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
    connect(pID_Q_T_weighted.T_sec_set, consumer.T_sec_in_set)
      annotation (Line(points={{30,48},{-10,48}}, color={0,0,127}));
    connect(pID_Q_T_weighted.V_dot_sec_set, consumer.V_dot_sec_set) annotation (
       Line(points={{30,39.2},{11,39.2},{11,42},{-10,42}}, color={0,0,127}));
    connect(pID_Q_T_weighted.pi_set, consumer.pi) annotation (Line(points={{30,
            30.4},{0,30.4},{0,33},{-10,33}}, color={255,127,0}));
    connect(pID_Q_T_weighted.mu_set, consumer.mu) annotation (Line(points={{30,
            21.6},{11,21.6},{11,27},{-10,27}}, color={255,127,0}));
    connect(pID_Q_T_weighted.u_set, consumer.u_set) annotation (Line(points={{
            30,12.8},{18,12.8},{18,20},{4,20},{4,21},{-10,21}}, color={0,0,127}));
    connect(pID_Q_T_weighted.kappa_set, consumer.kappa_set) annotation (Line(
          points={{30,4},{14,4},{14,15},{-10,15}}, color={0,0,127}));
    connect(consumer.T_sec_hot, pID_Q_T_weighted.T_sec_hot) annotation (Line(
          points={{-30.8,54},{8,54},{8,62},{59.9,62},{59.9,48}}, color={0,0,127}));
    connect(consumer.T_sec_cold, pID_Q_T_weighted.T_sec_cold) annotation (Line(
          points={{-58.5333,54},{-58.5333,60},{46.1,60},{46.1,48}}, color={0,0,
            127}));
    connect(consumer.T_prim_hot, pID_Q_T_weighted.T_prim_hot)
      annotation (Line(points={{-30.8,0},{59.9,0},{59.9,4}}, color={0,0,127}));
    connect(consumer.T_prim_cold, pID_Q_T_weighted.T_prim_cold) annotation (
        Line(points={{-58.5333,0},{-58,0},{-58,-22},{46.1,-22},{46.1,4}}, color=
           {0,0,127}));
    connect(consumer.Q_dot_trnsf_is, pID_Q_T_weighted.Qdot_is) annotation (Line(
          points={{-10,6},{22,6},{22,-2},{86,-2},{86,21.6},{76,21.6}}, color={0,
            0,127}));
    connect(consumer.V_dot_prim, pID_Q_T_weighted.V_dot_prim) annotation (Line(
          points={{-44.6667,0},{70,0},{70,-4},{88,-4},{88,12.8},{76,12.8}},
          color={0,0,127}));
    connect(consumer.V_dot_sec, pID_Q_T_weighted.V_dot_sec) annotation (Line(
          points={{-44.6667,54},{-44.6667,66},{88,66},{88,39.2},{76,39.2}},
          color={0,0,127}));
    connect(T_sec_in_array.y, pID_Q_T_weighted.T_sec_sim) annotation (Line(
          points={{107,66},{90,66},{90,54},{86,54},{86,48},{76,48}}, color={0,0,
            127}));
    connect(Q_management_array.y, pID_Q_T_weighted.Qdot_set) annotation (Line(
          points={{109,22},{86,22},{86,30.4},{76,30.4}}, color={0,0,127}));
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
  end Test_PID_contr_cons;

  model Test_PID_contr_prod
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
    Modelica.Blocks.Sources.RealExpression T_house1(y=273.15 + 45)
      annotation (Placement(transformation(extent={{134,54},{114,74}})));
    Modelica.Blocks.Sources.IntegerExpression pi1(y=1)
      annotation (Placement(transformation(extent={{134,24},{114,44}})));
    Modelica.Blocks.Sources.IntegerExpression mu1(y=-1)
      annotation (Placement(transformation(extent={{134,10},{114,30}})));
    Modelica.Blocks.Sources.RealExpression u_pump1(y=0.5)
      annotation (Placement(transformation(extent={{134,-8},{114,12}})));
    Modelica.Blocks.Sources.RealExpression kappa1(y=0.8)
      annotation (Placement(transformation(extent={{134,-22},{114,-2}})));
    Modelica.Blocks.Sources.RealExpression flow_house1(y=5)
      annotation (Placement(transformation(extent={{134,42},{114,62}})));
    Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted
      annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
    Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
          273.15 + 65; 300,273.15 + 65; 600,273.15 + 65; 900,273.15 + 65; 1200,
          273.15 + 65; 1500,273.15 + 65; 1800,273.15 + 65; 2100,273.15 + 65])
      annotation (Placement(transformation(extent={{-308,44},{-288,64}})));
    Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
          0; 300,6.5; 600,0; 900,5; 1200,10; 1500,6.5; 1800,0; 2100,0.0])
      annotation (Placement(transformation(extent={{-318,-2},{-298,18}})));
  equation
    connect(pipe_hot.port_a, producer.hot_prim) annotation (Line(points={{-126,
            -84},{-186,-84},{-186,-0.2}}, color={0,127,255}));
    connect(pipe_hot.port_b, consumer.hot_prim) annotation (Line(points={{-106,
            -84},{-34.2667,-84},{-34.2667,-0.3}},
                                        color={0,127,255}));
    connect(pipe_cold.port_a, consumer.cold_prim) annotation (Line(points={{-106,
            -48},{-50,-48},{-50,-4},{-51.6,-4},{-51.6,-0.3}},
                                             color={0,127,255}));
    connect(producer.cold_prim, pipe_cold.port_b) annotation (Line(points={{
            -176,-0.2},{-176,-48},{-126,-48}}, color={0,127,255}));
    connect(bou.ports[1], pipe_hot.port_b)
      annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
    connect(T_house1.y, consumer.T_sec_in_set)
      annotation (Line(points={{113,64},{-10,64},{-10,48}},color={0,0,127}));
    connect(flow_house1.y, consumer.V_dot_sec_set)
      annotation (Line(points={{113,52},{-10,52},{-10,42}},color={0,0,127}));
    connect(pi1.y, consumer.pi)
      annotation (Line(points={{113,34},{-10,34},{-10,33}},color={255,127,0}));
    connect(mu1.y, consumer.mu)
      annotation (Line(points={{113,20},{-10,20},{-10,27}},color={255,127,0}));
    connect(u_pump1.y, consumer.u_set) annotation (Line(points={{113,2},{70,2},
            {70,32},{-10,32},{-10,21}}, color={0,0,127}));
    connect(kappa1.y, consumer.kappa_set)
      annotation (Line(points={{113,-12},{-10,-12},{-10,15}},color={0,0,127}));
    connect(pID_Q_T_weighted.T_sec_set, producer.T_sec_in_set) annotation (Line(
          points={{-226,42},{-226,52},{-210,52},{-210,32},{-200,32}}, color={0,
            0,127}));
    connect(pID_Q_T_weighted.V_dot_sec_set, producer.V_dot_sec_set) annotation
      (Line(points={{-226,32.4},{-212,32.4},{-212,28},{-200,28}}, color={0,0,
            127}));
    connect(pID_Q_T_weighted.pi_set, producer.pi)
      annotation (Line(points={{-226,22.8},{-200,22}}, color={255,127,0}));
    connect(pID_Q_T_weighted.mu_set, producer.mu) annotation (Line(points={{
            -226,13.2},{-210,13.2},{-210,18},{-200,18}}, color={255,127,0}));
    connect(producer.u_set, pID_Q_T_weighted.u_set) annotation (Line(points={{
            -200,14},{-208,14},{-208,3.6},{-226,3.6}}, color={0,0,127}));
    connect(producer.kappa_set, pID_Q_T_weighted.kappa_set) annotation (Line(
          points={{-200,10},{-212,10},{-212,-16},{-226,-16},{-226,-6}}, color={
            0,0,127}));
    connect(producer.T_sec_hot, pID_Q_T_weighted.T_sec_hot) annotation (Line(
          points={{-188,36},{-188,54},{-252,54},{-252,46},{-253.3,46},{-253.3,
            42}}, color={0,0,127}));
    connect(producer.T_sec_cold, pID_Q_T_weighted.T_sec_cold) annotation (Line(
          points={{-172,36},{-172,44},{-218,44},{-218,48},{-240.7,48},{-240.7,
            42}}, color={0,0,127}));
    connect(producer.V_dot_sec, pID_Q_T_weighted.V_dot_sec) annotation (Line(
          points={{-180,36},{-180,58},{-278,58},{-278,32.4},{-268,32.4}}, color
          ={0,0,127}));
    connect(producer.T_prim_hot, pID_Q_T_weighted.T_prim_hot) annotation (Line(
          points={{-188,0},{-188,-18},{-252,-18},{-252,-10},{-253.3,-10},{
            -253.3,-6}}, color={0,0,127}));
    connect(producer.T_prim_cold, pID_Q_T_weighted.T_prim_cold) annotation (
        Line(points={{-172,0},{-172,-6},{-218,-6},{-218,-12},{-240.7,-12},{
            -240.7,-6}}, color={0,0,127}));
    connect(pID_Q_T_weighted.V_dot_prim, producer.V_dot_prim) annotation (Line(
          points={{-268,3.6},{-278,3.6},{-278,-22},{-180,-22},{-180,0}}, color=
            {0,0,127}));
    connect(producer.Q_dot_trnsf_is, pID_Q_T_weighted.Qdot_is) annotation (Line(
          points={{-200,4},{-214,4},{-214,-24},{-280,-24},{-280,13.2},{-268,
            13.2}}, color={0,0,127}));
    connect(Q_management_array.y, pID_Q_T_weighted.Qdot_set) annotation (Line(
          points={{-297,8},{-282,8},{-282,22.8},{-268,22.8}}, color={0,0,127}));
    connect(T_sec_in_array.y, pID_Q_T_weighted.T_sec_sim) annotation (Line(
          points={{-287,54},{-268,54},{-268,42}}, color={0,0,127}));
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
  end Test_PID_contr_prod;
end Tests;
