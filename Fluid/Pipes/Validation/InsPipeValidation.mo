within ProsNet.Fluid.Pipes.Validation;
model InsPipeValidation
  extends Modelica.Icons.Example;
  InsulatedPipe insulatedPipe(T_amb=253.15, length=100)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Sources.Boundary_pT bou(p=200000, nPorts=1)
    annotation (Placement(transformation(extent={{-80,-10},{-60,10}})));
  Sources.Boundary_pT bou1(p=100000, nPorts=1)
    annotation (Placement(transformation(extent={{80,-10},{60,10}})));
  Sensors.TemperatureTwoPort senTem(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{-42,-10},{-22,10}})));
  Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{24,-10},{44,10}})));
  InsulatedPipe insulatedPipe1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={44,-38})));
  Sources.Boundary_pT bou2(p=500000, nPorts=1) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={44,-76})));
equation
  connect(bou.ports[1], senTem.port_a)
    annotation (Line(points={{-60,0},{-42,0}}, color={0,127,255}));
  connect(senTem.port_b, insulatedPipe.port_a)
    annotation (Line(points={{-22,0},{-10,0}}, color={0,127,255}));
  connect(insulatedPipe.port_b, senTem1.port_a)
    annotation (Line(points={{10,0},{24,0}}, color={0,127,255}));
  connect(senTem1.port_b, bou1.ports[1])
    annotation (Line(points={{44,0},{60,0}}, color={0,127,255}));
  connect(senTem1.port_b, insulatedPipe1.port_a)
    annotation (Line(points={{44,0},{44,-28}}, color={0,127,255}));
  connect(insulatedPipe1.port_b, bou2.ports[1])
    annotation (Line(points={{44,-48},{44,-66}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end InsPipeValidation;
