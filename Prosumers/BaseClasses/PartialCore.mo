within ProsNet.Prosumers.BaseClasses;
partial model PartialCore



  extends ProsNet.Fluid.Interfaces.PartialFourPortInterface(
    redeclare replaceable package Medium1 = ProsNet.Media.Water,
    redeclare replaceable package Medium2 = ProsNet.Media.Water);

  ProsNet.Fluid.HeatExchangers.LiquidToLiquid HEX(m1_flow_nominal=
        m1_flow_nominal, m2_flow_nominal=m2_flow_nominal)            annotation (Placement(transformation(
        extent={{-14,-17},{14,17}},
        rotation=0,
        origin={48,3})));
  ProsNet.Fluid.Valves.TwoWayEqualPercentage val(m_flow_nominal=m1_flow_nominal) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=-90,
        origin={-40,10})));
  ProsNet.Fluid.FixedResistances.CheckValve cheVal(m_flow_nominal=
        m1_flow_nominal)                                                              annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-66,26})));
  ProsNet.Fluid.Pumps.SpeedControlled_y mainPump                             annotation (Placement(
        transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-66,-12})));
  Modelica.Blocks.Interfaces.IntegerInput mu
    annotation (Placement(transformation(extent={{-140,116},{-100,156}})));
  Modelica.Blocks.Interfaces.IntegerInput pi
    annotation (Placement(transformation(extent={{-140,74},{-100,114}})));
equation
  connect(port_a1, val.port_b)
    annotation (Line(points={{-100,60},{-40,60},{-40,20}}, color={0,127,255}));
  connect(cheVal.port_a, port_a1)
    annotation (Line(points={{-66,36},{-66,60},{-100,60}}, color={0,127,255}));
  connect(cheVal.port_b, mainPump.port_a)
    annotation (Line(points={{-66,16},{-66,-2}}, color={0,127,255}));
  connect(mainPump.port_b, val.port_a) annotation (Line(points={{-66,-22},{-66,-32},
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
          extent={{-58,-22},{-18,-62}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-16},{50,-16},{34,-42},{18,-16}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-68},{50,-68},{34,-42},{18,-68}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-46,-34},{-30,-34},{-38,-22},{-46,-34}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,-22},{-38,-10}},
                                         color={28,108,200}),
        Line(points={{-38,-62},{-38,-74}}, color={28,108,200}),
        Line(points={{34,-16},{34,-4}},
                                      color={28,108,200}),
        Line(points={{34,-68},{34,-82}}, color={28,108,200}),
        Line(points={{-44,66},{-44,80}}, color={28,108,200}),
        Line(points={{30,66},{30,80}}, color={28,108,200}),
        Line(points={{-44,30},{-44,18}}, color={28,108,200}),
        Line(points={{30,30},{30,18}}, color={28,108,200}),
        Line(points={{14,-42},{34,-42},{28,-38}}, color={28,108,200}),
        Line(points={{14,-42},{34,-42},{28,-46}}, color={28,108,200})}),
                                                                 Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end PartialCore;
