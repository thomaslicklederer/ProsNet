within ProsNet.Under_Development.new_prosumer_models;
model Test_Conversion
  Conversion conversion
    annotation (Placement(transformation(extent={{-6,-2},{14,32}})));
  Modelica.Blocks.Sources.RealExpression T_sec_in(y=65)
    annotation (Placement(transformation(extent={{-86,38},{-66,58}})));
  Modelica.Blocks.Sources.IntegerExpression pi(y=0)
    annotation (Placement(transformation(extent={{-86,-2},{-66,18}})));
  Modelica.Blocks.Sources.RealExpression V_dot_sec_set(y=5)
    annotation (Placement(transformation(extent={{-86,18},{-66,38}})));
  Modelica.Blocks.Sources.IntegerExpression mu(y=-1)
    annotation (Placement(transformation(extent={{-86,-24},{-66,-4}})));
  Modelica.Blocks.Sources.RealExpression u_set(y=0.5)
    annotation (Placement(transformation(extent={{-86,-48},{-66,-28}})));
  Modelica.Blocks.Sources.RealExpression kappa_set(y=0.8)
    annotation (Placement(transformation(extent={{-86,-66},{-66,-46}})));
  Modelica.Blocks.Sources.RealExpression m_dot_sec_is(y=0.2)
    annotation (Placement(transformation(extent={{76,16},{56,36}})));
  Modelica.Blocks.Sources.RealExpression m_dot_prim_is(y=0.02)
    annotation (Placement(transformation(extent={{76,-10},{56,10}})));
equation
  connect(kappa_set.y, conversion.kappa_set) annotation (Line(points={{-65,
          -56},{-12,-56},{-12,2},{-6,2}}, color={0,0,127}));
  connect(u_set.y, conversion.u_set) annotation (Line(points={{-65,-38},{-14,
          -38},{-14,6},{-6,6}}, color={0,0,127}));
  connect(mu.y, conversion.mu) annotation (Line(points={{-65,-14},{-16,-14},{
          -16,9.8},{-6,9.8}}, color={255,127,0}));
  connect(pi.y, conversion.pi) annotation (Line(points={{-65,8},{-18,8},{-18,
          14},{-6,14}}, color={255,127,0}));
  connect(V_dot_sec_set.y, conversion.V_dot_sec_set) annotation (Line(points=
          {{-65,28},{-14,28},{-14,24},{-6,24}}, color={0,0,127}));
  connect(T_sec_in.y, conversion.T_sec_in_set) annotation (Line(points={{-65,
          48},{-12,48},{-12,28},{-6,28}}, color={0,0,127}));
  connect(conversion.m_dot_sec_is, m_dot_sec_is.y)
    annotation (Line(points={{14,26},{55,26}}, color={0,0,127}));
  connect(conversion.m_dot_prim_is, m_dot_prim_is.y)
    annotation (Line(points={{14,2},{50,2},{50,0},{55,0}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Ellipse(lineColor = {75,138,73},
                fillColor={255,255,255},
                fillPattern = FillPattern.Solid,
                extent={{-100,-100},{100,100}}),
        Polygon(lineColor = {0,0,255},
                fillColor = {75,138,73},
                pattern = LinePattern.None,
                fillPattern = FillPattern.Solid,
                points={{-36,60},{64,0},{-36,-60},{-36,60}})}),  Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Test_Conversion;
