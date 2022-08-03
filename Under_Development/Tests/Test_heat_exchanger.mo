within ProsNet.Under_Development.Tests;
model Test_heat_exchanger


  replaceable package Medium1 = ProsNet.Media.Water;
  replaceable package Medium2 = ProsNet.Media.Water;

  extends ProsNet.Prosumers.BaseClasses.PrimarySideParameters;
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.PumpsPairDynParam;
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.ControlVolumeDynParam;

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
