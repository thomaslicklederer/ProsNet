within ProsNet.Fluid.Sensors;
model TemperatureValue_
  annotation (Icon(
      coordinateSystem(preserveAspectRatio=false,
        extent={{-100.0,-100.0},{100.0,100.0}}),
        graphics={
      Rectangle(lineColor={0,0,127},
        fillColor={236,233,216},
        fillPattern=FillPattern.Solid,
        lineThickness=5.0,
        borderPattern=BorderPattern.Raised,
        extent={{-100.0,-40.0},{100.0,40.0}}),
      Text(extent={{-94.0,-34.0},{96.0,34.0}},
        textString=DynamicSelect("0.0", String(showNumber, significantDigits=significantDigits))),
      Text(visible=not use_numberPort,
        extent={{-150.0,-70.0},{150.0,-50.0}},
        textString="%number")}), Documentation(info="<html>
<p>
This block visualizes a Real number in a diagram animation.
The number to be visualized can be defined in the following ways:
</p>

<ul>
<li> If useNumberPort = <strong>true</strong> (which is the default), a Real
     input is present and this input variable is shown.</li>

<li> If useNumberPort = <strong>false</strong> no input connector is present.
     Instead, a Real input field is activated in the parameter menu
     and the Real expression from this input menu is shown.</li>
</ul>

<p>
The two versions of the block are shown in the following image (in the right variant, the
name of the variable value that is displayed is also shown below the icon):
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Interaction/RealValue.png\"
     alt=\"RealValue.png\">
</p>

<p>
The usage is demonstrated, e.g., in example
<a href=\"modelica://Modelica.Blocks.Examples.RealNetwork1\">Modelica.Blocks.Examples.RealNetwork1</a>.
</p>
</html>"));
end TemperatureValue_;
