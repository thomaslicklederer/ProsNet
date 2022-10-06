within ProsNet.Fluid.Pumps.Data;
package Pumps_FSP "Package with performance data for Wilo pumps"
  extends Modelica.Icons.Package;

  record StratosMAXO50slash05to14
    "FSP_Pump2 data for a Wilo Stratos MAXO 50/0,5-14 PN 6/10"
    extends ProsNet.Fluid.Pumps.Data.Generic(
      speed_rpm_nominal=1800,
      use_powerCharacteristic=true,
      pressure(V_flow={0.0000e+00,5.5556e-04,1.1111e-03,1.6667e-03,2.2222e-03,
            2.7778e-03,3.3333e-03,3.8889e-03,4.4444e-03,5.0000e-03,5.5556e-03,
            8.3333e-03,1.1111e-02,1.3889e-02}, dp={160000,159000,158000,157000,
            156000,155000,149250,143500,137750,132000,126250,97500,68750,40000}));
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
  end StratosMAXO50slash05to14;

  record FSPStratos25slash0pt5to8
    "FSP_Pump1 data for a Stratos MAXO 25/0,5-8 PN 10 pump"
    extends ProsNet.Fluid.Pumps.Data.Generic(
      speed_rpm_nominal=3600,
      use_powerCharacteristic=true,
      pressure(V_flow={0, 0.4, 0.8, 1.2, 1.6, 2, 2.8, 3.2, 3.6, 4, 4.4, 4.8, 5.2, 5.6, 6, 6.4, 6.8, 7.2, 7.6, 8}/3600,
      dp={83354, 83354, 82374, 80412, 78451, 77470, 73548, 70606, 68645, 66193, 63741, 60800, 58838, 54916, 52954, 49032, 46580, 43148, 40206, 36774}));
     // power(V_flow={5.55555555556e-07,0.000402190923318,0.00052269170579,0.000643192488263,
          //  0.000752738654147,0.000866979655712,0.000973395931142,0.00108607198748,
           // 0.00115962441315}, P={14.2085618951,21.2596204596,23.3573239437,25.1349149442,
            // 26.581943662,27.9121571534,28.8498841148,29.4981726255,29.7520982304}),

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
  end FSPStratos25slash0pt5to8;
annotation (preferredView="info", Documentation(info="<html>
<p>
This package contains performance data for Wilo pumps.
</p>
</html>"));
end Pumps_FSP;
