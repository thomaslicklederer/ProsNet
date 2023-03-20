within ProsNet.Under_Development.Tests;
model Test_control_valve_model
  Modelica.Fluid.Sensors.VolumeFlowRate volumeFlowRate(redeclare package Medium =
        ProsNet.Media.Water)
    annotation (Placement(transformation(extent={{-20,32},{0,52}})));
  Modelica.Fluid.Sensors.RelativePressure relativePressure(redeclare package
      Medium = ProsNet.Media.Water)
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
  ProsNet.Fluid.Valves.TwoWayEqualPercentage valve_prim_cons(
    m_flow_nominal=1.25,
    kFixed=0,
    redeclare final package Medium = ProsNet.Media.Water,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=6.29,
    final use_inputFilter=true,
    final riseTime=35,
    final init=Modelica.Blocks.Types.Init.InitialState,
    final y_start=0,
    final l=0.002) annotation (Placement(transformation(
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
