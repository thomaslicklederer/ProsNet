within ProsNet.Prosumers.BaseClasses;
model PrimarySide

  extends ProsNet.Fluid.Interfaces.PartialFourPortInterface(
   final m1_flow_nominal=m_flow_nominal_1,
   final m2_flow_nominal=m_flow_nominal_2);

 extends ProsNet.Prosumers.BaseClasses.PrimarySideParameters;

  ProsNet.Fluid.HeatExchangers.LiquidToLiquid HEX(final m1_flow_nominal=m_flow_nominal_1,
   final m2_flow_nominal=m_flow_nominal_2,
   redeclare final package Medium1=Medium1,
   redeclare final package Medium2=Medium2,
   final dp1_nominal=dp1_nominal,
   final dp2_nominal=dp2_nominal,
   final Q_flow_nominal=Q_flow_nominal,
   final T_a1_nominal=T_a1_nominal,
   final T_a2_nominal=T_a2_nominal,
   final r_nominal=r_nominal,
   final n=n)                    annotation (Placement(transformation(
        extent={{-14,-17},{14,17}},
        rotation=0,
        origin={48,3})));

  ProsNet.Fluid.Valves.TwoWayEqualPercentage val(m_flow_nominal=m_flow_nominal_1,
   redeclare final package Medium=Medium1,
   final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
   final Kv=Kv_conVal,
   final use_inputFilter=use_inputFilter_conVal,
   final riseTime=riseTime_conVal,
   final init=init_conVal,
   final y_start=y_start_conVal,
   final l=l_conVal) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=-90,
        origin={-40,8})));

  ProsNet.Fluid.FixedResistances.CheckValve cheVal(
    m_flow_nominal=m_flow_nominal_1,
    redeclare final package Medium = Medium1,
    final CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    final Kv=Kv_cheVal,
    final l=l_cheVal) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-68,-12})));

  ProsNet.Fluid.Pumps.SpeedControlled_y feedPump(redeclare final package Medium=Medium1,
    final energyDynamics=energyDynamics_feedPump,
    final tau=tau_feedPump,
    final per = feedinPer,
    final use_inputFilter=use_inputFilter_feedPump,
    final riseTime=riseTime_feedPump,
    final init=init_feedPump,
    final y_start=y_start_feedPump)
     annotation (Placement(
        transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-68,20})));

  Modelica.Blocks.Interfaces.IntegerInput mu "Operation mode"
    annotation (Placement(transformation(extent={{-140,138},{-100,178}})));
  Modelica.Blocks.Interfaces.IntegerInput pi "Participation"
    annotation (Placement(transformation(extent={{-140,100},{-100,140}})));
  Modelica.Blocks.Interfaces.RealInput conVal_op_set
    "Normalized control valve opening" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-40,120})));
  Modelica.Blocks.Interfaces.RealInput feedPump_y_set
    "Normalized rotational speed of a feed-in pump"   annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={40,120})));
  Controls.PrimaryFlowControl priFlowCon
    annotation (Placement(transformation(extent={{8,36},{-12,56}})));

equation

  connect(HEX.port_a2, port_a2) annotation (Line(points={{62,-7.2},{72,-7.2},{72,
          -60},{100,-60}}, color={0,127,255}));
  connect(HEX.port_b2, port_b2) annotation (Line(points={{34,-7.2},{26,-7.2},{26,
          -8},{16,-8},{16,-60},{-100,-60}}, color={0,127,255}));
  connect(priFlowCon.valve_op, val.y) annotation (Line(points={{-13,51.1},{-22,
          51.1},{-22,8},{-28,8}},
                    color={0,0,127}));
  connect(priFlowCon.pump_y, feedPump.y) annotation (Line(points={{-13,40.9},{-88,
          40.9},{-88,20},{-80,20}},       color={0,0,127}));
  connect(conVal_op_set, priFlowCon.valve_op_set)
    annotation (Line(points={{-40,120},{-40,92},{-6,92},{-6,58}}, color={0,0,127}));
  connect(feedPump_y_set, priFlowCon.pump_y_set)
    annotation (Line(points={{40,120},{40,92},{2,92},{2,58}}, color={0,0,127}));
  connect(mu, priFlowCon.mu) annotation (Line(points={{-120,158},{-62,158},{-62,74},{24,74},{24,
          52},{10,52}}, color={255,127,0}));
  connect(pi, priFlowCon.pi) annotation (Line(points={{-120,120},{-74,120},{-74,66},{20,66},{20,
          40},{10,40}}, color={255,127,0}));
  connect(port_b1, HEX.port_b1) annotation (Line(points={{100,60},{74,60},{74,13.2},
          {62,13.2}}, color={0,127,255}));
  connect(feedPump.port_b, cheVal.port_a)
    annotation (Line(points={{-68,10},{-68,-2}}, color={0,127,255}));
  connect(port_a1, val.port_b)
    annotation (Line(points={{-100,60},{-40,60},{-40,18}}, color={0,127,255}));
  connect(feedPump.port_a, port_a1)
    annotation (Line(points={{-68,30},{-68,60},{-100,60}}, color={0,127,255}));
  connect(cheVal.port_b, HEX.port_a1) annotation (Line(points={{-68,-22},{-68,-50},
          {0,-50},{0,13.2},{34,13.2}}, color={0,127,255}));
  connect(val.port_a, HEX.port_a1) annotation (Line(points={{-40,-2},{-40,-50},
          {0,-50},{0,14},{34,14},{34,13.2}},color={0,127,255}));
  annotation (defaultComponentName="priSide", Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-60,66},{56,30}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-60,30},{56,66}}, color={28,108,200}),
        Ellipse(
          extent={{-58,-22},{-18,-62}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-16},{50,-16},{34,-42},{18,-16}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{18,-68},{50,-68},{34,-42},{18,-68}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-46,-34},{-30,-34},{-38,-22},{-46,-34}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,-22},{-38,-10}},
                                         color={28,108,200}),
        Line(points={{-38,-62},{-38,-74}}, color={28,108,200}),
        Line(points={{34,-16},{34,-4}},
                                      color={28,108,200}),
        Line(points={{34,-68},{34,-82}}, color={28,108,200}),
        Line(points={{-44,66},{-44,80}}, color={28,108,200}),
        Line(points={{30,66},{30,80}}, color={28,108,200}),
        Line(points={{-44,30},{-44,18}}, color={28,108,200}),
        Line(points={{30,30},{30,18}}, color={28,108,200}),
        Line(points={{14,-42},{34,-42},{28,-38}}, color={28,108,200}),
        Line(points={{14,-42},{34,-42},{28,-46}}, color={28,108,200})}),
                                                                 Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end PrimarySide;
