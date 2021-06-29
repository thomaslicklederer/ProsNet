within ProsNet.FMU.Validation;
model fmuSF1_basic "Validation of the fmuSF1_ FMU"
  Modelica.Blocks.Sources.Constant qvDHpump(k=0.000166667)
    annotation (Placement(transformation(extent={{-100,-60},{-80,-40}})));
  Modelica.Blocks.Sources.Constant TDH_HEXout(k=80 + 273.15)
    annotation (Placement(transformation(extent={{-100,0},{-80,20}})));
  Modelica.Blocks.Sources.Constant zero(k=0)
    annotation (Placement(transformation(extent={{-100,40},{-80,60}})));
  fmuSF1_exp_fmu fmuSF1_exp_fmu1
    annotation (Placement(transformation(extent={{-6,-6},{58,58}})));
equation
  connect(fmuSF1_exp_fmu1.TDH_HEXout, TDH_HEXout.y) annotation (Line(points={{
          -7.28,30.8},{-34,30.8},{-34,30},{-60,30},{-60,10},{-79,10}}, color={0,
          0,127}));
  connect(fmuSF1_exp_fmu1.qvDHpump, qvDHpump.y) annotation (Line(points={{-7.28,
          12.56},{-30,12.56},{-30,12},{-52,12},{-52,-50},{-79,-50}}, color={0,0,
          127}));
  connect(fmuSF1_exp_fmu1.CBIn_TSet, zero.y) annotation (Line(points={{-7.28,
          49.04},{-43.64,49.04},{-43.64,50},{-79,50}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.CHPIn_P, zero.y) annotation (Line(points={{-7.28,
          39.76},{-43.64,39.76},{-43.64,50},{-79,50}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.qvSTpump, zero.y) annotation (Line(points={{-7.28,
          21.52},{-43.64,21.52},{-43.64,50},{-79,50}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.qvDHWpump, zero.y) annotation (Line(points={{-7.28,
          3.28},{-43.64,3.28},{-43.64,50},{-79,50}}, color={0,0,127}));
end fmuSF1_basic;
