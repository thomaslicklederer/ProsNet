within ProsNet;
package Fabian

  model Test1
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end Test1;

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

  package Tests "Testing the new models and especially controllers"

    model Test_PID_contr_prod_cons "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
        redeclare Fluid.Pumps.Data.Pumps.Wilo.StratosMAXO50slash05to14
          feedinPer,
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
        annotation (Placement(transformation(extent={{-202,2},{-172,38}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        redeclare Fluid.Pumps.Data.Pumps.Wilo.StratosMAXO50slash05to14
          feedinPer,
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
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

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
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
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
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
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
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            0; 900,8; 1800,8; 2700,8; 3600,0; 4500,0; 5400,0; 6300,8; 7200,12;
            8100,8; 9000,0; 9900,-8; 10800,-12; 11700,-8; 12600,0; 13500,12;
            14400,0; 15300,0; 16200,-12; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            0; 900,-8; 1800,-8; 2700,-8; 3600,0; 4500,0; 5400,0; 6300,-8; 7200,
            -12; 8100,-8; 9000,0; 9900,8; 10800,12; 11700,8; 12600,0; 13500,-12;
            14400,0; 15300,0; 16200,12; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{126,-6},{106,14}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{190,-6},{170,14}})));
    equation
      Losses = HOUSE1.Q_dot_trnsf_is+HOUSE2.Q_dot_trnsf_is;

      connect(pipe_hot.port_a, HOUSE1.hot_prim) annotation (Line(points={{-126,-84},
              {-188,-84},{-188,1.8}},  color={0,127,255}));
      connect(pipe_hot.port_b, HOUSE2.hot_prim) annotation (Line(points={{-106,
              -84},{-34.2667,-84},{-34.2667,-0.3}},
                                               color={0,127,255}));
      connect(pipe_cold.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,-48},
              {-50,-48},{-50,-4},{-51.6,-4},{-51.6,-0.3}}, color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold.port_b) annotation (Line(points={{-178,
              1.8},{-178,-48},{-126,-48}},
                                      color={0,127,255}));
      connect(bou.ports[1], pipe_hot.port_b)
        annotation (Line(points={{50,-84},{-106,-84}}, color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points=
              {{-226,42},{-226,52},{-210,52},{-210,34},{-202,34}}, color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,30},{-202,30}}, color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-202,24}}, color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,13.2},
              {-210,13.2},{-210,20},{-202,20}}, color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-202,16},
              {-208,16},{-208,3.6},{-226,3.6}}, color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-202,
              12},{-212,12},{-212,-16},{-226,-16},{-226,-6}}, color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-190,
              38},{-190,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}}, color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={
              {-174,38},{-174,44},{-218,44},{-218,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{-182,
              38},{-182,58},{-278,58},{-278,32.4},{-268,32.4}}, color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={
              {-190,2},{-190,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points=
             {{-174,2},{-174,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={
              {-268,3.6},{-278,3.6},{-278,-22},{-182,-22},{-182,2}}, color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points=
              {{-202,6},{-214,6},{-214,-24},{-280,-24},{-280,13.2},{-268,13.2}},
            color={0,0,127}));
      connect(Controller_2.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(points=
              {{22,54},{22,64},{0,64},{0,48},{-10,48}}, color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (Line(
            points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, HOUSE2.mu) annotation (Line(points={{22,25.2},{0,
              25.2},{0,27},{-10,27}}, color={255,127,0}));
      connect(Controller_2.u_set, HOUSE2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(Controller_2.kappa_set, HOUSE2.kappa_set) annotation (Line(points={{
              22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}}, color={0,0,
              127}));
      connect(HOUSE2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(points={{-30.8,
              54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}}, color={0,0,127}));
      connect(HOUSE2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(points={{
              -58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},  color={0,0,127}));
      connect(HOUSE2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(points={{
              -44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(points={
              {-30.8,0},{-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(points={{
              -58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},  color={0,0,127}));
      connect(HOUSE2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(points={{
              -44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},  color={
              0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(points=
              {{-10,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}}, color={0,0,
              127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{105,4},{84,4},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{181,72},{168,72},{
              168,56},{158,56}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{135,50},{86,
              50},{86,56},{64,56},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{169,4},{160,4},
              {160,34},{166,34},{166,44},{158,44}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
                -200},{140,100}})), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-320,-200},{140,100}}), graphics={
            Text(
              extent={{-242,78},{-174,64}},
              textColor={238,46,47},
              textString="House1"),
            Text(
              extent={{-26,92},{42,78}},
              textColor={28,108,200},
              textString="House2"),
            Text(
              extent={{-134,-30},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-106},{-98,-114}},
              textColor={238,46,47},
              textString="hot")}),
        experiment(
          StartTime=6000,
          StopTime=9500,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_PID_contr_prod_cons;

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

    model Test_Controller_3_rad "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
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
        annotation (Placement(transformation(extent={{-202,2},{-172,38}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        zeta_transferstation=7.56,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-126,-94},{-106,-74}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
      Fluid.Sources.Boundary_pT bou(
        T=313.15,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{-24,-174},{-44,-154}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            0; 900,4; 1800,4; 2700,4; 3600,0; 4500,0; 5400,0; 6300,4; 7200,7;
            8100,4; 9000,0; 9900,-4; 10800,-7; 11700,-4; 12600,0; 13500,7;
            14400,0; 15300,0; 16200,-7; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            0; 900,-2; 1800,-2; 2700,-2; 3600,0; 4500,0; 5400,0; 6300,-2; 7200,
            -3.5; 8100,-2; 9000,0; 9900,2; 10800,3.5; 11700,2; 12600,0; 13500,-3.5;
            14400,0; 15300,0; 16200,3.5; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
        sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{132,32},{112,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{166,-14},{146,6}})));
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE3(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        zeta_transferstation=7.56,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{284,0},{232,54}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{358,6},{316,54}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise2(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
      Modelica.Blocks.Math.Add add2
        annotation (Placement(transformation(extent={{426,32},{406,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{460,-14},{440,6}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{202,-58},{182,-38}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{182,-94},{202,-74}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
            0; 900,-2; 1800,-2; 2700,-2; 3600,0; 4500,0; 5400,0; 6300,-2; 7200,
            -3.5; 8100,-2; 9000,0; 9900,2; 10800,3.5; 11700,2; 12600,0; 13500,-3.5;
            14400,0; 15300,0; 16200,3.5; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{422,-16},{402,4}})));
    equation
      Losses = HOUSE1.Q_dot_trnsf_is+HOUSE2.Q_dot_trnsf_is;

      connect(pipe_hot_12.port_a, HOUSE1.hot_prim) annotation (Line(points={{-126,-84},
              {-188,-84},{-188,1.8}}, color={0,127,255}));
      connect(pipe_hot_12.port_b, HOUSE2.hot_prim) annotation (Line(points={{-106,
              -84},{-34.2667,-84},{-34.2667,-0.3}}, color={0,127,255}));
      connect(pipe_cold_12.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,
              -48},{-52,-48},{-52,-20},{-51.6,-20},{-51.6,-0.3}}, color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold_12.port_b) annotation (Line(points={{-178,
              1.8},{-178,-48},{-126,-48}}, color={0,127,255}));
      connect(bou.ports[1], pipe_hot_12.port_b) annotation (Line(points={{-44,-164},
              {-80,-164},{-80,-84},{-106,-84}}, color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points=
              {{-226,42},{-226,52},{-210,52},{-210,34},{-202,34}}, color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,30},{-202,30}}, color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-202,24}}, color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,13.2},
              {-210,13.2},{-210,20},{-202,20}}, color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-202,16},
              {-208,16},{-208,3.6},{-226,3.6}}, color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-202,
              12},{-212,12},{-212,-16},{-226,-16},{-226,-6}}, color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-190,
              38},{-190,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}}, color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={
              {-174,38},{-174,44},{-218,44},{-218,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{-182,
              38},{-182,58},{-278,58},{-278,32.4},{-268,32.4}}, color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={
              {-190,2},{-190,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points=
             {{-174,2},{-174,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={
              {-268,3.6},{-278,3.6},{-278,-22},{-182,-22},{-182,2}}, color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points=
              {{-202,6},{-214,6},{-214,-24},{-280,-24},{-280,13.2},{-268,13.2}},
            color={0,0,127}));
      connect(Controller_2.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(points=
              {{22,54},{22,64},{0,64},{0,48},{-10,48}}, color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (Line(
            points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, HOUSE2.mu) annotation (Line(points={{22,25.2},{0,
              25.2},{0,27},{-10,27}}, color={255,127,0}));
      connect(Controller_2.u_set, HOUSE2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(Controller_2.kappa_set, HOUSE2.kappa_set) annotation (Line(points={{
              22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}}, color={0,0,
              127}));
      connect(HOUSE2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(points={{-30.8,
              54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}}, color={0,0,127}));
      connect(HOUSE2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(points={{
              -58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},  color={0,0,127}));
      connect(HOUSE2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(points={{
              -44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(points={
              {-30.8,0},{-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(points={{
              -58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},  color={0,0,127}));
      connect(HOUSE2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(points={{
              -44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},  color={
              0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(points=
              {{-10,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}}, color={0,0,
              127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{103,0},{84,0},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
              144,48},{134,48}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{80,
              42},{80,54},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
              -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
      connect(Controller_3.T_sec_set, HOUSE3.T_sec_in_set) annotation (Line(points=
              {{316,54},{316,64},{294,64},{294,48},{284,48}}, color={0,0,127}));
      connect(Controller_3.V_dot_sec_set, HOUSE3.V_dot_sec_set) annotation (Line(
            points={{316,44.4},{294,44.4},{294,42},{284,42}}, color={0,0,127}));
      connect(Controller_3.pi_set, HOUSE3.pi)
        annotation (Line(points={{316,34.8},{284,33}}, color={255,127,0}));
      connect(Controller_3.mu_set, HOUSE3.mu) annotation (Line(points={{316,25.2},{
              294,25.2},{294,27},{284,27}}, color={255,127,0}));
      connect(Controller_3.u_set, HOUSE3.u_set) annotation (Line(points={{316,15.6},
              {294,15.6},{294,21},{284,21}}, color={0,0,127}));
      connect(Controller_3.kappa_set, HOUSE3.kappa_set) annotation (Line(points={{
              316,6},{308,6},{308,-6},{292,-6},{292,14},{284,14},{284,15}}, color={
              0,0,127}));
      connect(HOUSE3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(points={{
              263.2,54},{263.2,68},{342,68},{342,58},{343.3,58},{343.3,54}}, color=
              {0,0,127}));
      connect(HOUSE3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(points={{235.467,
              54},{238,54},{238,66},{330.7,66},{330.7,54}},          color={0,0,127}));
      connect(HOUSE3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(points={{249.333,
              54},{249.333,72},{368,72},{368,44.4},{358,44.4}},         color={0,0,
              127}));
      connect(HOUSE3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(points={
              {263.2,0},{263.2,-10},{342,-10},{342,2},{343.3,2},{343.3,6}}, color={
              0,0,127}));
      connect(HOUSE3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(points={{235.467,
              0},{234,0},{234,-16},{330.7,-16},{330.7,6}},          color={0,0,127}));
      connect(HOUSE3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(points={{249.333,
              0},{248,0},{248,-14},{368,-14},{368,15.6},{358,15.6}},          color=
             {0,0,127}));
      connect(HOUSE3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(points=
              {{284,6},{290,6},{290,-18},{370,-18},{370,25.2},{358,25.2}}, color={0,
              0,127}));
      connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
              438,48},{428,48}}, color={0,0,127}));
      connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
              374,42},{374,54},{358,54}}, color={0,0,127}));
      connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
              -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
      connect(pipe_cold_12.port_a, pipe_cold_23.port_b)
        annotation (Line(points={{-106,-48},{182,-48}}, color={0,127,255}));
      connect(pipe_hot_12.port_b, pipe_hot_23.port_a)
        annotation (Line(points={{-106,-84},{-32,-84},{-32,-86},{44,-86},{44,
              -84},{182,-84}},                          color={0,127,255}));
      connect(pipe_cold_23.port_a, HOUSE3.cold_prim) annotation (Line(points={{202,
              -48},{240,-48},{240,-8},{242.4,-8},{242.4,-0.3}}, color={0,127,255}));
      connect(HOUSE3.hot_prim, pipe_hot_23.port_b) annotation (Line(points={{259.733,
              -0.3},{256,-0.3},{256,-84},{202,-84}},         color={0,127,255}));
      connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
            points={{401,-6},{376,-6},{376,34.8},{358,34.8}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
                -220},{780,100}})), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-320,-220},{780,100}}), graphics={
            Text(
              extent={{-214,82},{-146,68}},
              textColor={0,0,0},
              textString="House1"),
            Text(
              extent={{-62,84},{6,70}},
              textColor={0,0,0},
              textString="House2"),
            Text(
              extent={{-134,-30},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-104},{-98,-112}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{232,84},{300,70}},
              textColor={0,0,0},
              textString="House3")}),
        experiment(
          StopTime=18900,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_Controller_3_rad;

    model Test_Controller_3_rad_highkW_error
      "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=7.73,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        d_transferpipe=0.0539,
        R_ins_transferpipe=7.56,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-202,6},{-172,42}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=4.19,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        zeta_transferstation=7.56,
        d_transferpipe=0.0419,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-128,-94},{-108,-74}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-106,-58},{-126,-38}})));
      Fluid.Sources.Boundary_pT bou(
        T=313.15,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{-24,-174},{-44,-154}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            0; 900,40; 1800,40; 2700,40; 3600,0; 4500,0; 5400,0; 6300,40; 7200,
            70; 8100,40; 9000,0; 9900,-40; 10800,-70; 11700,-40; 12600,0; 13500,
            70; 14400,0; 15300,0; 16200,-70; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-316,8},{-296,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
        sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{132,32},{112,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{166,-14},{146,6}})));
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE3(
        redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=3.86,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        zeta_transferstation=7.56,
        d_transferpipe=0.0419,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{284,0},{232,54}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=10,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{358,6},{316,54}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise2(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
      Modelica.Blocks.Math.Add add2
        annotation (Placement(transformation(extent={{426,32},{406,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{460,-14},{440,6}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{202,-58},{182,-38}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=50,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{182,-94},{202,-74}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{422,-16},{402,4}})));
    equation
      Losses = HOUSE1.Q_dot_trnsf_is+HOUSE2.Q_dot_trnsf_is;

      connect(pipe_hot_12.port_a, HOUSE1.hot_prim) annotation (Line(points={{-128,
              -84},{-188,-84},{-188,5.8}},
                                      color={0,127,255}));
      connect(pipe_hot_12.port_b, HOUSE2.hot_prim) annotation (Line(points={{-108,
              -84},{-34.2667,-84},{-34.2667,-0.3}}, color={0,127,255}));
      connect(pipe_cold_12.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,
              -48},{-52,-48},{-52,-20},{-51.6,-20},{-51.6,-0.3}}, color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold_12.port_b) annotation (Line(points={{-178,
              5.8},{-178,-48},{-126,-48}}, color={0,127,255}));
      connect(bou.ports[1], pipe_hot_12.port_b) annotation (Line(points={{-44,
              -164},{-80,-164},{-80,-84},{-108,-84}},
                                                color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points={{-226,42},
              {-226,52},{-210,52},{-210,38},{-202,38}},            color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,34},{-202,34}}, color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-202,28}}, color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,24},{-202,24}},
                                                color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-202,20},
              {-208,20},{-208,3.6},{-226,3.6}}, color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-202,16},
              {-212,16},{-212,-16},{-226,-16},{-226,-6}},     color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-190,42},
              {-190,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}},     color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={{-174,42},
              {-174,44},{-218,44},{-218,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{-182,42},
              {-182,58},{-278,58},{-278,32.4},{-268,32.4}},     color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={{-190,6},
              {-190,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points={{-174,6},
              {-174,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={{-268,
              3.6},{-278,3.6},{-278,-22},{-182,-22},{-182,6}},       color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points={{-202,10},
              {-214,10},{-214,-24},{-280,-24},{-280,13.2},{-268,13.2}},
            color={0,0,127}));
      connect(Controller_2.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(points=
              {{22,54},{22,64},{0,64},{0,48},{-10,48}}, color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (Line(
            points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, HOUSE2.mu) annotation (Line(points={{22,25.2},{0,
              25.2},{0,27},{-10,27}}, color={255,127,0}));
      connect(Controller_2.u_set, HOUSE2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(Controller_2.kappa_set, HOUSE2.kappa_set) annotation (Line(points={{
              22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}}, color={0,0,
              127}));
      connect(HOUSE2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(points={{-30.8,
              54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}}, color={0,0,127}));
      connect(HOUSE2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(points={{
              -58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},  color={0,0,127}));
      connect(HOUSE2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(points={{
              -44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(points={
              {-30.8,0},{-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(points={{
              -58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},  color={0,0,127}));
      connect(HOUSE2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(points={{
              -44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},  color={
              0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(points=
              {{-10,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}}, color={0,0,
              127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-295,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{103,0},{84,0},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
              144,48},{134,48}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{80,
              42},{80,54},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
              -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
      connect(Controller_3.T_sec_set, HOUSE3.T_sec_in_set) annotation (Line(points=
              {{316,54},{316,64},{294,64},{294,48},{284,48}}, color={0,0,127}));
      connect(Controller_3.V_dot_sec_set, HOUSE3.V_dot_sec_set) annotation (Line(
            points={{316,44.4},{294,44.4},{294,42},{284,42}}, color={0,0,127}));
      connect(Controller_3.pi_set, HOUSE3.pi)
        annotation (Line(points={{316,34.8},{284,33}}, color={255,127,0}));
      connect(Controller_3.mu_set, HOUSE3.mu) annotation (Line(points={{316,25.2},{
              294,25.2},{294,27},{284,27}}, color={255,127,0}));
      connect(Controller_3.u_set, HOUSE3.u_set) annotation (Line(points={{316,15.6},
              {294,15.6},{294,21},{284,21}}, color={0,0,127}));
      connect(Controller_3.kappa_set, HOUSE3.kappa_set) annotation (Line(points={{
              316,6},{308,6},{308,-6},{292,-6},{292,14},{284,14},{284,15}}, color={
              0,0,127}));
      connect(HOUSE3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(points={{
              263.2,54},{263.2,68},{342,68},{342,58},{343.3,58},{343.3,54}}, color=
              {0,0,127}));
      connect(HOUSE3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(points={{235.467,
              54},{238,54},{238,66},{330.7,66},{330.7,54}},          color={0,0,127}));
      connect(HOUSE3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(points={{249.333,
              54},{249.333,72},{368,72},{368,44.4},{358,44.4}},         color={0,0,
              127}));
      connect(HOUSE3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(points={
              {263.2,0},{263.2,-10},{342,-10},{342,2},{343.3,2},{343.3,6}}, color={
              0,0,127}));
      connect(HOUSE3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(points={{235.467,
              0},{234,0},{234,-16},{330.7,-16},{330.7,6}},          color={0,0,127}));
      connect(HOUSE3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(points={{249.333,
              0},{248,0},{248,-14},{368,-14},{368,15.6},{358,15.6}},          color=
             {0,0,127}));
      connect(HOUSE3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(points=
              {{284,6},{290,6},{290,-18},{370,-18},{370,25.2},{358,25.2}}, color={0,
              0,127}));
      connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
              438,48},{428,48}}, color={0,0,127}));
      connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
              374,42},{374,54},{358,54}}, color={0,0,127}));
      connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
              -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
      connect(pipe_cold_12.port_a, pipe_cold_23.port_b)
        annotation (Line(points={{-106,-48},{182,-48}}, color={0,127,255}));
      connect(pipe_hot_12.port_b, pipe_hot_23.port_a)
        annotation (Line(points={{-108,-84},{182,-84}}, color={0,127,255}));
      connect(pipe_cold_23.port_a, HOUSE3.cold_prim) annotation (Line(points={{202,
              -48},{240,-48},{240,-8},{242.4,-8},{242.4,-0.3}}, color={0,127,255}));
      connect(HOUSE3.hot_prim, pipe_hot_23.port_b) annotation (Line(points={{259.733,
              -0.3},{256,-0.3},{256,-84},{202,-84}},         color={0,127,255}));
      connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
            points={{401,-6},{376,-6},{376,34.8},{358,34.8}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
                -220},{780,100}})), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-320,-220},{780,100}}), graphics={
            Text(
              extent={{-214,82},{-146,68}},
              textColor={0,0,0},
              textString="House1"),
            Text(
              extent={{-62,84},{6,70}},
              textColor={0,0,0},
              textString="House2"),
            Text(
              extent={{-134,-30},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-106},{-98,-114}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{232,84},{300,70}},
              textColor={0,0,0},
              textString="House3")}),
        experiment(
          StopTime=18900,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_Controller_3_rad_highkW_error;

    model Test_Controller_3_rad_highkW_Q_pump_maxV_in_PID
      "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
        Q_flow_nominal=30000*6,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*6,
        m_flow_nominal_2=0.358*6,
        redeclare Fluid.Pumps.Data.Pumps.Wilo.StratosMAXO50slash05to14
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=7.73,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=7.73,
        zeta_transferstation=2,
        d_transferpipe=0.0539,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        tau_cv=10,
        T_start_cv=313.15,
        valve_prim_cons(kFixed=0))
        annotation (Placement(transformation(extent={{-190,-4},{-138,48}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare Fluid.Pumps.Data.Pumps.Wilo.StratosMAXO50slash05to14
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=4.19,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=4.19,
        zeta_transferstation=2,
        d_transferpipe=0.0419,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-132,-108},{-96,-72}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-98,-66},{-134,-30}})));
      Fluid.Sources.Boundary_pT bou(
        T=310.65,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{-14,-186},{-46,-154}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            0; 900,40; 1800,40; 2700,40; 3600,0; 4500,0; 5400,0; 6300,40; 7200,
            70; 8100,40; 9000,0; 9900,-40; 10800,-70; 11700,-40; 12600,0; 13500,
            70; 14400,0; 15300,0; 16200,-70; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
        sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{132,32},{112,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{166,-14},{146,6}})));
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE3(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare Fluid.Pumps.Data.Pumps.Wilo.StratosMAXO50slash05to14
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=3.86,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=3.86,
        zeta_transferstation=2,
        d_transferpipe=0.0419,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{284,0},{232,54}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{358,6},{316,54}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise2(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
      Modelica.Blocks.Math.Add add2
        annotation (Placement(transformation(extent={{426,32},{406,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{460,-14},{440,6}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{170,-104},{202,-72}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{422,-16},{402,4}})));
    equation
      Losses = HOUSE1.Q_dot_trnsf_is+HOUSE2.Q_dot_trnsf_is;

      connect(pipe_hot_12.port_a, HOUSE1.hot_prim) annotation (Line(points={{-132,
              -90},{-165.733,-90},{-165.733,-4.28889}},
                                      color={0,127,255}));
      connect(pipe_hot_12.port_b, HOUSE2.hot_prim) annotation (Line(points={{-96,-90},
              {-34.2667,-90},{-34.2667,-0.3}},      color={0,127,255}));
      connect(pipe_cold_12.port_a, HOUSE2.cold_prim) annotation (Line(points={{-98,-48},
              {-52,-48},{-52,-20},{-51.6,-20},{-51.6,-0.3}},      color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold_12.port_b) annotation (Line(points={{-148.4,
              -4.28889},{-148.4,-48},{-134,-48}},
                                           color={0,127,255}));
      connect(bou.ports[1], pipe_hot_12.port_b) annotation (Line(points={{-46,
              -170},{-80,-170},{-80,-90},{-96,-90}},
                                                color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points={{-226,42},
              {-226,52},{-210,52},{-210,42.2222},{-190,42.2222}},  color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,36.4444},{-190,36.4444}},
                                                                  color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-190,27.7778}},
                                                         color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,22},{-190,22}},
                                                color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-190,
              16.2222},{-190,3.6},{-226,3.6}},  color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-190,
              10.4444},{-210,10.4444},{-210,-16},{-226,-16},{-226,-6}},
                                                              color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-169.2,
              48},{-169.2,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}},
                                                                          color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={{
              -141.467,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{
              -155.333,48},{-155.333,58},{-278,58},{-278,32.4},{-268,32.4}},
                                                                color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={{-169.2,
              -4},{-169.2,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points={{
              -141.467,-4},{-218,-4},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={{-268,
              3.6},{-278,3.6},{-278,-22},{-155.333,-22},{-155.333,-4}},
                                                                     color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points={{-190,
              1.77778},{-214,1.77778},{-214,-24},{-280,-24},{-280,13.2},{-268,
              13.2}},
            color={0,0,127}));
      connect(Controller_2.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(points={{22,54},
              {22,64},{0,64},{0,48},{-10,48}},          color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (Line(
            points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, HOUSE2.mu) annotation (Line(points={{22,25.2},
              {0,25.2},{0,27},{-10,27}},
                                      color={255,127,0}));
      connect(Controller_2.u_set, HOUSE2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(Controller_2.kappa_set, HOUSE2.kappa_set) annotation (Line(points={{22,6},{
              14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}},        color={0,0,
              127}));
      connect(HOUSE2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(points={{-30.8,
              54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}}, color={0,0,127}));
      connect(HOUSE2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(points={{
              -58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},  color={0,0,127}));
      connect(HOUSE2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(points={{
              -44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(points={{-30.8,0},
              {-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}},           color={0,0,
              127}));
      connect(HOUSE2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(points={{
              -58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},  color={0,0,127}));
      connect(HOUSE2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(points={{
              -44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},  color={
              0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(points={{-10,6},
              {-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}},          color={0,0,
              127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{103,0},{84,0},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
              144,48},{134,48}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{80,
              42},{80,54},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
              -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
      connect(Controller_3.T_sec_set, HOUSE3.T_sec_in_set) annotation (Line(points=
              {{316,54},{316,64},{294,64},{294,48},{284,48}}, color={0,0,127}));
      connect(Controller_3.V_dot_sec_set, HOUSE3.V_dot_sec_set) annotation (Line(
            points={{316,44.4},{294,44.4},{294,42},{284,42}}, color={0,0,127}));
      connect(Controller_3.pi_set, HOUSE3.pi)
        annotation (Line(points={{316,34.8},{284,33}}, color={255,127,0}));
      connect(Controller_3.mu_set, HOUSE3.mu) annotation (Line(points={{316,25.2},{
              294,25.2},{294,27},{284,27}}, color={255,127,0}));
      connect(Controller_3.u_set, HOUSE3.u_set) annotation (Line(points={{316,15.6},
              {294,15.6},{294,21},{284,21}}, color={0,0,127}));
      connect(Controller_3.kappa_set, HOUSE3.kappa_set) annotation (Line(points={{
              316,6},{308,6},{308,-6},{292,-6},{292,14},{284,14},{284,15}}, color={
              0,0,127}));
      connect(HOUSE3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(points={{
              263.2,54},{263.2,68},{342,68},{342,58},{343.3,58},{343.3,54}}, color=
              {0,0,127}));
      connect(HOUSE3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(points={{235.467,
              54},{238,54},{238,66},{330.7,66},{330.7,54}},          color={0,0,127}));
      connect(HOUSE3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(points={{249.333,
              54},{249.333,72},{368,72},{368,44.4},{358,44.4}},         color={0,0,
              127}));
      connect(HOUSE3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(points={
              {263.2,0},{263.2,-10},{342,-10},{342,2},{343.3,2},{343.3,6}}, color={
              0,0,127}));
      connect(HOUSE3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(points={{235.467,
              0},{234,0},{234,-16},{330.7,-16},{330.7,6}},          color={0,0,127}));
      connect(HOUSE3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(points={{249.333,
              0},{248,0},{248,-14},{368,-14},{368,15.6},{358,15.6}},          color=
             {0,0,127}));
      connect(HOUSE3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(points=
              {{284,6},{290,6},{290,-18},{370,-18},{370,25.2},{358,25.2}}, color={0,
              0,127}));
      connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
              438,48},{428,48}}, color={0,0,127}));
      connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
              374,42},{374,54},{358,54}}, color={0,0,127}));
      connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
              -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
      connect(pipe_cold_12.port_a, pipe_cold_23.port_b)
        annotation (Line(points={{-98,-48},{42,-48},{42,-45},{168,-45}},
                                                        color={0,127,255}));
      connect(pipe_hot_12.port_b, pipe_hot_23.port_a)
        annotation (Line(points={{-96,-90},{38,-90},{38,-88},{170,-88}},
                                                        color={0,127,255}));
      connect(pipe_cold_23.port_a, HOUSE3.cold_prim) annotation (Line(points={{202,-45},
              {240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},      color={0,127,255}));
      connect(HOUSE3.hot_prim, pipe_hot_23.port_b) annotation (Line(points={{259.733,
              -0.3},{256,-0.3},{256,-88},{202,-88}},         color={0,127,255}));
      connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
            points={{401,-6},{376,-6},{376,34.8},{358,34.8}}, color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
                -220},{780,100}})), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-320,-220},{780,100}}), graphics={
            Text(
              extent={{-274,76},{-206,62}},
              textColor={0,0,0},
              textString="House1"),
            Text(
              extent={{-62,84},{6,70}},
              textColor={0,0,0},
              textString="House2"),
            Text(
              extent={{-134,-30},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-106},{-98,-114}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{232,84},{300,70}},
              textColor={0,0,0},
              textString="House3")}),
        experiment(
          StopTime=18900,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_Controller_3_rad_highkW_Q_pump_maxV_in_PID;

    model Test_Controller_3_new_dimensioning
      "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE1(
        Q_flow_nominal=30000*6,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*6,
        m_flow_nominal_2=0.358*6,
        redeclare
          Fluid.Pumps.Data.Pumps_FSP.FSPStratosMAXO40slash0dot5dash16PN6slash10
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=7.73,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=7.73,
        zeta_transferstation=2,
        d_transferpipe=0.0539,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        tau_cv=10,
        T_start_cv=313.15,
        valve_prim_cons(kFixed=0))
        annotation (Placement(transformation(extent={{-190,-4},{-138,48}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare
          Fluid.Pumps.Data.Pumps_FSP.FSPStratosMAXO40slash0dot5dash16PN6slash10
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=4.19,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=4.19,
        zeta_transferstation=2,
        d_transferpipe=0.0419,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-10,0},{-62,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{90,-168}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-132,-108},{-96,-72}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-98,-66},{-134,-30}})));
      Fluid.Sources.Boundary_pT bou(
        T=310.65,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{-14,-186},{-46,-154}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45;
            3600,273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15
             + 45; 7200,273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,
            273.15 + 30; 10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 +
            45; 13500,273.15 + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,
            273.15 + 30; 17100,273.15 + 30; 18000,273.15 + 30])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            0; 900,40; 1800,40; 2700,40; 3600,0; 4500,0; 5400,0; 6300,40; 7200,
            70; 8100,40; 9000,0; 9900,-40; 10800,-70; 11700,-40; 12600,0; 13500,
            70; 14400,0; 15300,0; 16200,-70; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
        sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{132,32},{112,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{166,-14},{146,6}})));
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE3(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare
          Fluid.Pumps.Data.Pumps_FSP.FSPStratosMAXO40slash0dot5dash16PN6slash10
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=3.86,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=3.86,
        zeta_transferstation=2,
        d_transferpipe=0.0419,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{284,0},{232,54}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{358,6},{316,54}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise2(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
      Modelica.Blocks.Math.Add add2
        annotation (Placement(transformation(extent={{426,32},{406,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{460,-14},{440,6}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=1,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{170,-104},{202,-72}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{422,-16},{402,4}})));
      Under_Development.new_prosumer_models.heat_transfer_station HOUSE4(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare
          Fluid.Pumps.Data.Pumps_FSP.FSPStratosMAXO40slash0dot5dash16PN6slash10
          feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=3.86,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=3.86,
        zeta_transferstation=2,
        d_transferpipe=0.0419,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{594,-4},{542,50}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_4(
        Delta_T_norm=3,
        T_prim_hot_des=316.65,
        T_sec_hot_des=313.15,
        DeltaT_prim_des=14,
        DeltaT_sec_des=10,
        V_dot_sec_max=200,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI)
        annotation (Placement(transformation(extent={{668,2},{626,50}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise3(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{782,50},{762,70}})));
      Modelica.Blocks.Math.Add add3
        annotation (Placement(transformation(extent={{736,28},{716,48}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_4(table=[0,
            273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30;
            3600,273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15
             + 30; 7200,273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,
            273.15 + 45; 10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 +
            30; 13500,273.15 + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,
            273.15 + 45; 17100,273.15 + 45; 18000,273.15 + 45])
        annotation (Placement(transformation(extent={{770,-18},{750,2}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_4(table=[0,
            0; 900,-20; 1800,-20; 2700,-20; 3600,0; 4500,0; 5400,0; 6300,-20;
            7200,-35; 8100,-20; 9000,0; 9900,20; 10800,35; 11700,20; 12600,0;
            13500,-35; 14400,0; 15300,0; 16200,35; 17100,0; 18000,0])
        annotation (Placement(transformation(extent={{732,-20},{712,0}})));
    equation
      Losses = HOUSE1.Q_dot_trnsf_is+HOUSE2.Q_dot_trnsf_is;

      connect(pipe_hot_12.port_a, HOUSE1.hot_prim) annotation (Line(points={{-132,
              -90},{-165.733,-90},{-165.733,-4.28889}},
                                      color={0,127,255}));
      connect(pipe_hot_12.port_b, HOUSE2.hot_prim) annotation (Line(points={{-96,-90},
              {-34.2667,-90},{-34.2667,-0.3}},      color={0,127,255}));
      connect(pipe_cold_12.port_a, HOUSE2.cold_prim) annotation (Line(points={{-98,-48},
              {-52,-48},{-52,-20},{-51.6,-20},{-51.6,-0.3}},      color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold_12.port_b) annotation (Line(points={{-148.4,
              -4.28889},{-148.4,-48},{-134,-48}},
                                           color={0,127,255}));
      connect(bou.ports[1], pipe_hot_12.port_b) annotation (Line(points={{-46,
              -170},{-80,-170},{-80,-90},{-96,-90}},
                                                color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points={{-226,42},
              {-226,52},{-210,52},{-210,42.2222},{-190,42.2222}},  color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,36.4444},{-190,36.4444}},
                                                                  color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-190,27.7778}},
                                                         color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,22},{-190,22}},
                                                color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-190,
              16.2222},{-190,3.6},{-226,3.6}},  color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-190,
              10.4444},{-210,10.4444},{-210,-16},{-226,-16},{-226,-6}},
                                                              color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-169.2,
              48},{-169.2,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}},
                                                                          color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={{
              -141.467,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{
              -155.333,48},{-155.333,58},{-278,58},{-278,32.4},{-268,32.4}},
                                                                color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={{-169.2,
              -4},{-169.2,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points={{
              -141.467,-4},{-218,-4},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={{-268,
              3.6},{-278,3.6},{-278,-22},{-155.333,-22},{-155.333,-4}},
                                                                     color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points={{-190,
              1.77778},{-214,1.77778},{-214,-24},{-280,-24},{-280,13.2},{-268,
              13.2}},
            color={0,0,127}));
      connect(Controller_2.T_sec_set, HOUSE2.T_sec_in_set) annotation (Line(points={{22,54},
              {22,64},{0,64},{0,48},{-10,48}},          color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, HOUSE2.V_dot_sec_set) annotation (Line(
            points={{22,44.4},{0,44.4},{0,42},{-10,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, HOUSE2.pi)
        annotation (Line(points={{22,34.8},{-10,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, HOUSE2.mu) annotation (Line(points={{22,25.2},
              {0,25.2},{0,27},{-10,27}},
                                      color={255,127,0}));
      connect(Controller_2.u_set, HOUSE2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-10,21}}, color={0,0,127}));
      connect(Controller_2.kappa_set, HOUSE2.kappa_set) annotation (Line(points={{22,6},{
              14,6},{14,-6},{-2,-6},{-2,14},{-10,14},{-10,15}},        color={0,0,
              127}));
      connect(HOUSE2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(points={{-30.8,
              54},{-30.8,68},{48,68},{48,58},{49.3,58},{49.3,54}}, color={0,0,127}));
      connect(HOUSE2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(points={{
              -58.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}},  color={0,0,127}));
      connect(HOUSE2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(points={{
              -44.6667,54},{-44.6667,72},{74,72},{74,44.4},{64,44.4}}, color={0,0,
              127}));
      connect(HOUSE2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(points={{-30.8,0},
              {-30.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}},           color={0,0,
              127}));
      connect(HOUSE2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(points={{
              -58.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}},  color={0,0,127}));
      connect(HOUSE2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(points={{
              -44.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},  color={
              0,0,127}));
      connect(HOUSE2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(points={{-10,6},
              {-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}},          color={0,0,
              127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{103,0},{84,0},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
              144,48},{134,48}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{80,
              42},{80,54},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
              -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
      connect(Controller_3.T_sec_set, HOUSE3.T_sec_in_set) annotation (Line(points=
              {{316,54},{316,64},{294,64},{294,48},{284,48}}, color={0,0,127}));
      connect(Controller_3.V_dot_sec_set, HOUSE3.V_dot_sec_set) annotation (Line(
            points={{316,44.4},{294,44.4},{294,42},{284,42}}, color={0,0,127}));
      connect(Controller_3.pi_set, HOUSE3.pi)
        annotation (Line(points={{316,34.8},{284,33}}, color={255,127,0}));
      connect(Controller_3.mu_set, HOUSE3.mu) annotation (Line(points={{316,25.2},{
              294,25.2},{294,27},{284,27}}, color={255,127,0}));
      connect(Controller_3.u_set, HOUSE3.u_set) annotation (Line(points={{316,15.6},
              {294,15.6},{294,21},{284,21}}, color={0,0,127}));
      connect(Controller_3.kappa_set, HOUSE3.kappa_set) annotation (Line(points={{
              316,6},{308,6},{308,-6},{292,-6},{292,14},{284,14},{284,15}}, color={
              0,0,127}));
      connect(HOUSE3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(points={{
              263.2,54},{263.2,68},{342,68},{342,58},{343.3,58},{343.3,54}}, color=
              {0,0,127}));
      connect(HOUSE3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(points={{235.467,
              54},{238,54},{238,66},{330.7,66},{330.7,54}},          color={0,0,127}));
      connect(HOUSE3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(points={{249.333,
              54},{249.333,72},{368,72},{368,44.4},{358,44.4}},         color={0,0,
              127}));
      connect(HOUSE3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(points={
              {263.2,0},{263.2,-10},{342,-10},{342,2},{343.3,2},{343.3,6}}, color={
              0,0,127}));
      connect(HOUSE3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(points={{235.467,
              0},{234,0},{234,-16},{330.7,-16},{330.7,6}},          color={0,0,127}));
      connect(HOUSE3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(points={{249.333,
              0},{248,0},{248,-14},{368,-14},{368,15.6},{358,15.6}},          color=
             {0,0,127}));
      connect(HOUSE3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(points=
              {{284,6},{290,6},{290,-18},{370,-18},{370,25.2},{358,25.2}}, color={0,
              0,127}));
      connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
              438,48},{428,48}}, color={0,0,127}));
      connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
              374,42},{374,54},{358,54}}, color={0,0,127}));
      connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
              -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
      connect(pipe_cold_12.port_a, pipe_cold_23.port_b)
        annotation (Line(points={{-98,-48},{42,-48},{42,-45},{168,-45}},
                                                        color={0,127,255}));
      connect(pipe_hot_12.port_b, pipe_hot_23.port_a)
        annotation (Line(points={{-96,-90},{38,-90},{38,-88},{170,-88}},
                                                        color={0,127,255}));
      connect(pipe_cold_23.port_a, HOUSE3.cold_prim) annotation (Line(points={{202,-45},
              {240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},      color={0,127,255}));
      connect(HOUSE3.hot_prim, pipe_hot_23.port_b) annotation (Line(points={{259.733,
              -0.3},{256,-0.3},{256,-88},{202,-88}},         color={0,127,255}));
      connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
            points={{401,-6},{376,-6},{376,34.8},{358,34.8}}, color={0,0,127}));
      connect(Controller_4.T_sec_set,HOUSE4. T_sec_in_set) annotation (Line(points={{626,50},
              {626,60},{604,60},{604,44},{594,44}},           color={0,0,127}));
      connect(Controller_4.V_dot_sec_set,HOUSE4. V_dot_sec_set) annotation (Line(
            points={{626,40.4},{604,40.4},{604,38},{594,38}}, color={0,0,127}));
      connect(Controller_4.pi_set,HOUSE4. pi)
        annotation (Line(points={{626,30.8},{594,29}}, color={255,127,0}));
      connect(Controller_4.mu_set,HOUSE4. mu) annotation (Line(points={{626,
              21.2},{604,21.2},{604,23},{594,23}},
                                            color={255,127,0}));
      connect(Controller_4.u_set,HOUSE4. u_set) annotation (Line(points={{626,
              11.6},{604,11.6},{604,17},{594,17}},
                                             color={0,0,127}));
      connect(Controller_4.kappa_set,HOUSE4. kappa_set) annotation (Line(points={{626,2},
              {618,2},{618,-10},{602,-10},{602,10},{594,10},{594,11}},      color={
              0,0,127}));
      connect(HOUSE4.T_sec_hot,Controller_4. T_sec_hot) annotation (Line(points={{573.2,
              50},{573.2,64},{652,64},{652,54},{653.3,54},{653.3,50}},       color=
              {0,0,127}));
      connect(HOUSE4.T_sec_cold,Controller_4. T_sec_cold) annotation (Line(points={{545.467,
              50},{548,50},{548,62},{640.7,62},{640.7,50}},          color={0,0,127}));
      connect(HOUSE4.V_dot_sec,Controller_4. V_dot_sec) annotation (Line(points={{559.333,
              50},{559.333,68},{678,68},{678,40.4},{668,40.4}},         color={0,0,
              127}));
      connect(HOUSE4.T_prim_hot,Controller_4. T_prim_hot) annotation (Line(points={{573.2,
              -4},{573.2,-14},{652,-14},{652,-2},{653.3,-2},{653.3,2}},     color={
              0,0,127}));
      connect(HOUSE4.T_prim_cold,Controller_4. T_prim_cold) annotation (Line(points={{545.467,
              -4},{544,-4},{544,-20},{640.7,-20},{640.7,2}},        color={0,0,127}));
      connect(HOUSE4.V_dot_prim,Controller_4. V_dot_prim) annotation (Line(points={{559.333,
              -4},{558,-4},{558,-18},{678,-18},{678,11.6},{668,11.6}},        color=
             {0,0,127}));
      connect(HOUSE4.Q_dot_trnsf_is,Controller_4. Qdot_is) annotation (Line(points={{594,2},
              {600,2},{600,-22},{680,-22},{680,21.2},{668,21.2}},          color={0,
              0,127}));
      connect(normalNoise3.y,add3. u1) annotation (Line(points={{761,60},{748,
              60},{748,44},{738,44}},
                                 color={0,0,127}));
      connect(add3.y,Controller_4. T_sec_sim) annotation (Line(points={{715,38},
              {684,38},{684,50},{668,50}},color={0,0,127}));
      connect(T_sec_in_array_4.y,add3. u2) annotation (Line(points={{749,-8},{
              740,-8},{740,22},{746,22},{746,32},{738,32}},
                                                        color={0,0,127}));
      connect(pipe_cold_23.port_a,HOUSE4. cold_prim) annotation (Line(points={{202,-45},
              {550,-45},{550,-12},{552.4,-12},{552.4,-4.3}},    color={0,127,255}));
      connect(HOUSE4.hot_prim, pipe_hot_23.port_b) annotation (Line(points={{569.733,
              -4.3},{566,-4.3},{566,-88},{202,-88}},         color={0,127,255}));
      connect(Q_management_array_4.y,Controller_4. Qdot_set) annotation (Line(
            points={{711,-10},{686,-10},{686,30.8},{668,30.8}},
                                                              color={0,0,127}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-320,
                -220},{780,100}})), Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-320,-220},{780,100}}), graphics={
            Text(
              extent={{-274,76},{-206,62}},
              textColor={0,0,0},
              textString="House1"),
            Text(
              extent={{-62,84},{6,70}},
              textColor={0,0,0},
              textString="House2"),
            Text(
              extent={{-134,-30},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-106},{-98,-114}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{232,84},{300,70}},
              textColor={0,0,0},
              textString="House3"),
            Text(
              extent={{542,84},{610,70}},
              textColor={0,0,0},
              textString="House4")}),
        experiment(
          StopTime=18900,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_Controller_3_new_dimensioning;

    model Test_CoSES_5_Prosumers "Producer and Consumer with Controller"
      Real Losses;

      Under_Development.new_prosumer_models.heat_transfer_station PROSUMER1(
        Q_flow_nominal=26000*1.2,
        T_a1_nominal=338.15,
        T_a2_nominal=318.15,
        m_flow_nominal_1=0.41,
        dp1_nominal=20000,
        m_flow_nominal_2=0.41,
        dp2_nominal=20000,
        redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=1.6,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=11,
        length_transfer_pipe_tot=20,
        zeta_transferstation=14.12,
        d_transferpipe=0.0273,
        R_ins_transferpipe=6.4,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        tau_cv=10,
        T_start_cv=333.15,
        valve_prim_cons(kFixed=0),
        heat_exchanger(T_a1_nominal=338.15, T_a2_nominal=318.15))
        annotation (Placement(transformation(extent={{-190,-2},{-138,50}})));

      Under_Development.new_prosumer_models.heat_transfer_station PROSUMER2(
        Q_flow_nominal=22000*1.2,
        T_a1_nominal=338.15,
        T_a2_nominal=318.15,
        m_flow_nominal_1=0.35,
        dp1_nominal=20000,
        m_flow_nominal_2=0.35,
        dp2_nominal=20000,
        redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=1.6,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=11,
        length_transfer_pipe_tot=20,
        zeta_transferstation=14.15,
        d_transferpipe=0.0273,
        R_ins_transferpipe=6.4,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=333.15,
        heat_exchanger(T_a1_nominal=PROSUMER2.T_a1_nominal, T_a2_nominal=
              PROSUMER2.T_a2_nominal))
        annotation (Placement(transformation(extent={{-12,0},{-64,54}})));

      inner Modelica.Fluid.System system(T_ambient=285.15)
        annotation (Placement(transformation(extent={{70,-188},{126,-162}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_hot_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.4,
        length=40,
        diameter=0.0273,
        zeta=3.6,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-132,-110},{-96,-74}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.4,
        length=40,
        diameter=0.0273,
        zeta=3.6,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{-96,-66},{-132,-30}})));
      Fluid.Sources.Boundary_pT bou(
        T=330.65,                   nPorts=1, redeclare final package Medium =
            Media.Water)
        annotation (Placement(transformation(extent={{-2,-198},{-46,-154}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
        Delta_T_norm=3,
        T_prim_hot_des=338.15,
        T_sec_hot_des=333.15,
        DeltaT_prim_des=10,
        DeltaT_sec_des=10,
        V_dot_sec_max=29.02,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI,
        initType=Modelica.Blocks.Types.Init.InitialOutput)
        annotation (Placement(transformation(extent={{-268,-6},{-226,42}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
            341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
            341.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,318.15; 9000,
            318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15;
            13500,318.15; 14400,318.15; 15300,318.15; 16200,341.15; 17100,
            341.15; 18000,341.15; 18900,341.15; 19800,341.15; 20700,341.15;
            21600,318.15; 22500,318.15; 23400,318.15; 24300,318.15; 25200,
            318.15; 26100,318.15; 27000,341.15; 27900,341.15; 28800,341.15;
            29700,341.15; 30600,341.15])
        annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
        Delta_T_norm=3,
        T_prim_hot_des=338.15,
        T_sec_hot_des=333.15,
        DeltaT_prim_des=10,
        DeltaT_sec_des=10,
        V_dot_sec_max=24.7,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI,
        initType=Modelica.Blocks.Types.Init.InitialOutput)
        annotation (Placement(transformation(extent={{64,6},{22,54}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
            26.54; 900,26.54; 1800,26.54; 2700,26.54; 3600,26.54; 4500,13.27;
            5400,-12.64; 6300,-25.27; 7200,-25.27; 8100,-25.27; 9000,-25.27;
            9900,-12.64; 10800,-12.64; 11700,-25.27; 12600,-25.27; 13500,-25.27;
            14400,-25.27; 15300,-12.64; 16200,13.27; 17100,26.54; 18000,26.54;
            18900,26.54; 19800,26.54; 20700,13.27; 21600,-10.16; 22500,-20.32;
            23400,-20.32; 24300,-20.32; 25200,-20.32; 26100,-10.16; 27000,10.67;
            27900,21.34; 28800,21.34; 29700,21.34; 30600,21.34])
        annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
            22.58; 900,22.58; 1800,22.58; 2700,22.58; 3600,22.58; 4500,11.29;
            5400,-10.75; 6300,-21.51; 7200,-21.51; 8100,-21.51; 9000,-21.51;
            9900,-10.75; 10800,-10.75; 11700,-21.51; 12600,-21.51; 13500,-21.51;
            14400,-21.51; 15300,-10.75; 16200,11.29; 17100,22.58; 18000,22.58;
            18900,22.58; 19800,22.58; 20700,11.29; 21600,-10.75; 22500,-21.51;
            23400,-21.51; 24300,-21.51; 25200,-21.51; 26100,-10.75; 27000,11.29;
            27900,22.58; 28800,22.58; 29700,22.58; 30600,22.58])
        annotation (Placement(transformation(extent={{124,-10},{104,10}})));
      inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
          fixedSeed=4345)
        annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
        sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
      Modelica.Blocks.Math.Add add1
        annotation (Placement(transformation(extent={{132,32},{112,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
            341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
            341.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,318.15; 9000,
            318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15;
            13500,318.15; 14400,318.15; 15300,318.15; 16200,341.15; 17100,
            341.15; 18000,341.15; 18900,341.15; 19800,341.15; 20700,341.15;
            21600,318.15; 22500,318.15; 23400,318.15; 24300,318.15; 25200,
            318.15; 26100,318.15; 27000,341.15; 27900,341.15; 28800,341.15;
            29700,341.15; 30600,341.15])
        annotation (Placement(transformation(extent={{166,-14},{146,6}})));
      Under_Development.new_prosumer_models.heat_transfer_station PROSUMER3(
        Q_flow_nominal=22000*1.2,
        T_a1_nominal=338.15,
        T_a2_nominal=318.15,
        m_flow_nominal_1=0.34,
        dp1_nominal=20000,
        m_flow_nominal_2=0.34,
        dp2_nominal=20000,
        redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=1.6,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=11,
        length_transfer_pipe_tot=20,
        zeta_transferstation=14.15,
        d_transferpipe=0.0273,
        R_ins_transferpipe=6.4,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=333.15)
        annotation (Placement(transformation(extent={{284,0},{232,54}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
        Delta_T_norm=3,
        T_prim_hot_des=338.15,
        T_sec_hot_des=333.15,
        DeltaT_prim_des=10,
        DeltaT_sec_des=10,
        V_dot_sec_max=24.4,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI,
        initType=Modelica.Blocks.Types.Init.InitialOutput)
        annotation (Placement(transformation(extent={{360,6},{318,54}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise2(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
      Modelica.Blocks.Math.Add add2
        annotation (Placement(transformation(extent={{426,32},{406,52}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
            341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
            341.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,318.15; 9000,
            318.15; 9900,318.15; 10800,341.15; 11700,341.15; 12600,341.15;
            13500,341.15; 14400,341.15; 15300,341.15; 16200,318.15; 17100,
            318.15; 18000,318.15; 18900,318.15; 19800,318.15; 20700,318.15;
            21600,318.15; 22500,318.15; 23400,318.15; 24300,318.15; 25200,
            318.15; 26100,318.15; 27000,341.15; 27900,341.15; 28800,341.15;
            29700,341.15; 30600,341.15])
        annotation (Placement(transformation(extent={{460,-14},{440,6}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_cold_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.3,
        length=40,
        diameter=0.036,
        zeta=2.5,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.3,
        length=40,
        diameter=0.036,
        zeta=2.5,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{168,-106},{202,-72}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
            17.11; 900,17.11; 1800,17.11; 2700,17.11; 3600,17.11; 4500,8.55;
            5400,-8.15; 6300,-16.29; 7200,-16.29; 8100,-16.29; 9000,-16.29;
            9900,-8.15; 10800,11.15; 11700,22.31; 12600,22.31; 13500,22.31;
            14400,22.31; 15300,11.15; 16200,-10.62; 17100,-21.24; 18000,-21.24;
            18900,-21.24; 19800,-21.24; 20700,-10.62; 21600,-10.62; 22500,-21.24;
            23400,-21.24; 24300,-21.24; 25200,-21.24; 26100,-10.62; 27000,11.15;
            27900,22.31; 28800,22.31; 29700,22.31; 30600,22.31])
        annotation (Placement(transformation(extent={{422,-16},{402,4}})));
      Under_Development.new_prosumer_models.heat_transfer_station PROSUMER4(
        Q_flow_nominal=43000*1.2,
        T_a1_nominal=338.15,
        T_a2_nominal=318.15,
        m_flow_nominal_1=0.68,
        dp1_nominal=20000,
        m_flow_nominal_2=0.68,
        dp2_nominal=20000,
        redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR35AAAEHQQE feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=2.5,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=20,
        length_transfer_pipe_tot=20,
        zeta_transferstation=18.75,
        d_transferpipe=0.036,
        R_ins_transferpipe=6.3,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=333.15)
        annotation (Placement(transformation(extent={{580,8},{528,62}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_4(
        Delta_T_norm=3,
        T_prim_hot_des=338.15,
        T_sec_hot_des=333.15,
        DeltaT_prim_des=10,
        DeltaT_sec_des=10,
        V_dot_sec_max=48.03,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI,
        initType=Modelica.Blocks.Types.Init.InitialOutput)
        annotation (Placement(transformation(extent={{654,12},{612,60}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise3(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{768,60},{748,80}})));
      Modelica.Blocks.Math.Add add3
        annotation (Placement(transformation(extent={{722,38},{702,58}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_4(table=[0,
            318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
            318.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,341.15; 9000,
            341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15;
            13500,341.15; 14400,341.15; 15300,341.15; 16200,318.15; 17100,
            318.15; 18000,318.15; 18900,318.15; 19800,318.15; 20700,318.15;
            21600,341.15; 22500,341.15; 23400,341.15; 24300,341.15; 25200,
            341.15; 26100,341.15; 27000,318.15; 27900,318.15; 28800,318.15;
            29700,318.15; 30600,318.15])
        annotation (Placement(transformation(extent={{756,-8},{736,12}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_4(table=[0,
            -41.83; 900,-41.83; 1800,-41.83; 2700,-41.83; 3600,-41.83; 4500,-20.91;
            5400,21.96; 6300,43.92; 7200,43.92; 8100,43.92; 9000,43.92; 9900,
            21.96; 10800,6.7; 11700,13.41; 12600,13.41; 13500,13.41; 14400,
            13.41; 15300,6.7; 16200,-6.38; 17100,-12.77; 18000,-12.77; 18900,-12.77;
            19800,-12.77; 20700,-6.38; 21600,21.96; 22500,43.92; 23400,43.92;
            24300,43.92; 25200,43.92; 26100,21.96; 27000,-20.91; 27900,-41.83;
            28800,-41.83; 29700,-41.83; 30600,-41.83])
        annotation (Placement(transformation(extent={{718,-10},{698,10}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_hot_34(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=5.5,
        length=49.5,
        diameter=0.0419,
        zeta=2.6,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{362,-104},{394,-72}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_cold_34(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=5.5,
        length=49.5,
        diameter=0.0419,
        zeta=2.6,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{394,-60},{360,-26}})));
      Under_Development.new_prosumer_models.heat_transfer_station PROSUMER5(
        Q_flow_nominal=22000*1.2,
        T_a1_nominal=338.15,
        T_a2_nominal=318.15,
        m_flow_nominal_1=0.34,
        dp1_nominal=20000,
        m_flow_nominal_2=0.34,
        dp2_nominal=20000,
        redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=1.6,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_cheVal=11,
        length_transfer_pipe_tot=20,
        zeta_transferstation=14.15,
        d_transferpipe=0.0273,
        R_ins_transferpipe=6.4,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
        tau_cv=10,
        T_start_cv=333.15)
        annotation (Placement(transformation(extent={{858,8},{806,62}})));

      Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_5(
        Delta_T_norm=3,
        T_prim_hot_des=338.15,
        T_sec_hot_des=333.15,
        DeltaT_prim_des=10,
        DeltaT_sec_des=10,
        V_dot_sec_max=24.4,
        k_prim_prod=1.5,
        Ti_prim_prod=35,
        alpha_prim_prod=0.4,
        k_sec_prod=1.5,
        Ti_sec_prod=35,
        alpha_sec_prod=0.8,
        k_prim_cons=1.5,
        Ti_prim_cons=35,
        alpha_prim_cons=0.8,
        k_sec_cons=1.5,
        Ti_sec_cons=35,
        alpha_sec_cons=0.4,
        controllerType=Modelica.Blocks.Types.SimpleController.PI,
        initType=Modelica.Blocks.Types.Init.InitialOutput)
        annotation (Placement(transformation(extent={{934,16},{892,64}})));
      Modelica.Blocks.Noise.NormalNoise normalNoise4(
        samplePeriod=30,
        mu=0,
        sigma=3) annotation (Placement(transformation(extent={{1046,62},{1026,
                82}})));
      Modelica.Blocks.Math.Add add4
        annotation (Placement(transformation(extent={{1000,40},{980,60}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_5(table=[0,
            318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
            318.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,341.15; 9000,
            341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15;
            13500,341.15; 14400,341.15; 15300,341.15; 16200,318.15; 17100,
            318.15; 18000,318.15; 18900,318.15; 19800,318.15; 20700,318.15;
            21600,341.15; 22500,341.15; 23400,341.15; 24300,341.15; 25200,
            341.15; 26100,341.15; 27000,318.15; 27900,318.15; 28800,318.15;
            29700,318.15; 30600,318.15])
        annotation (Placement(transformation(extent={{1034,-6},{1014,14}})));
      Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_5(table=[0,
            -21.24; 900,-21.24; 1800,-21.24; 2700,-21.24; 3600,-21.24; 4500,-10.62;
            5400,11.15; 6300,22.31; 7200,22.31; 8100,22.31; 9000,22.31; 9900,
            11.15; 10800,6.7; 11700,13.41; 12600,13.41; 13500,13.41; 14400,
            13.41; 15300,6.7; 16200,-6.38; 17100,-12.77; 18000,-12.77; 18900,-12.77;
            19800,-12.77; 20700,-6.38; 21600,11.15; 22500,22.31; 23400,22.31;
            24300,22.31; 25200,22.31; 26100,11.15; 27000,-10.62; 27900,-21.24;
            28800,-21.24; 29700,-21.24; 30600,-21.24])
        annotation (Placement(transformation(extent={{998,-8},{978,12}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_hot_45(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.4,
        length=46.5,
        diameter=0.0273,
        zeta=4.3,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{678,-106},{710,-74}})));
      Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_cold_45(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=6.4,
        length=46.5,
        diameter=0.0273,
        zeta=4.3,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
        T_start=313.15)
        annotation (Placement(transformation(extent={{714,-58},{680,-24}})));
    equation
      Losses =PROSUMER1.Q_dot_trnsf_is + PROSUMER2.Q_dot_trnsf_is;

      connect(Pipe_ID_2_pipe_hot_12.port_a, PROSUMER1.hot_prim) annotation (
          Line(points={{-132,-92},{-165.733,-92},{-165.733,-2.28889}}, color={0,
              127,255}));
      connect(Pipe_ID_2_pipe_hot_12.port_b, PROSUMER2.hot_prim) annotation (
          Line(points={{-96,-92},{-36.2667,-92},{-36.2667,-0.3}}, color={0,127,
              255}));
      connect(Pipe_ID_2_pipe_cold_12.port_a, PROSUMER2.cold_prim) annotation (
          Line(points={{-96,-48},{-52,-48},{-52,-20},{-53.6,-20},{-53.6,-0.3}},
            color={0,127,255}));
      connect(PROSUMER1.cold_prim, Pipe_ID_2_pipe_cold_12.port_b) annotation (
          Line(points={{-148.4,-2.28889},{-148.4,-48},{-132,-48}}, color={0,127,
              255}));
      connect(bou.ports[1], Pipe_ID_2_pipe_hot_12.port_b) annotation (Line(
            points={{-46,-176},{-80,-176},{-80,-92},{-96,-92}}, color={0,127,
              255}));
      connect(Controller_1.T_sec_set, PROSUMER1.T_sec_in_set) annotation (Line(
            points={{-226,42},{-226,52},{-210,52},{-210,44.2222},{-190,44.2222}},
            color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, PROSUMER1.V_dot_sec_set) annotation (
          Line(points={{-226,32.4},{-212,32.4},{-212,38.4444},{-190,38.4444}},
            color={0,0,127}));
      connect(Controller_1.pi_set, PROSUMER1.pi) annotation (Line(points={{-226,
              22.8},{-190,29.7778}}, color={255,127,0}));
      connect(Controller_1.mu_set, PROSUMER1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,24},{-190,24}}, color={255,127,0}));
      connect(PROSUMER1.u_set, Controller_1.u_set) annotation (Line(points={{-190,
              18.2222},{-190,3.6},{-226,3.6}},      color={0,0,127}));
      connect(PROSUMER1.kappa_set, Controller_1.kappa_set) annotation (Line(
            points={{-190,12.4444},{-210,12.4444},{-210,-16},{-226,-16},{-226,
              -6}}, color={0,0,127}));
      connect(PROSUMER1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(
            points={{-169.2,50},{-169.2,54},{-252,54},{-252,46},{-253.3,46},{
              -253.3,42}},
                    color={0,0,127}));
      connect(PROSUMER1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(
            points={{-141.467,50},{-240.7,50},{-240.7,42}}, color={0,0,127}));
      connect(PROSUMER1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(
            points={{-155.333,50},{-155.333,58},{-278,58},{-278,32.4},{-268,
              32.4}}, color={0,0,127}));
      connect(PROSUMER1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(
            points={{-169.2,-2},{-169.2,-18},{-252,-18},{-252,-10},{-253.3,-10},
              {-253.3,-6}}, color={0,0,127}));
      connect(PROSUMER1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(
            points={{-141.467,-2},{-218,-2},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, PROSUMER1.V_dot_prim) annotation (Line(
            points={{-268,3.6},{-278,3.6},{-278,-22},{-155.333,-22},{-155.333,
              -2}}, color={0,0,127}));
      connect(PROSUMER1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(
            points={{-190,3.77778},{-214,3.77778},{-214,-24},{-280,-24},{-280,
              13.2},{-268,13.2}}, color={0,0,127}));
      connect(Controller_2.T_sec_set, PROSUMER2.T_sec_in_set) annotation (Line(
            points={{22,54},{22,64},{0,64},{0,48},{-12,48}}, color={0,0,127}));
      connect(Controller_2.V_dot_sec_set, PROSUMER2.V_dot_sec_set) annotation (
          Line(points={{22,44.4},{0,44.4},{0,42},{-12,42}}, color={0,0,127}));
      connect(Controller_2.pi_set, PROSUMER2.pi)
        annotation (Line(points={{22,34.8},{-12,33}}, color={255,127,0}));
      connect(Controller_2.mu_set, PROSUMER2.mu) annotation (Line(points={{22,25.2},
              {0,25.2},{0,27},{-12,27}},       color={255,127,0}));
      connect(Controller_2.u_set, PROSUMER2.u_set) annotation (Line(points={{22,15.6},
              {0,15.6},{0,21},{-12,21}},       color={0,0,127}));
      connect(Controller_2.kappa_set, PROSUMER2.kappa_set) annotation (Line(
            points={{22,6},{14,6},{14,-6},{-2,-6},{-2,14},{-12,14},{-12,15}},
            color={0,0,127}));
      connect(PROSUMER2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(
            points={{-32.8,54},{-32.8,68},{48,68},{48,58},{49.3,58},{49.3,54}},
            color={0,0,127}));
      connect(PROSUMER2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(
            points={{-60.5333,54},{-56,54},{-56,66},{36.7,66},{36.7,54}}, color=
             {0,0,127}));
      connect(PROSUMER2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(
            points={{-46.6667,54},{-46.6667,72},{74,72},{74,44.4},{64,44.4}},
            color={0,0,127}));
      connect(PROSUMER2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(
            points={{-32.8,0},{-32.8,-10},{48,-10},{48,2},{49.3,2},{49.3,6}},
            color={0,0,127}));
      connect(PROSUMER2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(
            points={{-60.5333,0},{-60,0},{-60,-16},{36.7,-16},{36.7,6}}, color=
              {0,0,127}));
      connect(PROSUMER2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(
            points={{-46.6667,0},{-46,0},{-46,-14},{74,-14},{74,15.6},{64,15.6}},
            color={0,0,127}));
      connect(PROSUMER2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(
            points={{-12,6},{-4,6},{-4,-18},{76,-18},{76,25.2},{64,25.2}},
            color={0,0,127}));
      connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
            points={{-293,18},{-278,18},{-278,22.8},{-268,22.8}}, color={0,0,127}));
      connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
            points={{103,0},{84,0},{84,34.8},{64,34.8}}, color={0,0,127}));
      connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
              -366,70},{-358,70}}, color={0,0,127}));
      connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
              42},{-366,58},{-358,58}}, color={0,0,127}));
      connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{-318,
              64},{-318,42},{-268,42}}, color={0,0,127}));
      connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
              144,48},{134,48}}, color={0,0,127}));
      connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{80,
              42},{80,54},{64,54}}, color={0,0,127}));
      connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
              -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
      connect(Controller_3.T_sec_set, PROSUMER3.T_sec_in_set) annotation (Line(
            points={{318,54},{318,64},{294,64},{294,48},{284,48}}, color={0,0,
              127}));
      connect(Controller_3.V_dot_sec_set, PROSUMER3.V_dot_sec_set) annotation (
          Line(points={{318,44.4},{294,44.4},{294,42},{284,42}}, color={0,0,127}));
      connect(Controller_3.pi_set, PROSUMER3.pi)
        annotation (Line(points={{318,34.8},{284,33}}, color={255,127,0}));
      connect(Controller_3.mu_set, PROSUMER3.mu) annotation (Line(points={{318,
              25.2},{294,25.2},{294,27},{284,27}}, color={255,127,0}));
      connect(Controller_3.u_set, PROSUMER3.u_set) annotation (Line(points={{318,
              15.6},{294,15.6},{294,21},{284,21}},     color={0,0,127}));
      connect(Controller_3.kappa_set, PROSUMER3.kappa_set) annotation (Line(
            points={{318,6},{308,6},{308,-6},{292,-6},{292,14},{284,14},{284,15}},
            color={0,0,127}));
      connect(PROSUMER3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(
            points={{263.2,54},{263.2,68},{342,68},{342,58},{345.3,58},{345.3,
              54}}, color={0,0,127}));
      connect(PROSUMER3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(
            points={{235.467,54},{238,54},{238,66},{332.7,66},{332.7,54}},
            color={0,0,127}));
      connect(PROSUMER3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(
            points={{249.333,54},{249.333,72},{368,72},{368,44.4},{360,44.4}},
            color={0,0,127}));
      connect(PROSUMER3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(
            points={{263.2,0},{263.2,-10},{342,-10},{342,2},{345.3,2},{345.3,6}},
            color={0,0,127}));
      connect(PROSUMER3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(
            points={{235.467,0},{234,0},{234,-16},{332.7,-16},{332.7,6}}, color=
             {0,0,127}));
      connect(PROSUMER3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(
            points={{249.333,0},{248,0},{248,-14},{368,-14},{368,15.6},{360,
              15.6}}, color={0,0,127}));
      connect(PROSUMER3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(
            points={{284,6},{290,6},{290,-18},{370,-18},{370,25.2},{360,25.2}},
            color={0,0,127}));
      connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
              438,48},{428,48}}, color={0,0,127}));
      connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},
              {374,42},{374,54},{360,54}},color={0,0,127}));
      connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
              -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
      connect(Pipe_ID_2_pipe_cold_12.port_a, Pipe_ID_4_pipe_cold_23.port_b)
        annotation (Line(points={{-96,-48},{42,-48},{42,-45},{168,-45}}, color=
              {0,127,255}));
      connect(Pipe_ID_2_pipe_hot_12.port_b, Pipe_ID_4_pipe_hot_23.port_a)
        annotation (Line(points={{-96,-92},{38,-92},{38,-89},{168,-89}}, color=
              {0,127,255}));
      connect(Pipe_ID_4_pipe_cold_23.port_a, PROSUMER3.cold_prim) annotation (
          Line(points={{202,-45},{240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},
            color={0,127,255}));
      connect(PROSUMER3.hot_prim, Pipe_ID_4_pipe_hot_23.port_b) annotation (
          Line(points={{259.733,-0.3},{256,-0.3},{256,-89},{202,-89}}, color={0,
              127,255}));
      connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
            points={{401,-6},{376,-6},{376,34.8},{360,34.8}}, color={0,0,127}));
      connect(Controller_4.T_sec_set, PROSUMER4.T_sec_in_set) annotation (Line(
            points={{612,60},{612,70},{590,70},{590,56},{580,56}}, color={0,0,
              127}));
      connect(Controller_4.V_dot_sec_set, PROSUMER4.V_dot_sec_set) annotation (
          Line(points={{612,50.4},{590,50.4},{590,50},{580,50}}, color={0,0,127}));
      connect(Controller_4.pi_set, PROSUMER4.pi)
        annotation (Line(points={{612,40.8},{580,41}}, color={255,127,0}));
      connect(Controller_4.mu_set, PROSUMER4.mu) annotation (Line(points={{612,
              31.2},{590,31.2},{590,35},{580,35}}, color={255,127,0}));
      connect(Controller_4.u_set, PROSUMER4.u_set) annotation (Line(points={{
              612,21.6},{590,21.6},{590,29},{580,29}}, color={0,0,127}));
      connect(Controller_4.kappa_set, PROSUMER4.kappa_set) annotation (Line(
            points={{612,12},{604,12},{604,0},{588,0},{588,20},{580,20},{580,23}},
            color={0,0,127}));
      connect(PROSUMER4.T_sec_hot, Controller_4.T_sec_hot) annotation (Line(
            points={{559.2,62},{559.2,74},{638,74},{638,64},{639.3,64},{639.3,
              60}}, color={0,0,127}));
      connect(PROSUMER4.T_sec_cold, Controller_4.T_sec_cold) annotation (Line(
            points={{531.467,62},{534,62},{534,72},{626.7,72},{626.7,60}},
            color={0,0,127}));
      connect(PROSUMER4.V_dot_sec, Controller_4.V_dot_sec) annotation (Line(
            points={{545.333,62},{545.333,78},{664,78},{664,50.4},{654,50.4}},
            color={0,0,127}));
      connect(PROSUMER4.T_prim_hot, Controller_4.T_prim_hot) annotation (Line(
            points={{559.2,8},{559.2,-4},{638,-4},{638,8},{639.3,8},{639.3,12}},
            color={0,0,127}));
      connect(PROSUMER4.T_prim_cold, Controller_4.T_prim_cold) annotation (Line(
            points={{531.467,8},{530,8},{530,-10},{626.7,-10},{626.7,12}},
            color={0,0,127}));
      connect(PROSUMER4.V_dot_prim, Controller_4.V_dot_prim) annotation (Line(
            points={{545.333,8},{544,8},{544,-8},{664,-8},{664,21.6},{654,21.6}},
            color={0,0,127}));
      connect(PROSUMER4.Q_dot_trnsf_is, Controller_4.Qdot_is) annotation (Line(
            points={{580,14},{586,14},{586,-12},{666,-12},{666,31.2},{654,31.2}},
            color={0,0,127}));
      connect(normalNoise3.y,add3. u1) annotation (Line(points={{747,70},{734,
              70},{734,54},{724,54}},
                                 color={0,0,127}));
      connect(add3.y,Controller_4. T_sec_sim) annotation (Line(points={{701,48},
              {670,48},{670,60},{654,60}},color={0,0,127}));
      connect(T_sec_in_array_4.y,add3. u2) annotation (Line(points={{735,2},{
              726,2},{726,32},{732,32},{732,42},{724,42}},
                                                        color={0,0,127}));
      connect(Q_management_array_4.y,Controller_4. Qdot_set) annotation (Line(
            points={{697,0},{672,0},{672,40.8},{654,40.8}},   color={0,0,127}));
      connect(Pipe_ID_6_pipe_hot_34.port_a, Pipe_ID_4_pipe_hot_23.port_b)
        annotation (Line(points={{362,-88},{282,-88},{282,-89},{202,-89}},
            color={0,127,255}));
      connect(PROSUMER4.cold_prim, Pipe_ID_6_pipe_cold_34.port_a) annotation (
          Line(points={{538.4,7.7},{537.2,7.7},{537.2,-43},{394,-43}}, color={0,
              127,255}));
      connect(Pipe_ID_6_pipe_cold_34.port_b, PROSUMER3.cold_prim) annotation (
          Line(points={{360,-43},{238,-43},{238,-45},{240,-45},{240,-8},{242.4,
              -8},{242.4,-0.3}}, color={0,127,255}));
      connect(PROSUMER4.hot_prim, Pipe_ID_6_pipe_hot_34.port_b) annotation (
          Line(points={{555.733,7.7},{554.866,7.7},{554.866,-88},{394,-88}},
            color={0,127,255}));
      connect(Controller_5.T_sec_set, PROSUMER5.T_sec_in_set) annotation (Line(
            points={{892,64},{892,72},{868,72},{868,56},{858,56}}, color={0,0,
              127}));
      connect(Controller_5.V_dot_sec_set, PROSUMER5.V_dot_sec_set) annotation (
          Line(points={{892,54.4},{868,54.4},{868,50},{858,50}}, color={0,0,127}));
      connect(Controller_5.pi_set, PROSUMER5.pi)
        annotation (Line(points={{892,44.8},{858,41}}, color={255,127,0}));
      connect(Controller_5.mu_set, PROSUMER5.mu) annotation (Line(points={{892,
              35.2},{868,35.2},{868,35},{858,35}}, color={255,127,0}));
      connect(Controller_5.u_set, PROSUMER5.u_set) annotation (Line(points={{892,
              25.6},{868,25.6},{868,29},{858,29}},     color={0,0,127}));
      connect(Controller_5.kappa_set, PROSUMER5.kappa_set) annotation (Line(
            points={{892,16},{882,16},{882,2},{866,2},{866,22},{858,22},{858,23}},
            color={0,0,127}));
      connect(PROSUMER5.T_sec_hot, Controller_5.T_sec_hot) annotation (Line(
            points={{837.2,62},{837.2,76},{916,76},{916,66},{919.3,66},{919.3,
              64}}, color={0,0,127}));
      connect(PROSUMER5.T_sec_cold, Controller_5.T_sec_cold) annotation (Line(
            points={{809.467,62},{812,62},{812,74},{906.7,74},{906.7,64}},
            color={0,0,127}));
      connect(PROSUMER5.V_dot_sec, Controller_5.V_dot_sec) annotation (Line(
            points={{823.333,62},{823.333,80},{942,80},{942,54.4},{934,54.4}},
            color={0,0,127}));
      connect(PROSUMER5.T_prim_hot, Controller_5.T_prim_hot) annotation (Line(
            points={{837.2,8},{837.2,-2},{916,-2},{916,10},{919.3,10},{919.3,16}},
            color={0,0,127}));
      connect(PROSUMER5.T_prim_cold, Controller_5.T_prim_cold) annotation (Line(
            points={{809.467,8},{808,8},{808,-8},{906.7,-8},{906.7,16}}, color=
              {0,0,127}));
      connect(PROSUMER5.V_dot_prim, Controller_5.V_dot_prim) annotation (Line(
            points={{823.333,8},{822,8},{822,-6},{942,-6},{942,25.6},{934,25.6}},
            color={0,0,127}));
      connect(PROSUMER5.Q_dot_trnsf_is, Controller_5.Qdot_is) annotation (Line(
            points={{858,14},{864,14},{864,-10},{944,-10},{944,35.2},{934,35.2}},
            color={0,0,127}));
      connect(normalNoise4.y,add4. u1) annotation (Line(points={{1025,72},{1012,
              72},{1012,56},{1002,56}},
                                 color={0,0,127}));
      connect(add4.y,Controller_5. T_sec_sim) annotation (Line(points={{979,50},
              {948,50},{948,64},{934,64}},color={0,0,127}));
      connect(T_sec_in_array_5.y,add4. u2) annotation (Line(points={{1013,4},{
              1004,4},{1004,34},{1010,34},{1010,44},{1002,44}},
                                                        color={0,0,127}));
      connect(Q_management_array_5.y,Controller_5. Qdot_set) annotation (Line(
            points={{977,2},{950,2},{950,44.8},{934,44.8}},   color={0,0,127}));
      connect(PROSUMER5.cold_prim, Pipe_ID_8_pipe_cold_45.port_a) annotation (
          Line(points={{816.4,7.7},{815.2,7.7},{815.2,-41},{714,-41}}, color={0,
              127,255}));
      connect(Pipe_ID_8_pipe_cold_45.port_b, Pipe_ID_6_pipe_cold_34.port_a)
        annotation (Line(points={{680,-41},{610,-41},{610,-44},{536,-44},{536,-43},
              {394,-43}}, color={0,127,255}));
      connect(Pipe_ID_8_pipe_hot_45.port_b, PROSUMER5.hot_prim) annotation (
          Line(points={{710,-90},{834,-90},{834,7.7},{833.733,7.7}}, color={0,
              127,255}));
      connect(Pipe_ID_8_pipe_hot_45.port_a, Pipe_ID_6_pipe_hot_34.port_b)
        annotation (Line(points={{678,-90},{616,-90},{616,-88},{394,-88}},
            color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-440,
                -220},{1020,120}})),Diagram(coordinateSystem(preserveAspectRatio=
                false, extent={{-440,-220},{1020,120}}),graphics={
            Text(
              extent={{-142,-24},{-98,-38}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{-134,-124},{-98,-140}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{514,116},{594,82}},
              textColor={0,0,0},
              textString="Prosumer4
MF5"),      Text(
              extent={{792,118},{872,84}},
              textColor={0,0,0},
              textString="Prosumer5
SF2"),      Text(
              extent={{268,110},{348,76}},
              textColor={0,0,0},
              textString="Prosumer3
SF4"),      Text(
              extent={{-32,114},{48,80}},
              textColor={0,0,0},
              textString="Prosumer2
SF3"),      Text(
              extent={{-252,102},{-172,68}},
              textColor={0,0,0},
              textString="Prosumer1
SF1"),      Text(
              extent={{170,-118},{206,-134}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{162,-18},{206,-32}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{364,-118},{400,-134}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{356,-18},{400,-32}},
              textColor={28,108,200},
              textString="cold"),
            Text(
              extent={{680,-116},{716,-132}},
              textColor={238,46,47},
              textString="hot"),
            Text(
              extent={{672,-16},{716,-30}},
              textColor={28,108,200},
              textString="cold")}),
        experiment(
          StopTime=30600,
          Interval=10,
          __Dymola_Algorithm="Dassl"),
        __Dymola_Commands(file="Scripts/COSES_PLOT.mos" "COSES_PLOT", file=
              "Scripts/cosesplot.mos" "cosesplot"));
    end Test_CoSES_5_Prosumers;
  end Tests;

  package Pipe_Validation
      extends Modelica.Icons.ExamplesPackage;

    model InsulatedPipe "Tests InsulatedPipe model"

      extends Modelica.Icons.Example;
      .ProsNet.Fluid.Pipes.InsulatedPipe insPipe(
        T_amb=283.15,                                          length=100,
        energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
      Fluid.Sources.Boundary_pT bou(
        redeclare package Medium = Media.Water,
        p=100000,
        nPorts=1)
        annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
      Fluid.Sources.Boundary_pT bou1(
        redeclare package Medium = Media.Water,
        p=100000,
        nPorts=1)
        annotation (Placement(transformation(extent={{80,-10},{60,10}})));
      Fluid.Sensors.TemperatureTwoPort senTem(
        redeclare package Medium = Media.Water,
        m_flow_nominal=1,
        initType=Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{-42,-10},{-22,10}})));
      Fluid.Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=
            Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{24,-10},{44,10}})));
      .ProsNet.Fluid.Pipes.InsulatedPipe insPipe1(T_amb=283.15,
                                                  energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial)
                                                  annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=-90,
            origin={42,-38})));
      Fluid.Sources.Boundary_pT bou2(
        redeclare package Medium = Media.Water,
        p=100000,
        nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={42,-78})));
    equation
      connect(bou.ports[1], senTem.port_a)
        annotation (Line(points={{-60,0},{-42,0}}, color={0,127,255}));
      connect(senTem.port_b, insPipe.port_a)
        annotation (Line(points={{-22,0},{-10,0}}, color={0,127,255}));
      connect(insPipe.port_b, senTem1.port_a)
        annotation (Line(points={{10,0},{24,0}}, color={0,127,255}));
      connect(senTem1.port_b, bou1.ports[1])
        annotation (Line(points={{44,0},{60,0}}, color={0,127,255}));
      connect(senTem1.port_b, insPipe1.port_a)
        annotation (Line(points={{44,0},{44,-28},{42,-28}}, color={0,127,255}));
      connect(insPipe1.port_b, bou2.ports[1])
        annotation (Line(points={{42,-48},{42,-68}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)),
        Documentation(info="<html>
<p><b>This validation model tests the thermal and minor hydraulic losses feature of the main model.</b></p>
</html>"));
    end InsulatedPipe;

    model Pipe_Validation_FSP
      Fluid.Pipes.InsulatedPipe pipe
        annotation (Placement(transformation(extent={{-8,-10},{12,10}})));
      Fluid.Sources.MassFlowSource_T boundary2(
        redeclare package Medium = Media.Water,
        m_flow=1,
        T=282.15,
        nPorts=1)
        annotation (Placement(transformation(extent={{-64,-10},{-44,10}})));
      Fluid.Sources.Boundary_pT bou(
        redeclare package Medium = Media.Water,
        T=282.15,
        nPorts=1)
        annotation (Placement(transformation(extent={{76,-10},{56,10}})));
    equation
      connect(boundary2.ports[1], pipe.port_a)
        annotation (Line(points={{-44,0},{-8,0}}, color={0,127,255}));
      connect(bou.ports[1], pipe.port_b)
        annotation (Line(points={{56,0},{12,0}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end Pipe_Validation_FSP;

    model Test_pipe_model
      ProsNet.Fluid.Pipes.InsulatedPipe pipe(
        allowFlowReversal=true,
        length=1000,
        zeta=10,
        energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyStateInitial)
        annotation (Placement(transformation(extent={{20,32},{40,52}})));
      Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package
          Medium =
            ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{-20,32},{0,52}})));
      Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare
          package Medium =
                   ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{20,64},{40,84}})));
      Modelica.Fluid.Sensors.RelativeTemperature relativeTemperature(redeclare
          package Medium = ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{20,4},{40,-16}})));
      Modelica.Fluid.Sources.MassFlowSource_T mass_source(
        redeclare package Medium = ProsNet.Media.Water,
        use_m_flow_in=true,
        use_T_in=true,
        m_flow=1,
        T(displayUnit="K"),
        nPorts=1) annotation (Placement(transformation(extent={{-94,32},{-74,52}})));
      inner Modelica.Fluid.System system(
        T_ambient=285.15,
        allowFlowReversal=true,
        energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
        annotation (Placement(transformation(extent={{64,-52},{84,-32}})));
      Modelica.Fluid.Sources.Boundary_pT bou(redeclare package Medium =
            ProsNet.Media.Water, nPorts=1)
        annotation (Placement(transformation(extent={{104,32},{84,52}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp volume_flow(table=[0,
            1; 10,5; 20,10; 30,11.4; 40,15; 50,20; 60,1; 70,5; 80,10; 90,11.4; 100,
            15; 110,20; 120,1; 130,5; 140,10; 150,11.4; 160,15; 170,20; 7470,20;
            7480,0; 10980,20; 17580,20], timeScale=1)
        annotation (Placement(transformation(extent={{-182,50},{-162,70}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp temperatures(
        table=[0,30; 10,30; 20,30; 30,30; 40,30; 50,30; 60,60; 70,60; 80,60; 90,60;
            100,60; 110,60; 120,90; 130,90; 140,90; 150,90; 160,90; 170,90; 180,90;
            7480,90; 10980,90; 17580,90],
        timeScale=1,
        y(unit="K"))
        annotation (Placement(transformation(extent={{-182,16},{-162,36}})));
      Modelica.Blocks.Math.Gain gain(k=1/60.266)
        annotation (Placement(transformation(extent={{-138,50},{-118,70}})));
      Modelica.Blocks.Math.UnitConversions.From_degC from_degC
        annotation (Placement(transformation(extent={{-138,16},{-118,36}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_in(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{-54,32},{-34,52}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_out(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{54,32},{74,52}})));

      Real DeltaT;
    equation
      connect(volumeFlowRate.port_b, pipe.port_a)
        annotation (Line(points={{0,42},{20,42}}, color={0,127,255}));
      connect(relativeTemperature.port_b, pipe.port_b) annotation (Line(points={{40,
              -6},{44,-6},{44,42},{40,42}}, color={0,127,255}));
      connect(relativeTemperature.port_a, pipe.port_a) annotation (Line(points={{20,
              -6},{16,-6},{16,42},{20,42}}, color={0,127,255}));
      connect(relativePressure.port_b, pipe.port_b) annotation (Line(points={{40,74},
              {44,74},{44,42},{40,42}}, color={0,127,255}));
      connect(relativePressure.port_a, pipe.port_a) annotation (Line(points={{20,74},
              {16,74},{16,42},{20,42}}, color={0,127,255}));
      connect(volume_flow.y, gain.u) annotation (Line(
          points={{-161,60},{-161,60},{-142,60},{-140,60}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(gain.y, mass_source.m_flow_in) annotation (Line(
          points={{-117,60},{-94,60},{-94,50}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(temperatures.y, from_degC.u) annotation (Line(
          points={{-161,26},{-161,26},{-144,26},{-140,26}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(from_degC.y, mass_source.T_in) annotation (Line(
          points={{-117,26},{-102,26},{-102,46},{-96,46}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(mass_source.ports[1], Tem_in.port_a) annotation (Line(
          points={{-74,42},{-54,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_in.port_b, volumeFlowRate.port_a) annotation (Line(
          points={{-34,42},{-20,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_out.port_a, pipe.port_b) annotation (Line(
          points={{54,42},{48,42},{40,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_out.port_b, bou.ports[1]) annotation (Line(
          points={{74,42},{84,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));

      DeltaT = Tem_out.T - Tem_in.T;
      annotation (                                                       experiment(
          StopTime=7381,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_pipe_model;

    model Test_pump_curve

      ProsNet.Fluid.Pumps.SpeedControlled_y
                                    pump_prim_prod(
        redeclare final package Medium = ProsNet.Media.Water,
        final energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyStateInitial,
        inputType=ProsNet.Fluid.Types.InputType.Continuous,
        final tau=1,
        redeclare final Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE per,
        final use_inputFilter=true,
        final riseTime=1,
        final init=Modelica.Blocks.Types.Init.SteadyState,
        final y_start=0)                annotation (Placement(transformation(
            extent={{10,10},{-10,-10}},
            rotation=-90,
            origin={-44,-8})));
      ProsNet.Fluid.Sources.Boundary_pT
                                bou(redeclare package Medium =
            ProsNet.Media.Water,
          nPorts=1)
        annotation (Placement(transformation(extent={{68,36},{48,56}})));
      Modelica.Blocks.Sources.Ramp ramp(
        height=-1,
        duration=1200,
        offset=1,
        startTime=5)
        annotation (Placement(transformation(extent={{-52,42},{-72,62}})));
      Fluid.FixedResistances.PressureDrop res(
        redeclare package Medium = Media.Water,
        m_flow_nominal=0.5,
        dp_nominal(displayUnit="kPa") = 419000)
        annotation (Placement(transformation(extent={{32,-36},{52,-16}})));
    equation
      connect(pump_prim_prod.port_b, bou.ports[1]) annotation (Line(points={{-44,2},
              {-44,20},{42,20},{42,46},{48,46}}, color={0,127,255}));
      connect(pump_prim_prod.port_b, res.port_b) annotation (Line(points={{-44,
              2},{62,2},{62,-26},{52,-26}}, color={0,127,255}));
      connect(res.port_a, pump_prim_prod.port_a) annotation (Line(points={{32,
              -26},{-44,-26},{-44,-18}}, color={0,127,255}));
      connect(ramp.y, pump_prim_prod.y) annotation (Line(points={{-73,52},{-92,
              52},{-92,-8},{-56,-8}}, color={0,0,127}));
      annotation (experiment(
          StopTime=1200,
          __Dymola_NumberOfIntervals=600,
          __Dymola_Algorithm="Dassl"));
    end Test_pump_curve;

    model Test_control_valve_model
      Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package
          Medium =
            ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{-20,32},{0,52}})));
      Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare
          package Medium =
                   ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{20,64},{40,84}})));
      Modelica.Fluid.Sources.MassFlowSource_T mass_source(
        redeclare package Medium = ProsNet.Media.Water,
        use_m_flow_in=true,
        use_T_in=true,
        m_flow=1,
        T(displayUnit="K"),
        nPorts=1) annotation (Placement(transformation(extent={{-94,32},{-74,52}})));
      inner Modelica.Fluid.System system(
        T_ambient=285.15,
        allowFlowReversal=true,
        energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
        annotation (Placement(transformation(extent={{64,-52},{84,-32}})));
      Modelica.Fluid.Sources.Boundary_pT bou(redeclare package Medium =
            ProsNet.Media.Water,
        T=309.9,                 nPorts=1)
        annotation (Placement(transformation(extent={{104,32},{84,52}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp
        mass_flow_kg_s(table=[0,0; 900,0.1; 1800,0.2; 2700,0.3; 3600,0.4; 4500,
            0.5; 5400,0.6; 6300,0.7; 7200,0.8; 8100,0.9; 9000,1; 9900,1.1;
            10800,1.2; 11700,1.3; 12600,1.4; 13500,1.5; 14400,1.6; 15300,1.7;
            16200,1.8; 17100,1.9; 18000,2], timeScale=1)
        annotation (Placement(transformation(extent={{-182,50},{-162,70}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp temperatures(
        table=[0,36.75; 900,36.75; 1800,36.75; 2700,36.75; 3600,36.75; 4500,
            36.75; 5400,36.75; 6300,36.75; 7200,36.75; 8100,36.75; 9000,36.75;
            9900,36.75; 10800,36.75; 11700,36.75; 12600,36.75; 13500,36.75;
            14400,36.75; 15300,36.75; 16200,36.75; 17100,36.75; 18000,36.75],
        timeScale=1,
        y(unit="K"))
        annotation (Placement(transformation(extent={{-182,16},{-162,36}})));
      Modelica.Blocks.Math.UnitConversions.From_degC from_degC
        annotation (Placement(transformation(extent={{-138,16},{-118,36}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_in(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{-54,32},{-34,52}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_out(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{54,32},{74,52}})));

      Real DeltaT;
      Fluid.Valves.TwoWayEqualPercentage valve_prim_cons(
        m_flow_nominal=1.25,
        kFixed=0,
        redeclare final package Medium = Media.Water,
        final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
        final Kv=6.29,
        final use_inputFilter=true,
        final riseTime=35,
        final init=Modelica.Blocks.Types.Init.InitialState,
        final y_start=0,
        final l=0.002)    annotation (Placement(transformation(
            extent={{-10,10},{10,-10}},
            rotation=180,
            origin={26,34})));
      Modelica.Blocks.Sources.Constant const(k=1)
        annotation (Placement(transformation(extent={{-20,66},{0,86}})));
    equation
      connect(temperatures.y, from_degC.u) annotation (Line(
          points={{-161,26},{-161,26},{-144,26},{-140,26}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(from_degC.y, mass_source.T_in) annotation (Line(
          points={{-117,26},{-102,26},{-102,46},{-96,46}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(mass_source.ports[1], Tem_in.port_a) annotation (Line(
          points={{-74,42},{-54,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_in.port_b, volumeFlowRate.port_a) annotation (Line(
          points={{-34,42},{-20,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_out.port_b, bou.ports[1]) annotation (Line(
          points={{74,42},{84,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));

      DeltaT = Tem_out.T - Tem_in.T;
      connect(mass_flow_kg_s.y, mass_source.m_flow_in) annotation (Line(points=
              {{-161,60},{-128,60},{-128,50},{-94,50}}, color={0,0,127}));
      connect(const.y, valve_prim_cons.y) annotation (Line(points={{1,76},{14,
              76},{14,46},{26,46}}, color={0,0,127}));
      connect(volumeFlowRate.port_b, valve_prim_cons.port_b) annotation (Line(
            points={{0,42},{10,42},{10,34},{16,34}}, color={0,127,255}));
      connect(valve_prim_cons.port_a, Tem_out.port_a) annotation (Line(points={
              {36,34},{46,34},{46,42},{54,42}}, color={0,127,255}));
      connect(relativePressure.port_b, valve_prim_cons.port_a)
        annotation (Line(points={{40,74},{40,34},{36,34}}, color={0,127,255}));
      connect(valve_prim_cons.port_b, relativePressure.port_a) annotation (Line(
            points={{16,34},{6,34},{6,74},{20,74}}, color={0,127,255}));
      annotation (                                                       experiment(
          StopTime=18000,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_control_valve_model;

    model Test_check_valve_model
      Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package
          Medium =
            ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{-20,32},{0,52}})));
      Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare
          package Medium =
                   ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{20,64},{40,84}})));
      Modelica.Fluid.Sources.MassFlowSource_T mass_source(
        redeclare package Medium = ProsNet.Media.Water,
        use_m_flow_in=true,
        use_T_in=true,
        m_flow=1,
        T(displayUnit="K"),
        nPorts=1) annotation (Placement(transformation(extent={{-94,32},{-74,52}})));
      inner Modelica.Fluid.System system(
        T_ambient=285.15,
        allowFlowReversal=true,
        energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
        annotation (Placement(transformation(extent={{64,-52},{84,-32}})));
      Modelica.Fluid.Sources.Boundary_pT bou(redeclare package Medium =
            ProsNet.Media.Water,
        T=309.9,                 nPorts=1)
        annotation (Placement(transformation(extent={{104,32},{84,52}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp
        mass_flow_kg_s(table=[0,0; 900,0.1; 1800,0.2; 2700,0.3; 3600,0.4; 4500,
            0.5; 5400,0.6; 6300,0.7; 7200,0.8; 8100,0.9; 9000,1; 9900,1.1;
            10800,1.2; 11700,1.3; 12600,1.4; 13500,1.5; 14400,1.6; 15300,1.7;
            16200,1.8; 17100,1.9; 18000,2], timeScale=1)
        annotation (Placement(transformation(extent={{-182,50},{-162,70}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp temperatures(
        table=[0,36.75; 900,36.75; 1800,36.75; 2700,36.75; 3600,36.75; 4500,
            36.75; 5400,36.75; 6300,36.75; 7200,36.75; 8100,36.75; 9000,36.75;
            9900,36.75; 10800,36.75; 11700,36.75; 12600,36.75; 13500,36.75;
            14400,36.75; 15300,36.75; 16200,36.75; 17100,36.75; 18000,36.75],
        timeScale=1,
        y(unit="K"))
        annotation (Placement(transformation(extent={{-182,16},{-162,36}})));
      Modelica.Blocks.Math.UnitConversions.From_degC from_degC
        annotation (Placement(transformation(extent={{-138,16},{-118,36}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_in(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{-54,32},{-34,52}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_out(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{54,32},{74,52}})));

      Real DeltaT;
      Modelica.Blocks.Sources.Constant const(k=1)
        annotation (Placement(transformation(extent={{-20,66},{0,86}})));
      Fluid.FixedResistances.CheckValve cheVal_prim_cons(
        m_flow_nominal=1.25,
        redeclare final package Medium = Media.Water,
        final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
        final Kv=6.29,
        final l=0.002)    annotation (Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=180,
            origin={32,42})));
    equation
      connect(temperatures.y, from_degC.u) annotation (Line(
          points={{-161,26},{-161,26},{-144,26},{-140,26}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(from_degC.y, mass_source.T_in) annotation (Line(
          points={{-117,26},{-102,26},{-102,46},{-96,46}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(mass_source.ports[1], Tem_in.port_a) annotation (Line(
          points={{-74,42},{-54,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_in.port_b, volumeFlowRate.port_a) annotation (Line(
          points={{-34,42},{-20,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_out.port_b, bou.ports[1]) annotation (Line(
          points={{74,42},{84,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));

      DeltaT = Tem_out.T - Tem_in.T;
      connect(mass_flow_kg_s.y, mass_source.m_flow_in) annotation (Line(points=
              {{-161,60},{-128,60},{-128,50},{-94,50}}, color={0,0,127}));
      connect(cheVal_prim_cons.port_b, Tem_out.port_a)
        annotation (Line(points={{42,42},{54,42}}, color={0,127,255}));
      connect(volumeFlowRate.port_b, cheVal_prim_cons.port_a)
        annotation (Line(points={{0,42},{22,42}}, color={0,127,255}));
      connect(relativePressure.port_a, cheVal_prim_cons.port_a)
        annotation (Line(points={{20,74},{22,74},{22,42}}, color={0,127,255}));
      connect(relativePressure.port_b, cheVal_prim_cons.port_b) annotation (
          Line(points={{40,74},{42,74},{42,42},{42,42}}, color={0,127,255}));
      annotation (                                                       experiment(
          StopTime=18000,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_check_valve_model;

    model Test_check_and_control_valve_model_FLOWINCREASE
      Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package
          Medium =
            ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{-48,32},{-28,52}})));
      Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare
          package Medium =
                   ProsNet.Media.Water)
        annotation (Placement(transformation(extent={{4,64},{24,84}})));
      Modelica.Fluid.Sources.MassFlowSource_T mass_source(
        redeclare package Medium = ProsNet.Media.Water,
        use_m_flow_in=true,
        use_T_in=true,
        m_flow=1,
        T(displayUnit="K"),
        nPorts=1) annotation (Placement(transformation(extent={{-122,32},{-102,
                52}})));
      inner Modelica.Fluid.System system(
        T_ambient=285.15,
        allowFlowReversal=true,
        energyDynamics=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial)
        annotation (Placement(transformation(extent={{64,-52},{84,-32}})));
      Modelica.Fluid.Sources.Boundary_pT bou(redeclare package Medium =
            ProsNet.Media.Water,
        p=200000,
        T=309.9,
        nPorts=1)
        annotation (Placement(transformation(extent={{106,-4},{86,16}})));
      ProsNet.Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp temperatures(
        table=[0,36.75; 900,36.75; 1800,36.75; 2700,36.75; 3600,36.75; 4500,
            36.75; 5400,36.75; 6300,36.75; 7200,36.75; 8100,36.75; 9000,36.75;
            9900,36.75; 10800,36.75; 11700,36.75; 12600,36.75; 13500,36.75;
            14400,36.75; 15300,36.75; 16200,36.75; 17100,36.75; 18000,36.75],
        timeScale=1,
        y(unit="K"))
        annotation (Placement(transformation(extent={{-210,16},{-190,36}})));
      Modelica.Blocks.Math.UnitConversions.From_degC from_degC
        annotation (Placement(transformation(extent={{-166,16},{-146,36}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_in(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{-82,32},{-62,52}})));
      ProsNet.Fluid.Sensors.TemperatureTwoPort Tem_out(
        redeclare package Medium = ProsNet.Media.Water,
        m_flow_nominal=1/6,
        tau=1) annotation (Placement(transformation(extent={{54,32},{74,52}})));

      Real DeltaT;
      Fluid.FixedResistances.CheckValve cheVal_prim_cons(
        m_flow_nominal=2.148,
        redeclare final package Medium = Media.Water,
        final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
        final Kv=6.29,
        final l=0.001)    annotation (Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=180,
            origin={32,42})));
      Fluid.Valves.TwoWayEqualPercentage valve_prim_cons(
        m_flow_nominal=2.148,
        kFixed=0,
        redeclare final package Medium = Media.Water,
        final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
        final Kv=6.29,
        final use_inputFilter=true,
        final riseTime=35,
        final init=Modelica.Blocks.Types.Init.InitialOutput,
        final y_start=0,
        final l=0.002)    annotation (Placement(transformation(
            extent={{10,10},{-10,-10}},
            rotation=180,
            origin={-4,42})));
      Modelica.Blocks.Sources.Ramp ramp_m_flow(
        height=2,
        duration=1200,
        offset=0,
        startTime=5)
        annotation (Placement(transformation(extent={{-178,70},{-158,90}})));
      Modelica.Blocks.Sources.Ramp ramp_y(
        height=-0.5,
        duration=1200,
        offset=1,
        startTime=1300)
        annotation (Placement(transformation(extent={{-82,72},{-62,92}})));
    equation
      connect(temperatures.y, from_degC.u) annotation (Line(
          points={{-189,26},{-189,26},{-172,26},{-168,26}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(from_degC.y, mass_source.T_in) annotation (Line(
          points={{-145,26},{-130,26},{-130,46},{-124,46}},
          color={0,0,127},
          smooth=Smooth.Bezier));
      connect(mass_source.ports[1], Tem_in.port_a) annotation (Line(
          points={{-102,42},{-82,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));
      connect(Tem_in.port_b, volumeFlowRate.port_a) annotation (Line(
          points={{-62,42},{-48,42}},
          color={0,127,255},
          smooth=Smooth.Bezier));

      DeltaT = Tem_out.T - Tem_in.T;
      connect(cheVal_prim_cons.port_b, Tem_out.port_a)
        annotation (Line(points={{42,42},{54,42}}, color={0,127,255}));
      connect(relativePressure.port_b, cheVal_prim_cons.port_b)
        annotation (Line(points={{24,74},{42,74},{42,42}}, color={0,127,255}));
      connect(volumeFlowRate.port_b, valve_prim_cons.port_a)
        annotation (Line(points={{-28,42},{-14,42}}, color={0,127,255}));
      connect(valve_prim_cons.port_b, cheVal_prim_cons.port_a)
        annotation (Line(points={{6,42},{22,42}}, color={0,127,255}));
      connect(relativePressure.port_a, valve_prim_cons.port_a) annotation (Line(
            points={{4,74},{-20,74},{-20,42},{-14,42}}, color={0,127,255}));
      connect(bou.ports[1], Tem_out.port_b) annotation (Line(points={{86,6},{82,
              6},{82,42},{74,42}}, color={0,127,255}));
      connect(mass_source.m_flow_in, ramp_m_flow.y) annotation (Line(points={{
              -122,50},{-140,50},{-140,80},{-157,80}}, color={0,0,127}));
      connect(valve_prim_cons.y, ramp_y.y) annotation (Line(points={{-4,54},{
              -34,54},{-34,82},{-61,82}}, color={0,0,127}));
      annotation (                                                       experiment(
          StopTime=7381,
          Interval=10,
          __Dymola_Algorithm="Dassl"));
    end Test_check_and_control_valve_model_FLOWINCREASE;

    model Test_pump_curve_points

      ProsNet.Fluid.Pumps.SpeedControlled_y
                                    pump_prim_prod(
        redeclare final package Medium = ProsNet.Media.Water,
        final energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyStateInitial,
        inputType=ProsNet.Fluid.Types.InputType.Continuous,
        final tau=1,
        redeclare final
          Fluid.Pumps.Data.Pumps_FSP.FSPStratosMAXO40slash0dot5dash16PN6slash10
          per,
        final use_inputFilter=true,
        final riseTime=1,
        final init=Modelica.Blocks.Types.Init.SteadyState,
        final y_start=0)                annotation (Placement(transformation(
            extent={{10,10},{-10,-10}},
            rotation=-90,
            origin={-44,-8})));
      ProsNet.Fluid.Sources.Boundary_pT
                                bou(redeclare package Medium =
            ProsNet.Media.Water,
          nPorts=1)
        annotation (Placement(transformation(extent={{68,36},{48,56}})));
      Modelica.Blocks.Sources.RealExpression realExpression(y=1)
        annotation (Placement(transformation(extent={{-168,2},{-148,22}})));
      Modelica.Blocks.Sources.Ramp ramp(
        height=-1,
        duration=1200,
        offset=1,
        startTime=5)
        annotation (Placement(transformation(extent={{140,-42},{120,-22}})));
      Modelica.Fluid.Valves.ValveLinear valveLinear(
        redeclare package Medium = ProsNet.Media.Water,
        dp_start=0,
        dp_nominal=70000,
        m_flow_nominal=0.55)
        annotation (Placement(transformation(extent={{42,-20},{62,0}})));
      Fluid.FixedResistances.PressureDrop res
        annotation (Placement(transformation(extent={{-24,-64},{-4,-44}})));
    equation
      connect(realExpression.y, pump_prim_prod.y) annotation (Line(points={{-147,12},
              {-64,12},{-64,-8},{-56,-8}}, color={0,0,127}));
      connect(pump_prim_prod.port_b, bou.ports[1]) annotation (Line(points={{-44,2},
              {-44,20},{42,20},{42,46},{48,46}}, color={0,127,255}));
      connect(pump_prim_prod.port_b, valveLinear.port_a) annotation (Line(points={{-44,2},
              {-44,20},{42,20},{42,2},{32,2},{32,-10},{42,-10}},        color={0,
              127,255}));
      connect(valveLinear.port_b, pump_prim_prod.port_a) annotation (Line(points={{62,-10},
              {64,-10},{64,-26},{-44,-26},{-44,-18}},         color={0,127,255}));
      connect(ramp.y, valveLinear.opening) annotation (Line(points={{119,-32},{66,
              -32},{66,2},{52,2},{52,-2}}, color={0,0,127}));
      annotation (experiment(
          StopTime=1200,
          __Dymola_NumberOfIntervals=600,
          __Dymola_Algorithm="Dassl"));
    end Test_pump_curve_points;
  annotation (Documentation(info="<html>
<p><b>Validation models for pipes.</b></p>
</html>"));
  end Pipe_Validation;

  model CoSES_5_Prosumers_adjusted_power
    "Producer and Consumer with Controller"
    Real Losses;

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER1(
      Q_flow_nominal=25273*1.1,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.41,
      dp1_nominal=20000,
      m_flow_nominal_2=0.41,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.12,
      d_transferpipe=0.0273,
      R_ins_transferpipe=6.4,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      tau_cv=10,
      T_start_cv=333.15,
      valve_prim_cons(kFixed=0),
      heat_exchanger(T_a1_nominal=338.15, T_a2_nominal=318.15))
      annotation (Placement(transformation(extent={{-190,-10},{-138,42}})));

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER2(
      Q_flow_nominal=21508*1.1,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.35,
      dp1_nominal=20000,
      m_flow_nominal_2=0.35,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=6.4,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15,
      heat_exchanger(T_a1_nominal=PROSUMER2.T_a1_nominal, T_a2_nominal=
            PROSUMER2.T_a2_nominal))
      annotation (Placement(transformation(extent={{-12,2},{-64,56}})));

    inner Modelica.Fluid.System system(T_ambient=285.15)
      annotation (Placement(transformation(extent={{70,-188},{126,-162}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_hot_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.4,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-132,-110},{-96,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_cold_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.4,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-98,-66},{-134,-30}})));
    Fluid.Sources.Boundary_pT bou(
      T=330.65,                   nPorts=1, redeclare final package Medium =
          Media.Water)
      annotation (Placement(transformation(extent={{-2,-198},{-46,-154}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=26.6,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.4,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.6,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.8,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{-266,-6},{-224,42}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
          343.15; 900,343.15; 1800,343.15; 2700,343.15; 3600,343.15; 4500,
          343.15; 5400,343.15; 6300,343.15; 7200,343.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,343.15; 19800,343.15; 20700,343.15; 21600,343.15; 22500,
          343.15; 23400,343.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,343.15; 30600,343.15; 31500,
          343.15; 32400,343.15; 33300,343.15])
      annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=22.64,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.4,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.6,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.8,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{64,8},{22,56}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
          13.19; 900,13.19; 1800,13.19; 2700,13.19; 3600,26.39; 4500,26.39;
          5400,26.39; 6300,26.39; 7200,13.19; 8100,-12.64; 9000,-25.27; 9900,-25.27;
          10800,-25.27; 11700,-25.27; 12600,-12.64; 13500,-12.64; 14400,-25.27;
          15300,-25.27; 16200,-25.27; 17100,-25.27; 18000,-12.64; 18900,13.47;
          19800,26.94; 20700,26.94; 21600,26.94; 22500,26.94; 23400,13.47;
          24300,-10.16; 25200,-20.32; 26100,-20.32; 27000,-20.32; 27900,-20.32;
          28800,-10.16; 29700,10.72; 30600,21.43; 31500,21.43; 32400,21.43;
          33300,21.43])
      annotation (Placement(transformation(extent={{-316,8},{-296,28}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
          11.31; 900,11.31; 1800,11.31; 2700,11.31; 3600,22.62; 4500,22.62;
          5400,22.62; 6300,22.62; 7200,11.31; 8100,-10.75; 9000,-21.51; 9900,-21.51;
          10800,-21.51; 11700,-21.51; 12600,-10.75; 13500,-10.75; 14400,-21.51;
          15300,-21.51; 16200,-21.51; 17100,-21.51; 18000,-10.75; 18900,11.59;
          19800,23.18; 20700,23.18; 21600,23.18; 22500,23.18; 23400,11.59;
          24300,-10.75; 25200,-21.51; 26100,-21.51; 27000,-21.51; 27900,-21.51;
          28800,-10.75; 29700,11.31; 30600,22.62; 31500,22.62; 32400,22.62;
          33300,22.62])
      annotation (Placement(transformation(extent={{124,-10},{104,10}})));
    inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
        fixedSeed=4345)
      annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
      sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
    Modelica.Blocks.Math.Add add1
      annotation (Placement(transformation(extent={{132,32},{112,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
          343.15; 900,343.15; 1800,343.15; 2700,343.15; 3600,343.15; 4500,
          343.15; 5400,343.15; 6300,343.15; 7200,343.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,343.15; 19800,343.15; 20700,343.15; 21600,343.15; 22500,
          343.15; 23400,343.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,343.15; 30600,343.15; 31500,
          343.15; 32400,343.15; 33300,343.15])
      annotation (Placement(transformation(extent={{166,-14},{146,6}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER3(
      Q_flow_nominal=21245*1.1,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=6.4,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{284,0},{232,54}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=22.36,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.4,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.6,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.8,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{360,8},{318,56}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise2(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
    Modelica.Blocks.Math.Add add2
      annotation (Placement(transformation(extent={{426,32},{406,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
          343.15; 900,343.15; 1800,343.15; 2700,343.15; 3600,343.15; 4500,
          343.15; 5400,343.15; 6300,343.15; 7200,343.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          343.15; 14400,343.15; 15300,343.15; 16200,343.15; 17100,343.15; 18000,
          343.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,343.15; 30600,343.15; 31500,
          343.15; 32400,343.15; 33300,343.15])
      annotation (Placement(transformation(extent={{460,-14},{440,6}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_cold_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.3,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_hot_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.3,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{168,-106},{202,-72}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
          8.7; 900,8.7; 1800,8.7; 2700,8.7; 3600,17.4; 4500,17.4; 5400,17.4;
          6300,17.4; 7200,8.7; 8100,-8.15; 9000,-16.29; 9900,-16.29; 10800,-16.29;
          11700,-16.29; 12600,-8.15; 13500,11.18; 14400,22.36; 15300,22.36;
          16200,22.36; 17100,22.36; 18000,11.18; 18900,-10.62; 19800,-21.24;
          20700,-21.24; 21600,-21.24; 22500,-21.24; 23400,-10.62; 24300,-10.62;
          25200,-21.24; 26100,-21.24; 27000,-21.24; 27900,-21.24; 28800,-10.62;
          29700,11.18; 30600,22.36; 31500,22.36; 32400,22.36; 33300,22.36])
      annotation (Placement(transformation(extent={{422,-16},{402,4}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER4(
      Q_flow_nominal=41827*1.1,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.68,
      dp1_nominal=20000,
      m_flow_nominal_2=0.68,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR35AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=2.5,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=20,
      length_transfer_pipe_tot=20,
      zeta_transferstation=18.75,
      d_transferpipe=0.036,
      R_ins_transferpipe=6.3,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{582,8},{530,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_4(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=44.03,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.4,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.6,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.8,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{654,12},{612,60}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise3(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{768,60},{748,80}})));
    Modelica.Blocks.Math.Add add3
      annotation (Placement(transformation(extent={{722,38},{702,58}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_4(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,343.15; 9000,
          343.15; 9900,343.15; 10800,343.15; 11700,343.15; 12600,343.15; 13500,
          343.15; 14400,343.15; 15300,343.15; 16200,343.15; 17100,343.15; 18000,
          343.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,343.15; 25200,343.15; 26100,343.15; 27000,
          343.15; 27900,343.15; 28800,343.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{756,-6},{736,14}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_4(table=[0,
          -20.91; 900,-20.91; 1800,-20.91; 2700,-20.91; 3600,-41.83; 4500,-41.83;
          5400,-41.83; 6300,-41.83; 7200,-20.91; 8100,21.75; 9000,43.5; 9900,
          43.5; 10800,43.5; 11700,43.5; 12600,21.75; 13500,6.94; 14400,13.88;
          15300,13.88; 16200,13.88; 17100,13.88; 18000,6.94; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          21.75; 25200,43.5; 26100,43.5; 27000,43.5; 27900,43.5; 28800,21.75;
          29700,-20.91; 30600,-41.83; 31500,-41.83; 32400,-41.83; 33300,-41.83])
      annotation (Placement(transformation(extent={{718,-10},{698,10}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_hot_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=5.5,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{362,-104},{394,-72}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_cold_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=5.5,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{394,-60},{360,-26}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER5(
      Q_flow_nominal=21245*1.1,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=6.4,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{858,8},{806,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_5(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=22.36,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.4,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.6,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.8,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{934,20},{892,68}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise4(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{1046,62},{1026,
              82}})));
    Modelica.Blocks.Math.Add add4
      annotation (Placement(transformation(extent={{1000,40},{980,60}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_5(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,343.15; 9000,
          343.15; 9900,343.15; 10800,343.15; 11700,343.15; 12600,343.15; 13500,
          343.15; 14400,343.15; 15300,343.15; 16200,343.15; 17100,343.15; 18000,
          343.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,343.15; 25200,343.15; 26100,343.15; 27000,
          343.15; 27900,343.15; 28800,343.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{1034,-6},{1014,14}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_5(table=[0,
          -10.62; 900,-10.62; 1800,-10.62; 2700,-10.62; 3600,-21.24; 4500,-21.24;
          5400,-21.24; 6300,-21.24; 7200,-10.62; 8100,11.46; 9000,22.91; 9900,
          22.91; 10800,22.91; 11700,22.91; 12600,11.46; 13500,6.94; 14400,13.88;
          15300,13.88; 16200,13.88; 17100,13.88; 18000,6.94; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          11.46; 25200,22.91; 26100,22.91; 27000,22.91; 27900,22.91; 28800,
          11.46; 29700,-10.62; 30600,-21.24; 31500,-21.24; 32400,-21.24; 33300,
          -21.24])
      annotation (Placement(transformation(extent={{998,-8},{978,12}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_hot_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.4,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{678,-106},{710,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_cold_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=6.4,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{714,-58},{680,-24}})));
  equation
    Losses =PROSUMER1.Q_dot_trnsf_is + PROSUMER2.Q_dot_trnsf_is;

    connect(Pipe_ID_2_pipe_hot_12.port_a, PROSUMER1.hot_prim) annotation (
        Line(points={{-132,-92},{-165.733,-92},{-165.733,-10.2889}}, color={0,
            127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, PROSUMER2.hot_prim) annotation (
        Line(points={{-96,-92},{-36.2667,-92},{-36.2667,1.7}},  color={0,127,
            255}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, PROSUMER2.cold_prim) annotation (
        Line(points={{-98,-48},{-52,-48},{-52,-20},{-53.6,-20},{-53.6,1.7}},
          color={0,127,255}));
    connect(PROSUMER1.cold_prim, Pipe_ID_2_pipe_cold_12.port_b) annotation (
        Line(points={{-148.4,-10.2889},{-148.4,-48},{-134,-48}}, color={0,127,
            255}));
    connect(bou.ports[1], Pipe_ID_2_pipe_hot_12.port_b) annotation (Line(
          points={{-46,-176},{-80,-176},{-80,-92},{-96,-92}}, color={0,127,
            255}));
    connect(Controller_1.T_sec_set, PROSUMER1.T_sec_in_set) annotation (Line(
          points={{-224,42},{-224,52},{-210,52},{-210,36.2222},{-190,36.2222}},
          color={0,0,127}));
    connect(Controller_1.V_dot_sec_set, PROSUMER1.V_dot_sec_set) annotation (
        Line(points={{-224,32.4},{-212,32.4},{-212,30.4444},{-190,30.4444}},
          color={0,0,127}));
    connect(Controller_1.pi_set, PROSUMER1.pi) annotation (Line(points={{-224,
            22.8},{-190,21.7778}}, color={255,127,0}));
    connect(Controller_1.mu_set, PROSUMER1.mu) annotation (Line(points={{-224,
            13.2},{-210,13.2},{-210,16},{-190,16}}, color={255,127,0}));
    connect(PROSUMER1.u_set, Controller_1.u_set) annotation (Line(points={{-190,
            10.2222},{-190,3.6},{-224,3.6}},      color={0,0,127}));
    connect(PROSUMER1.kappa_set, Controller_1.kappa_set) annotation (Line(
          points={{-190,4.44444},{-210,4.44444},{-210,-16},{-224,-16},{-224,-6}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(
          points={{-169.2,42},{-169.2,54},{-252,54},{-252,46},{-251.3,46},{
            -251.3,42}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(
          points={{-141.467,42},{-238.7,42}},             color={0,0,127}));
    connect(PROSUMER1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(
          points={{-155.333,42},{-155.333,58},{-278,58},{-278,32.4},{-266,32.4}},
                    color={0,0,127}));
    connect(PROSUMER1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(
          points={{-169.2,-10},{-169.2,-18},{-252,-18},{-252,-10},{-251.3,-10},
            {-251.3,-6}}, color={0,0,127}));
    connect(PROSUMER1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(
          points={{-141.467,-10},{-218,-10},{-218,-12},{-238.7,-12},{-238.7,-6}},
          color={0,0,127}));
    connect(Controller_1.V_dot_prim, PROSUMER1.V_dot_prim) annotation (Line(
          points={{-266,3.6},{-278,3.6},{-278,-22},{-155.333,-22},{-155.333,-10}},
                  color={0,0,127}));
    connect(PROSUMER1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(
          points={{-190,-4.22222},{-214,-4.22222},{-214,-24},{-280,-24},{-280,
            13.2},{-266,13.2}}, color={0,0,127}));
    connect(Controller_2.T_sec_set, PROSUMER2.T_sec_in_set) annotation (Line(
          points={{22,56},{22,64},{0,64},{0,50},{-12,50}}, color={0,0,127}));
    connect(Controller_2.V_dot_sec_set, PROSUMER2.V_dot_sec_set) annotation (
        Line(points={{22,46.4},{0,46.4},{0,44},{-12,44}}, color={0,0,127}));
    connect(Controller_2.pi_set, PROSUMER2.pi)
      annotation (Line(points={{22,36.8},{-12,35}}, color={255,127,0}));
    connect(Controller_2.mu_set, PROSUMER2.mu) annotation (Line(points={{22,27.2},
            {0,27.2},{0,29},{-12,29}},       color={255,127,0}));
    connect(Controller_2.u_set, PROSUMER2.u_set) annotation (Line(points={{22,17.6},
            {0,17.6},{0,23},{-12,23}},       color={0,0,127}));
    connect(Controller_2.kappa_set, PROSUMER2.kappa_set) annotation (Line(
          points={{22,8},{14,8},{14,-6},{-2,-6},{-2,14},{-12,14},{-12,17}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(
          points={{-32.8,56},{-32.8,68},{48,68},{48,58},{49.3,58},{49.3,56}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(
          points={{-60.5333,56},{-56,56},{-56,66},{36.7,66},{36.7,56}}, color=
           {0,0,127}));
    connect(PROSUMER2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(
          points={{-46.6667,56},{-46.6667,72},{74,72},{74,46.4},{64,46.4}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(
          points={{-32.8,2},{-32.8,-10},{48,-10},{48,2},{49.3,2},{49.3,8}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(
          points={{-60.5333,2},{-60,2},{-60,-16},{36.7,-16},{36.7,8}}, color=
            {0,0,127}));
    connect(PROSUMER2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(
          points={{-46.6667,2},{-46,2},{-46,-14},{74,-14},{74,17.6},{64,17.6}},
          color={0,0,127}));
    connect(PROSUMER2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(
          points={{-12,8},{-4,8},{-4,-18},{76,-18},{76,27.2},{64,27.2}},
          color={0,0,127}));
    connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
          points={{-295,18},{-278,18},{-278,22.8},{-266,22.8}}, color={0,0,127}));
    connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
          points={{103,0},{84,0},{84,36.8},{64,36.8}}, color={0,0,127}));
    connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
            -366,70},{-358,70}}, color={0,0,127}));
    connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
            42},{-366,58},{-358,58}}, color={0,0,127}));
    connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{
            -318,64},{-318,42},{-266,42}},
                                      color={0,0,127}));
    connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
            144,48},{134,48}}, color={0,0,127}));
    connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{
            80,42},{80,56},{64,56}},
                                  color={0,0,127}));
    connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
            -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
    connect(Controller_3.T_sec_set, PROSUMER3.T_sec_in_set) annotation (Line(
          points={{318,56},{318,64},{294,64},{294,48},{284,48}}, color={0,0,
            127}));
    connect(Controller_3.V_dot_sec_set, PROSUMER3.V_dot_sec_set) annotation (
        Line(points={{318,46.4},{294,46.4},{294,42},{284,42}}, color={0,0,127}));
    connect(Controller_3.pi_set, PROSUMER3.pi)
      annotation (Line(points={{318,36.8},{284,33}}, color={255,127,0}));
    connect(Controller_3.mu_set, PROSUMER3.mu) annotation (Line(points={{318,
            27.2},{294,27.2},{294,27},{284,27}}, color={255,127,0}));
    connect(Controller_3.u_set, PROSUMER3.u_set) annotation (Line(points={{318,
            17.6},{294,17.6},{294,21},{284,21}},     color={0,0,127}));
    connect(Controller_3.kappa_set, PROSUMER3.kappa_set) annotation (Line(
          points={{318,8},{308,8},{308,-6},{292,-6},{292,14},{284,14},{284,15}},
          color={0,0,127}));
    connect(PROSUMER3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(
          points={{263.2,54},{263.2,68},{342,68},{342,58},{345.3,58},{345.3,56}},
                  color={0,0,127}));
    connect(PROSUMER3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(
          points={{235.467,54},{238,54},{238,66},{332.7,66},{332.7,56}},
          color={0,0,127}));
    connect(PROSUMER3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(
          points={{249.333,54},{249.333,72},{368,72},{368,46.4},{360,46.4}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(
          points={{263.2,0},{263.2,-10},{342,-10},{342,2},{345.3,2},{345.3,8}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(
          points={{235.467,0},{234,0},{234,-16},{332.7,-16},{332.7,8}}, color=
           {0,0,127}));
    connect(PROSUMER3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(
          points={{249.333,0},{248,0},{248,-14},{368,-14},{368,17.6},{360,17.6}},
                    color={0,0,127}));
    connect(PROSUMER3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(
          points={{284,6},{290,6},{290,-18},{370,-18},{370,27.2},{360,27.2}},
          color={0,0,127}));
    connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
            438,48},{428,48}}, color={0,0,127}));
    connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
            374,42},{374,56},{360,56}}, color={0,0,127}));
    connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
            -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, Pipe_ID_4_pipe_cold_23.port_b)
      annotation (Line(points={{-98,-48},{42,-48},{42,-45},{168,-45}}, color=
            {0,127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, Pipe_ID_4_pipe_hot_23.port_a)
      annotation (Line(points={{-96,-92},{38,-92},{38,-89},{168,-89}}, color=
            {0,127,255}));
    connect(Pipe_ID_4_pipe_cold_23.port_a, PROSUMER3.cold_prim) annotation (
        Line(points={{202,-45},{240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},
          color={0,127,255}));
    connect(PROSUMER3.hot_prim, Pipe_ID_4_pipe_hot_23.port_b) annotation (
        Line(points={{259.733,-0.3},{256,-0.3},{256,-89},{202,-89}}, color={0,
            127,255}));
    connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
          points={{401,-6},{376,-6},{376,36.8},{360,36.8}}, color={0,0,127}));
    connect(Controller_4.T_sec_set, PROSUMER4.T_sec_in_set) annotation (Line(
          points={{612,60},{612,70},{590,70},{590,56},{582,56}}, color={0,0,
            127}));
    connect(Controller_4.V_dot_sec_set, PROSUMER4.V_dot_sec_set) annotation (
        Line(points={{612,50.4},{590,50.4},{590,50},{582,50}}, color={0,0,127}));
    connect(Controller_4.pi_set, PROSUMER4.pi)
      annotation (Line(points={{612,40.8},{582,41}}, color={255,127,0}));
    connect(Controller_4.mu_set, PROSUMER4.mu) annotation (Line(points={{612,
            31.2},{590,31.2},{590,35},{582,35}}, color={255,127,0}));
    connect(Controller_4.u_set, PROSUMER4.u_set) annotation (Line(points={{612,
            21.6},{590,21.6},{590,29},{582,29}},     color={0,0,127}));
    connect(Controller_4.kappa_set, PROSUMER4.kappa_set) annotation (Line(
          points={{612,12},{604,12},{604,0},{588,0},{588,20},{582,20},{582,23}},
          color={0,0,127}));
    connect(PROSUMER4.T_sec_hot, Controller_4.T_sec_hot) annotation (Line(
          points={{561.2,62},{561.2,74},{638,74},{638,64},{639.3,64},{639.3,60}},
                  color={0,0,127}));
    connect(PROSUMER4.T_sec_cold, Controller_4.T_sec_cold) annotation (Line(
          points={{533.467,62},{534,62},{534,72},{626.7,72},{626.7,60}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_sec, Controller_4.V_dot_sec) annotation (Line(
          points={{547.333,62},{547.333,78},{664,78},{664,50.4},{654,50.4}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_hot, Controller_4.T_prim_hot) annotation (Line(
          points={{561.2,8},{561.2,-4},{638,-4},{638,8},{639.3,8},{639.3,12}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_cold, Controller_4.T_prim_cold) annotation (Line(
          points={{533.467,8},{530,8},{530,-10},{626.7,-10},{626.7,12}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_prim, Controller_4.V_dot_prim) annotation (Line(
          points={{547.333,8},{544,8},{544,-8},{664,-8},{664,21.6},{654,21.6}},
          color={0,0,127}));
    connect(PROSUMER4.Q_dot_trnsf_is, Controller_4.Qdot_is) annotation (Line(
          points={{582,14},{586,14},{586,-12},{666,-12},{666,31.2},{654,31.2}},
          color={0,0,127}));
    connect(normalNoise3.y,add3. u1) annotation (Line(points={{747,70},{734,
            70},{734,54},{724,54}},
                               color={0,0,127}));
    connect(add3.y,Controller_4. T_sec_sim) annotation (Line(points={{701,48},{
            670,48},{670,60},{654,60}}, color={0,0,127}));
    connect(T_sec_in_array_4.y,add3. u2) annotation (Line(points={{735,4},{726,
            4},{726,32},{732,32},{732,42},{724,42}},  color={0,0,127}));
    connect(Q_management_array_4.y,Controller_4. Qdot_set) annotation (Line(
          points={{697,0},{672,0},{672,40.8},{654,40.8}},   color={0,0,127}));
    connect(Pipe_ID_6_pipe_hot_34.port_a, Pipe_ID_4_pipe_hot_23.port_b)
      annotation (Line(points={{362,-88},{282,-88},{282,-89},{202,-89}},
          color={0,127,255}));
    connect(PROSUMER4.cold_prim, Pipe_ID_6_pipe_cold_34.port_a) annotation (
        Line(points={{540.4,7.7},{537.2,7.7},{537.2,-43},{394,-43}}, color={0,
            127,255}));
    connect(Pipe_ID_6_pipe_cold_34.port_b, PROSUMER3.cold_prim) annotation (
        Line(points={{360,-43},{238,-43},{238,-45},{240,-45},{240,-8},{242.4,
            -8},{242.4,-0.3}}, color={0,127,255}));
    connect(PROSUMER4.hot_prim, Pipe_ID_6_pipe_hot_34.port_b) annotation (
        Line(points={{557.733,7.7},{554.866,7.7},{554.866,-88},{394,-88}},
          color={0,127,255}));
    connect(Controller_5.T_sec_set, PROSUMER5.T_sec_in_set) annotation (Line(
          points={{892,68},{892,72},{868,72},{868,56},{858,56}}, color={0,0,
            127}));
    connect(Controller_5.V_dot_sec_set, PROSUMER5.V_dot_sec_set) annotation (
        Line(points={{892,58.4},{868,58.4},{868,50},{858,50}}, color={0,0,127}));
    connect(Controller_5.pi_set, PROSUMER5.pi)
      annotation (Line(points={{892,48.8},{858,41}}, color={255,127,0}));
    connect(Controller_5.mu_set, PROSUMER5.mu) annotation (Line(points={{892,
            39.2},{868,39.2},{868,35},{858,35}}, color={255,127,0}));
    connect(Controller_5.u_set, PROSUMER5.u_set) annotation (Line(points={{892,
            29.6},{868,29.6},{868,29},{858,29}},     color={0,0,127}));
    connect(Controller_5.kappa_set, PROSUMER5.kappa_set) annotation (Line(
          points={{892,20},{882,20},{882,2},{866,2},{866,22},{858,22},{858,23}},
          color={0,0,127}));
    connect(PROSUMER5.T_sec_hot, Controller_5.T_sec_hot) annotation (Line(
          points={{837.2,62},{837.2,76},{916,76},{916,68},{919.3,68}},
                  color={0,0,127}));
    connect(PROSUMER5.T_sec_cold, Controller_5.T_sec_cold) annotation (Line(
          points={{809.467,62},{812,62},{812,74},{906.7,74},{906.7,68}},
          color={0,0,127}));
    connect(PROSUMER5.V_dot_sec, Controller_5.V_dot_sec) annotation (Line(
          points={{823.333,62},{823.333,80},{942,80},{942,58.4},{934,58.4}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_hot, Controller_5.T_prim_hot) annotation (Line(
          points={{837.2,8},{837.2,-2},{916,-2},{916,10},{919.3,10},{919.3,20}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_cold, Controller_5.T_prim_cold) annotation (Line(
          points={{809.467,8},{808,8},{808,-8},{906.7,-8},{906.7,20}}, color=
            {0,0,127}));
    connect(PROSUMER5.V_dot_prim, Controller_5.V_dot_prim) annotation (Line(
          points={{823.333,8},{822,8},{822,-6},{942,-6},{942,29.6},{934,29.6}},
          color={0,0,127}));
    connect(PROSUMER5.Q_dot_trnsf_is, Controller_5.Qdot_is) annotation (Line(
          points={{858,14},{864,14},{864,-10},{944,-10},{944,39.2},{934,39.2}},
          color={0,0,127}));
    connect(normalNoise4.y,add4. u1) annotation (Line(points={{1025,72},{1012,
            72},{1012,56},{1002,56}},
                               color={0,0,127}));
    connect(add4.y,Controller_5. T_sec_sim) annotation (Line(points={{979,50},{
            948,50},{948,68},{934,68}}, color={0,0,127}));
    connect(T_sec_in_array_5.y,add4. u2) annotation (Line(points={{1013,4},{
            1004,4},{1004,34},{1010,34},{1010,44},{1002,44}},
                                                      color={0,0,127}));
    connect(Q_management_array_5.y,Controller_5. Qdot_set) annotation (Line(
          points={{977,2},{950,2},{950,48.8},{934,48.8}},   color={0,0,127}));
    connect(PROSUMER5.cold_prim, Pipe_ID_8_pipe_cold_45.port_a) annotation (
        Line(points={{816.4,7.7},{815.2,7.7},{815.2,-41},{714,-41}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_cold_45.port_b, Pipe_ID_6_pipe_cold_34.port_a)
      annotation (Line(points={{680,-41},{610,-41},{610,-44},{536,-44},{536,-43},
            {394,-43}}, color={0,127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_b, PROSUMER5.hot_prim) annotation (
        Line(points={{710,-90},{834,-90},{834,7.7},{833.733,7.7}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_a, Pipe_ID_6_pipe_hot_34.port_b)
      annotation (Line(points={{678,-90},{616,-90},{616,-88},{394,-88}},
          color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-440,
              -220},{1060,120}})),Diagram(coordinateSystem(preserveAspectRatio=
              false, extent={{-440,-220},{1060,120}}),graphics={
          Text(
            extent={{-142,-24},{-98,-38}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{-134,-124},{-98,-140}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{514,116},{594,82}},
            textColor={0,0,0},
            textString="Prosumer4
MF5"),    Text(
            extent={{792,118},{872,84}},
            textColor={0,0,0},
            textString="Prosumer5
SF2"),    Text(
            extent={{268,110},{348,76}},
            textColor={0,0,0},
            textString="Prosumer3
SF4"),    Text(
            extent={{-32,114},{48,80}},
            textColor={0,0,0},
            textString="Prosumer2
SF3"),    Text(
            extent={{-252,102},{-172,68}},
            textColor={0,0,0},
            textString="Prosumer1
SF1"),    Text(
            extent={{170,-118},{206,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{162,-18},{206,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{364,-118},{400,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{356,-18},{400,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{680,-116},{716,-132}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{672,-16},{716,-30}},
            textColor={28,108,200},
            textString="cold")}),
      experiment(
        StopTime=34200,
        Interval=10,
        __Dymola_Algorithm="Dassl"),
      __Dymola_Commands(file="Scripts/COSES_PLOT.mos" "COSES_PLOT", file=
            "Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/coses_plot_tables.mos" "coses_plot_tables"));
  end CoSES_5_Prosumers_adjusted_power;

  model CoSES_5_Prosumers_TWEAKING "Producer and Consumer with Controller"
    Real Losses;

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER1(
      Q_flow_nominal=25273*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.41,
      dp1_nominal=20000,
      m_flow_nominal_2=0.41,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.12,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      tau_cv=10,
      T_start_cv=333.15,
      valve_prim_cons(kFixed=0),
      heat_exchanger(T_a1_nominal=338.15, T_a2_nominal=318.15))
      annotation (Placement(transformation(extent={{-204,-24},{-132,56}})));

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER2(
      Q_flow_nominal=21508*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.35,
      dp1_nominal=20000,
      m_flow_nominal_2=0.35,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15,
      heat_exchanger(T_a1_nominal=PROSUMER2.T_a1_nominal, T_a2_nominal=
            PROSUMER2.T_a2_nominal))
      annotation (Placement(transformation(extent={{-12,2},{-64,56}})));

    inner Modelica.Fluid.System system(T_ambient=285.15)
      annotation (Placement(transformation(extent={{70,-188},{126,-162}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_hot_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-132,-110},{-96,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_cold_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-98,-66},{-134,-30}})));
    Fluid.Sources.Boundary_pT bou(
      T=330.65,                   nPorts=1, redeclare final package Medium =
          Media.Water)
      annotation (Placement(transformation(extent={{-2,-198},{-46,-154}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=29.02,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.7,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{-284,-8},{-226,42}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,341.15; 19800,341.15; 20700,341.15; 21600,341.15; 22500,
          341.15; 23400,341.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,341.15; 30600,341.15; 31500,
          341.15; 32400,341.15; 33300,341.15])
      annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.7,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.7,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{64,8},{22,56}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
          12.64; 900,12.64; 1800,12.64; 2700,12.64; 3600,25.27; 4500,25.27;
          5400,25.27; 6300,25.27; 7200,12.64; 8100,-12.64; 9000,-25.27; 9900,-25.27;
          10800,-25.27; 11700,-25.27; 12600,-12.64; 13500,-12.64; 14400,-25.27;
          15300,-25.27; 16200,-25.27; 17100,-25.27; 18000,-12.64; 18900,12.64;
          19800,25.27; 20700,25.27; 21600,25.27; 22500,25.27; 23400,12.64;
          24300,-10.16; 25200,-20.32; 26100,-20.32; 27000,-20.32; 27900,-20.32;
          28800,-10.16; 29700,10.16; 30600,20.32; 31500,20.32; 32400,20.32;
          33300,20.32])
      annotation (Placement(transformation(extent={{-344,8},{-324,28}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
          10.75; 900,10.75; 1800,10.75; 2700,10.75; 3600,21.51; 4500,21.51;
          5400,21.51; 6300,21.51; 7200,10.75; 8100,-10.75; 9000,-21.51; 9900,-21.51;
          10800,-21.51; 11700,-21.51; 12600,-10.75; 13500,-10.75; 14400,-21.51;
          15300,-21.51; 16200,-21.51; 17100,-21.51; 18000,-10.75; 18900,10.75;
          19800,21.51; 20700,21.51; 21600,21.51; 22500,21.51; 23400,10.75;
          24300,-10.75; 25200,-21.51; 26100,-21.51; 27000,-21.51; 27900,-21.51;
          28800,-10.75; 29700,10.75; 30600,21.51; 31500,21.51; 32400,21.51;
          33300,21.51])
      annotation (Placement(transformation(extent={{124,-10},{104,10}})));
    inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
        fixedSeed=4345)
      annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
      sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
    Modelica.Blocks.Math.Add add1
      annotation (Placement(transformation(extent={{132,32},{112,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,341.15; 19800,341.15; 20700,341.15; 21600,341.15; 22500,
          341.15; 23400,341.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,341.15; 30600,341.15; 31500,
          341.15; 32400,341.15; 33300,341.15])
      annotation (Placement(transformation(extent={{166,-14},{146,6}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER3(
      Q_flow_nominal=21245*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{284,0},{232,54}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.4,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.7,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{360,8},{318,56}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise2(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
    Modelica.Blocks.Math.Add add2
      annotation (Placement(transformation(extent={{426,32},{406,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,341.15; 30600,341.15; 31500,
          341.15; 32400,341.15; 33300,341.15])
      annotation (Placement(transformation(extent={{460,-14},{440,6}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_cold_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_hot_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{168,-106},{202,-72}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
          8.15; 900,8.15; 1800,8.15; 2700,8.15; 3600,16.29; 4500,16.29; 5400,
          16.29; 6300,16.29; 7200,8.15; 8100,-8.15; 9000,-16.29; 9900,-16.29;
          10800,-16.29; 11700,-16.29; 12600,-8.15; 13500,10.62; 14400,21.24;
          15300,21.24; 16200,21.24; 17100,21.24; 18000,10.62; 18900,-10.62;
          19800,-21.24; 20700,-21.24; 21600,-21.24; 22500,-21.24; 23400,-10.62;
          24300,-10.62; 25200,-21.24; 26100,-21.24; 27000,-21.24; 27900,-21.24;
          28800,-10.62; 29700,10.62; 30600,21.24; 31500,21.24; 32400,21.24;
          33300,21.24])
      annotation (Placement(transformation(extent={{422,-16},{402,4}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER4(
      Q_flow_nominal=41827*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.68,
      dp1_nominal=20000,
      m_flow_nominal_2=0.68,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR35AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=2.5,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=20,
      length_transfer_pipe_tot=20,
      zeta_transferstation=18.75,
      d_transferpipe=0.036,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{582,8},{530,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_4(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=48.03,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.7,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{658,10},{616,58}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise3(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{768,60},{748,80}})));
    Modelica.Blocks.Math.Add add3
      annotation (Placement(transformation(extent={{722,38},{702,58}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_4(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,341.15; 9000,
          341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,341.15; 25200,341.15; 26100,341.15; 27000,
          341.15; 27900,341.15; 28800,341.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{756,-6},{736,14}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_4(table=[0,
          -20.91; 900,-20.91; 1800,-20.91; 2700,-20.91; 3600,-41.83; 4500,-41.83;
          5400,-41.83; 6300,-41.83; 7200,-20.91; 8100,20.91; 9000,41.83; 9900,
          41.83; 10800,41.83; 11700,41.83; 12600,20.91; 13500,6.38; 14400,12.77;
          15300,12.77; 16200,12.77; 17100,12.77; 18000,6.38; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          20.91; 25200,41.83; 26100,41.83; 27000,41.83; 27900,41.83; 28800,
          20.91; 29700,-20.91; 30600,-41.83; 31500,-41.83; 32400,-41.83; 33300,
          -41.83])
      annotation (Placement(transformation(extent={{718,-10},{698,10}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_hot_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{362,-104},{394,-72}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_cold_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{394,-60},{360,-26}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER5(
      Q_flow_nominal=21245*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{858,8},{806,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_5(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.4,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.7,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.8,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{936,20},{894,68}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise4(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{1046,62},{1026,
              82}})));
    Modelica.Blocks.Math.Add add4
      annotation (Placement(transformation(extent={{1000,40},{980,60}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_5(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,341.15; 9000,
          341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,341.15; 25200,341.15; 26100,341.15; 27000,
          341.15; 27900,341.15; 28800,341.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{1034,-4},{1014,16}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_5(table=[0,
          -10.62; 900,-10.62; 1800,-10.62; 2700,-10.62; 3600,-21.24; 4500,-21.24;
          5400,-21.24; 6300,-21.24; 7200,-10.62; 8100,10.62; 9000,21.24; 9900,
          21.24; 10800,21.24; 11700,21.24; 12600,10.62; 13500,6.38; 14400,12.77;
          15300,12.77; 16200,12.77; 17100,12.77; 18000,6.38; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          10.62; 25200,21.24; 26100,21.24; 27000,21.24; 27900,21.24; 28800,
          10.62; 29700,-10.62; 30600,-21.24; 31500,-21.24; 32400,-21.24; 33300,
          -21.24])
      annotation (Placement(transformation(extent={{998,-8},{978,12}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_hot_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{678,-106},{710,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_cold_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{714,-58},{680,-24}})));
  equation
    Losses =PROSUMER1.Q_dot_trnsf_is + PROSUMER2.Q_dot_trnsf_is;

    connect(Pipe_ID_2_pipe_hot_12.port_a, PROSUMER1.hot_prim) annotation (
        Line(points={{-132,-92},{-170.4,-92},{-170.4,-24.4444}},     color={0,
            127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, PROSUMER2.hot_prim) annotation (
        Line(points={{-96,-92},{-36.2667,-92},{-36.2667,1.7}},  color={0,127,
            255}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, PROSUMER2.cold_prim) annotation (
        Line(points={{-98,-48},{-52,-48},{-52,-20},{-53.6,-20},{-53.6,1.7}},
          color={0,127,255}));
    connect(PROSUMER1.cold_prim, Pipe_ID_2_pipe_cold_12.port_b) annotation (
        Line(points={{-146.4,-24.4444},{-146.4,-48},{-134,-48}}, color={0,127,
            255}));
    connect(bou.ports[1], Pipe_ID_2_pipe_hot_12.port_b) annotation (Line(
          points={{-46,-176},{-80,-176},{-80,-92},{-96,-92}}, color={0,127,
            255}));
    connect(Controller_1.T_sec_set, PROSUMER1.T_sec_in_set) annotation (Line(
          points={{-226,42},{-226,52},{-204,52},{-204,47.1111}},
          color={0,0,127}));
    connect(Controller_1.V_dot_sec_set, PROSUMER1.V_dot_sec_set) annotation (
        Line(points={{-226,32},{-212,32},{-212,38.2222},{-204,38.2222}},
          color={0,0,127}));
    connect(Controller_1.pi_set, PROSUMER1.pi) annotation (Line(points={{-226,22},
            {-204,24.8889}},       color={255,127,0}));
    connect(Controller_1.mu_set, PROSUMER1.mu) annotation (Line(points={{-226,12},
            {-204,12},{-204,16}},                   color={255,127,0}));
    connect(PROSUMER1.u_set, Controller_1.u_set) annotation (Line(points={{-204,
            7.11111},{-204,2},{-226,2}},          color={0,0,127}));
    connect(PROSUMER1.kappa_set, Controller_1.kappa_set) annotation (Line(
          points={{-204,-1.77778},{-204,-16},{-226,-16},{-226,-8}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(
          points={{-175.2,56},{-175.2,54},{-252,54},{-252,46},{-263.7,46},{
            -263.7,42}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(
          points={{-136.8,56},{-192,56},{-192,42},{-246.3,42}},
                                                          color={0,0,127}));
    connect(PROSUMER1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(
          points={{-156,56},{-156,60},{-278,60},{-278,32},{-284,32}},
                    color={0,0,127}));
    connect(PROSUMER1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(
          points={{-175.2,-24},{-175.2,-18},{-252,-18},{-252,-10},{-263.7,-10},
            {-263.7,-8}}, color={0,0,127}));
    connect(PROSUMER1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(
          points={{-136.8,-24},{-218,-24},{-218,-12},{-246.3,-12},{-246.3,-8}},
          color={0,0,127}));
    connect(Controller_1.V_dot_prim, PROSUMER1.V_dot_prim) annotation (Line(
          points={{-284,2},{-278,2},{-278,-22},{-156,-22},{-156,-24}},
                  color={0,0,127}));
    connect(PROSUMER1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(
          points={{-204,-15.1111},{-214,-15.1111},{-214,-24},{-280,-24},{-280,
            12},{-284,12}},     color={0,0,127}));
    connect(Controller_2.T_sec_set, PROSUMER2.T_sec_in_set) annotation (Line(
          points={{22,56},{22,64},{0,64},{0,50},{-12,50}}, color={0,0,127}));
    connect(Controller_2.V_dot_sec_set, PROSUMER2.V_dot_sec_set) annotation (
        Line(points={{22,46.4},{0,46.4},{0,44},{-12,44}}, color={0,0,127}));
    connect(Controller_2.pi_set, PROSUMER2.pi)
      annotation (Line(points={{22,36.8},{-12,35}}, color={255,127,0}));
    connect(Controller_2.mu_set, PROSUMER2.mu) annotation (Line(points={{22,27.2},
            {0,27.2},{0,29},{-12,29}},       color={255,127,0}));
    connect(Controller_2.u_set, PROSUMER2.u_set) annotation (Line(points={{22,17.6},
            {0,17.6},{0,23},{-12,23}},       color={0,0,127}));
    connect(Controller_2.kappa_set, PROSUMER2.kappa_set) annotation (Line(
          points={{22,8},{14,8},{14,-6},{-2,-6},{-2,14},{-12,14},{-12,17}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(
          points={{-32.8,56},{-32.8,68},{48,68},{48,58},{49.3,58},{49.3,56}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(
          points={{-60.5333,56},{-56,56},{-56,66},{36.7,66},{36.7,56}}, color=
           {0,0,127}));
    connect(PROSUMER2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(
          points={{-46.6667,56},{-46.6667,72},{74,72},{74,46.4},{64,46.4}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(
          points={{-32.8,2},{-32.8,-10},{48,-10},{48,2},{49.3,2},{49.3,8}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(
          points={{-60.5333,2},{-60,2},{-60,-16},{36.7,-16},{36.7,8}}, color=
            {0,0,127}));
    connect(PROSUMER2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(
          points={{-46.6667,2},{-46,2},{-46,-14},{74,-14},{74,17.6},{64,17.6}},
          color={0,0,127}));
    connect(PROSUMER2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(
          points={{-12,8},{-4,8},{-4,-18},{76,-18},{76,27.2},{64,27.2}},
          color={0,0,127}));
    connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
          points={{-323,18},{-278,18},{-278,22},{-284,22}},     color={0,0,127}));
    connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
          points={{103,0},{84,0},{84,36.8},{64,36.8}}, color={0,0,127}));
    connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
            -366,70},{-358,70}}, color={0,0,127}));
    connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
            42},{-366,58},{-358,58}}, color={0,0,127}));
    connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{
            -318,64},{-318,42},{-284,42}},
                                      color={0,0,127}));
    connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
            144,48},{134,48}}, color={0,0,127}));
    connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{
            80,42},{80,56},{64,56}},
                                  color={0,0,127}));
    connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
            -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
    connect(Controller_3.T_sec_set, PROSUMER3.T_sec_in_set) annotation (Line(
          points={{318,56},{318,64},{294,64},{294,48},{284,48}}, color={0,0,
            127}));
    connect(Controller_3.V_dot_sec_set, PROSUMER3.V_dot_sec_set) annotation (
        Line(points={{318,46.4},{294,46.4},{294,42},{284,42}}, color={0,0,127}));
    connect(Controller_3.pi_set, PROSUMER3.pi)
      annotation (Line(points={{318,36.8},{284,33}}, color={255,127,0}));
    connect(Controller_3.mu_set, PROSUMER3.mu) annotation (Line(points={{318,
            27.2},{294,27.2},{294,27},{284,27}}, color={255,127,0}));
    connect(Controller_3.u_set, PROSUMER3.u_set) annotation (Line(points={{318,
            17.6},{294,17.6},{294,21},{284,21}},     color={0,0,127}));
    connect(Controller_3.kappa_set, PROSUMER3.kappa_set) annotation (Line(
          points={{318,8},{308,8},{308,-6},{292,-6},{292,14},{284,14},{284,15}},
          color={0,0,127}));
    connect(PROSUMER3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(
          points={{263.2,54},{263.2,68},{342,68},{342,58},{345.3,58},{345.3,56}},
                  color={0,0,127}));
    connect(PROSUMER3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(
          points={{235.467,54},{238,54},{238,66},{332.7,66},{332.7,56}},
          color={0,0,127}));
    connect(PROSUMER3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(
          points={{249.333,54},{249.333,72},{368,72},{368,46.4},{360,46.4}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(
          points={{263.2,0},{263.2,-10},{342,-10},{342,2},{345.3,2},{345.3,8}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(
          points={{235.467,0},{234,0},{234,-16},{332.7,-16},{332.7,8}}, color=
           {0,0,127}));
    connect(PROSUMER3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(
          points={{249.333,0},{248,0},{248,-14},{368,-14},{368,17.6},{360,17.6}},
                    color={0,0,127}));
    connect(PROSUMER3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(
          points={{284,6},{290,6},{290,-18},{370,-18},{370,27.2},{360,27.2}},
          color={0,0,127}));
    connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
            438,48},{428,48}}, color={0,0,127}));
    connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
            374,42},{374,56},{360,56}}, color={0,0,127}));
    connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
            -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, Pipe_ID_4_pipe_cold_23.port_b)
      annotation (Line(points={{-98,-48},{42,-48},{42,-45},{168,-45}}, color=
            {0,127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, Pipe_ID_4_pipe_hot_23.port_a)
      annotation (Line(points={{-96,-92},{38,-92},{38,-89},{168,-89}}, color=
            {0,127,255}));
    connect(Pipe_ID_4_pipe_cold_23.port_a, PROSUMER3.cold_prim) annotation (
        Line(points={{202,-45},{240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},
          color={0,127,255}));
    connect(PROSUMER3.hot_prim, Pipe_ID_4_pipe_hot_23.port_b) annotation (
        Line(points={{259.733,-0.3},{256,-0.3},{256,-89},{202,-89}}, color={0,
            127,255}));
    connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
          points={{401,-6},{376,-6},{376,36.8},{360,36.8}}, color={0,0,127}));
    connect(Controller_4.T_sec_set, PROSUMER4.T_sec_in_set) annotation (Line(
          points={{616,58},{616,70},{590,70},{590,56},{582,56}}, color={0,0,
            127}));
    connect(Controller_4.V_dot_sec_set, PROSUMER4.V_dot_sec_set) annotation (
        Line(points={{616,48.4},{590,48.4},{590,50},{582,50}}, color={0,0,127}));
    connect(Controller_4.pi_set, PROSUMER4.pi)
      annotation (Line(points={{616,38.8},{582,41}}, color={255,127,0}));
    connect(Controller_4.mu_set, PROSUMER4.mu) annotation (Line(points={{616,
            29.2},{590,29.2},{590,35},{582,35}}, color={255,127,0}));
    connect(Controller_4.u_set, PROSUMER4.u_set) annotation (Line(points={{616,
            19.6},{590,19.6},{590,29},{582,29}},     color={0,0,127}));
    connect(Controller_4.kappa_set, PROSUMER4.kappa_set) annotation (Line(
          points={{616,10},{604,10},{604,0},{588,0},{588,20},{582,20},{582,23}},
          color={0,0,127}));
    connect(PROSUMER4.T_sec_hot, Controller_4.T_sec_hot) annotation (Line(
          points={{561.2,62},{561.2,74},{638,74},{638,64},{643.3,64},{643.3,58}},
                  color={0,0,127}));
    connect(PROSUMER4.T_sec_cold, Controller_4.T_sec_cold) annotation (Line(
          points={{533.467,62},{534,62},{534,72},{630.7,72},{630.7,58}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_sec, Controller_4.V_dot_sec) annotation (Line(
          points={{547.333,62},{547.333,78},{664,78},{664,48.4},{658,48.4}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_hot, Controller_4.T_prim_hot) annotation (Line(
          points={{561.2,8},{561.2,-4},{638,-4},{638,8},{643.3,8},{643.3,10}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_cold, Controller_4.T_prim_cold) annotation (Line(
          points={{533.467,8},{530,8},{530,-10},{630.7,-10},{630.7,10}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_prim, Controller_4.V_dot_prim) annotation (Line(
          points={{547.333,8},{544,8},{544,-8},{664,-8},{664,19.6},{658,19.6}},
          color={0,0,127}));
    connect(PROSUMER4.Q_dot_trnsf_is, Controller_4.Qdot_is) annotation (Line(
          points={{582,14},{586,14},{586,-12},{666,-12},{666,29.2},{658,29.2}},
          color={0,0,127}));
    connect(normalNoise3.y,add3. u1) annotation (Line(points={{747,70},{734,
            70},{734,54},{724,54}},
                               color={0,0,127}));
    connect(add3.y,Controller_4. T_sec_sim) annotation (Line(points={{701,48},{
            670,48},{670,58},{658,58}}, color={0,0,127}));
    connect(T_sec_in_array_4.y,add3. u2) annotation (Line(points={{735,4},{726,
            4},{726,32},{732,32},{732,42},{724,42}},  color={0,0,127}));
    connect(Q_management_array_4.y,Controller_4. Qdot_set) annotation (Line(
          points={{697,0},{672,0},{672,38.8},{658,38.8}},   color={0,0,127}));
    connect(Pipe_ID_6_pipe_hot_34.port_a, Pipe_ID_4_pipe_hot_23.port_b)
      annotation (Line(points={{362,-88},{282,-88},{282,-89},{202,-89}},
          color={0,127,255}));
    connect(PROSUMER4.cold_prim, Pipe_ID_6_pipe_cold_34.port_a) annotation (
        Line(points={{540.4,7.7},{537.2,7.7},{537.2,-43},{394,-43}}, color={0,
            127,255}));
    connect(Pipe_ID_6_pipe_cold_34.port_b, PROSUMER3.cold_prim) annotation (
        Line(points={{360,-43},{238,-43},{238,-45},{240,-45},{240,-8},{242.4,
            -8},{242.4,-0.3}}, color={0,127,255}));
    connect(PROSUMER4.hot_prim, Pipe_ID_6_pipe_hot_34.port_b) annotation (
        Line(points={{557.733,7.7},{554.866,7.7},{554.866,-88},{394,-88}},
          color={0,127,255}));
    connect(Controller_5.T_sec_set, PROSUMER5.T_sec_in_set) annotation (Line(
          points={{894,68},{894,72},{868,72},{868,56},{858,56}}, color={0,0,
            127}));
    connect(Controller_5.V_dot_sec_set, PROSUMER5.V_dot_sec_set) annotation (
        Line(points={{894,58.4},{868,58.4},{868,50},{858,50}}, color={0,0,127}));
    connect(Controller_5.pi_set, PROSUMER5.pi)
      annotation (Line(points={{894,48.8},{858,41}}, color={255,127,0}));
    connect(Controller_5.mu_set, PROSUMER5.mu) annotation (Line(points={{894,
            39.2},{868,39.2},{868,35},{858,35}}, color={255,127,0}));
    connect(Controller_5.u_set, PROSUMER5.u_set) annotation (Line(points={{894,
            29.6},{868,29.6},{868,29},{858,29}},     color={0,0,127}));
    connect(Controller_5.kappa_set, PROSUMER5.kappa_set) annotation (Line(
          points={{894,20},{882,20},{882,2},{866,2},{866,22},{858,22},{858,23}},
          color={0,0,127}));
    connect(PROSUMER5.T_sec_hot, Controller_5.T_sec_hot) annotation (Line(
          points={{837.2,62},{837.2,76},{916,76},{916,68},{921.3,68}},
                  color={0,0,127}));
    connect(PROSUMER5.T_sec_cold, Controller_5.T_sec_cold) annotation (Line(
          points={{809.467,62},{812,62},{812,74},{908.7,74},{908.7,68}},
          color={0,0,127}));
    connect(PROSUMER5.V_dot_sec, Controller_5.V_dot_sec) annotation (Line(
          points={{823.333,62},{823.333,80},{942,80},{942,58.4},{936,58.4}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_hot, Controller_5.T_prim_hot) annotation (Line(
          points={{837.2,8},{837.2,-2},{916,-2},{916,10},{921.3,10},{921.3,20}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_cold, Controller_5.T_prim_cold) annotation (Line(
          points={{809.467,8},{808,8},{808,-8},{908.7,-8},{908.7,20}}, color=
            {0,0,127}));
    connect(PROSUMER5.V_dot_prim, Controller_5.V_dot_prim) annotation (Line(
          points={{823.333,8},{822,8},{822,-6},{942,-6},{942,29.6},{936,29.6}},
          color={0,0,127}));
    connect(PROSUMER5.Q_dot_trnsf_is, Controller_5.Qdot_is) annotation (Line(
          points={{858,14},{864,14},{864,-10},{944,-10},{944,39.2},{936,39.2}},
          color={0,0,127}));
    connect(normalNoise4.y,add4. u1) annotation (Line(points={{1025,72},{1012,
            72},{1012,56},{1002,56}},
                               color={0,0,127}));
    connect(add4.y,Controller_5. T_sec_sim) annotation (Line(points={{979,50},{
            948,50},{948,68},{936,68}}, color={0,0,127}));
    connect(T_sec_in_array_5.y,add4. u2) annotation (Line(points={{1013,6},{
            1004,6},{1004,34},{1010,34},{1010,44},{1002,44}},
                                                      color={0,0,127}));
    connect(Q_management_array_5.y,Controller_5. Qdot_set) annotation (Line(
          points={{977,2},{950,2},{950,48.8},{936,48.8}},   color={0,0,127}));
    connect(PROSUMER5.cold_prim, Pipe_ID_8_pipe_cold_45.port_a) annotation (
        Line(points={{816.4,7.7},{815.2,7.7},{815.2,-41},{714,-41}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_cold_45.port_b, Pipe_ID_6_pipe_cold_34.port_a)
      annotation (Line(points={{680,-41},{610,-41},{610,-44},{536,-44},{536,-43},
            {394,-43}}, color={0,127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_b, PROSUMER5.hot_prim) annotation (
        Line(points={{710,-90},{834,-90},{834,7.7},{833.733,7.7}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_a, Pipe_ID_6_pipe_hot_34.port_b)
      annotation (Line(points={{678,-90},{616,-90},{616,-88},{394,-88}},
          color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-440,
              -220},{1060,120}})),Diagram(coordinateSystem(preserveAspectRatio=
              false, extent={{-440,-220},{1060,120}}),graphics={
          Text(
            extent={{-142,-24},{-98,-38}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{-134,-124},{-98,-140}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{514,116},{594,82}},
            textColor={0,0,0},
            textString="Prosumer4
MF5"),    Text(
            extent={{792,118},{872,84}},
            textColor={0,0,0},
            textString="Prosumer5
SF2"),    Text(
            extent={{268,110},{348,76}},
            textColor={0,0,0},
            textString="Prosumer3
SF4"),    Text(
            extent={{-32,114},{48,80}},
            textColor={0,0,0},
            textString="Prosumer2
SF3"),    Text(
            extent={{-252,102},{-172,68}},
            textColor={0,0,0},
            textString="Prosumer1
SF1"),    Text(
            extent={{170,-118},{206,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{162,-18},{206,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{364,-118},{400,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{356,-18},{400,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{680,-116},{716,-132}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{672,-16},{716,-30}},
            textColor={28,108,200},
            textString="cold")}),
      experiment(
        StopTime=34200,
        Interval=10,
        __Dymola_Algorithm="Dassl"),
      __Dymola_Commands(file="Scripts/COSES_PLOT.mos" "COSES_PLOT", file=
            "Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/coses_plot_tables.mos" "coses_plot_tables"));
  end CoSES_5_Prosumers_TWEAKING;

  model CoSES_5_Prosumers_new_SCENARIOS "Producer and Consumer with Controller"
    Real Losses;

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER1(
      Q_flow_nominal=25273*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.41,
      dp1_nominal=20000,
      m_flow_nominal_2=0.41,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.12,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      tau_cv=10,
      T_start_cv=333.15,
      valve_prim_cons(kFixed=0),
      heat_exchanger(T_a1_nominal=338.15, T_a2_nominal=318.15))
      annotation (Placement(transformation(extent={{-190,-10},{-138,42}})));

    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER2(
      Q_flow_nominal=21508*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.35,
      dp1_nominal=20000,
      m_flow_nominal_2=0.35,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15,
      heat_exchanger(T_a1_nominal=PROSUMER2.T_a1_nominal, T_a2_nominal=
            PROSUMER2.T_a2_nominal))
      annotation (Placement(transformation(extent={{-12,2},{-64,56}})));

    inner Modelica.Fluid.System system(T_ambient=285.15)
      annotation (Placement(transformation(extent={{70,-188},{126,-162}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_hot_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-132,-110},{-96,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_2_pipe_cold_12(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.0273,
      zeta=3.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{-98,-66},{-134,-30}})));
    Fluid.Sources.Boundary_pT bou(
      T=330.65,                   nPorts=1, redeclare final package Medium =
          Media.Water)
      annotation (Placement(transformation(extent={{-2,-198},{-46,-154}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_1(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=29.02,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.85,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.85,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.3,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{-268,-4},{-226,44}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,341.15; 19800,341.15; 20700,341.15; 21600,341.15; 22500,
          341.15; 23400,341.15; 24300,341.15; 25200,341.15; 26100,341.15; 27000,
          341.15; 27900,341.15; 28800,341.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_2(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.7,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.85,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.85,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{64,8},{22,56}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
          12.64; 900,12.64; 1800,12.64; 2700,12.64; 3600,25.27; 4500,25.27;
          5400,25.27; 6300,25.27; 7200,12.64; 8100,-12.64; 9000,-25.27; 9900,-25.27;
          10800,-25.27; 11700,-25.27; 12600,-12.64; 13500,-12.64; 14400,-25.27;
          15300,-25.27; 16200,-25.27; 17100,-25.27; 18000,-12.64; 18900,12.64;
          19800,25.27; 20700,25.27; 21600,25.27; 22500,25.27; 23400,12.64;
          24300,6.32; 25200,12.64; 26100,12.64; 27000,12.64; 27900,12.64; 28800,
          6.32; 29700,-6.32; 30600,-12.64; 31500,-12.64; 32400,-12.64; 33300,-12.64])
      annotation (Placement(transformation(extent={{-316,8},{-296,28}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
          10.75; 900,10.75; 1800,10.75; 2700,10.75; 3600,21.51; 4500,21.51;
          5400,21.51; 6300,21.51; 7200,10.75; 8100,-10.75; 9000,-21.51; 9900,-21.51;
          10800,-21.51; 11700,-21.51; 12600,-10.75; 13500,-10.75; 14400,-21.51;
          15300,-21.51; 16200,-21.51; 17100,-21.51; 18000,-10.75; 18900,10.75;
          19800,21.51; 20700,21.51; 21600,21.51; 22500,21.51; 23400,10.75;
          24300,5.38; 25200,10.75; 26100,10.75; 27000,10.75; 27900,10.75; 28800,
          5.38; 29700,-5.38; 30600,-10.75; 31500,-10.75; 32400,-10.75; 33300,-10.75])
      annotation (Placement(transformation(extent={{124,-10},{104,10}})));
    inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
        fixedSeed=4345)
      annotation (Placement(transformation(extent={{-126,72},{-106,92}})));
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
      sigma=3) annotation (Placement(transformation(extent={{178,54},{158,74}})));
    Modelica.Blocks.Math.Add add1
      annotation (Placement(transformation(extent={{132,32},{112,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          318.15; 14400,318.15; 15300,318.15; 16200,318.15; 17100,318.15; 18000,
          318.15; 18900,341.15; 19800,341.15; 20700,341.15; 21600,341.15; 22500,
          341.15; 23400,341.15; 24300,341.15; 25200,341.15; 26100,341.15; 27000,
          341.15; 27900,341.15; 28800,341.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{166,-14},{146,6}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER3(
      Q_flow_nominal=21245*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{284,0},{232,54}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_3(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.4,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.85,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.85,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{360,8},{318,56}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise2(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{472,54},{452,74}})));
    Modelica.Blocks.Math.Add add2
      annotation (Placement(transformation(extent={{426,32},{406,52}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
          341.15; 900,341.15; 1800,341.15; 2700,341.15; 3600,341.15; 4500,
          341.15; 5400,341.15; 6300,341.15; 7200,341.15; 8100,318.15; 9000,
          318.15; 9900,318.15; 10800,318.15; 11700,318.15; 12600,318.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,341.15; 25200,341.15; 26100,341.15; 27000,
          341.15; 27900,341.15; 28800,341.15; 29700,318.15; 30600,318.15; 31500,
          318.15; 32400,318.15; 33300,318.15])
      annotation (Placement(transformation(extent={{460,-14},{440,6}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_cold_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{202,-62},{168,-28}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_4_pipe_hot_23(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=40,
      diameter=0.036,
      zeta=2.5,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{168,-106},{202,-72}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
          8.15; 900,8.15; 1800,8.15; 2700,8.15; 3600,16.29; 4500,16.29; 5400,
          16.29; 6300,16.29; 7200,8.15; 8100,-8.15; 9000,-16.29; 9900,-16.29;
          10800,-16.29; 11700,-16.29; 12600,-8.15; 13500,10.62; 14400,21.24;
          15300,21.24; 16200,21.24; 17100,21.24; 18000,10.62; 18900,-10.62;
          19800,-21.24; 20700,-21.24; 21600,-21.24; 22500,-21.24; 23400,-10.62;
          24300,4.07; 25200,8.15; 26100,8.15; 27000,8.15; 27900,8.15; 28800,
          4.07; 29700,-4.07; 30600,-8.15; 31500,-8.15; 32400,-8.15; 33300,-8.15])
      annotation (Placement(transformation(extent={{422,-14},{402,6}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER4(
      Q_flow_nominal=41827*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.68,
      dp1_nominal=20000,
      m_flow_nominal_2=0.68,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR35AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=2.5,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=20,
      length_transfer_pipe_tot=20,
      zeta_transferstation=18.75,
      d_transferpipe=0.036,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{582,8},{530,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_4(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=48.03,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.85,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.85,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{658,10},{616,58}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise3(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{768,60},{748,80}})));
    Modelica.Blocks.Math.Add add3
      annotation (Placement(transformation(extent={{722,38},{702,58}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_4(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,341.15; 9000,
          341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,341.15; 30600,341.15; 31500,
          341.15; 32400,341.15; 33300,341.15])
      annotation (Placement(transformation(extent={{756,-6},{736,14}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_4(table=[0,
          -20.91; 900,-20.91; 1800,-20.91; 2700,-20.91; 3600,-41.83; 4500,-41.83;
          5400,-41.83; 6300,-41.83; 7200,-20.91; 8100,20.91; 9000,41.83; 9900,
          41.83; 10800,41.83; 11700,41.83; 12600,20.91; 13500,6.38; 14400,12.77;
          15300,12.77; 16200,12.77; 17100,12.77; 18000,6.38; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          -10.46; 25200,-20.91; 26100,-20.91; 27000,-20.91; 27900,-20.91; 28800,
          -10.46; 29700,10.46; 30600,20.91; 31500,20.91; 32400,20.91; 33300,
          20.91])
      annotation (Placement(transformation(extent={{718,-10},{698,10}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_hot_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{362,-104},{394,-72}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_6_pipe_cold_34(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=49.5,
      diameter=0.0419,
      zeta=2.6,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{394,-60},{360,-26}})));
    Under_Development.new_prosumer_models.heat_transfer_station PROSUMER5(
      Q_flow_nominal=21245*1.2,
      T_a1_nominal=338.15,
      T_a2_nominal=318.15,
      m_flow_nominal_1=0.34,
      dp1_nominal=20000,
      m_flow_nominal_2=0.34,
      dp2_nominal=20000,
      redeclare Fluid.Pumps.Data.Pumps_FSP.GrundfosCR17AAAEHQQE feedinPer,
      energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_feedPump=3,
      use_inputFilter_feedPump=true,
      riseTime_feedPump=35,
      init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_conVal=1.6,
      use_inputFilter_conVal=true,
      riseTime_conVal=35,
      init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
      Kv_cheVal=11,
      length_transfer_pipe_tot=20,
      zeta_transferstation=14.15,
      d_transferpipe=0.0273,
      R_ins_transferpipe=1000,
      ambient_temperature=system.T_ambient,
      energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,
      tau_pumpsSec=3,
      use_inputFilter_pumpsSec=true,
      riseTime_pumpsSec=35,
      energyDynamics_cv=Modelica.Fluid.Types.Dynamics.SteadyState,
      tau_cv=10,
      T_start_cv=333.15)
      annotation (Placement(transformation(extent={{858,8},{806,62}})));

    Under_Development.Controller_PID_based.PID_Q_T_weighted Controller_5(
      Delta_Qdot_norm=1,
      Delta_T_norm=3,
      T_prim_hot_des=340.15,
      T_sec_hot_des=333.15,
      DeltaT_prim_des=15,
      DeltaT_sec_des=15,
      V_dot_sec_max=24.4,
      k_prim_prod=1.5,
      Ti_prim_prod=35,
      Td_prim_prod=0,
      alpha_prim_prod=0.85,
      k_sec_prod=1.5,
      Ti_sec_prod=35,
      Td_sec_prod=0,
      alpha_sec_prod=0.85,
      k_prim_cons=1.5,
      Ti_prim_cons=35,
      Td_prim_cons=0,
      alpha_prim_cons=0.9,
      k_sec_cons=1.5,
      Ti_sec_cons=35,
      Td_sec_cons=0,
      alpha_sec_cons=0.4,
      controllerType=Modelica.Blocks.Types.SimpleController.PI,
      initType=Modelica.Blocks.Types.Init.InitialOutput)
      annotation (Placement(transformation(extent={{936,20},{894,68}})));
    Modelica.Blocks.Noise.NormalNoise normalNoise4(
      samplePeriod=30,
      mu=0,
      sigma=3) annotation (Placement(transformation(extent={{1046,62},{1026,
              82}})));
    Modelica.Blocks.Math.Add add4
      annotation (Placement(transformation(extent={{1000,40},{980,60}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_5(table=[0,
          318.15; 900,318.15; 1800,318.15; 2700,318.15; 3600,318.15; 4500,
          318.15; 5400,318.15; 6300,318.15; 7200,318.15; 8100,341.15; 9000,
          341.15; 9900,341.15; 10800,341.15; 11700,341.15; 12600,341.15; 13500,
          341.15; 14400,341.15; 15300,341.15; 16200,341.15; 17100,341.15; 18000,
          341.15; 18900,318.15; 19800,318.15; 20700,318.15; 21600,318.15; 22500,
          318.15; 23400,318.15; 24300,318.15; 25200,318.15; 26100,318.15; 27000,
          318.15; 27900,318.15; 28800,318.15; 29700,341.15; 30600,341.15; 31500,
          341.15; 32400,341.15; 33300,341.15])
      annotation (Placement(transformation(extent={{1034,-4},{1014,16}})));
    Under_Development.Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_5(table=[0,
          -10.62; 900,-10.62; 1800,-10.62; 2700,-10.62; 3600,-21.24; 4500,-21.24;
          5400,-21.24; 6300,-21.24; 7200,-10.62; 8100,10.62; 9000,21.24; 9900,
          21.24; 10800,21.24; 11700,21.24; 12600,10.62; 13500,6.38; 14400,12.77;
          15300,12.77; 16200,12.77; 17100,12.77; 18000,6.38; 18900,-6.38; 19800,
          -12.77; 20700,-12.77; 21600,-12.77; 22500,-12.77; 23400,-6.38; 24300,
          -5.31; 25200,-10.62; 26100,-10.62; 27000,-10.62; 27900,-10.62; 28800,
          -5.31; 29700,5.31; 30600,10.62; 31500,10.62; 32400,10.62; 33300,10.62])
      annotation (Placement(transformation(extent={{998,-8},{978,12}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_hot_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{678,-106},{710,-74}})));
    Fluid.Pipes.InsulatedPipe Pipe_ID_8_pipe_cold_45(
      allowFlowReversal=true,
      T_amb=system.T_ambient,
      R_ins=1000,
      length=46.5,
      diameter=0.0273,
      zeta=4.3,
      energyDynamics=Modelica.Fluid.Types.Dynamics.FixedInitial,
      T_start=313.15)
      annotation (Placement(transformation(extent={{714,-58},{680,-24}})));
  equation
    Losses =PROSUMER1.Q_dot_trnsf_is + PROSUMER2.Q_dot_trnsf_is;

    connect(Pipe_ID_2_pipe_hot_12.port_a, PROSUMER1.hot_prim) annotation (
        Line(points={{-132,-92},{-165.733,-92},{-165.733,-10.2889}}, color={0,
            127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, PROSUMER2.hot_prim) annotation (
        Line(points={{-96,-92},{-36.2667,-92},{-36.2667,1.7}},  color={0,127,
            255}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, PROSUMER2.cold_prim) annotation (
        Line(points={{-98,-48},{-52,-48},{-52,-20},{-53.6,-20},{-53.6,1.7}},
          color={0,127,255}));
    connect(PROSUMER1.cold_prim, Pipe_ID_2_pipe_cold_12.port_b) annotation (
        Line(points={{-148.4,-10.2889},{-148.4,-48},{-134,-48}}, color={0,127,
            255}));
    connect(bou.ports[1], Pipe_ID_2_pipe_hot_12.port_b) annotation (Line(
          points={{-46,-176},{-80,-176},{-80,-92},{-96,-92}}, color={0,127,
            255}));
    connect(Controller_1.T_sec_set, PROSUMER1.T_sec_in_set) annotation (Line(
          points={{-226,44},{-226,52},{-210,52},{-210,36.2222},{-190,36.2222}},
          color={0,0,127}));
    connect(Controller_1.V_dot_sec_set, PROSUMER1.V_dot_sec_set) annotation (
        Line(points={{-226,34.4},{-212,34.4},{-212,30.4444},{-190,30.4444}},
          color={0,0,127}));
    connect(Controller_1.pi_set, PROSUMER1.pi) annotation (Line(points={{-226,
            24.8},{-190,21.7778}}, color={255,127,0}));
    connect(Controller_1.mu_set, PROSUMER1.mu) annotation (Line(points={{-226,
            15.2},{-210,15.2},{-210,16},{-190,16}}, color={255,127,0}));
    connect(PROSUMER1.u_set, Controller_1.u_set) annotation (Line(points={{-190,
            10.2222},{-190,5.6},{-226,5.6}},      color={0,0,127}));
    connect(PROSUMER1.kappa_set, Controller_1.kappa_set) annotation (Line(
          points={{-190,4.44444},{-210,4.44444},{-210,-16},{-226,-16},{-226,-4}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(
          points={{-169.2,42},{-169.2,54},{-252,54},{-252,46},{-253.3,46},{
            -253.3,44}},
                  color={0,0,127}));
    connect(PROSUMER1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(
          points={{-141.467,42},{-192,42},{-192,44},{-240.7,44}},
                                                          color={0,0,127}));
    connect(PROSUMER1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(
          points={{-155.333,42},{-155.333,58},{-278,58},{-278,34.4},{-268,34.4}},
                    color={0,0,127}));
    connect(PROSUMER1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(
          points={{-169.2,-10},{-169.2,-18},{-252,-18},{-252,-10},{-253.3,-10},
            {-253.3,-4}}, color={0,0,127}));
    connect(PROSUMER1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(
          points={{-141.467,-10},{-218,-10},{-218,-12},{-240.7,-12},{-240.7,-4}},
          color={0,0,127}));
    connect(Controller_1.V_dot_prim, PROSUMER1.V_dot_prim) annotation (Line(
          points={{-268,5.6},{-278,5.6},{-278,-22},{-155.333,-22},{-155.333,-10}},
                  color={0,0,127}));
    connect(PROSUMER1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(
          points={{-190,-4.22222},{-214,-4.22222},{-214,-24},{-280,-24},{-280,
            15.2},{-268,15.2}}, color={0,0,127}));
    connect(Controller_2.T_sec_set, PROSUMER2.T_sec_in_set) annotation (Line(
          points={{22,56},{22,64},{0,64},{0,50},{-12,50}}, color={0,0,127}));
    connect(Controller_2.V_dot_sec_set, PROSUMER2.V_dot_sec_set) annotation (
        Line(points={{22,46.4},{0,46.4},{0,44},{-12,44}}, color={0,0,127}));
    connect(Controller_2.pi_set, PROSUMER2.pi)
      annotation (Line(points={{22,36.8},{-12,35}}, color={255,127,0}));
    connect(Controller_2.mu_set, PROSUMER2.mu) annotation (Line(points={{22,27.2},
            {0,27.2},{0,29},{-12,29}},       color={255,127,0}));
    connect(Controller_2.u_set, PROSUMER2.u_set) annotation (Line(points={{22,17.6},
            {0,17.6},{0,23},{-12,23}},       color={0,0,127}));
    connect(Controller_2.kappa_set, PROSUMER2.kappa_set) annotation (Line(
          points={{22,8},{14,8},{14,-6},{-2,-6},{-2,14},{-12,14},{-12,17}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_hot, Controller_2.T_sec_hot) annotation (Line(
          points={{-32.8,56},{-32.8,68},{48,68},{48,58},{49.3,58},{49.3,56}},
          color={0,0,127}));
    connect(PROSUMER2.T_sec_cold, Controller_2.T_sec_cold) annotation (Line(
          points={{-60.5333,56},{-56,56},{-56,66},{36.7,66},{36.7,56}}, color=
           {0,0,127}));
    connect(PROSUMER2.V_dot_sec, Controller_2.V_dot_sec) annotation (Line(
          points={{-46.6667,56},{-46.6667,72},{74,72},{74,46.4},{64,46.4}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_hot, Controller_2.T_prim_hot) annotation (Line(
          points={{-32.8,2},{-32.8,-10},{48,-10},{48,2},{49.3,2},{49.3,8}},
          color={0,0,127}));
    connect(PROSUMER2.T_prim_cold, Controller_2.T_prim_cold) annotation (Line(
          points={{-60.5333,2},{-60,2},{-60,-16},{36.7,-16},{36.7,8}}, color=
            {0,0,127}));
    connect(PROSUMER2.V_dot_prim, Controller_2.V_dot_prim) annotation (Line(
          points={{-46.6667,2},{-46,2},{-46,-14},{74,-14},{74,17.6},{64,17.6}},
          color={0,0,127}));
    connect(PROSUMER2.Q_dot_trnsf_is, Controller_2.Qdot_is) annotation (Line(
          points={{-12,8},{-4,8},{-4,-18},{76,-18},{76,27.2},{64,27.2}},
          color={0,0,127}));
    connect(Q_management_array_1.y, Controller_1.Qdot_set) annotation (Line(
          points={{-295,18},{-278,18},{-278,24.8},{-268,24.8}}, color={0,0,127}));
    connect(Q_management_array_2.y, Controller_2.Qdot_set) annotation (Line(
          points={{103,0},{84,0},{84,36.8},{64,36.8}}, color={0,0,127}));
    connect(normalNoise.y, add.u1) annotation (Line(points={{-379,80},{-366,80},{
            -366,70},{-358,70}}, color={0,0,127}));
    connect(T_sec_in_array_1.y, add.u2) annotation (Line(points={{-379,42},{-366,
            42},{-366,58},{-358,58}}, color={0,0,127}));
    connect(add.y, Controller_1.T_sec_sim) annotation (Line(points={{-335,64},{
            -318,64},{-318,44},{-268,44}},
                                      color={0,0,127}));
    connect(normalNoise1.y, add1.u1) annotation (Line(points={{157,64},{144,64},{
            144,48},{134,48}}, color={0,0,127}));
    connect(add1.y, Controller_2.T_sec_sim) annotation (Line(points={{111,42},{
            80,42},{80,56},{64,56}},
                                  color={0,0,127}));
    connect(T_sec_in_array_2.y, add1.u2) annotation (Line(points={{145,-4},{136,
            -4},{136,26},{142,26},{142,36},{134,36}}, color={0,0,127}));
    connect(Controller_3.T_sec_set, PROSUMER3.T_sec_in_set) annotation (Line(
          points={{318,56},{318,64},{294,64},{294,48},{284,48}}, color={0,0,
            127}));
    connect(Controller_3.V_dot_sec_set, PROSUMER3.V_dot_sec_set) annotation (
        Line(points={{318,46.4},{294,46.4},{294,42},{284,42}}, color={0,0,127}));
    connect(Controller_3.pi_set, PROSUMER3.pi)
      annotation (Line(points={{318,36.8},{284,33}}, color={255,127,0}));
    connect(Controller_3.mu_set, PROSUMER3.mu) annotation (Line(points={{318,
            27.2},{294,27.2},{294,27},{284,27}}, color={255,127,0}));
    connect(Controller_3.u_set, PROSUMER3.u_set) annotation (Line(points={{318,
            17.6},{294,17.6},{294,21},{284,21}},     color={0,0,127}));
    connect(Controller_3.kappa_set, PROSUMER3.kappa_set) annotation (Line(
          points={{318,8},{308,8},{308,-6},{292,-6},{292,14},{284,14},{284,15}},
          color={0,0,127}));
    connect(PROSUMER3.T_sec_hot, Controller_3.T_sec_hot) annotation (Line(
          points={{263.2,54},{263.2,68},{342,68},{342,58},{345.3,58},{345.3,56}},
                  color={0,0,127}));
    connect(PROSUMER3.T_sec_cold, Controller_3.T_sec_cold) annotation (Line(
          points={{235.467,54},{238,54},{238,66},{332.7,66},{332.7,56}},
          color={0,0,127}));
    connect(PROSUMER3.V_dot_sec, Controller_3.V_dot_sec) annotation (Line(
          points={{249.333,54},{249.333,72},{368,72},{368,46.4},{360,46.4}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_hot, Controller_3.T_prim_hot) annotation (Line(
          points={{263.2,0},{263.2,-10},{342,-10},{342,2},{345.3,2},{345.3,8}},
          color={0,0,127}));
    connect(PROSUMER3.T_prim_cold, Controller_3.T_prim_cold) annotation (Line(
          points={{235.467,0},{234,0},{234,-16},{332.7,-16},{332.7,8}}, color=
           {0,0,127}));
    connect(PROSUMER3.V_dot_prim, Controller_3.V_dot_prim) annotation (Line(
          points={{249.333,0},{248,0},{248,-14},{368,-14},{368,17.6},{360,17.6}},
                    color={0,0,127}));
    connect(PROSUMER3.Q_dot_trnsf_is, Controller_3.Qdot_is) annotation (Line(
          points={{284,6},{290,6},{290,-18},{370,-18},{370,27.2},{360,27.2}},
          color={0,0,127}));
    connect(normalNoise2.y,add2. u1) annotation (Line(points={{451,64},{438,64},{
            438,48},{428,48}}, color={0,0,127}));
    connect(add2.y, Controller_3.T_sec_sim) annotation (Line(points={{405,42},{
            374,42},{374,56},{360,56}}, color={0,0,127}));
    connect(T_sec_in_array_3.y, add2.u2) annotation (Line(points={{439,-4},{430,
            -4},{430,26},{436,26},{436,36},{428,36}}, color={0,0,127}));
    connect(Pipe_ID_2_pipe_cold_12.port_a, Pipe_ID_4_pipe_cold_23.port_b)
      annotation (Line(points={{-98,-48},{42,-48},{42,-45},{168,-45}}, color=
            {0,127,255}));
    connect(Pipe_ID_2_pipe_hot_12.port_b, Pipe_ID_4_pipe_hot_23.port_a)
      annotation (Line(points={{-96,-92},{38,-92},{38,-89},{168,-89}}, color=
            {0,127,255}));
    connect(Pipe_ID_4_pipe_cold_23.port_a, PROSUMER3.cold_prim) annotation (
        Line(points={{202,-45},{240,-45},{240,-8},{242.4,-8},{242.4,-0.3}},
          color={0,127,255}));
    connect(PROSUMER3.hot_prim, Pipe_ID_4_pipe_hot_23.port_b) annotation (
        Line(points={{259.733,-0.3},{256,-0.3},{256,-89},{202,-89}}, color={0,
            127,255}));
    connect(Q_management_array_3.y, Controller_3.Qdot_set) annotation (Line(
          points={{401,-4},{376,-4},{376,36.8},{360,36.8}}, color={0,0,127}));
    connect(Controller_4.T_sec_set, PROSUMER4.T_sec_in_set) annotation (Line(
          points={{616,58},{616,70},{590,70},{590,56},{582,56}}, color={0,0,
            127}));
    connect(Controller_4.V_dot_sec_set, PROSUMER4.V_dot_sec_set) annotation (
        Line(points={{616,48.4},{590,48.4},{590,50},{582,50}}, color={0,0,127}));
    connect(Controller_4.pi_set, PROSUMER4.pi)
      annotation (Line(points={{616,38.8},{582,41}}, color={255,127,0}));
    connect(Controller_4.mu_set, PROSUMER4.mu) annotation (Line(points={{616,
            29.2},{590,29.2},{590,35},{582,35}}, color={255,127,0}));
    connect(Controller_4.u_set, PROSUMER4.u_set) annotation (Line(points={{616,
            19.6},{590,19.6},{590,29},{582,29}},     color={0,0,127}));
    connect(Controller_4.kappa_set, PROSUMER4.kappa_set) annotation (Line(
          points={{616,10},{604,10},{604,0},{588,0},{588,20},{582,20},{582,23}},
          color={0,0,127}));
    connect(PROSUMER4.T_sec_hot, Controller_4.T_sec_hot) annotation (Line(
          points={{561.2,62},{561.2,74},{638,74},{638,64},{643.3,64},{643.3,58}},
                  color={0,0,127}));
    connect(PROSUMER4.T_sec_cold, Controller_4.T_sec_cold) annotation (Line(
          points={{533.467,62},{534,62},{534,72},{630.7,72},{630.7,58}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_sec, Controller_4.V_dot_sec) annotation (Line(
          points={{547.333,62},{547.333,78},{664,78},{664,48.4},{658,48.4}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_hot, Controller_4.T_prim_hot) annotation (Line(
          points={{561.2,8},{561.2,-4},{638,-4},{638,8},{643.3,8},{643.3,10}},
          color={0,0,127}));
    connect(PROSUMER4.T_prim_cold, Controller_4.T_prim_cold) annotation (Line(
          points={{533.467,8},{530,8},{530,-10},{630.7,-10},{630.7,10}},
          color={0,0,127}));
    connect(PROSUMER4.V_dot_prim, Controller_4.V_dot_prim) annotation (Line(
          points={{547.333,8},{544,8},{544,-8},{664,-8},{664,19.6},{658,19.6}},
          color={0,0,127}));
    connect(PROSUMER4.Q_dot_trnsf_is, Controller_4.Qdot_is) annotation (Line(
          points={{582,14},{586,14},{586,-12},{666,-12},{666,29.2},{658,29.2}},
          color={0,0,127}));
    connect(normalNoise3.y,add3. u1) annotation (Line(points={{747,70},{734,
            70},{734,54},{724,54}},
                               color={0,0,127}));
    connect(add3.y,Controller_4. T_sec_sim) annotation (Line(points={{701,48},{
            670,48},{670,58},{658,58}}, color={0,0,127}));
    connect(T_sec_in_array_4.y,add3. u2) annotation (Line(points={{735,4},{726,
            4},{726,32},{732,32},{732,42},{724,42}},  color={0,0,127}));
    connect(Q_management_array_4.y,Controller_4. Qdot_set) annotation (Line(
          points={{697,0},{672,0},{672,38.8},{658,38.8}},   color={0,0,127}));
    connect(Pipe_ID_6_pipe_hot_34.port_a, Pipe_ID_4_pipe_hot_23.port_b)
      annotation (Line(points={{362,-88},{282,-88},{282,-89},{202,-89}},
          color={0,127,255}));
    connect(PROSUMER4.cold_prim, Pipe_ID_6_pipe_cold_34.port_a) annotation (
        Line(points={{540.4,7.7},{537.2,7.7},{537.2,-43},{394,-43}}, color={0,
            127,255}));
    connect(Pipe_ID_6_pipe_cold_34.port_b, PROSUMER3.cold_prim) annotation (
        Line(points={{360,-43},{238,-43},{238,-45},{240,-45},{240,-8},{242.4,
            -8},{242.4,-0.3}}, color={0,127,255}));
    connect(PROSUMER4.hot_prim, Pipe_ID_6_pipe_hot_34.port_b) annotation (
        Line(points={{557.733,7.7},{554.866,7.7},{554.866,-88},{394,-88}},
          color={0,127,255}));
    connect(Controller_5.T_sec_set, PROSUMER5.T_sec_in_set) annotation (Line(
          points={{894,68},{894,72},{868,72},{868,56},{858,56}}, color={0,0,
            127}));
    connect(Controller_5.V_dot_sec_set, PROSUMER5.V_dot_sec_set) annotation (
        Line(points={{894,58.4},{868,58.4},{868,50},{858,50}}, color={0,0,127}));
    connect(Controller_5.pi_set, PROSUMER5.pi)
      annotation (Line(points={{894,48.8},{858,41}}, color={255,127,0}));
    connect(Controller_5.mu_set, PROSUMER5.mu) annotation (Line(points={{894,
            39.2},{868,39.2},{868,35},{858,35}}, color={255,127,0}));
    connect(Controller_5.u_set, PROSUMER5.u_set) annotation (Line(points={{894,
            29.6},{868,29.6},{868,29},{858,29}},     color={0,0,127}));
    connect(Controller_5.kappa_set, PROSUMER5.kappa_set) annotation (Line(
          points={{894,20},{882,20},{882,2},{866,2},{866,22},{858,22},{858,23}},
          color={0,0,127}));
    connect(PROSUMER5.T_sec_hot, Controller_5.T_sec_hot) annotation (Line(
          points={{837.2,62},{837.2,76},{916,76},{916,68},{921.3,68}},
                  color={0,0,127}));
    connect(PROSUMER5.T_sec_cold, Controller_5.T_sec_cold) annotation (Line(
          points={{809.467,62},{812,62},{812,74},{908.7,74},{908.7,68}},
          color={0,0,127}));
    connect(PROSUMER5.V_dot_sec, Controller_5.V_dot_sec) annotation (Line(
          points={{823.333,62},{823.333,80},{942,80},{942,58.4},{936,58.4}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_hot, Controller_5.T_prim_hot) annotation (Line(
          points={{837.2,8},{837.2,-2},{916,-2},{916,10},{921.3,10},{921.3,20}},
          color={0,0,127}));
    connect(PROSUMER5.T_prim_cold, Controller_5.T_prim_cold) annotation (Line(
          points={{809.467,8},{808,8},{808,-8},{908.7,-8},{908.7,20}}, color=
            {0,0,127}));
    connect(PROSUMER5.V_dot_prim, Controller_5.V_dot_prim) annotation (Line(
          points={{823.333,8},{822,8},{822,-6},{942,-6},{942,29.6},{936,29.6}},
          color={0,0,127}));
    connect(PROSUMER5.Q_dot_trnsf_is, Controller_5.Qdot_is) annotation (Line(
          points={{858,14},{864,14},{864,-10},{944,-10},{944,39.2},{936,39.2}},
          color={0,0,127}));
    connect(normalNoise4.y,add4. u1) annotation (Line(points={{1025,72},{1012,
            72},{1012,56},{1002,56}},
                               color={0,0,127}));
    connect(add4.y,Controller_5. T_sec_sim) annotation (Line(points={{979,50},{
            948,50},{948,68},{936,68}}, color={0,0,127}));
    connect(T_sec_in_array_5.y,add4. u2) annotation (Line(points={{1013,6},{
            1004,6},{1004,34},{1010,34},{1010,44},{1002,44}},
                                                      color={0,0,127}));
    connect(Q_management_array_5.y,Controller_5. Qdot_set) annotation (Line(
          points={{977,2},{950,2},{950,48.8},{936,48.8}},   color={0,0,127}));
    connect(PROSUMER5.cold_prim, Pipe_ID_8_pipe_cold_45.port_a) annotation (
        Line(points={{816.4,7.7},{815.2,7.7},{815.2,-41},{714,-41}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_cold_45.port_b, Pipe_ID_6_pipe_cold_34.port_a)
      annotation (Line(points={{680,-41},{610,-41},{610,-44},{536,-44},{536,-43},
            {394,-43}}, color={0,127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_b, PROSUMER5.hot_prim) annotation (
        Line(points={{710,-90},{834,-90},{834,7.7},{833.733,7.7}}, color={0,
            127,255}));
    connect(Pipe_ID_8_pipe_hot_45.port_a, Pipe_ID_6_pipe_hot_34.port_b)
      annotation (Line(points={{678,-90},{616,-90},{616,-88},{394,-88}},
          color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-440,
              -220},{1060,120}})),Diagram(coordinateSystem(preserveAspectRatio=
              false, extent={{-440,-220},{1060,120}}),graphics={
          Text(
            extent={{-142,-24},{-98,-38}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{-134,-124},{-98,-140}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{514,116},{594,82}},
            textColor={0,0,0},
            textString="Prosumer4
MF5"),    Text(
            extent={{792,118},{872,84}},
            textColor={0,0,0},
            textString="Prosumer5
SF2"),    Text(
            extent={{268,110},{348,76}},
            textColor={0,0,0},
            textString="Prosumer3
SF4"),    Text(
            extent={{-32,114},{48,80}},
            textColor={0,0,0},
            textString="Prosumer2
SF3"),    Text(
            extent={{-252,102},{-172,68}},
            textColor={0,0,0},
            textString="Prosumer1
SF1"),    Text(
            extent={{170,-118},{206,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{162,-18},{206,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{364,-118},{400,-134}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{356,-18},{400,-32}},
            textColor={28,108,200},
            textString="cold"),
          Text(
            extent={{680,-116},{716,-132}},
            textColor={238,46,47},
            textString="hot"),
          Text(
            extent={{672,-16},{716,-30}},
            textColor={28,108,200},
            textString="cold")}),
      experiment(
        StopTime=34200,
        Interval=10,
        __Dymola_Algorithm="Dassl"),
      __Dymola_Commands(file="Scripts/COSES_PLOT.mos" "COSES_PLOT", file=
            "Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/cosesplot.mos" "cosesplot",
        file="Scripts/coses_plot_tables.mos" "coses_plot_tables"));
  end CoSES_5_Prosumers_new_SCENARIOS;
end Fabian;
