within ProsNet.Prosumers.PrimarySide;
model Core

  extends ProsNet.Fluid.Interfaces.PartialFourPortInterface(redeclare package   Medium =
        ProsNet.Media.Water);

  ProsNet.Fluid.HeatExchangers.LiquidToLiquid HEX annotation (Placement(transformation(
        extent={{-14,-17},{14,17}},
        rotation=0,
        origin={48,3})));
  ProsNet.Fluid.Valves.TwoWayEqualPercentage val annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=-90,
        origin={-40,10})));
  ProsNet.Fluid.FixedResistances.CheckValve cheVal annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-66,26})));
  ProsNet.Fluid.Pumps.SpeedControlled_y pump annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-66,-12})));
equation
  connect(port_a1, val.port_b)
    annotation (Line(points={{-100,60},{-40,60},{-40,20}}, color={0,127,255}));
  connect(cheVal.port_a, port_a1)
    annotation (Line(points={{-66,36},{-66,60},{-100,60}}, color={0,127,255}));
  connect(cheVal.port_b, pump.port_a)
    annotation (Line(points={{-66,16},{-66,-2}}, color={0,127,255}));
  connect(pump.port_b, val.port_a) annotation (Line(points={{-66,-22},{-66,-32},
          {-40,-32},{-40,0}}, color={0,127,255}));
  connect(HEX.port_a1, val.port_a) annotation (Line(points={{34,13.2},{16,13.2},
          {16,14},{-2,14},{-2,-32},{-40,-32},{-40,1.77636e-15}}, color={0,127,255}));
  connect(port_b1, HEX.port_b1) annotation (Line(points={{100,60},{82,60},{82,14},
          {62,14},{62,13.2}}, color={0,127,255}));
  connect(HEX.port_a2, port_a2) annotation (Line(points={{62,-7.2},{72,-7.2},{72,
          -60},{100,-60}}, color={0,127,255}));
  connect(HEX.port_b2, port_b2) annotation (Line(points={{34,-7.2},{26,-7.2},{26,
          -8},{16,-8},{16,-60},{-100,-60}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-60,66},{56,30}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-60,30},{56,66}}, color={28,108,200}),
        Ellipse(
          extent={{-58,-10},{-18,-50}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-4},{50,-4},{34,-30},{18,-4}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-56},{50,-56},{34,-30},{18,-56}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-46,-22},{-30,-22},{-38,-10},{-46,-22}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,-10},{-38,2}}, color={28,108,200}),
        Line(points={{-38,-50},{-38,-62}}, color={28,108,200}),
        Line(points={{34,-4},{34,8}}, color={28,108,200}),
        Line(points={{34,-56},{34,-70}}, color={28,108,200}),
        Line(points={{-44,66},{-44,80}}, color={28,108,200}),
        Line(points={{30,66},{30,80}}, color={28,108,200}),
        Line(points={{-44,30},{-44,18}}, color={28,108,200}),
        Line(points={{30,30},{30,18}}, color={28,108,200})}),    Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Core;
