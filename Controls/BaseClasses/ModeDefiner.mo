within ProsNet.Controls.BaseClasses;
model ModeDefiner "Defines operating and participating mode of a prosumer"

  Modelica.Blocks.Interfaces.IntegerInput mu
    "Operation mode: -1 is consumption, 1 is production"
    annotation (Placement(transformation(extent={{-140,50},{-100,90}})));

  Modelica.Blocks.Interfaces.IntegerInput pi
    "Participation: 0 is non-participation, 1 is partipation"
    annotation (Placement(transformation(extent={{-140,-90},{-100,-50}})));
  Modelica.Blocks.Interfaces.BooleanOutput consumption_mode
    "True if consumption mode is activated"                 annotation (
      Placement(transformation(extent={{100,60},{120,80}}), iconTransformation(
          extent={{100,60},{120,80}})));
  Modelica.Blocks.Interfaces.BooleanOutput production_mode
    "True if production mode is activated"                 annotation (
      Placement(transformation(extent={{100,-82},{120,-62}}),
        iconTransformation(extent={{100,-82},{120,-62}})));
equation

  if pi ==1 then
  // Prosumer participates in heat transfer

    if mu == 1 then

      // Production mode
      consumption_mode = false;
      production_mode = true;

    else

      // Consumption mode
      consumption_mode = true;
      production_mode = false;

    end if;

  else

    // Prosumer does not participate in heat transfer
    consumption_mode = false;
    production_mode = false;

  end if;

algorithm

  assert(pi == 0 or pi == 1, "Participation is defined incorrectly", level = AssertionLevel.error);
  assert(mu == 1 or mu == -1,  "Operation mode is defined incorrectly", level = AssertionLevel.error);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
          Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200},
          fillColor={255,255,85},
          fillPattern=FillPattern.Solid),
          Text(
          extent={{-98,26},{98,-16}},
          lineColor={28,108,200},
          textString="%name")}),
           Diagram(coordinateSystem(preserveAspectRatio=false)),
    Documentation(info="<html>
<p>The ModeDefiner model converts integer input signals for operating mode and participation to boolean output according to the following table.</p>
<table cellspacing=\"0\" cellpadding=\"2\" border=\"1\" width=\"100%\"><tr>
<td><p align=\"center\">mu (operating mode)</p></td>
<td><p align=\"center\">pi (participation)</p></td>
<td><p align=\"center\">consumption_mode</p></td>
<td><p align=\"center\">production_mode</p></td>
</tr>
<tr>
<td><p align=\"right\">1</p></td>
<td><p align=\"right\">1</p></td>
<td><p align=\"right\">True</p></td>
<td><p align=\"right\">False</p></td>
</tr>
<tr>
<td><p align=\"right\">-1</p></td>
<td><p align=\"right\">1</p></td>
<td><p align=\"right\">False</p></td>
<td><p align=\"right\">True</p></td>
</tr>
<tr>
<td><p align=\"right\">Ignored</p></td>
<td><p align=\"right\">0</p></td>
<td><p align=\"right\">False</p></td>
<td><p align=\"right\">False</p></td>
</tr>
</table>
</html>"));
end ModeDefiner;
