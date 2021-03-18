within ProsNet.Fluid.Sources.Validation;
model Boundaries
  extends Modelica.Icons.Example;

  replaceable package Medium = ProsNet.Media.Water;


  Boundary_pT bou(p=100000, nPorts=1)
    annotation (Placement(transformation(extent={{-82,40},{-62,60}})));
  Boundary_pT bou1(p=200000, nPorts=1)
    annotation (Placement(transformation(extent={{90,2},{70,22}})));
  Modelica.Fluid.Pipes.StaticPipe pipe(redeclare package Medium = Medium, length=1, diameter=1)
    annotation (Placement(transformation(extent={{-6,2},{14,22}})));
  Sensors.TemperatureTwoPort senTem(m_flow_nominal=0.3)
    annotation (Placement(transformation(extent={{-48,40},{-28,60}})));
  Sensors.MassFlowRate senMasFlo
    annotation (Placement(transformation(extent={{30,2},{50,22}})));
equation
  connect(bou.ports[1], senTem.port_a)
    annotation (Line(points={{-62,50},{-48,50}}, color={0,127,255}));
  connect(senTem.port_b, pipe.port_a) annotation (Line(points={{-28,50},{-22,50},
          {-22,12},{-6,12}}, color={0,127,255}));
  connect(pipe.port_b, senMasFlo.port_a)
    annotation (Line(points={{14,12},{30,12}}, color={0,127,255}));
  connect(senMasFlo.port_b, bou1.ports[1])
    annotation (Line(points={{50,12},{70,12}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Boundaries;
