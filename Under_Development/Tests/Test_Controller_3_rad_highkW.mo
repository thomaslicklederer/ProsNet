within ProsNet.Under_Development.Tests;
model Test_Controller_3_rad_highkW "Producer and Consumer with Controller"
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
    annotation (Placement(transformation(extent={{-202,2},{-172,38}})));

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
  Controller_PID_based.PID_Q_T_weighted Controller_1(
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
  Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_1(table=[0,
        273.15 + 45; 900,273.15 + 45; 1800,273.15 + 45; 2700,273.15 + 45; 3600,
        273.15 + 45; 4500,273.15 + 45; 5400,273.15 + 45; 6300,273.15 + 45; 7200,
        273.15 + 45; 8100,273.15 + 45; 9000,273.15 + 30; 9900,273.15 + 30;
        10800,273.15 + 30; 11700,273.15 + 30; 12600,273.15 + 45; 13500,273.15
         + 45; 14400,273.15 + 45; 15300,273.15 + 30; 16200,273.15 + 30; 17100,
        273.15 + 30; 18000,273.15 + 30])
    annotation (Placement(transformation(extent={{-400,32},{-380,52}})));
  Controller_PID_based.PID_Q_T_weighted Controller_2(
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
  Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_1(table=[0,
        0; 900,4; 1800,4; 2700,4; 3600,0; 4500,0; 5400,0; 6300,4; 7200,7; 8100,
        4; 9000,0; 9900,-4; 10800,-7; 11700,-4; 12600,0; 13500,7; 14400,0;
        15300,0; 16200,-7; 17100,0; 18000,0])
    annotation (Placement(transformation(extent={{-314,8},{-294,28}})));
  Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_2(table=[0,
        0; 900,-2; 1800,-2; 2700,-2; 3600,0; 4500,0; 5400,0; 6300,-2; 7200,-3.5;
        8100,-2; 9000,0; 9900,2; 10800,3.5; 11700,2; 12600,0; 13500,-3.5; 14400,
        0; 15300,0; 16200,3.5; 17100,0; 18000,0])
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
  Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_2(table=[0,
        273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30; 3600,
        273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15 + 30; 7200,
        273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,273.15 + 45;
        10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 + 30; 13500,273.15
         + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,273.15 + 45; 17100,
        273.15 + 45; 18000,273.15 + 45])
    annotation (Placement(transformation(extent={{166,-14},{146,6}})));
  new_prosumer_models.heat_transfer_station HOUSE3(
    redeclare Fluid.Pumps.Data.Pumps.IMP.NMTDPlusER25slash90dash180 feedinPer,
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
  Controller_PID_based.PID_Q_T_weighted Controller_3(
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
  Controller_PID_based.auxiliary.TimeTable_noInterp T_sec_in_array_3(table=[0,
        273.15 + 30; 900,273.15 + 30; 1800,273.15 + 30; 2700,273.15 + 30; 3600,
        273.15 + 30; 4500,273.15 + 30; 5400,273.15 + 30; 6300,273.15 + 30; 7200,
        273.15 + 30; 8100,273.15 + 30; 9000,273.15 + 45; 9900,273.15 + 45;
        10800,273.15 + 45; 11700,273.15 + 45; 12600,273.15 + 30; 13500,273.15
         + 30; 14400,273.15 + 30; 15300,273.15 + 45; 16200,273.15 + 45; 17100,
        273.15 + 45; 18000,273.15 + 45])
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
  Controller_PID_based.auxiliary.TimeTable_noInterp Q_management_array_3(table=[0,
        0; 900,-2; 1800,-2; 2700,-2; 3600,0; 4500,0; 5400,0; 6300,-2; 7200,-3.5;
        8100,-2; 9000,0; 9900,2; 10800,3.5; 11700,2; 12600,0; 13500,-3.5; 14400,
        0; 15300,0; 16200,3.5; 17100,0; 18000,0])
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
end Test_Controller_3_rad_highkW;
