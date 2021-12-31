within ProsNet.Prosumers.Validation;
model SF1_SecondarySide
    extends Modelica.Icons.Example;
  SecondarySides.SF1_fmu sF1_fmu(
    _qvDHpump_start=0,
    _qvDHWpump_start=3e-3/60,
    _qvSTpump_start=0,
    _CBIn_P_start=5e3,
    _CBIn_TSet_start=50 + 273.15,
    _CHPIn_P_start=2e3,
    _TDH_HEXout_start=80 + 273.15)
    annotation (Placement(transformation(extent={{24,-18},{66,24}})));
  Modelica.Blocks.Sources.Constant qvDHWpump(k=3e-3/60)
    annotation (Placement(transformation(extent={{-80,42},{-60,62}})));
  Modelica.Blocks.Sources.Constant TDH_HEXout(k=60 + 273.15)
    annotation (Placement(transformation(extent={{-32,-86},{-12,-66}})));
  Modelica.Blocks.Sources.Constant CBIn_TSet(k=50 + 273.15)
    annotation (Placement(transformation(extent={{-80,-54},{-60,-34}})));
  Modelica.Blocks.Sources.Constant CHPIn_P(k=2e3)
    annotation (Placement(transformation(extent={{-80,-86},{-60,-66}})));
  Modelica.Blocks.Sources.Constant qvDHpump(k=0)
    annotation (Placement(transformation(extent={{-80,74},{-60,94}})));
  Modelica.Blocks.Sources.Constant qvSTpump(k=0)
    annotation (Placement(transformation(extent={{-80,10},{-60,30}})));
  Modelica.Blocks.Sources.Constant CBIn_P(k=5e3)
    annotation (Placement(transformation(extent={{-80,-22},{-60,-2}})));
equation
  connect(qvDHpump.y, sF1_fmu.qvDHpump) annotation (Line(points={{-59,84},{18,84},
          {18,18.75},{23.16,18.75}}, color={0,0,127}));
  connect(qvDHWpump.y, sF1_fmu.qvDHWpump) annotation (Line(points={{-59,52},{12,
          52},{12,13.5},{23.16,13.5}}, color={0,0,127}));
  connect(qvSTpump.y, sF1_fmu.qvSTpump) annotation (Line(points={{-59,20},{8,20},
          {8,8.25},{23.16,8.25}}, color={0,0,127}));
  connect(CBIn_P.y, sF1_fmu.CBIn_P) annotation (Line(points={{-59,-12},{-18,-12},
          {-18,3},{23.16,3}}, color={0,0,127}));
  connect(CBIn_TSet.y, sF1_fmu.CBIn_TSet) annotation (Line(points={{-59,-44},{-12,
          -44},{-12,-2.25},{23.16,-2.25}}, color={0,0,127}));
  connect(CHPIn_P.y, sF1_fmu.CHPIn_P) annotation (Line(points={{-59,-76},{-50,-76},
          {-50,-52},{0,-52},{0,-7.5},{23.16,-7.5}}, color={0,0,127}));
  connect(TDH_HEXout.y, sF1_fmu.TDH_HEXout) annotation (Line(points={{-11,-76},{
          12,-76},{12,-12.75},{23.16,-12.75}}, color={0,0,127}));
  annotation (
    Icon(coordinateSystem(preserveAspectRatio=false)),
    Diagram(coordinateSystem(preserveAspectRatio=false)),
    Documentation(info="<html>
<p>This is a model for validating <a href=\"modelica://ProsNet.Prosumers.SecondarySides.SF1_fmu\">SF1_fmu</a>. Below plots of selected simulation results are given for the FMU and the original SF1 SimulationX model.</p>
<p>For the following plot, the only non-default parameter of the FMU model is ActivateNightTimeReduction=true. </p>
<p align=\"center\"><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/SHB_QHeat_Dym.png\"/></p>
<p align=\"center\">Heat flow rate of the SimpleHeatedBuilding model from the FMU</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/SHB_QHeat_simX.png\"/></p>
<p align=\"center\">SHB_QHeat of the original model</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/WCGB_TFlow_TReturn_Dym.png\"/></p>
<p align=\"center\">Supply and return temperature of the condensing boiler from the FMU</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/WCGB_TFlow_TReturn_simX.png\"/></p>
<p align=\"center\">WCGB_TFlow and WCGB_TReturn of the original model</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/HUFT_TFlowSink_TReturnink_Dym.png\"/></p>
<p align=\"center\">HUFT_TFlowSink and HUFT_TReturnSink (Supply and return temperature of the flow-temperature controller) of the FMU</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/non-default-options/HUFT_TFlowSink_TReturnink_simX.png\"/></p>
<p align=\"center\">HUFT_TFlowSink and HUFT_TReturnSink of the original model</p>
<p><br>The FMU model was also validated with the default parameters:</p>
<p align=\"center\"><img src=\"modelica://ProsNet/Resources/Images/validationFMU/default-options/SHB_QHeat_Dym.png\"/></p>
<p align=\"center\">Heat flow rate of the SimpleHeatedBuilding model from the FMU</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/default-options/SHB_QHeat_SimX.png\"/></p>
<p align=\"center\">SHB_QHeat from the original model</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/default-options/WCGB_TFlow_TReturn_Dym.png\"/></p>
<p align=\"center\">Supply and return temperature of the condensing boiler from the FMU</p>
<p align=\"center\"><br><img src=\"modelica://ProsNet/Resources/Images/validationFMU/default-options/WCGB_TFlow_TReturn_SimX.png\"/></p>
<p align=\"center\">WCGB_TFlow and WCGB_TReturn from the original model</p>
</html>"));
end SF1_SecondarySide;
