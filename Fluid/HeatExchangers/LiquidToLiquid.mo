within ProsNet.Fluid.HeatExchangers;
model LiquidToLiquid
  "Liquid-to-liquid plate heat exchanger with effectiveness - NTU relation"

  parameter Real r_nominal(min = 0) = (m1_flow_nominal/m2_flow_nominal)^n
   "Ratio between primary-side and secondary-side convective heat transfer coefficient" annotation (
    Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));

  parameter Real n = 0.6 "Exponent coefficient" annotation (
    Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));

  extends ProsNet.Fluid.HeatExchangers.BaseClasses.PartialEffectivenessNTU(
    redeclare replaceable package Medium1 = ProsNet.Media.Water,
    redeclare replaceable package Medium2 = ProsNet.Media.Water,
    configuration=ProsNet.Fluid.Types.HeatExchangerConfiguration.CounterFlow,
    UA = 1/(1/PlateHEXUA.alphaA_1 + 1/PlateHEXUA.alphaA_2));

/*    parameter Real r_nominal(
    min=0,
    max=1) = 1
    "Ratio between primary-side and secondary-side convective heat transfer (hA-value) at nominal condition i.e. (hA_1/hA_2)^n";*/

 ProsNet.Fluid.HeatExchangers.BaseClasses.HAPlateHE PlateHEXUA(
    final UA_nominal=UA_nominal,
    final m_flow_nominal_primary=m1_flow_nominal,
    final m_flow_nominal_secondary=m2_flow_nominal,
    final r_nominal=r_nominal,
    final n=n) "Model for convective heat transfer coefficient";

equation
    PlateHEXUA.m_flow_primary = m1_flow;
    PlateHEXUA.m_flow_secondary = m2_flow;

  annotation (Icon(coordinateSystem(preserveAspectRatio = false, initialScale = 0.1), graphics={  Line(origin = {0.526316, -1.26316}, points = {{66, 77}, {-66, -77}}, color = {255, 255, 255}, thickness = 0.75), Text(origin = {-24, 49}, lineColor = {255, 255, 255}, extent = {{-28, 23}, {16, -7}}, textString = "PRI", fontSize = 10), Text(origin = {41, -75}, lineColor = {255, 255, 255},
            lineThickness =                                                                                                                                                                                                        0.75, extent = {{-31, 31}, {7, 7}}, textString = "SEC", fontSize = 10)}));
end LiquidToLiquid;
