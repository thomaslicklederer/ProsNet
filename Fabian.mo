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
        annotation (Line(points={{-106,-84},{182,-84}}, color={0,127,255}));
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
        redeclare Fluid.Pumps.Data.Pumps_FSP.FSPStratos25slash0pt5to8 feedinPer,

        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=7.73,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
        zeta_transferstation=2,
        d_transferpipe=0.0539,
        R_ins_transferpipe=25,
        ambient_temperature=system.T_ambient,
        energyDynamics_pumpsSec=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

        tau_pumpsSec=3,
        use_inputFilter_pumpsSec=true,
        riseTime_pumpsSec=35,
        tau_cv=10,
        T_start_cv=313.15)
        annotation (Placement(transformation(extent={{-202,2},{-172,38}})));

      Under_Development.new_prosumer_models.heat_transfer_station HOUSE2(
        Q_flow_nominal=30000*3,
        T_a1_nominal=318.15,
        T_a2_nominal=303.15,
        m_flow_nominal_1=0.358*3,
        m_flow_nominal_2=0.358*3,
        redeclare Fluid.Pumps.Data.Pumps_FSP.FSPStratos25slash0pt5to8 feedinPer,

        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=4.19,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
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
        annotation (Placement(transformation(extent={{-128,-92},{-108,-72}})));
      Fluid.Pipes.InsulatedPipe pipe_cold_12(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0539,
        zeta=1,
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
        redeclare Fluid.Pumps.Data.Pumps_FSP.FSPStratos25slash0pt5to8 feedinPer,

        energyDynamics_feedPump=Modelica.Fluid.Types.Dynamics.DynamicFreeInitial,

        tau_feedPump=3,
        use_inputFilter_feedPump=true,
        riseTime_feedPump=35,
        init_feedPump=Modelica.Blocks.Types.Init.InitialOutput,
        Kv_conVal=3.86,
        use_inputFilter_conVal=true,
        riseTime_conVal=35,
        init_conVal=Modelica.Blocks.Types.Init.InitialOutput,
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
        annotation (Placement(transformation(extent={{202,-58},{182,-38}})));
      Fluid.Pipes.InsulatedPipe pipe_hot_23(
        allowFlowReversal=true,
        T_amb=system.T_ambient,
        R_ins=25,
        length=30,
        diameter=0.0419,
        zeta=1,
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
              -82},{-188,-82},{-188,1.8}},
                                      color={0,127,255}));
      connect(pipe_hot_12.port_b, HOUSE2.hot_prim) annotation (Line(points={{-108,
              -82},{-34.2667,-82},{-34.2667,-0.3}}, color={0,127,255}));
      connect(pipe_cold_12.port_a, HOUSE2.cold_prim) annotation (Line(points={{-106,
              -48},{-52,-48},{-52,-20},{-51.6,-20},{-51.6,-0.3}}, color={0,127,255}));
      connect(HOUSE1.cold_prim, pipe_cold_12.port_b) annotation (Line(points={{-178,
              1.8},{-178,-48},{-126,-48}}, color={0,127,255}));
      connect(bou.ports[1], pipe_hot_12.port_b) annotation (Line(points={{-44,
              -164},{-80,-164},{-80,-82},{-108,-82}},
                                                color={0,127,255}));
      connect(Controller_1.T_sec_set, HOUSE1.T_sec_in_set) annotation (Line(points={{-226,42},
              {-226,52},{-210,52},{-210,34},{-202,34}},            color={0,0,127}));
      connect(Controller_1.V_dot_sec_set, HOUSE1.V_dot_sec_set) annotation (Line(
            points={{-226,32.4},{-212,32.4},{-212,30},{-202,30}}, color={0,0,127}));
      connect(Controller_1.pi_set, HOUSE1.pi)
        annotation (Line(points={{-226,22.8},{-202,24}}, color={255,127,0}));
      connect(Controller_1.mu_set, HOUSE1.mu) annotation (Line(points={{-226,
              13.2},{-210,13.2},{-210,20},{-202,20}},
                                                color={255,127,0}));
      connect(HOUSE1.u_set, Controller_1.u_set) annotation (Line(points={{-202,16},
              {-208,16},{-208,3.6},{-226,3.6}}, color={0,0,127}));
      connect(HOUSE1.kappa_set, Controller_1.kappa_set) annotation (Line(points={{-202,12},
              {-212,12},{-212,-16},{-226,-16},{-226,-6}},     color={0,0,127}));
      connect(HOUSE1.T_sec_hot, Controller_1.T_sec_hot) annotation (Line(points={{-190,38},
              {-190,54},{-252,54},{-252,46},{-253.3,46},{-253.3,42}},     color={0,
              0,127}));
      connect(HOUSE1.T_sec_cold, Controller_1.T_sec_cold) annotation (Line(points={{-174,38},
              {-174,44},{-218,44},{-218,48},{-240.7,48},{-240.7,42}},
            color={0,0,127}));
      connect(HOUSE1.V_dot_sec, Controller_1.V_dot_sec) annotation (Line(points={{-182,38},
              {-182,58},{-278,58},{-278,32.4},{-268,32.4}},     color={0,0,127}));
      connect(HOUSE1.T_prim_hot, Controller_1.T_prim_hot) annotation (Line(points={{-190,2},
              {-190,-18},{-252,-18},{-252,-10},{-253.3,-10},{-253.3,-6}},
            color={0,0,127}));
      connect(HOUSE1.T_prim_cold, Controller_1.T_prim_cold) annotation (Line(points={{-174,2},
              {-174,-6},{-218,-6},{-218,-12},{-240.7,-12},{-240.7,-6}},
            color={0,0,127}));
      connect(Controller_1.V_dot_prim, HOUSE1.V_dot_prim) annotation (Line(points={{-268,
              3.6},{-278,3.6},{-278,-22},{-182,-22},{-182,2}},       color={0,0,127}));
      connect(HOUSE1.Q_dot_trnsf_is, Controller_1.Qdot_is) annotation (Line(points={{-202,6},
              {-214,6},{-214,-24},{-280,-24},{-280,13.2},{-268,13.2}},
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
        annotation (Line(points={{-108,-82},{38,-82},{38,-84},{182,-84}},
                                                        color={0,127,255}));
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
    end Test_Controller_3_rad_highkW_Q_pump_maxV_in_PID;
  end Tests;
end Fabian;
