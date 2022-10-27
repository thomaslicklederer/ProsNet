within ProsNet.Under_Development.Tests;
model Test_pump_curve

  ProsNet.Fluid.Pumps.SpeedControlled_y
                                pump_prim_prod(
    redeclare final package Medium = ProsNet.Media.Water,
    final energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyStateInitial,
    inputType=ProsNet.Fluid.Types.InputType.Continuous,
    final tau=1,
    redeclare final ProsNet.Fluid.Pumps.Data.Pumps.IMP.NMTPlus152025to40 per,
    final use_inputFilter=true,
    final riseTime=1,
    final init=Modelica.Blocks.Types.Init.SteadyState,
    final y_start=0)                annotation (Placement(transformation(
        extent={{10,10},{-10,-10}},
        rotation=-90,
        origin={-44,-8})));
  ProsNet.Fluid.Sources.Boundary_pT
                            bou(redeclare package Medium = ProsNet.Media.Water,
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
  annotation ();
end Test_pump_curve;
