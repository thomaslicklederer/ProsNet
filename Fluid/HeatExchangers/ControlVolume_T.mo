within ProsNet.Fluid.HeatExchangers;
model ControlVolume_T "Heater or cooler with prescribed outlet temperature"
  extends ProsNet.Fluid.Interfaces.TwoPortHeatMassExchanger(
    redeclare final ProsNet.Fluid.MixingVolumes.MixingVolume vol(
    final prescribedHeatFlowRate=true),
    dp_nominal = 0);


  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature preTem
    annotation (Placement(transformation(extent={{-60,40},{-40,60}})));
  Modelica.Blocks.Interfaces.RealInput TSet(unit="K", displayUnit="degC")
    "Set point temperature of the fluid that leaves port_b"
    annotation (Placement(transformation(origin={-120,80},
              extent={{20,-20},{-20,20}},rotation=180)));
  Modelica.Blocks.Interfaces.RealOutput Q_flow(unit="W")
    "Heat flow rate added to the fluid (if flow is from port_a to port_b)"
    annotation (Placement(transformation(extent={{100,70},{120,90}}),
        iconTransformation(extent={{100,70},{120,90}})));
  Modelica.Blocks.Sources.RealExpression exprQ_flow(y=port_a.m_flow*(port_b.h_outflow
         - inStream(port_a.h_outflow)))
    annotation (Placement(transformation(extent={{28,30},{50,50}})));
equation
  connect(TSet, preTem.T) annotation (Line(points={{-120,80},{-80,80},{-80,50},{
          -62,50}}, color={0,0,127}));
  connect(preTem.port, vol.heatPort) annotation (Line(points={{-40,50},{-24,50},
          {-24,-10},{-9.4,-10}}, color={191,0,0}));
  connect(exprQ_flow.y, Q_flow) annotation (Line(points={{51.1,40},{76,40},{76,80},
          {110,80}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-100,82},{-70,78}},
          lineColor={0,0,255},
          pattern=LinePattern.None,
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-70,60},{-66,82}},
          lineColor={0,0,255},
          pattern=LinePattern.None,
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-110,102},{-74,84}},
          lineColor={0,0,127},
          textString="T"),
        Text(
          extent={{26,108},{94,84}},
          lineColor={0,0,127},
          textString="Q_flow"),
        Rectangle(
          extent={{70,82},{100,78}},
          lineColor={0,0,255},
          pattern=LinePattern.None,
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{66,60},{70,82}},
          lineColor={0,0,255},
          pattern=LinePattern.None,
          fillColor={0,0,127},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-70,60},{-70,-60},{70,60},{-70,60}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-70,-60},{70,60},{70,-60},{-70,-60}},
          lineColor={28,108,200},
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid)}),                      Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ControlVolume_T;
