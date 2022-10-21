within ProsNet.Fluid.Pumps.Data;
package Pumps_FSP "Package with performance data for Wilo pumps"
  extends Modelica.Icons.Package;

  record FSPStratosMAXO25slash0dot5dash8PN10
    "FSP_Pump2 data for a Stratos MAXO 25/0,5-8 PN 10"
    extends ProsNet.Fluid.Pumps.Data.Generic(
      speed_rpm_nominal=1800,
      use_powerCharacteristic=true,
      pressure(V_flow={0, 0.4, 0.8, 1.2, 1.6, 2, 2.8, 3.2, 3.6, 4, 4.4, 4.8, 5.2, 5.6, 6, 6.4, 6.8, 7.2, 7.6, 8}/3600,
      dp={83354, 83354, 82374, 80412, 78451, 77470, 73548, 70606, 68645, 66193, 63741, 60800, 58838, 54916, 52954, 49032, 46580, 43148, 40206, 36774}));
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
  end FSPStratosMAXO25slash0dot5dash8PN10;

  record FSPStratosMAXO40slash0dot5dash16PN6slash10
    "FSP_Pump1 data for a Stratos MAXO 40/0,5-16 PN 6/10"
    extends ProsNet.Fluid.Pumps.Data.Generic(
      speed_rpm_nominal=3850,
      use_powerCharacteristic=true,
      pressure(V_flow={0,1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28}/3600,
      dp={154450,157883, 158863,158863,156902, 154450,151018,147096,142193,137289,131405,125031,118657, 113754,107870,101986, 96593,91003,85414,79824,74234,68645,63055,57465,51876,46286,40696,35107,29517}));
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
  end FSPStratosMAXO40slash0dot5dash16PN6slash10;
annotation (preferredView="info", Documentation(info="<html>
<p>
This package contains performance data for Wilo pumps.
</p>
</html>"));
end Pumps_FSP;
