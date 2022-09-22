within ProsNet;
package Fabian

  model Test1
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Test1;

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
      Under_Development.new_prosumer_models.heat_transfer_station producer(
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
      Under_Development.new_prosumer_models.heat_transfer_station consumer(
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
      Under_Development.new_prosumer_models.heat_transfer_station producer(
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

      Under_Development.new_prosumer_models.heat_transfer_station consumer(
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
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
            0; 300,-6.5; 600,0; 900,-5; 1200,-10; 1500,-6.5; 1800,0; 2100,0.0])
        annotation (Placement(transformation(extent={{130,12},{110,32}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
            273.15 + 45; 300,273.15 + 45; 600,273.15 + 45; 900,273.15 + 45;
            1200,273.15 + 45; 1500,273.15 + 45; 1800,273.15 + 45; 2100,273.15
             + 45])
        annotation (Placement(transformation(extent={{128,56},{108,76}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_1(
          controllerType=Modelica.Blocks.Types.SimpleController.P)
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
      connect(PID_Q_T_weighted_1.T_sec_set, consumer.T_sec_in_set)
        annotation (Line(points={{30,48},{-10,48}}, color={0,0,127}));
      connect(PID_Q_T_weighted_1.V_dot_sec_set, consumer.V_dot_sec_set)
        annotation (Line(points={{30,39.2},{11,39.2},{11,42},{-10,42}}, color={0,
              0,127}));
      connect(PID_Q_T_weighted_1.pi_set, consumer.pi) annotation (Line(points={{
              30,30.4},{0,30.4},{0,33},{-10,33}}, color={255,127,0}));
      connect(PID_Q_T_weighted_1.mu_set, consumer.mu) annotation (Line(points={{
              30,21.6},{11,21.6},{11,27},{-10,27}}, color={255,127,0}));
      connect(PID_Q_T_weighted_1.u_set, consumer.u_set) annotation (Line(points={
              {30,12.8},{18,12.8},{18,20},{4,20},{4,21},{-10,21}}, color={0,0,127}));
      connect(PID_Q_T_weighted_1.kappa_set, consumer.kappa_set) annotation (Line(
            points={{30,4},{14,4},{14,15},{-10,15}}, color={0,0,127}));
      connect(consumer.T_sec_hot, PID_Q_T_weighted_1.T_sec_hot) annotation (Line(
            points={{-30.8,54},{8,54},{8,62},{59.9,62},{59.9,48}}, color={0,0,127}));
      connect(consumer.T_sec_cold, PID_Q_T_weighted_1.T_sec_cold) annotation (
          Line(points={{-58.5333,54},{-58.5333,60},{46.1,60},{46.1,48}}, color={0,
              0,127}));
      connect(consumer.T_prim_hot, PID_Q_T_weighted_1.T_prim_hot)
        annotation (Line(points={{-30.8,0},{59.9,0},{59.9,4}}, color={0,0,127}));
      connect(consumer.T_prim_cold, PID_Q_T_weighted_1.T_prim_cold) annotation (
          Line(points={{-58.5333,0},{-58,0},{-58,-22},{46.1,-22},{46.1,4}}, color=
             {0,0,127}));
      connect(consumer.Q_dot_trnsf_is, PID_Q_T_weighted_1.Qdot_is) annotation (
          Line(points={{-10,6},{22,6},{22,-2},{86,-2},{86,21.6},{76,21.6}}, color=
             {0,0,127}));
      connect(consumer.V_dot_prim, PID_Q_T_weighted_1.V_dot_prim) annotation (
          Line(points={{-44.6667,0},{70,0},{70,-4},{88,-4},{88,12.8},{76,12.8}},
            color={0,0,127}));
      connect(consumer.V_dot_sec, PID_Q_T_weighted_1.V_dot_sec) annotation (Line(
            points={{-44.6667,54},{-44.6667,66},{88,66},{88,39.2},{76,39.2}},
            color={0,0,127}));
      connect(T_sec_in_array.y, PID_Q_T_weighted_1.T_sec_sim) annotation (Line(
            points={{107,66},{90,66},{90,54},{86,54},{86,48},{76,48}}, color={0,0,
              127}));
      connect(Q_management_array.y, PID_Q_T_weighted_1.Qdot_set) annotation (Line(
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
      Under_Development.new_prosumer_models.heat_transfer_station producer(
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

      Under_Development.new_prosumer_models.heat_transfer_station consumer(
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
      Under_Development.Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_2
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
            273.15 + 65; 300,273.15 + 65; 600,273.15 + 65; 900,273.15 + 65;
            1200,273.15 + 65; 1500,273.15 + 65; 1800,273.15 + 65; 2100,273.15
             + 65])
        annotation (Placement(transformation(extent={{-308,44},{-288,64}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
            0; 300,6.5; 600,0; 900,5; 1200,10; 1500,6.5; 1800,0; 2100,0.0])
        annotation (Placement(transformation(extent={{-318,-2},{-298,18}})));
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

    model Test_PID_contr_prod_cons "Producer and Consumer with Controller"
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
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
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-192,0},{-162,36}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
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
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
      Fluid.Pipes.InsulatedPipe pipe_hot(allowFlowReversal=true, T_amb=system.T_ambient,
        length=90,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
      Fluid.Pipes.InsulatedPipe pipe_cold(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        length=90,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
      Fluid.Sources.Boundary_pT bou(
        T=313.15,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{70,-94},{50,-74}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_2(
        V_dot_sec_max=10,
        k_prim_prod=1,
        Ti_prim_prod=30,
        alpha_prim_prod=1,
        k_sec_prod=1,
        Ti_sec_prod=30,
        alpha_sec_prod=1,
        k_prim_cons=1,
        Ti_prim_cons=30,
        alpha_prim_cons=1,
        k_sec_cons=1,
        Ti_sec_cons=30,
        alpha_sec_cons=1,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted PID_Q_T_weighted_1(
        V_dot_sec_max=10,
        k_prim_prod=1,
        Ti_prim_prod=30,
        alpha_prim_prod=1,
        k_sec_prod=1,
        Ti_sec_prod=30,
        alpha_sec_prod=1,
        k_prim_cons=1,
        Ti_prim_cons=30,
        alpha_prim_cons=1,
        k_sec_cons=1,
        Ti_sec_cons=30,
        alpha_sec_cons=1,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
            0; 900,3; 1800,3; 2700,3; 3600,0; 4500,0; 5400,0; 6300,3; 7200,5;
            8100,3; 9000,0; 9900,-3; 10800,-5; 11700,-3; 12600,0; 13500,5;
            14400,0; 15300,0; 16200,-5; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array2(table=[0,
            0; 900,-3; 1800,-3; 2700,-3; 3600,0; 4500,0; 5400,0; 6300,-3; 7200,
            -5; 8100,-3; 9000,0; 9900,3; 10800,5; 11700,3; 12600,0; 13500,-5;
            14400,0; 15300,0; 16200,5; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{126,-6},{106,14}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-124,58},{-92,90}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise(
        samplePeriod=30,
        mu=0,
        sigma=3)
        annotation (Placement(transformation(extent={{-400,70},{-380,90}})));
      Modelica.Blocks.Math.Add add
        annotation (Placement(transformation(extent={{-356,54},{-336,74}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise1(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{202,62},{182,82}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{156,40},{136,60}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array1(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{190,-6},{170,14}})));
    equation
      connect(pipe_hot.port_a, HOUSE1.hot_prim) annotation (Line(points={{-126,-84},
              {-178,-84},{-178,-0.2}}, color={0,127,255}));
      connect(pipe_hot.port_b, HOUSE2.hot_prim) annotation (Line(points={{-106,
              -84},{-34.2667,-84},{-34.2667,-0.3}},
                                               color={0,127,255}));
      connect(pipe_cold.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,-48},
              {-50,-48},{-50,-4},{-51.6,-4},{-51.6,-0.3}}, color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold.port_b) annotation (Line(points={{-168,
              -0.2},{-168,-48},{-126,-48}},
                                      color={0,127,255}));
      connect(bou.ports[1], pipe_hot.port_b)
        annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
      connect(PID_Q_T_weighted_2.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(
            points={{-226,42},{-226,52},{-210,52},{-210,32},{-192,32}}, color={0,0,
              127}));
      connect(PID_Q_T_weighted_2.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (
          Line(points={{-226,32.4},{-212,32.4},{-212,28},{-192,28}}, color={0,0,127}));
      connect(PID_Q_T_weighted_2.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-192,22}}, color={255,127,0}));
      connect(PID_Q_T_weighted_2.mu_set, HOUSE1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,18},{-192,18}}, color={255,127,0}));
      connect(HOUSE1.u_set, PID_Q_T_weighted_2.u_set) annotation (Line(points={{-192,14},
              {-208,14},{-208,3.6},{-226,3.6}},     color={0,0,127}));
      connect(HOUSE1.kappa_set, PID_Q_T_weighted_2.kappa_set) annotation (Line(
            points={{-192,10},{-212,10},{-212,-16},{-226,-16},{-226,-6}}, color={0,
              0,127}));
      connect(HOUSE1.T_sec_hot, PID_Q_T_weighted_2.T_sec_hot) annotation (Line(
            points={{-180,36},{-180,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}},
            color={0,0,127}));
      connect(HOUSE1.T_sec_cold, PID_Q_T_weighted_2.T_sec_cold) annotation (Line(
            points={{-164,36},{-164,44},{-218,44},{-218,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, PID_Q_T_weighted_2.V_dot_sec) annotation (Line(
            points={{-172,36},{-172,58},{-278,58},{-278,32.4},{-268,32.4}}, color={
              0,0,127}));
      connect(HOUSE1.T_prim_hot, PID_Q_T_weighted_2.T_prim_hot) annotation (Line(
            points={{-180,0},{-180,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,
              -6}}, color={0,0,127}));
      connect(HOUSE1.T_prim_cold, PID_Q_T_weighted_2.T_prim_cold) annotation (Line(
            points={{-164,0},{-164,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(PID_Q_T_weighted_2.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(
            points={{-268,3.6},{-278,3.6},{-278,-22},{-172,-22},{-172,0}}, color={0,
              0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, PID_Q_T_weighted_2.Qdot_is) annotation (Line(
            points={{-192,4},{-214,4},{-214,-24},{-280,-24},{-280,13.2},{-268,13.2}},
            color={0,0,127}));
      connect(PID_Q_T_weighted_1.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(
            points={{22,54},{22,64},{0,64},{0,48},{-10,48}}, color={0,0,127}));
      connect(PID_Q_T_weighted_1.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (
          Line(points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(PID_Q_T_weighted_1.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(PID_Q_T_weighted_1.mu_set, HOUSE2.mu) annotation (Line(points={{22,
              25.2},{0,25.2},{0,27},{-10,27}}, color={255,127,0}));
      connect(PID_Q_T_weighted_1.u_set, HOUSE2.u_set) annotation (Line(points={{22,
              15.6},{0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(PID_Q_T_weighted_1.kappa_set, HOUSE2.kappa_set) annotation (Line(
            points={{22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}}, color=
             {0,0,127}));
      connect(HOUSE2.T_sec_hot, PID_Q_T_weighted_1.T_sec_hot) annotation (Line(
            points={{-30.8,54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}},
            color={0,0,127}));
      connect(HOUSE2.T_sec_cold, PID_Q_T_weighted_1.T_sec_cold) annotation (Line(
            points={{-58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}}, color={0,
              0,127}));
      connect(HOUSE2.V_dot_sec, PID_Q_T_weighted_1.V_dot_sec) annotation (Line(
            points={{-44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color=
             {0,0,127}));
      connect(HOUSE2.T_prim_hot, PID_Q_T_weighted_1.T_prim_hot) annotation (Line(
            points={{-30.8,0},{-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}}, color=
             {0,0,127}));
      connect(HOUSE2.T_prim_cold, PID_Q_T_weighted_1.T_prim_cold) annotation (Line(
            points={{-58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}}, color={0,0,
              127}));
      connect(HOUSE2.V_dot_prim, PID_Q_T_weighted_1.V_dot_prim) annotation (Line(
            points={{-44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},
            color={0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, PID_Q_T_weighted_1.Qdot_is) annotation (Line(
            points={{-10,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}}, color={0,
              0,127}));
      connect(Q_management_array.y, PID_Q_T_weighted_2.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array2.y, PID_Q_T_weighted_1.Qdot_set) annotation (Line(
            points={{105,4},{84,4},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array.y, add.u2) annotation (Line(points={{-379,42},{-366,42},
              {-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, PID_Q_T_weighted_2.T_sec_sim) annotation (Line(points={{-335,
              64},{-318,64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{181,72},{168,72},{
              168,56},{158,56}}, color={0,0,127}));
      connect(add1.y, PID_Q_T_weighted_1.T_sec_sim) annotation (Line(points={{135,
              50},{86,50},{86,56},{64,56},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array1.y, add1.u2) annotation (Line(points={{169,4},{160,4},
              {160,34},{166,34},{166,44},{158,44}}, color={0,0,127}));
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
          StopTime=18900,
          Interval=30,
          __Dymola_Algorithm="Dassl"));
    end Test_PID_contr_prod_cons;

    model Test_prod_cons
      Under_Development.new_prosumer_models.heat_transfer_station producer(
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

      Under_Development.new_prosumer_models.heat_transfer_station consumer(
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
        annotation (Placement(transformation(extent={{70,-186},{90,-166}})));
      Fluid.Pipes.InsulatedPipe pipe_hot(allowFlowReversal=true, T_amb=system.T_ambient,
        length=90,
        zeta=50)
        annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
      Fluid.Pipes.InsulatedPipe pipe_cold(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        length=90,
        zeta=50,
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
      Modelica.Blocks.Sources.RealExpression flow_house1(y=10)
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
      Modelica.Blocks.Sources.RealExpression flow_house2(y=10)
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
      connect(kappa1.y, consumer.kappa_set) annotation (Line(points={{119,-18},
              {-10,-18},{-10,14.5556},{-20,14.5556}},
                                                 color={0,0,127}));
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

    model Test_heat_exchanger

      replaceable package Medium1 = ProsNet.Media.Water;
      replaceable package Medium2 = ProsNet.Media.Water;

      extends ProsNet.Prosumers.BaseClasses.PrimarySideParameters;
      extends ProsNet.Prosumers.SecondarySides.BaseClasses.PumpsPairDynParam;
      extends
        ProsNet.Prosumers.SecondarySides.BaseClasses.ControlVolumeDynParam;

      inner Modelica.Fluid.System system
        annotation (Placement(transformation(extent={{-30,54},{-10,74}})));
      Modelica.Fluid.Sources.MassFlowSource_T boundary(
        redeclare package Medium = Media.Water,
        m_flow=0.1,
        T=333.15,
        nPorts=1) annotation (Placement(transformation(extent={{-78,-62},{-58,-42}})));
      Modelica.Fluid.Sources.FixedBoundary boundary1(redeclare package Medium =
            Media.Water, nPorts=1)
        annotation (Placement(transformation(extent={{-88,4},{-68,24}})));
      Modelica.Fluid.Sources.MassFlowSource_T boundary2(
        redeclare package Medium = Media.Water,
        use_m_flow_in=true,
        m_flow=1,
        T=313.15,
        nPorts=1) annotation (Placement(transformation(extent={{72,0},{52,20}})));
      Modelica.Fluid.Sources.FixedBoundary boundary3(redeclare package Medium =
            Media.Water, nPorts=1)
        annotation (Placement(transformation(extent={{50,-52},{30,-32}})));
      Modelica.Blocks.Sources.Ramp ramp(
        height=0.3,
        duration=900,
        offset=0.01,
        startTime=900)
        annotation (Placement(transformation(extent={{34,56},{54,76}})));

      Fluid.HeatExchangers.LiquidToLiquid liquidToLiquid(
        redeclare package Medium1 = Medium1,
        redeclare package Medium2 = Medium2,
        m1_flow_nominal=1,
        m2_flow_nominal=1,
        dp1_nominal(displayUnit="bar") = 100000,
        dp2_nominal(displayUnit="bar") = 100000,
        Q_flow_nominal=30,
        T_a1_nominal=333.15,
        T_a2_nominal=303.15)
        annotation (Placement(transformation(extent={{-24,-18},{-4,2}})));
      Fluid.Sensors.Temperature senTem(redeclare package Medium = Medium1)
        annotation (Placement(transformation(extent={{-14,20},{6,40}})));
      Fluid.Sensors.Temperature senTem1(redeclare package Medium = Medium2)
        annotation (Placement(transformation(extent={{-44,-70},{-24,-50}})));
    equation
      connect(ramp.y, boundary2.m_flow_in) annotation (Line(points={{55,66},{78,66},
              {78,18},{72,18}}, color={0,0,127}));
      connect(boundary1.ports[1], liquidToLiquid.port_a1) annotation (Line(points={
              {-68,14},{-30,14},{-30,-2},{-24,-2}}, color={0,127,255}));
      connect(liquidToLiquid.port_b1, boundary2.ports[1]) annotation (Line(points={
              {-4,-2},{46,-2},{46,10},{52,10}}, color={0,127,255}));
      connect(boundary3.ports[1], liquidToLiquid.port_a2) annotation (Line(points={
              {30,-42},{2,-42},{2,-14},{-4,-14}}, color={0,127,255}));
      connect(liquidToLiquid.port_b2, boundary.ports[1]) annotation (Line(points={{
              -24,-14},{-52,-14},{-52,-52},{-58,-52}}, color={0,127,255}));
      connect(senTem.port, liquidToLiquid.port_a1) annotation (Line(points={{-4,20},
              {-4,14},{-30,14},{-30,-2},{-24,-2}}, color={0,127,255}));
      connect(senTem1.port, liquidToLiquid.port_a2) annotation (Line(points={{-34,
              -70},{-34,-74},{0,-74},{0,-18},{2,-18},{2,-14},{-4,-14}}, color={0,
              127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)),
        experiment(
          StopTime=2100,
          Interval=1,
          __Dymola_Algorithm="Dassl"));
    end Test_heat_exchanger;
  end Tests;

  model Fabi_Trial
    Under_Development.Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted(
      Ti_prim_prod=30,
      alpha_prim_prod=1,
      Ti_sec_prod=30,
      alpha_sec_prod=1,
      Ti_prim_cons=30,
      alpha_prim_cons=1,
      Ti_sec_cons=30,
      alpha_sec_cons=1)
      annotation (Placement(transformation(extent={{-110,2},{-90,22}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted1(
      Ti_prim_prod=30,
      alpha_prim_prod=1,
      Ti_sec_prod=30,
      alpha_sec_prod=1,
      Ti_prim_cons=30,
      alpha_prim_cons=1,
      Ti_sec_cons=30,
      alpha_sec_cons=1)
      annotation (Placement(transformation(extent={{154,10},{134,30}})));
    Under_Development.new_prosumer_models.heat_transfer_station
      Prosumer_1_heat_transfer_station(
      redeclare Fluid.Pumps.Data.Pumps.Wilo.Stratos25slash1to4 feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

      use_inputFilter_feedPump=true,
      use_inputFilter_conVal=true,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

      use_inputFilter_pumpsSec=true,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      T_start_cv=313.15)
      annotation (Placement(transformation(extent={{-76,-10},{-46,26}})));
    Under_Development.new_prosumer_models.heat_transfer_station Prosumer_2_heat_transfer_station(
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.FixedInitial,
      use_inputFilter_feedPump=true,
      use_inputFilter_conVal=true,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.FixedInitial,
      use_inputFilter_pumpsSec=true,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start_cv=313.15)
      annotation (Placement(transformation(extent={{4,-2},{-26,34}})));
    Under_Development.new_prosumer_models.heat_transfer_station Prosumer_3_heat_transfer_station(
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

      use_inputFilter_feedPump=true,
      use_inputFilter_conVal=true,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      T_start_cv=313.15)
      annotation (Placement(transformation(extent={{112,-4},{82,32}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted2(
      Ti_prim_prod=30,
      alpha_prim_prod=1,
      Ti_sec_prod=30,
      alpha_sec_prod=1,
      Ti_prim_cons=30,
      alpha_prim_cons=1,
      Ti_sec_cons=30,
      alpha_sec_cons=1)
      annotation (Placement(transformation(extent={{38,10},{18,30}})));
    Fluid.Pipes.InsulatedPipe ID_4_cold(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
      annotation (Placement(transformation(extent={{32,-68},{52,-48}})));
    Fluid.Pipes.InsulatedPipe ID_4_hot(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
      annotation (Placement(transformation(extent={{52,-92},{32,-72}})));
    Fluid.Pipes.InsulatedPipe ID_5_hot(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
                                       annotation (Placement(transformation(
          extent={{-10,-11},{10,11}},
          rotation=-90,
          origin={94,-33})));
    Fluid.Pipes.InsulatedPipe ID_5_cold(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
                                        annotation (Placement(transformation(
          extent={{-10,10},{10,-10}},
          rotation=90,
          origin={62,-34})));
    Fluid.Pipes.InsulatedPipe ID_3_hot(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
                                       annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=-90,
          origin={24,-30})));
    Fluid.Pipes.InsulatedPipe ID_3_cold(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
                                        annotation (Placement(transformation(
          extent={{-10,10},{10,-10}},
          rotation=90,
          origin={-8,-30})));
    Fluid.Pipes.InsulatedPipe ID_2_hot(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
      annotation (Placement(transformation(extent={{-18,-92},{-38,-72}})));
    Fluid.Pipes.InsulatedPipe ID_2_cold(T_amb=system.T_ambient, energyDynamics=
          Modelica.Fluid.Types.Dynamics.FixedInitial)
      annotation (Placement(transformation(extent={{-36,-68},{-16,-48}})));
    Fluid.Pipes.InsulatedPipe ID_1_cold(
      T_amb=system.T_ambient,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)                   annotation (Placement(transformation(
          extent={{10,-10},{-10,10}},
          rotation=-90,
          origin={-46,-34})));
    Fluid.Pipes.InsulatedPipe ID_1_hot(
      T_amb=system.T_ambient,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)                  annotation (Placement(transformation(
          extent={{-10,-10},{10,10}},
          rotation=-90,
          origin={-74,-34})));
    Modelica.Blocks.Noise.NormalNoise normalNoise1(samplePeriod=30, sigma=3)
      annotation (Placement(transformation(extent={{-194,30},{-176,48}})));
    Modelica.Blocks.Math.Add add
      annotation (Placement(transformation(extent={{-152,16},{-132,36}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array(table=[0,
          0; 900,-1.5; 1800,-1.5; 2700,-1.5; 3600,0; 4500,0; 5400,0; 6300,-1.5;
          7200,-2.5; 8100,-1.5; 9000,0; 9900,1.5; 10800,2.5; 11700,1.5; 12600,0;
          13500,-2.5; 14400,0; 15300,0; 16200,2.5; 17100,0; 18000,0])
      annotation (Placement(transformation(extent={{-176,-40},{-156,-20}})));
    inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
        fixedSeed=4345)
      annotation (Placement(transformation(extent={{-28,68},{-14,82}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array(table=[0,
          303.15; 900,303.15; 1800,303.15; 2700,303.15; 3600,303.15; 4500,
          303.15; 5400,303.15; 6300,303.15; 7200,303.15; 8100,303.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,303.15; 13500,
          303.15; 14400,303.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15])
      annotation (Placement(transformation(extent={{-196,-4},{-176,16}})));
    Fluid.Sources.Boundary_pT bou(
      T=313.15,
      nPorts=1,
      redeclare final package Medium = Media.Water)
      annotation (Placement(transformation(extent={{158,-84},{138,-64}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array1(table=[0,
          0; 900,3; 1800,3; 2700,3; 3600,0; 4500,0; 5400,0; 6300,3; 7200,5;
          8100,3; 9000,0; 9900,-3; 10800,-5; 11700,-3; 12600,0; 13500,5; 14400,
          0; 15300,0; 16200,-5; 17100,0; 18000,0])
      annotation (Placement(transformation(extent={{22,46},{42,66}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise2(samplePeriod=30, sigma=3)
      annotation (Placement(transformation(extent={{64,78},{82,96}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array1(table=[0,
          273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
          3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15 +
          45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,273.15
           + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 + 45; 13500,
          273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,273.15 + 30;
          17100,273.15 + 30; 18000,273.15 + 30])
      annotation (Placement(transformation(extent={{30,76},{50,96}})));
    Modelica.Blocks.Math.Add add1
      annotation (Placement(transformation(extent={{-10,-10},{10,10}},
          rotation=-90,
          origin={60,50})));
    Modelica.Blocks.Math.Add add2
      annotation (Placement(transformation(extent={{-10,-10},{10,10}},
          rotation=-90,
          origin={188,46})));
    Modelica.Blocks.Noise.NormalNoise normalNoise3(samplePeriod=30, sigma=3)
      annotation (Placement(transformation(extent={{188,72},{206,90}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array2(table=[0,
          273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
          3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15 +
          45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,273.15
           + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 + 45; 13500,
          273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,273.15 + 30;
          17100,273.15 + 30; 18000,273.15 + 30])
      annotation (Placement(transformation(extent={{148,68},{168,88}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array2(table=[0,
          0; 900,3; 1800,3; 2700,3; 3600,0; 4500,0; 5400,0; 6300,3; 7200,5;
          8100,3; 9000,0; 9900,-3; 10800,-5; 11700,-3; 12600,0; 13500,5; 14400,
          0; 15300,0; 16200,-5; 17100,0; 18000,0])
      annotation (Placement(transformation(extent={{120,50},{140,70}})));
    inner Modelica.Fluid.System system(T_ambient=285.15)
      annotation (Placement(transformation(extent={{188,-112},{208,-92}})));
  equation
    connect(ID_1_cold.port_b, Prosumer_1_heat_transfer_station.cold_prim)
      annotation (Line(points={{-46,-24},{-50,-24},{-50,-10.2},{-52,-10.2}},
          color={0,127,255}));
    connect(Prosumer_1_heat_transfer_station.hot_prim, ID_1_hot.port_a)
      annotation (Line(points={{-62,-10.2},{-62,-24},{-74,-24}}, color={0,0,127}));
    connect(ID_1_hot.port_b, ID_2_hot.port_b) annotation (Line(points={{-74,-44},
            {-74,-82},{-38,-82}}, color={0,127,255}));
    connect(ID_1_cold.port_a, ID_2_cold.port_a) annotation (Line(points={{-46,
            -44},{-46,-58},{-36,-58}}, color={0,127,255}));
    connect(ID_2_cold.port_b, ID_3_cold.port_a) annotation (Line(points={{-16,
            -58},{-10,-58},{-10,-40},{-8,-40}}, color={0,127,255}));
    connect(ID_3_cold.port_b, Prosumer_2_heat_transfer_station.cold_prim)
      annotation (Line(points={{-8,-20},{-8,-12},{-20,-12},{-20,-2.2}}, color={
            0,127,255}));
    connect(ID_2_cold.port_b, ID_4_cold.port_a)
      annotation (Line(points={{-16,-58},{32,-58}}, color={0,127,255}));
    connect(ID_2_hot.port_a, ID_4_hot.port_b)
      annotation (Line(points={{-18,-82},{32,-82}}, color={0,127,255}));
    connect(ID_3_hot.port_b, ID_4_hot.port_b) annotation (Line(points={{24,-40},
            {24,-82},{32,-82}}, color={0,127,255}));
    connect(ID_5_cold.port_b, Prosumer_3_heat_transfer_station.cold_prim)
      annotation (Line(points={{62,-24},{62,-14},{88,-14},{88,-4.2}}, color={0,
            127,255}));
    connect(ID_5_cold.port_a, ID_4_cold.port_b) annotation (Line(points={{62,
            -44},{62,-58},{52,-58}}, color={0,127,255}));
    connect(Prosumer_3_heat_transfer_station.hot_prim, ID_5_hot.port_a)
      annotation (Line(points={{98,-4.2},{98,-18},{94,-18},{94,-23}}, color={0,
            127,255}));
    connect(ID_5_hot.port_b, ID_4_hot.port_a) annotation (Line(points={{94,-43},
            {94,-82},{52,-82}}, color={0,127,255}));
    connect(add.y, pID_Q_T_weighted.T_sec_sim)
      annotation (Line(points={{-131,26},{-126,26},{-126,22},{-110,22}},
                                                     color={0,0,127}));
    connect(pID_Q_T_weighted.V_dot_sec, Prosumer_1_heat_transfer_station.V_dot_sec)
      annotation (Line(points={{-110,18},{-114,18},{-114,44},{-56,44},{-56,26}},
          color={0,0,127}));
    connect(pID_Q_T_weighted.V_dot_prim, Prosumer_1_heat_transfer_station.V_dot_prim)
      annotation (Line(points={{-110,6},{-114,6},{-114,-14},{-56,-14},{-56,-10}},
          color={0,0,127}));
    connect(Prosumer_1_heat_transfer_station.T_prim_hot, pID_Q_T_weighted.T_prim_hot)
      annotation (Line(points={{-64,-10},{-104,-10},{-104,2},{-103,2}}, color={
            0,0,127}));
    connect(Prosumer_1_heat_transfer_station.T_sec_cold, pID_Q_T_weighted.T_sec_cold)
      annotation (Line(points={{-48,26},{-48,32},{-98,32},{-98,22},{-97,22}},
          color={0,0,127}));
    connect(pID_Q_T_weighted.T_sec_hot, Prosumer_1_heat_transfer_station.T_sec_hot)
      annotation (Line(points={{-103,22},{-104,22},{-104,40},{-64,40},{-64,26}},
          color={0,0,127}));
    connect(pID_Q_T_weighted.T_sec_set, Prosumer_1_heat_transfer_station.T_sec_in_set)
      annotation (Line(points={{-90,22},{-76,22}}, color={0,0,127}));
    connect(pID_Q_T_weighted.V_dot_sec_set, Prosumer_1_heat_transfer_station.V_dot_sec_set)
      annotation (Line(points={{-90,18},{-76,18}}, color={0,0,127}));
    connect(pID_Q_T_weighted.pi_set, Prosumer_1_heat_transfer_station.pi)
      annotation (Line(points={{-90,14},{-84,14},{-84,12},{-76,12}}, color={255,
            127,0}));
    connect(pID_Q_T_weighted.mu_set, Prosumer_1_heat_transfer_station.mu)
      annotation (Line(points={{-90,10},{-84,10},{-84,8},{-76,8}}, color={255,
            127,0}));
    connect(pID_Q_T_weighted.u_set, Prosumer_1_heat_transfer_station.u_set)
      annotation (Line(points={{-90,6},{-84,6},{-84,4},{-76,4}}, color={0,0,127}));
    connect(pID_Q_T_weighted.kappa_set, Prosumer_1_heat_transfer_station.kappa_set)
      annotation (Line(points={{-90,2},{-84,2},{-84,0},{-76,0}}, color={0,0,127}));
    connect(pID_Q_T_weighted.Qdot_is, Prosumer_1_heat_transfer_station.Q_dot_trnsf_is)
      annotation (Line(points={{-110,10},{-118,10},{-118,-6},{-76,-6}}, color={
            0,0,127}));
    connect(pID_Q_T_weighted.T_prim_cold, Prosumer_1_heat_transfer_station.T_prim_cold)
      annotation (Line(points={{-97,2},{-98,2},{-98,-12},{-48,-12},{-48,-10}},
          color={0,0,127}));
    connect(Q_management_array.y, pID_Q_T_weighted.Qdot_set) annotation (Line(
          points={{-155,-30},{-134,-30},{-134,14},{-110,14}}, color={0,0,127}));
    connect(T_sec_in_array.y, add.u2) annotation (Line(points={{-175,6},{-166,6},
            {-166,20},{-154,20}}, color={0,0,127}));
    connect(normalNoise1.y, add.u1) annotation (Line(points={{-175.1,39},{-168,
            39},{-168,32},{-154,32}},          color={0,0,127}));
    connect(bou.ports[1], ID_4_hot.port_a) annotation (Line(points={{138,-74},{
            118,-74},{118,-82},{52,-82}}, color={0,127,255}));
    connect(Prosumer_2_heat_transfer_station.hot_prim, ID_3_hot.port_a)
      annotation (Line(points={{-10,-2.2},{-10,-8},{8,-8},{8,-20},{24,-20}},
          color={0,127,255}));
    connect(pID_Q_T_weighted2.T_sec_set, Prosumer_2_heat_transfer_station.T_sec_in_set)
      annotation (Line(points={{18,30},{4,30}}, color={0,0,127}));
    connect(Prosumer_2_heat_transfer_station.V_dot_sec_set, pID_Q_T_weighted2.V_dot_sec_set)
      annotation (Line(points={{4,26},{18,26}}, color={0,0,127}));
    connect(pID_Q_T_weighted2.pi_set, Prosumer_2_heat_transfer_station.pi)
      annotation (Line(points={{18,22},{12,22},{12,20},{4,20}}, color={255,127,
            0}));
    connect(pID_Q_T_weighted2.mu_set, Prosumer_2_heat_transfer_station.mu)
      annotation (Line(points={{18,18},{12,18},{12,16},{4,16}}, color={255,127,
            0}));
    connect(Prosumer_2_heat_transfer_station.u_set, pID_Q_T_weighted2.u_set)
      annotation (Line(points={{4,12},{12,12},{12,14},{18,14}}, color={0,0,127}));
    connect(pID_Q_T_weighted2.kappa_set, Prosumer_2_heat_transfer_station.kappa_set)
      annotation (Line(points={{18,10},{12,10},{12,8},{4,8}}, color={0,0,127}));
    connect(pID_Q_T_weighted2.T_sec_cold, Prosumer_2_heat_transfer_station.T_sec_cold)
      annotation (Line(points={{25,30},{26,30},{26,36},{-24,36},{-24,34}},
          color={0,0,127}));
    connect(Prosumer_2_heat_transfer_station.T_sec_hot, pID_Q_T_weighted2.T_sec_hot)
      annotation (Line(points={{-8,34},{-8,38},{30,38},{30,30},{31,30}}, color=
            {0,0,127}));
    connect(pID_Q_T_weighted2.V_dot_sec, Prosumer_2_heat_transfer_station.V_dot_sec)
      annotation (Line(points={{38,26},{42,26},{42,40},{-16,40},{-16,34}},
          color={0,0,127}));
    connect(pID_Q_T_weighted2.T_prim_cold, Prosumer_2_heat_transfer_station.T_prim_cold)
      annotation (Line(points={{25,10},{24,10},{24,-10},{-24,-10},{-24,-2}},
          color={0,0,127}));
    connect(Prosumer_2_heat_transfer_station.T_prim_hot, pID_Q_T_weighted2.T_prim_hot)
      annotation (Line(points={{-8,-2},{32,-2},{32,10},{31,10}}, color={0,0,127}));
    connect(pID_Q_T_weighted2.V_dot_prim, Prosumer_2_heat_transfer_station.V_dot_prim)
      annotation (Line(points={{38,14},{42,14},{42,-6},{-16,-6},{-16,-2}},
          color={0,0,127}));
    connect(Prosumer_2_heat_transfer_station.Q_dot_trnsf_is, pID_Q_T_weighted2.Qdot_is)
      annotation (Line(points={{4,2},{44,2},{44,18},{38,18}}, color={0,0,127}));
    connect(add1.y, pID_Q_T_weighted2.T_sec_sim)
      annotation (Line(points={{60,39},{60,30},{38,30}}, color={0,0,127}));
    connect(pID_Q_T_weighted2.Qdot_set, Q_management_array1.y) annotation (Line(
          points={{38,22},{46,22},{46,56},{43,56}}, color={0,0,127}));
    connect(T_sec_in_array1.y, add1.u2) annotation (Line(points={{51,86},{54,86},
            {54,62},{54,62}}, color={0,0,127}));
    connect(normalNoise2.y, add1.u1) annotation (Line(points={{82.9,87},{82.9,
            86},{86,86},{86,72},{66,72},{66,62}}, color={0,0,127}));
    connect(Prosumer_3_heat_transfer_station.T_sec_in_set, pID_Q_T_weighted1.T_sec_set)
      annotation (Line(points={{112,28},{124,28},{124,30},{134,30}}, color={0,0,
            127}));
    connect(pID_Q_T_weighted1.V_dot_sec_set, Prosumer_3_heat_transfer_station.V_dot_sec_set)
      annotation (Line(points={{134,26},{124,26},{124,24},{112,24}}, color={0,0,
            127}));
    connect(Prosumer_3_heat_transfer_station.pi, pID_Q_T_weighted1.pi_set)
      annotation (Line(points={{112,18},{124,18},{124,22},{134,22}}, color={255,
            127,0}));
    connect(pID_Q_T_weighted1.mu_set, Prosumer_3_heat_transfer_station.mu)
      annotation (Line(points={{134,18},{124,18},{124,14},{112,14}}, color={255,
            127,0}));
    connect(Prosumer_3_heat_transfer_station.u_set, pID_Q_T_weighted1.u_set)
      annotation (Line(points={{112,10},{124,10},{124,14},{134,14}}, color={0,0,
            127}));
    connect(pID_Q_T_weighted1.kappa_set, Prosumer_3_heat_transfer_station.kappa_set)
      annotation (Line(points={{134,10},{124,10},{124,6},{112,6}}, color={0,0,
            127}));
    connect(Prosumer_3_heat_transfer_station.T_prim_cold, pID_Q_T_weighted1.T_prim_cold)
      annotation (Line(points={{84,-4},{84,-8},{140,-8},{140,10},{141,10}},
          color={0,0,127}));
    connect(pID_Q_T_weighted1.V_dot_prim, Prosumer_3_heat_transfer_station.V_dot_prim)
      annotation (Line(points={{154,14},{158,14},{158,-6},{92,-6},{92,-4}},
          color={0,0,127}));
    connect(Prosumer_3_heat_transfer_station.T_prim_hot, pID_Q_T_weighted1.T_prim_hot)
      annotation (Line(points={{100,-4},{146,-4},{146,10},{147,10}}, color={0,0,
            127}));
    connect(Prosumer_3_heat_transfer_station.T_sec_hot, pID_Q_T_weighted1.T_sec_hot)
      annotation (Line(points={{100,32},{100,34},{146,34},{146,30},{147,30}},
          color={0,0,127}));
    connect(pID_Q_T_weighted1.V_dot_sec, Prosumer_3_heat_transfer_station.V_dot_sec)
      annotation (Line(points={{154,26},{158,26},{158,36},{92,36},{92,32}},
          color={0,0,127}));
    connect(Prosumer_3_heat_transfer_station.T_sec_cold, pID_Q_T_weighted1.T_sec_cold)
      annotation (Line(points={{84,32},{84,38},{140,38},{140,30},{141,30}},
          color={0,0,127}));
    connect(Prosumer_3_heat_transfer_station.Q_dot_trnsf_is, pID_Q_T_weighted1.Qdot_is)
      annotation (Line(points={{112,0},{160,0},{160,18},{154,18}}, color={0,0,
            127}));
    connect(Q_management_array2.y, pID_Q_T_weighted1.Qdot_set) annotation (Line(
          points={{141,60},{162,60},{162,22},{154,22}}, color={0,0,127}));
    connect(T_sec_in_array2.y, add2.u2) annotation (Line(points={{169,78},{176,
            78},{176,58},{182,58}}, color={0,0,127}));
    connect(normalNoise3.y, add2.u1) annotation (Line(points={{206.9,81},{206.9,
            65.5},{194,65.5},{194,58}}, color={0,0,127}));
    connect(add2.y, pID_Q_T_weighted1.T_sec_sim)
      annotation (Line(points={{188,35},{188,30},{154,30}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-200,
              -120},{220,100}})), Diagram(coordinateSystem(preserveAspectRatio=
              false, extent={{-200,-120},{220,100}}), graphics={
          Text(
            extent={{-74,52},{-46,44}},
            lineColor={28,108,200},
            textString="Prosumer1"),
          Text(
            extent={{-12,48},{16,40}},
            lineColor={28,108,200},
            textString="Prosumer2"),
          Text(
            extent={{86,46},{114,38}},
            lineColor={28,108,200},
            textString="Prosumer3")}));
  end Fabi_Trial;
end Fabian;
