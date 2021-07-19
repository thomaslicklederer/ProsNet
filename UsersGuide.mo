within ProsNet;
model UsersGuide "User's guide"
  extends Modelica.Icons.Information;

annotation (DocumentationClass=true,
  Documentation(info="<html>
<p>A prosumer can operate either in production or consumption mode with respect to a heat network. It can also be detached or attached to the network by setting appropriate participation: participation or non-participation. Control elements on the primary side (network) are a control valve and a feed-in pump. Together with a heat exchanger, the control elements allow bidirectional heat transfer between the network and technology-dependent heat supply/demand on the secondary side depending on the temperature gradient between the sides. The prosumer model and other components like pipes and sensors can be simulated for steady-state (statically) or transient-state (dynamically).</p>
<p align=\"center\"><img src=\"modelica://ProsNet/doc/pic/ProsScheme.gif\"/></p>
<p><br>There are four inputs that determine its interaction with the network:</p>
<ul>
<li>Operation mode <span style=\"font-family: Symbol;\">m</span>: consumption, production</li>
<li>Participation or non-participation in heat exchange with the network <span style=\"font-family: Symbol;\">p</span></li>
<li>Non-dimensional flow coefficient for the control valve <span style=\"font-family: Symbol;\">k</span></li>
<li>Feed-in pump velocity <i>u</i></li>
</ul>
<p>Operating mode and participation have integer counterparts, which are used as inputs of the multiple models: </p>
<p><span style=\"font-family: Symbol;\">m</span>=1 for production mode, <span style=\"font-family: Symbol;\">m</span>=-1 for consumption mode, <span style=\"font-family: Symbol;\">p</span>=1 when participating in heat exchage is on, <span style=\"font-family: Symbol;\">p</span>=0 for non-participating. Mode details can be found in the <a href=\"modelica://ProsNet.Prosumers.ProsumerIdeal\">ProsumerIdeal</a> model.</p>
<p><br>A <a href=\"modelica://ProsNet.Prosumers\">Prosumers</a> package contains prosumer models for different heat generation and consumption technology. Examples of prosumer-based heat networks are given in the <a href=\"modelica://ProsNet.Examples\">Examples</a> package. Additional insights on how the models work can be gained from the validation packages. The validation models allow confirming the expected behavior of models.</p>
<p><br>The library is free and open-source, and its models inherit from the Modelica Standard Library and the IBPSA library. Necessary components of the <a href=\"https://github.com/ibpsa/modelica-ibpsa\">IBPSA library</a> were copied to ProsNet so the library can be used with the default workspace available for every simulation environment. All fluid components are initialized with the incompressible water media model. Compatibility with the Modelica Standard Library and the IBPSA library is assured.</p>
<p>The library was developed and tested within the Dymola Simulation Environment.</p>
</html>"));
end UsersGuide;
