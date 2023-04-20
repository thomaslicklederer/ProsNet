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
    T=313.15,
    nPorts=1) annotation (Placement(transformation(extent={{-84,14},{-64,34}})));
  Modelica.Fluid.Sources.FixedBoundary boundary1(redeclare package Medium =
        Media.Water, nPorts=1)
    annotation (Placement(transformation(extent={{-88,-90},{-68,-70}})));
  Modelica.Fluid.Sources.MassFlowSource_T boundary2(
    redeclare package Medium = Media.Water,
    use_m_flow_in=true,
    m_flow=1,
    T=333.15,
    nPorts=1) annotation (Placement(transformation(extent={{70,-34},{50,-14}})));
  Modelica.Fluid.Sources.FixedBoundary boundary3(redeclare package Medium =
        Media.Water, nPorts=1)
    annotation (Placement(transformation(extent={{52,44},{32,64}})));
  Modelica.Blocks.Sources.Ramp ramp(
    height=0.2,
    duration=900,
    offset=0.001,
    startTime=900)
    annotation (Placement(transformation(extent={{50,-70},{70,-50}})));


  Fluid.HeatExchangers.LiquidToLiquid liquidToLiquid(
    redeclare package Medium1 = Medium1,
    redeclare package Medium2 = Medium2,
    m1_flow_nominal=1,
    m2_flow_nominal=1,
    dp1_nominal(displayUnit="bar") = 100000,
    dp2_nominal(displayUnit="bar") = 100000,
    use_Q_flow_nominal=true,
    Q_flow_nominal(displayUnit="kW") = 30000,
    T_a1_nominal=313.15,
    T_a2_nominal=333.15,
    eps_nominal=1)
    annotation (Placement(transformation(extent={{-24,-18},{-4,2}})));
  Fluid.Sensors.Temperature senTem(redeclare package Medium = Medium1)
    annotation (Placement(transformation(extent={{46,12},{66,32}})));
  Fluid.Sensors.Temperature senTem1(redeclare package Medium = Medium2)
    annotation (Placement(transformation(extent={{-46,-70},{-26,-50}})));

  Real DeltaT1;
  Real DeltaT2;
equation
  connect(ramp.y, boundary2.m_flow_in) annotation (Line(points={{71,-60},{76,-60},{76,
          -16},{70,-16}},   color={0,0,127}));

  DeltaT1 = senTem.T - liquidToLiquid.T_in1;
  DeltaT2 = senTem1.T - liquidToLiquid.T_in2;


  connect(boundary.ports[1], liquidToLiquid.port_a1)
    annotation (Line(points={{-64,24},{-62,24},{-62,-2},{-24,-2}}, color={0,127,255}));
  connect(boundary1.ports[1], liquidToLiquid.port_b2) annotation (Line(points={{-68,-80},
          {-50,-80},{-50,-54},{-48,-54},{-48,-14},{-24,-14}}, color={0,127,255}));
  connect(liquidToLiquid.port_a2, boundary2.ports[1]) annotation (Line(points={{-4,-14},
          {2,-14},{2,-18},{0,-18},{0,-24},{50,-24}}, color={0,127,255}));
  connect(liquidToLiquid.port_b1, boundary3.ports[1])
    annotation (Line(points={{-4,-2},{26,-2},{26,54},{32,54}}, color={0,127,255}));
  connect(senTem1.port, liquidToLiquid.port_b2) annotation (Line(points={{-36,-70},{-36,
          -74},{-50,-74},{-50,-54},{-48,-54},{-48,-14},{-24,-14}}, color={0,127,255}));
  connect(senTem.port, liquidToLiquid.port_b1)
    annotation (Line(points={{56,12},{56,-2},{-4,-2}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    experiment(
      StopTime=2100,
      Interval=1,
      __Dymola_Algorithm="Dassl"));
end Test_heat_exchanger;
