within ProsNet.Prosumers.Validation;
model ProsumerValidation
  extends Modelica.Icons.Example;

  Fluid.Sources.Boundary_pT bou1(
    redeclare package Medium = Media.Water,
    p=100000,                              nPorts=1)
    annotation (Placement(transformation(extent={{-92,-38},{-72,-18}})));
  Fluid.Sources.Boundary_pT bou2(
    redeclare package Medium = Media.Water,
    p=300000,
    T=343.15,
    nPorts=1)
    annotation (Placement(transformation(extent={{100,-40},{80,-20}})));
  ProsumerIdeal pros(T_sec=323.15, m_flow_sec=1)
    annotation (Placement(transformation(extent={{-4,-8},{16,12}})));
equation
  connect(pros.port_b, bou2.ports[1]) annotation (Line(points={{16,2},{56,2},{
          56,-30},{80,-30}}, color={0,127,255}));
  connect(pros.port_a, bou1.ports[1]) annotation (Line(points={{-4,2},{-32,2},{
          -32,-28},{-72,-28}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ProsumerValidation;
