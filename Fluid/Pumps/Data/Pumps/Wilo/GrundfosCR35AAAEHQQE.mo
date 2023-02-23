within ProsNet.Fluid.Pumps.Data.Pumps.Wilo;
record GrundfosCR35AAAEHQQE
  "Pump data for a Grundfos CR 3-5 A-A-A-E-HQQE"
  extends ProsNet.Fluid.Pumps.Data.Generic(
    speed_rpm_nominal=1800,
    use_powerCharacteristic=true,
    pressure(V_flow={0.0,0.2,0.4,0.6,0.8,1.0,1.2,1.4,1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8,4.0}/3600,
     dp={325360,321440,316540,314580,310660,306740,302820,298900,294000,287140,282240,276360,267540,257740,248920,239120,226380,213640,199920,184240,168560}));
    //power(V_flow={5.55555555556e-07,0.000402190923318,0.00052269170579,0.000643192488263,
    //      0.000752738654147,0.000866979655712,0.000973395931142,0.00108607198748,
    //      0.00115962441315}, P={14.2085618951,21.2596204596,23.3573239437,25.1349149442,
    //      26.581943662,27.9121571534,28.8498841148,29.4981726255,29.7520982304}),

  annotation (
defaultComponentPrefixes="parameter",
defaultComponentName="per",
Documentation(info="<html>
  <p>Data from:
  <a href=\"http://productfinder.wilo.com/en/COM/product/0000000e000379df0002003a/fc_product_datasheet\">
  http://productfinder.wilo.com/en/COM/product/0000000e000379df0002003a/fc_product_datasheet
  </a>
  </p>
  <p>See
  <a href=\"modelica://ProsNet.Fluid.Movers.Data.Pumps.Wilo.Stratos25slash1to6\">
  IBPSA.Fluid.Movers.Data.Pumps.Wilo.Stratos25slash1to6
  </a>
  for more information about how the data is derived.
  </p>
  </html>",
  revisions="<html>
<ul>
<li>
February 17, 2016, by Michael Wetter:<br/>
Updated parameter names for
<a href=\"https://github.com/ibpsa/modelica-ibpsa/issues/396\">#396</a>.
</li>
<li>
December 12, 2014, by Michael Wetter:<br/>
Added <code>defaultComponentPrefixes</code> and
<code>defaultComponentName</code> annotations.
</li>
<li>April 17, 2014
    by Filip Jorissen:<br/>
       Initial version
</li>
</ul>
</html>"));
end GrundfosCR35AAAEHQQE;
