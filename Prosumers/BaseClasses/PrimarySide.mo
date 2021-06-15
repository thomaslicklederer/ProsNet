within ProsNet.Prosumers.BaseClasses;
model PrimarySide

  extends ProsNet.Prosumers.BaseClasses.PartialCore(
  HEX(dp1_nominal=dp1_nominal,
    dp2_nominal=dp2_nominal,
    Q_flow_nominal=Q_flow_nominal,
    T_a1_nominal=T_a1_nominal,
    T_a2_nominal=T_a2_nominal),
   val(    CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    Kv=Kv_mainVal,
    use_inputFilter=use_inputFilter_mainVal,
    riseTime=riseTime_mainVal,
    init=init_mainVal,
    y_start=y_start_mainVal,
    l=l_mainVal),
    cheVal(CvData=ProsNet.Fluid.Types.CvTypes.Kv,
    Kv=Kv_cheVal,
    l=l_cheVal),
    mainPump(
    energyDynamics=energyDynamics_mainPump,
    tau=tau_mainPump,
    use_inputFilter=use_inputFilter_mainPump,
      redeclare Fluid.Pumps.Data.Pumps.IMP.NMTPlus152025to40 per,
    riseTime=riseTime_mainPump,
    init=init_mainPump,
    y_start=y_start_mainPump));
/*    m1_flow_nominal=m1_flow_nominal,
    m2_flow_nominal=m2_flow_nominal,*/

 /*   m1_flow_nominal=m1_flow_nominal,
    m2_flow_nominal=m2_flow_nominal,*/

  Controls.PrimaryFlowControl primaryFlowControl
    annotation (Placement(transformation(extent={{12,58},{-8,78}})));
  Modelica.Blocks.Interfaces.RealInput mainPump_y_set annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={40,120})));
  Modelica.Blocks.Interfaces.RealInput mainVal_op_set annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-40,120})));
equation

  connect(primaryFlowControl.valve_op, val.y) annotation (Line(points={{-9,73.1},
          {-20,73.1},{-20,10},{-28,10}}, color={0,0,127}));
  connect(primaryFlowControl.pump_y, mainPump.y) annotation (Line(points={{-9,62.9},
          {-12,62.9},{-12,-52},{-76,-52},{-76,-34},{-88,-34},{-88,-12},{-78,-12}},
        color={0,0,127}));
  connect(mainPump_y_set, primaryFlowControl.pump_y_set) annotation (Line(
        points={{40,120},{40,90},{6,90},{6,80}},   color={0,0,127}));
  connect(mainVal_op_set, primaryFlowControl.valve_op_set) annotation (Line(
        points={{-40,120},{-40,92},{-2,92},{-2,80}},
                                                   color={0,0,127}));
  connect(primaryFlowControl.pi, pi) annotation (Line(points={{14,62},{34,62},{
          34,40},{-32,40},{-32,68},{-88,68},{-88,94},{-120,94}},  color={255,127,
          0}));
  connect(primaryFlowControl.mu, mu) annotation (Line(points={{14,74},{28,74},{
          28,50},{-28,50},{-28,80},{-80,80},{-80,136},{-120,136}},  color={255,127,
          0}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Line(points={{100,0},{-100,0}}, color={28,108,200})}),   Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end PrimarySide;
