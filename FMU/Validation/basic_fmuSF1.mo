within ProsNet.FMU.Validation;
model basic_fmuSF1 "Basic validation of the fmuSF1 model with constant inputs"
  fmuSF1_encapsulated fmuSF1_encapsulated1
    annotation (Placement(transformation(extent={{-24,-26},{30,28}})));
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-100,40},{-80,60}})));
  Modelica.Blocks.Sources.Constant TDH_HEXout(k=80 + 273.15)
    annotation (Placement(transformation(extent={{-100,-4},{-80,16}})));
  Modelica.Blocks.Sources.Constant qvDHpump(k=0.000166667)
    annotation (Placement(transformation(extent={{-100,-60},{-80,-40}})));
equation
  connect(TDH_HEXout.y, fmuSF1_encapsulated1.TDH_HEXout) annotation (Line(
        points={{-79,6},{-54,6},{-54,5.05},{-25.08,5.05}}, color={0,0,127}));
  connect(qvDHpump.y, fmuSF1_encapsulated1.qvDHpump) annotation (Line(points={{
          -79,-50},{-52,-50},{-52,-10.34},{-25.08,-10.34}}, color={0,0,127}));
  connect(zero.y, fmuSF1_encapsulated1.CBIn_TSet) annotation (Line(points={{-79,
          50},{-64,50},{-64,20.44},{-25.08,20.44}}, color={0,0,127}));
  connect(fmuSF1_encapsulated1.CHPIn_P, zero.y) annotation (Line(points={{
          -25.08,12.61},{-64.54,12.61},{-64.54,50},{-79,50}}, color={0,0,127}));
  connect(fmuSF1_encapsulated1.qvSTpump, zero.y) annotation (Line(points={{
          -25.08,-2.78},{-64.54,-2.78},{-64.54,50},{-79,50}}, color={0,0,127}));
  connect(zero.y, fmuSF1_encapsulated1.qvDHWpump) annotation (Line(points={{-79,
          50},{-64,50},{-64,-18.17},{-25.08,-18.17}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end basic_fmuSF1;
