within ProsNet.Controls;
model SecondaryFlowControl

  Modelica.Blocks.Logical.Switch switch1
    annotation (Placement(transformation(extent={{38,40},{58,60}})));
  Modelica.Blocks.Logical.Switch switch2
    annotation (Placement(transformation(extent={{40,-40},{60,-20}})));
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-32,-86},{-12,-66}})));
  Modelica.Blocks.Interfaces.RealOutput m_flow_production
    "Mass flow rate for a production pump"
    annotation (Placement(transformation(extent={{100,40},{120,62}})));
  Modelica.Blocks.Interfaces.RealOutput m_flow_consumption
    "Mass flow rate for a consumption pump"
    annotation (Placement(transformation(extent={{100,-62},{120,-40}})));
  Modelica.Blocks.Interfaces.RealInput m_flow_set
    "Mass flow rate on the secondary side"        annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={0,120})));
  Modelica.Blocks.Interfaces.IntegerInput mu
    "Operation mode: -1 is consumption, 1 is production"
    annotation (Placement(transformation(extent={{-140,40},{-100,80}})));
  Modelica.Blocks.Interfaces.IntegerInput pi
    "Participation: 0 is non-participation, 1 is partipation"
    annotation (Placement(transformation(extent={{-140,-80},{-100,-40}})));
  BaseClasses.ModeDefiner modeDefiner
    annotation (Placement(transformation(extent={{-60,-40},{-40,-20}})));
equation
  connect(zero.y, switch2.u3) annotation (Line(points={{-11,-76},{18,-76},{18,
          -38},{38,-38}},
                     color={0,0,127}));
  connect(switch1.u3, switch2.u3) annotation (Line(points={{36,42},{18,42},{18,-38},
          {38,-38}}, color={0,0,127}));
  connect(switch1.y, m_flow_production) annotation (Line(points={{59,50},{76,50},
          {76,51},{110,51}}, color={0,0,127}));
  connect(switch2.y, m_flow_consumption) annotation (Line(points={{61,-30},{72,-30},
          {72,-51},{110,-51}}, color={0,0,127}));
  connect(m_flow_set, switch1.u1)
    annotation (Line(points={{0,120},{0,58},{36,58}}, color={0,0,127}));
  connect(switch2.u1, switch1.u1) annotation (Line(points={{38,-22},{0,-22},{0,58},
          {36,58}}, color={0,0,127}));
  connect(mu, modeDefiner.mu) annotation (Line(points={{-120,60},{-78,60},{-78,
          -23},{-62,-23}}, color={255,127,0}));
  connect(pi, modeDefiner.pi) annotation (Line(points={{-120,-60},{-78,-60},{
          -78,-37},{-62,-37}}, color={255,127,0}));
  connect(modeDefiner.production_mode, switch1.u2) annotation (Line(points={{
          -39,-37.2},{-12,-37.2},{-12,50},{36,50}}, color={255,0,255}));
  connect(modeDefiner.consumption_mode, switch2.u2) annotation (Line(points={{
          -39,-23},{-24,-23},{-24,-48},{8,-48},{8,-30},{38,-30}}, color={255,0,
          255}));
  annotation (defaultComponentName="secFlowC", Icon(coordinateSystem(preserveAspectRatio=false), graphics={
          Text(
          extent={{-98,-100},{98,-142}},
          lineColor={28,108,200},
          textString="%name"),
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
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
          points={{-46,-8},{-30,-8},{-38,4},{-46,-8}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,4},{-38,16}},  color={28,108,200}),
        Line(points={{-38,-36},{-38,-48}}, color={28,108,200}),
        Ellipse(
          extent={{2,-34},{42,6}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{14,-22},{30,-22},{22,-34},{14,-22}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{22,18},{22,6}},    color={28,108,200}),
        Line(points={{22,-46},{22,-34}},   color={28,108,200}),
        Line(
          points={{-78,-80},{-78,52},{-8,52},{-8,36},{66,36}},
          color={0,0,0},
          thickness=0.5)}),      Diagram(coordinateSystem(preserveAspectRatio=false)));
end SecondaryFlowControl;
