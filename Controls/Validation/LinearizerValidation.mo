within ProsNet.Controls.Validation;
model LinearizerValidation
  extends Modelica.Icons.Example;

    package Medium = ProsNet.Media.Water;

  ProsNet.Fluid.Sources.Boundary_pT bou1(redeclare package Medium = Medium,
    p=200000,
    nPorts=1)   annotation (Placement(visible=true, transformation(
        origin={20,44},
        extent={{10,-10},{-10,10}},
        rotation=90)));
  ProsNet.Fluid.Sources.Boundary_pT bou2(redeclare package Medium = Medium,
    p=100000,
    nPorts=1)   annotation (Placement(visible=true, transformation(
        origin={20,-46},
        extent={{-10,10},{10,-10}},
        rotation=90)));
  Modelica.Blocks.Sources.Ramp ramp(
    height=1,
    duration=1,
    offset=0)
    annotation (Placement(transformation(extent={{-86,-10},{-66,10}})));
  ProsNet.Fluid.Valves.TwoWayEqualPercentage val(redeclare package Medium = Medium,
    m_flow_nominal=0.3586,
    CvData=ProsNet.Fluid.Types.CvTypes.Kv,
      Kv=2.5,
    use_inputFilter=false,
    l=2e-3)   annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={20,0})));
  Linearizer lin(redeclare Data.Linearizer.EqualPercentage cha)
    annotation (Placement(transformation(extent={{-38,-8},{-18,12}})));
equation
  connect(bou1.ports[1], val.port_a)
    annotation (Line(points={{20,34},{20,10}}, color={0,127,255}));
  connect(val.port_b, bou2.ports[1])
    annotation (Line(points={{20,-10},{20,-36}}, color={0,127,255}));
  connect(ramp.y, lin.kappa) annotation (Line(points={{-65,0},{-52,0},{-52,2},
          {-40,2}}, color={0,0,127}));
  connect(lin.op, val.y)
    annotation (Line(points={{-17,2},{-4,2},{-4,0},{8,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    Documentation(info="<html>
<p>Test model for linearizer acting on a valve with equal-percentage inherent characteristic.</p>
<p><br>The mass flow through the valve must change linearly with the ramp despite non-linear inherent characteristic of the valve. The ramp signal represents a changing non-dimensional flow coefficient: zero input corresponds to a fully closed valve, one to a fully opened valve.</p>
</html>"));
end LinearizerValidation;
