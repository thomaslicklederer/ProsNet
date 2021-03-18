within ProsNet.Fluid.Sources.Examples;
model PropertySource_T "Model that illustrates the use of PropertySource_T"
  extends Modelica.Icons.Example;
  package Medium = ProsNet.Media.Air(extraPropertiesNames={"CO2"});

  ProsNet.Fluid.Sources.Boundary_ph sin(redeclare package Medium = Medium,
      nPorts=1) "Sink model"
    annotation (Placement(transformation(extent={{80,-10},{60,10}})));
  ProsNet.Fluid.Sources.PropertySource_T proSouT(redeclare package Medium =
        Medium, use_T_in=true)
    "Property source that prescribes the temperature"
    annotation (Placement(transformation(extent={{-10,30},{10,50}})));
  ProsNet.Fluid.Sources.MassFlowSource_T bouT(
    redeclare package Medium = Medium,
    nPorts=1,
    use_m_flow_in=true) "Boundary for temperature test"
    annotation (Placement(transformation(extent={{-60,30},{-40,50}})));
  Modelica.Blocks.Sources.Constant T(k=Medium.T_default + 1)
    "Fixed temperature value"
    annotation (Placement(transformation(extent={{-40,50},{-20,70}})));
  Modelica.Blocks.Sources.Ramp ramp(
    height=-2,
    duration=1,
    offset=1)
    "Ramp for mass flow rate"
    annotation (Placement(transformation(extent={{-100,60},{-80,80}})));
  ProsNet.Fluid.Sensors.TemperatureTwoPort senTemT(
    redeclare package Medium = Medium,
    m_flow_nominal=1,
    tau=0)
    "Temperature sensor for when using temperature input"
    annotation (Placement(transformation(extent={{20,30},{40,50}})));
equation
  connect(bouT.ports[1], proSouT.port_a)
    annotation (Line(points={{-40,40},{-10,40}}, color={0,127,255}));
  connect(bouT.m_flow_in, ramp.y) annotation (Line(points={{-62,48},{-72,48},{-72,
          70},{-79,70}}, color={0,0,127}));
  connect(T.y, proSouT.T_in)
    annotation (Line(points={{-19,60},{-4,60},{-4,52}}, color={0,0,127}));
  connect(senTemT.port_b, sin.ports[1]) annotation (Line(points={{40,40},{60,40},
          {60,0}},        color={0,127,255}));
  connect(proSouT.port_b, senTemT.port_a)
    annotation (Line(points={{10,40},{20,40}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    Documentation(info="<html>
<p>
Example model that illustrates the use of
the <a href=\"modelica://IBPSA.Fluid.Sources.PropertySource_T\">
IBPSA.Fluid.Sources.PropertySource_T</a> model.
</p>
</html>", revisions="<html>
<ul>
<li>
April 30, 2018, by Filip Jorissen:<br/>
First implementation.
See <a href=\"https://github.com/ibpsa/modelica-ibpsa/issues/881\">#881</a>.
</li>
</ul>
</html>"),
    __Dymola_Commands(file=
          "Resources/Scripts/Dymola/Fluid/Sources/Examples/PropertySource_T.mos"
        "Simulate and plot"),
    experiment(
      StopTime=1,
      Tolerance=1e-06));
end PropertySource_T;
