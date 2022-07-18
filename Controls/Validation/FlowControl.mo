within ProsNet.Controls.Validation;
model FlowControl
  extends Modelica.Icons.Example;
  PrimaryFlowControl priFlCon annotation (Placement(transformation(extent={{0,2},{20,22}})));
  SecondaryFlowControl secFlCon
    annotation (Placement(transformation(extent={{42,-80},{62,-60}})));
  Modelica.Blocks.Sources.IntegerTable integerTable(table=[0,1; 1,1; 1,-1; 2,-1; 2,1; 3,1])
    annotation (Placement(transformation(extent={{-80,22},{-60,42}})));
  Modelica.Blocks.Sources.IntegerConstant pi(k=1)
    annotation (Placement(transformation(extent={{-80,-58},{-60,-38}})));
  Modelica.Blocks.Sources.Constant op(k=0.8)
    annotation (Placement(transformation(extent={{60,60},{40,80}})));
  Modelica.Blocks.Sources.Constant y(k=0.5)
    annotation (Placement(transformation(extent={{-30,60},{-10,80}})));
  Modelica.Blocks.Sources.Constant m_flow(k=10)
    annotation (Placement(transformation(extent={{0,-40},{20,-20}})));
equation
  connect(pi.y, priFlCon.pi)
    annotation (Line(points={{-59,-48},{-22,-48},{-22,6},{-2,6}}, color={255,127,0}));
  connect(secFlCon.pi, priFlCon.pi)
    annotation (Line(points={{40,-76},{-22,-76},{-22,6},{-2,6}}, color={255,127,0}));
  connect(integerTable.y, priFlCon.mu)
    annotation (Line(points={{-59,32},{-30,32},{-30,18},{-2,18}}, color={255,127,0}));
  connect(secFlCon.mu, priFlCon.mu) annotation (Line(points={{40,-64},{-30,-64},{-30,18},{-2,18}},
        color={255,127,0}));
  connect(op.y, priFlCon.valve_op_set)
    annotation (Line(points={{39,70},{14,70},{14,24}}, color={0,0,127}));
  connect(y.y, priFlCon.pump_y_set)
    annotation (Line(points={{-9,70},{6,70},{6,24}}, color={0,0,127}));
  connect(m_flow.y, secFlCon.m_flow_set)
    annotation (Line(points={{21,-30},{52,-30},{52,-58}}, color={0,0,127}));

  annotation (experiment(StopTime=4,Tolerance=1e-006), Documentation(info="<html>
<p>Tests the <a href=\"modelica://ProsNet.Controls.PrimaryFlowControl\">PrimaryFlowControl</a> and <a href=\"modelica://ProsNet.Controls.SecondaryFlowControl\">SecondarySideControl</a> models.</p>
<p>The output of the models must change according to the operating mode and participation.</p>
</html>"));
end FlowControl;
