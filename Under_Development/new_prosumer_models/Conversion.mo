within ProsNet.Under_Development.new_prosumer_models;
model Conversion

package Medium = Modelica.Media.Water.ConstantPropertyLiquidWater;

  Modelica.Blocks.Sources.Constant factor1(k=(1/60000)*Medium.d_const)
    annotation (Placement(transformation(extent={{-52,40},{-32,60}})));
  Modelica.Blocks.Math.Product volume2mass_flow
    annotation (Placement(transformation(extent={{-10,22},{10,42}})));
  Controls.SecondaryFlowControl secFlowCon
    annotation (Placement(transformation(extent={{30,4},{50,24}})));
  Controls.PrimaryFlowControl priFlowCon
    annotation (Placement(transformation(extent={{-8,-26},{12,-46}})));
  Controls.Linearizer         lin(redeclare final
      Controls.Data.Linearizer.EqualPercentage cha)
   annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={-30,-70})));
  Modelica.Blocks.Interfaces.RealInput T_sec_in_set "Kelvin"
    annotation (Placement(transformation(extent={{-120,120},{-80,160}})));
  Modelica.Blocks.Interfaces.RealInput V_dot_sec_set "l/min"
    annotation (Placement(transformation(extent={{-120,80},{-80,120}})));
  Modelica.Blocks.Interfaces.RealInput pi "{0;1}"
    annotation (Placement(transformation(extent={{-120,-20},{-80,20}})));
  Modelica.Blocks.Interfaces.RealInput mu "{-1;0;1}"
    annotation (Placement(transformation(extent={{-120,-62},{-80,-22}})));
  Modelica.Blocks.Interfaces.RealInput kappa_set "[0;1]"
    annotation (Placement(transformation(extent={{-120,-140},{-80,-100}})));
  Modelica.Blocks.Interfaces.RealInput u_set "[0;1]"
    annotation (Placement(transformation(extent={{-120,-100},{-80,-60}})));
  Modelica.Blocks.Interfaces.RealInput m_dot_sec_is "kg/s"
    annotation (Placement(transformation(extent={{120,100},{80,140}})));
  Modelica.Blocks.Interfaces.RealOutput m_dot_prod "kg/s"
    annotation (Placement(transformation(extent={{90,70},{110,90}})));
  Modelica.Blocks.Interfaces.RealOutput m_dot_cons "kg/s"
    annotation (Placement(transformation(extent={{90,30},{110,50}})));
  Modelica.Blocks.Interfaces.RealOutput pump_contr "[0;1]"
    annotation (Placement(transformation(extent={{90,-50},{110,-30}})));
  Modelica.Blocks.Interfaces.RealOutput valve_contr "[0;1]"
    annotation (Placement(transformation(extent={{90,-90},{110,-70}})));
  Modelica.Blocks.Interfaces.RealOutput T_sec_in annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={40,180})));
  Modelica.Blocks.Interfaces.RealOutput V_dot_sec_is annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={0,180})));
  Modelica.Blocks.Math.Product mass2volume_flow
    annotation (Placement(transformation(extent={{36,50},{16,70}})));
  Modelica.Blocks.Sources.Constant factor2(k=(60000)*(1/Medium.d_const))
    annotation (Placement(transformation(extent={{76,34},{56,54}})));
  Modelica.Blocks.Interfaces.RealInput m_dot_prim_is "kg/s"
    annotation (Placement(transformation(extent={{120,-140},{80,-100}})));
  Modelica.Blocks.Interfaces.RealOutput V_dot_prim_is annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={0,-160})));
  Modelica.Blocks.Math.Product mass2volume_flow1
    annotation (Placement(transformation(extent={{48,-132},{28,-112}})));
  Modelica.Blocks.Sources.Constant factor3(k=(60000)*(1/Medium.d_const))
    annotation (Placement(transformation(extent={{82,-108},{62,-88}})));
  Modelica.Blocks.Math.RealToInteger realToInteger
    annotation (Placement(transformation(extent={{-72,-10},{-52,10}})));
  Modelica.Blocks.Math.RealToInteger realToInteger1
    annotation (Placement(transformation(extent={{-72,-52},{-52,-32}})));
equation
  connect(factor1.y, volume2mass_flow.u1) annotation (Line(points={{-31,50},{-18,
          50},{-18,38},{-12,38}}, color={0,0,127}));
  connect(T_sec_in_set, T_sec_in)
    annotation (Line(points={{-100,140},{40,140},{40,180}}, color={0,0,127}));
  connect(volume2mass_flow.u2, V_dot_sec_set) annotation (Line(points={{-12,26},
          {-74,26},{-74,100},{-100,100}}, color={0,0,127}));
  connect(factor2.y, mass2volume_flow.u2) annotation (Line(points={{55,44},{44,44},
          {44,54},{38,54}}, color={0,0,127}));
  connect(m_dot_sec_is, mass2volume_flow.u1) annotation (Line(points={{100,120},
          {48,120},{48,66},{38,66}}, color={0,0,127}));
  connect(mass2volume_flow.y, V_dot_sec_is)
    annotation (Line(points={{15,60},{0,60},{0,180}}, color={0,0,127}));
  connect(volume2mass_flow.y, secFlowCon.m_flow_set)
    annotation (Line(points={{11,32},{40,32},{40,26}}, color={0,0,127}));
  connect(secFlowCon.m_flow_production, m_dot_prod) annotation (Line(points={{51,19.1},
          {51,32},{84,32},{84,64},{74,64},{74,80},{100,80}},       color={0,0,127}));
  connect(secFlowCon.m_flow_consumption, m_dot_cons) annotation (Line(points={{51,8.9},
          {62,8.9},{62,28},{82,28},{82,40},{100,40}},      color={0,0,127}));
  connect(priFlowCon.pump_y, pump_contr) annotation (Line(points={{13,-30.9},{84,
          -30.9},{84,-40},{100,-40}}, color={0,0,127}));
  connect(priFlowCon.valve_op, valve_contr) annotation (Line(points={{13,-41.1},
          {82,-41.1},{82,-80},{100,-80}}, color={0,0,127}));
  connect(lin.op, priFlowCon.valve_op_set)
    annotation (Line(points={{-19,-70},{6,-70},{6,-48}}, color={0,0,127}));
  connect(kappa_set, lin.kappa) annotation (Line(points={{-100,-120},{-52,-120},
          {-52,-70},{-42,-70}}, color={0,0,127}));
  connect(u_set, priFlowCon.pump_y_set) annotation (Line(points={{-100,-80},{-54,
          -80},{-54,-54},{-10,-54},{-10,-56},{-2,-56},{-2,-48}}, color={0,0,127}));
  connect(factor3.y, mass2volume_flow1.u1) annotation (Line(points={{61,-98},
          {60,-98},{60,-116},{50,-116}},
                                     color={0,0,127}));
  connect(m_dot_prim_is, mass2volume_flow1.u2) annotation (Line(points={{100,
          -120},{58,-120},{58,-128},{50,-128}},
                                          color={0,0,127}));
  connect(mass2volume_flow1.y, V_dot_prim_is)
    annotation (Line(points={{27,-122},{0,-122},{0,-160}}, color={0,0,127}));
  connect(realToInteger.y, secFlowCon.pi)
    annotation (Line(points={{-51,0},{20,0},{20,8},{28,8}}, color={255,127,0}));
  connect(realToInteger.y, priFlowCon.pi)
    annotation (Line(points={{-51,0},{-24,0},{-24,-30},{-10,-30}}, color={255,127,0}));
  connect(realToInteger.u, pi)
    annotation (Line(points={{-74,0},{-100,0}}, color={0,0,127}));
  connect(mu, realToInteger1.u)
    annotation (Line(points={{-100,-42},{-74,-42}}, color={0,0,127}));
  connect(realToInteger1.y, priFlowCon.mu)
    annotation (Line(points={{-51,-42},{-10,-42}}, color={255,127,0}));
  connect(realToInteger1.y, secFlowCon.mu) annotation (Line(points={{-51,-42},{-32,-42},
          {-32,14},{2,14},{2,20},{28,20}}, color={255,127,0}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-160},
            {100,180}}), graphics={Rectangle(
          extent={{-100,180},{100,-160}},
          lineColor={28,108,200},
          fillColor={171,171,171},
          fillPattern=FillPattern.Solid), Text(
          extent={{-137,35},{137,-35}},
          textColor={0,0,0},
          origin={-1,1},
          rotation=90,
          textString="Conversion",
          textStyle={TextStyle.Bold})}),
                          Diagram(coordinateSystem(preserveAspectRatio=false,
          extent={{-100,-160},{100,180}})));
end Conversion;
