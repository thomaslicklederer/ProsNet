within ProsNet.Prosumers.BaseClasses;
partial model ProsumerPartial

  extends ProsNet.Prosumers.BaseClasses.ProsumerParameters;

  extends ProsNet.Fluid.Interfaces.PartialTwoPort(
    redeclare package Medium = Medium1);

  PrimarySide primarySide(
    redeclare package Medium1 = Medium1,
    redeclare package Medium2 = Medium2,
    Q_flow_nominal=Q_flow_nominal,
    T_a1_nominal=T_a1_nominal,
    T_a2_nominal=T_a2_nominal,
    m1_flow_nominal=m1_flow_nominal,
    m2_flow_nominal=m2_flow_nominal,
    dp1_nominal=dp1_nominal,
    dp2_nominal=dp2_nominal,
    r_nominal=r_nominal,
    n=n,
    per=per,
    Kv_mainVal=Kv_mainVal,
    l_mainVal=l_mainVal,
    Kv_cheVal=Kv_cheVal,
    l_cheVal=l_cheVal,
    energyDynamics_mainPump=energyDynamics_mainPump,
    use_inputFilter_mainPump=use_inputFilter_mainPump,
    riseTime_mainPump=riseTime_mainPump,
    init_mainPump=init_mainPump,
    y_start_mainPump=y_start_mainPump,
    use_inputFilter_mainVal=use_inputFilter_mainVal,
    riseTime_mainVal=riseTime_mainVal,
    init_mainVal=init_mainVal,
    m_flow_start_mainVal,
    y_start_mainVal=y_start_mainVal)
    annotation (Placement(transformation(extent={{40,-44},{60,-24}})));

  Controls.Linearizer lin(redeclare Controls.Data.Linearizer.EqualPercentage
      lin) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={84,40})));

  Fluid.Sources.Boundary_pT bou(nPorts=1) annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=180,
        origin={75,-51})));
  Fluid.Sensors.TemperatureTwoPort temPriCold(m_flow_nominal=m1_flow_nominal,
    tau=tau_temSen,                                                           initType=
       init_temSen)
    annotation (Placement(transformation(extent={{-90,-10},{-70,10}})));
  Fluid.Sensors.TemperatureTwoPort temPriHot(m_flow_nominal=m1_flow_nominal,
    tau=tau_temSen,                                                          initType=
       init_temSen)
    annotation (Placement(transformation(extent={{70,-38},{86,-18}})));
  Fluid.FixedResistances.PressureDrop preDro(redeclare package Medium=Medium1,
    m_flow_nominal=m1_flow_nominal,
    dp_nominal=preDro_pros)
    annotation (Placement(transformation(extent={{-26,-18},{-6,-38}})));

protected
  Modelica.Blocks.Interfaces.RealInput op_set_internal
    "Normalized linearized flow coefficient (internal)" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={122,120})));
  Modelica.Blocks.Interfaces.RealInput u_set_internal
    "Normalized main pump's velocity (internal)" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={78,120})));
  Modelica.Blocks.Interfaces.IntegerInput mu_set_internal annotation (Placement(
      visible=true,
      transformation(
        origin={-84,120},
        extent={{-20,-20},{20,20}},
        rotation=-90),
      iconTransformation(
        origin={-70,120},
        extent={{-20,-20},{20,20}},
        rotation=-90)));
  Modelica.Blocks.Interfaces.IntegerInput pi_set_internal annotation (Placement(
      visible=true,
      transformation(
        origin={-120,120},
        extent={{-20,-20},{20,20}},
        rotation=-90),
      iconTransformation(
        origin={-120,120},
        extent={{-20,-20},{20,20}},
        rotation=-90)));

equation
  connect(primarySide.mainVal_op_set, lin.op[1]) annotation (Line(points={{46,
          -22},{46,-10},{84,-10},{84,29}}, color={0,0,127}));
  connect(bou.ports[1], primarySide.port_a2) annotation (Line(points={{70,-51},
          {66,-51},{66,-40},{60,-40}},color={0,127,255}));
  connect(port_a, temPriCold.port_a)
    annotation (Line(points={{-100,0},{-90,0}}, color={0,127,255}));



  connect(primarySide.port_b1, temPriHot.port_a)
    annotation (Line(points={{60,-28},{70,-28}}, color={0,127,255}));
  connect(temPriHot.port_b, port_b) annotation (Line(points={{86,-28},{90,-28},
          {90,0},{100,0}},color={0,127,255}));
  connect(temPriCold.port_b, preDro.port_a) annotation (Line(points={{-70,0},{-64,
          0},{-64,-28},{-26,-28}}, color={0,127,255}));
  connect(preDro.port_b, primarySide.port_a1)
    annotation (Line(points={{-6,-28},{40,-28}}, color={0,127,255}));
  connect(op_set_internal, lin.kappa[1]) annotation (Line(points={{122,120},{
          122,74},{84,74},{84,52}}, color={0,0,127}));
  connect(u_set_internal, primarySide.mainPump_y_set) annotation (Line(points={{78,120},
          {78,6},{54,6},{54,-22}},                         color={0,0,127}));
  connect(mu_set_internal, primarySide.mu) annotation (Line(points={{-84,120},{-84,
          24},{-46,24},{-46,-20.4},{38,-20.4}}, color={255,127,0}));
  connect(pi_set_internal, primarySide.pi) annotation (Line(points={{-120,120},{
          -120,16},{-54,16},{-54,-24.6},{38,-24.6}}, color={255,127,0}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={Text(
          textString=DynamicSelect("", String(temPriCold.T-273.15, format=".1f")),
          extent={{-100,56},{-220,6}},
          lineColor={0,0,0}),
        Text(
          extent={{-108,120},{-228,70}},
          lineColor={0,0,0},
          textString="T_c"),
        Text(
          extent={{228,120},{108,70}},
          lineColor={0,0,0},
          textString="T_h"),                                                                              Text(
          textString=DynamicSelect("", String(temPriHot.T-273.15, format=".1f")),
          extent={{234,62},{114,12}},
          lineColor={0,0,0}),
        Text(
          extent={{244,-12},{124,-62}},
          lineColor={0,0,0},
          textString="m_flow"),                                                                           Text(
          textString=DynamicSelect("", String(port_b.m_flow, format=".2f")),
          extent={{222,-68},{102,-118}},
          lineColor={0,0,0})}),                      Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ProsumerPartial;
