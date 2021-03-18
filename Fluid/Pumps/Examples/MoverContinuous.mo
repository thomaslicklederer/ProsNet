within ProsNet.Fluid.Pumps.Examples;
model MoverContinuous
  "Example model of movers using a real input for setting the stage"
  extends MoverParameter(pump_m_flow(inputType=ProsNet.Fluid.Types.InputType.Continuous),
      pump_y(inputType=ProsNet.Fluid.Types.InputType.Continuous));
  Modelica.Blocks.Sources.Ramp ramp(duration=1) "Ramp input for all movers"
    annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
  Modelica.Blocks.Math.Gain gai_m_flow(k=m_flow_nominal)
    "Nominal mass flow rate"
    annotation (Placement(transformation(extent={{-40,10},{-20,30}})));
equation
  connect(gai_m_flow.y, pump_m_flow.m_flow_in)
    annotation (Line(points={{-19,20},{0,20},{0,12}},       color={0,0,127}));
  connect(gai_m_flow.u, ramp.y) annotation (Line(points={{-42,20},{-50,20},{-50,
          70},{-59,70}}, color={0,0,127}));
  connect(pump_y.y, ramp.y) annotation (Line(points={{2,-28},{2,-20},{-50,-20},
          {-50,70},{-59,70}},      color={0,0,127}));
  annotation (
    Documentation(info="<html>
<p>
This example demonstrates the use of a <code>RealInput</code>
connector for a mover model.
</p>
</html>", revisions="<html>
<ul>
<li>
August 24, 2015, by Filip Jorissen:<br/>
First implementation.
</li>
</ul>
</html>"),
experiment(Tolerance=1e-06, StopTime=1),
__Dymola_Commands(file=
          "modelica://IBPSA/Resources/Scripts/Dymola/Fluid/Movers/Examples/MoverContinuous.mos"
        "Simulate and plot"));
end MoverContinuous;
