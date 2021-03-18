within ProsNet.Fluid.HeatExchangers.Validation;
model HeatTransferCoefficient
   extends Modelica.Icons.Example;

  ProsNet.Fluid.HeatExchangers.BaseClasses.HAPlateHE hAPlateHE(
    m_flow_nominal_primary=0.3,
    m_flow_nominal_secondary=0.2,
    UA_nominal=9776*0.19,
    r_nominal=1.3)
    annotation (Placement(transformation(extent={{-12,-10},{8,10}})));
  Modelica.Blocks.Sources.TimeTable massFlowPri(table=[0, 0; 1, 0; 1,0.1; 2,
        0.1; 2,0.05; 3,0.05; 3,0.2; 5,0.2; 5,0.6; 6,0.6])
    annotation (Placement(transformation(extent={{-98,30},{-78,50}})));
  Modelica.Blocks.Sources.TimeTable massFlowSec(table=[0,0.2; 3,0.2; 3,0.1; 4,
        0.1; 4,0.05; 5,0.05; 5,0.1; 6,0.1])
    annotation (Placement(transformation(extent={{-98,-44},{-78,-24}})));
equation
  connect(massFlowPri.y, hAPlateHE.m_flow_primary) annotation (Line(points={{
          -77,40},{-68,40},{-68,4},{-18,4},{-18,7.6},{-13,7.6}}, color={0,0,127}));
  connect(massFlowSec.y, hAPlateHE.m_flow_secondary) annotation (Line(points={{
          -77,-34},{-72,-34},{-72,-30},{-70,-30},{-70,-7},{-13,-7}}, color={0,0,
          127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end HeatTransferCoefficient;
