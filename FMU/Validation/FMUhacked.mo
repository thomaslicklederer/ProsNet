within ProsNet.FMU.Validation;
model FMUhacked
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-144,6},{-124,26}})));
  Modelica.Blocks.Sources.Constant TDH_HEXout(k=80 + 273.15)
    annotation (Placement(transformation(extent={{-144,-34},{-124,-14}})));
  Modelica.Blocks.Sources.Constant qvDHpump(k=0.000166667)
    annotation (Placement(transformation(extent={{-144,-94},{-124,-74}})));
  ProsNet.FMU.fmuSF1_outer_exp_hack_new_fmu fmuSF1_outer_exp_hack_new_fmu1
    annotation (Placement(transformation(extent={{-38,-36},{42,44}})));
equation
  connect(TDH_HEXout.y, fmuSF1_outer_exp_hack_new_fmu1.TDH_HEXout) annotation (
      Line(points={{-123,-24},{-82,-24},{-82,10},{-39.6,10}}, color={0,0,127}));
  connect(qvDHpump.y, fmuSF1_outer_exp_hack_new_fmu1.qvDHpump) annotation (Line(
        points={{-123,-84},{-92,-84},{-92,-46},{-60,-46},{-60,-12.8},{-39.6,
          -12.8}}, color={0,0,127}));
  connect(zero.y, fmuSF1_outer_exp_hack_new_fmu1.CBIn_TSet) annotation (Line(
        points={{-123,16},{-100,16},{-100,32},{-70,32},{-70,32.8},{-39.6,32.8}},
        color={0,0,127}));
  connect(fmuSF1_outer_exp_hack_new_fmu1.CHPIn_P, zero.y) annotation (Line(
        points={{-39.6,21.2},{-81.8,21.2},{-81.8,16},{-123,16}}, color={0,0,127}));
  connect(zero.y, fmuSF1_outer_exp_hack_new_fmu1.qvSTpump) annotation (Line(
        points={{-123,16},{-110,16},{-110,-1.6},{-39.6,-1.6}}, color={0,0,127}));
  connect(fmuSF1_outer_exp_hack_new_fmu1.qvDHWpump,
    fmuSF1_outer_exp_hack_new_fmu1.qvSTpump) annotation (Line(points={{-39.6,
          -24.4},{-68,-24.4},{-68,-1.6},{-39.6,-1.6}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end FMUhacked;
