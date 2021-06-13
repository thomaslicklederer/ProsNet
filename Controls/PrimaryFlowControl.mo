within ProsNet.Controls;
model PrimaryFlowControl

  Modelica.Blocks.Logical.Switch switch1
    annotation (Placement(transformation(extent={{58,42},{78,62}})));
  Modelica.Blocks.Logical.Switch switch2
    annotation (Placement(transformation(extent={{40,-40},{60,-20}})));
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-32,-80},{-12,-60}})));
  Modelica.Blocks.Interfaces.RealOutput valve_op
    "Normalized control valve opening"
    annotation (Placement(transformation(extent={{100,40},{120,62}})));
  Modelica.Blocks.Interfaces.RealOutput pump_y
    "Normalized rotational speed of a feed-in pump"
   annotation (Placement(transformation(extent={{100,-62},{120,-40}})));
  Modelica.Blocks.Interfaces.RealInput pump_y_set
    "Normalized rotational speed of a feed-in pump"
                                                  annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-38,118})));
  Modelica.Blocks.Interfaces.RealInput valve_op_set
    "Normalized control valve opening"              annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={40,118})));

  BaseClasses.ModeDefiner modeDefiner
    annotation (Placement(transformation(extent={{-60,-42},{-40,-22}})));
  Modelica.Blocks.Interfaces.IntegerInput mu
    "Operation mode: -1 is consumption, 1 is production"
    annotation (Placement(transformation(extent={{-140,40},{-100,80}})));
  Modelica.Blocks.Interfaces.IntegerInput pi
    "Participation: 0 is non-participation, 1 is partipation"
    annotation (Placement(transformation(extent={{-140,-80},{-100,-40}})));
equation
  connect(zero.y, switch2.u3) annotation (Line(points={{-11,-70},{18,-70},{18,-38},
          {38,-38}}, color={0,0,127}));
  connect(switch1.u3, switch2.u3) annotation (Line(points={{56,44},{18,44},{18,-38},
          {38,-38}}, color={0,0,127}));
  connect(switch2.y, pump_y) annotation (Line(points={{61,-30},{72,-30},{72,-51},
          {110,-51}}, color={0,0,127}));
  connect(valve_op_set, switch1.u1)
    annotation (Line(points={{40,118},{40,60},{56,60}},   color={0,0,127}));
  connect(pump_y_set, switch2.u1) annotation (Line(points={{-38,118},{-38,78},{-10,
          78},{-10,-22},{38,-22}},
                             color={0,0,127}));
  connect(switch1.y, valve_op) annotation (Line(points={{79,52},{94,52},{94,51},
          {110,51}}, color={0,0,127}));
  connect(modeDefiner.consumption_mode, switch1.u2) annotation (Line(points={{-39,-25},
          {-26,-25},{-26,52},{56,52}},      color={255,0,255}));
  connect(modeDefiner.production_mode, switch2.u2) annotation (Line(points={{-39,
          -39.2},{-6,-39.2},{-6,-30},{38,-30}}, color={255,0,255}));
  connect(mu, modeDefiner.mu) annotation (Line(points={{-120,60},{-76,60},{-76,
          -25},{-62,-25}},
                      color={255,127,0}));
  connect(pi, modeDefiner.pi)  annotation (Line(points={{-120,-60},{-74,-60},{
          -74,-39},{-62,-39}},
                           color={255,127,0}));

  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
          Text(
          extent={{-100,-102},{96,-144}},
          lineColor={28,108,200},
          textString="%name"),
        Line(points={{-78,78},{-78,-90}},
            color={192,192,192}),
      Line(points={{-88,-80},{84,-80}},
          color={192,192,192}),
      Line(points={{-78,-80},{-78,50},{66,50}},    color = {0,0,127}),
      Polygon(lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid,
          points={{-78,90},{-86,68},{-70,68},{-78,90}}),
      Polygon(lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid,
          points={{92,-80},{70,-72},{70,-88},{92,-80}}),
        Ellipse(
          extent={{-58,4},{-18,-36}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,10},{50,10},{34,-16},{18,10}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-42},{50,-42},{34,-16},{18,-42}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-46,-8},{-30,-8},{-38,4},{-46,-8}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,4},{-38,16}},  color={28,108,200}),
        Line(points={{-38,-36},{-38,-48}}, color={28,108,200}),
        Line(points={{34,10},{34,22}},color={28,108,200}),
        Line(points={{34,-42},{34,-56}}, color={28,108,200}),
        Line(points={{14,-16},{34,-16},{28,-12}}, color={28,108,200}),
        Line(points={{14,-16},{34,-16},{28,-20}}, color={28,108,200})}),
                                 Diagram(coordinateSystem(preserveAspectRatio=false)));
end PrimaryFlowControl;
