within ProsNet.Prosumers.Validation;
model SecondarySide
  extends Modelica.Icons.Example;

  package Medium = ProsNet.Media.Water;

  Modelica.Blocks.Sources.IntegerConstant pi(k=1)
    annotation (Placement(transformation(extent={{-80,20},{-60,40}})));
  Modelica.Blocks.Sources.IntegerConstant mu(k=1)
    annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
  Modelica.Blocks.Sources.Constant T(k=273.15 + 50)
    annotation (Placement(transformation(extent={{80,60},{60,80}})));
  Modelica.Blocks.Sources.Constant m_flow(k=1)
    annotation (Placement(transformation(extent={{80,18},{60,38}})));
  Fluid.Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=
        Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{-74,-34},{-54,-14}})));
  Fluid.Sensors.MassFlowRate senMasFlo1
    annotation (Placement(transformation(extent={{-42,-34},{-22,-14}})));
  Fluid.Sensors.TemperatureTwoPort temSecHot(m_flow_nominal=preSec.m_flow_nominal_cv, initType=
       Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{28,-34},{48,-14}})));
  Fluid.Sources.Boundary_pT bou1(nPorts=1) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-80,-54})));
  Fluid.Sources.Boundary_pT bou2(nPorts=1) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={72,-46})));

  SecondarySides.PrescribedSecondarySide preSec(redeclare package Medium = Medium,
    dp_nominal=10000,
    m_flow_nominal_cv=1)
    annotation (Placement(transformation(extent={{-8,-34},{12,-14}})));
equation
  connect(senMasFlo1.port_a, senTem1.port_b)
    annotation (Line(points={{-42,-24},{-54,-24}}, color={0,127,255}));
  connect(senTem1.port_a, bou1.ports[1]) annotation (Line(points={{-74,-24},
          {-78,-24},{-78,-44},{-80,-44}}, color={0,127,255}));
  connect(bou2.ports[1], temSecHot.port_b)
    annotation (Line(points={{72,-36},{72,-24},{48,-24}}, color={0,127,255}));
  connect(senMasFlo1.port_b, preSec.port_a)
    annotation (Line(points={{-22,-24},{-8,-24}}, color={0,127,255}));
  connect(preSec.port_b, temSecHot.port_a)
    annotation (Line(points={{12,-24},{28,-24}}, color={0,127,255}));
  connect(pi.y, preSec.pi) annotation (Line(points={{-59,30},{-20,30},{-20,-12.8},{-10,-12.8}},
        color={255,127,0}));
  connect(mu.y, preSec.mu) annotation (Line(points={{-59,70},{-18,70},{-18,-9},{-10,-9}},
        color={255,127,0}));
  connect(T.y, preSec.T_set)
    annotation (Line(points={{59,70},{-2,70},{-2,-12}}, color={0,0,127}));
  connect(m_flow.y, preSec.m_flow_set) annotation (Line(points={{59,28},{6,28},
          {6,-12}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end SecondarySide;
