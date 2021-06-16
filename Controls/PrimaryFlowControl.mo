within ProsNet.Controls;
model PrimaryFlowControl "Redirects and overrides input signals for the primary side depending on the operating mode and participation"

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
        origin={-38,118}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-40,120})));
  Modelica.Blocks.Interfaces.RealInput valve_op_set
    "Normalized control valve opening"              annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={40,118}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={40,120})));

  BaseClasses.ModeDefiner modeDefiner
    annotation (Placement(transformation(extent={{-60,-42},{-40,-22}})));
  Modelica.Blocks.Interfaces.IntegerInput mu "Operation mode"
    annotation (Placement(transformation(extent={{-140,40},{-100,80}})));
  Modelica.Blocks.Interfaces.IntegerInput pi "Participation"
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

  annotation (defaultComponentName="priFlowCon", Icon(coordinateSystem(preserveAspectRatio=true), graphics={
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
        Line(points={{14,-16},{34,-16},{28,-20}}, color={28,108,200}),
        Line(
          points={{-78,-80},{-78,52},{-8,52},{-8,36},{66,36}},
          color={0,0,0})}),      Diagram(coordinateSystem(preserveAspectRatio=true)),
    Documentation(info="<html>
<p>This model sets appropriate control signals for the control valve and feed-in pump depending on operating mode and participation.</p>
<p><br>This model substitutes valve opening and pump speed signals in the input with zero signal at the output depending on the operating mode and participation. For production mode, <i>valve_op_set</i> is substituted with zero in the <i>valve_op</i>. For consumption mode, <i>pump_y</i> is zero, and the input <i>pump_y_set</i> is ignored. Non-participation brings both outputs to zero independent of the valve and pump input signals.</p>
</html>"));
end PrimaryFlowControl;
