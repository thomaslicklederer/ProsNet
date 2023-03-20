within ProsNet.Under_Development.Tests;
model Test_check_and_control_valve_model_FLOWINCREASE
  Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package Medium =
        ProsNet.Media.Water)
    annotation (Placement(transformation(extent={{-48,32},{-28,52}})));
  Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare package
      Medium = ProsNet.Media.Water)
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
  ProsNet.Fluid.FixedResistances.CheckValve cheVal_prim_cons(
    m_flow_nominal=2.148,
    redeclare final package Medium = ProsNet.Media.Water,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=6.29,
    final l=0.001) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=180,
        origin={32,42})));
  ProsNet.Fluid.Valves.TwoWayEqualPercentage valve_prim_cons(
    m_flow_nominal=2.148,
    kFixed=0,
    redeclare final package Medium = ProsNet.Media.Water,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=6.29,
    final use_inputFilter=true,
    final riseTime=35,
    final init=Modelica.Blocks.Types.Init.InitialOutput,
    final y_start=0,
    final l=0.002) annotation (Placement(transformation(
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
