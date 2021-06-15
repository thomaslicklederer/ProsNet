within ProsNet.Prosumers.SecondarySides;
model SimpleSecondarySide

    parameter Modelica.SIunits.MassFlowRate m_flow_nominal_hea_coo  "Nominal flow rate"
    annotation(Dialog(group="Secondary side heater/cooler nominal condition"));
/*  parameter Modelica.SIunits.PressureDifference dp_nominal_hea_coo=0.4e5 "Pressure difference"
annotation(Dialog(group="Secondary side heater/cooler nominal condition"));
    */

  parameter Modelica.SIunits.MassFlowRate m_flow_nominal_pump "Nominal flow rate"
    annotation(Dialog(group="Secondary side pump nominal condition"));

  parameter Modelica.SIunits.MassFlowRate m_flow_nominal_temSen_sec;

  parameter Modelica.SIunits.Time tau_temSen_sec;
 parameter Modelica.Blocks.Types.Init init_temSen_sec;

  extends ProsNet.Prosumers.SecondarySides.BaseClasses.SecondarySideParameters;

  extends ProsNet.Prosumers.SecondarySides.BaseClasses.PartialSecondarySide(
      pump_prod(
      energyDynamics=energyDynamics_pump,
      tau=tau_pump,
                m_flow_nominal=m_flow_nominal_pump,
      use_inputFilter=use_inputFilter,
      riseTime=riseTime,                            dp_nominal=dp_nominal_pump,
      m_flow_start=m_flow_start),
      pump_cons(
      energyDynamics=energyDynamics_pump,
      tau=tau_pump,
                m_flow_nominal=m_flow_nominal_pump,
      use_inputFilter=use_inputFilter,
      riseTime=riseTime,                            dp_nominal=dp_nominal_pump,
      m_flow_start=m_flow_start),
    temSecHot(
      m_flow_nominal=m_flow_nominal_temSen_sec,
      tau=tau_temSen_sec,
      initType=init_temSen_sec),
    temSecCold(
      m_flow_nominal=m_flow_nominal_temSen_sec,
      tau=tau_temSen_sec,
      initType=init_temSen_sec));

  Modelica.Blocks.Interfaces.RealInput T_set annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-60,120})));
  Modelica.Blocks.Interfaces.RealInput m_flow_set annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={60,120})));
  Controls.SecondaryFlowControl secFlowCon
    annotation (Placement(transformation(extent={{-64,-62},{-44,-42}})));

equation
  connect(secFlowCon.m_flow_consumption, pump_cons.m_flow_in) annotation (Line(
        points={{-43,-57.1},{-20,-57.1},{-20,-42},{-10,-42}}, color={0,0,127}));
  connect(hea_coo.port_b, pump_prod.port_a) annotation (Line(points={{12,58},{26,
          58},{26,-22},{52,-22},{52,-32}}, color={0,127,255}));
  connect(secFlowCon.m_flow_production, pump_prod.m_flow_in) annotation (Line(
        points={{-43,-46.9},{-32,-46.9},{-32,-10},{76,-10},{76,-42},{64,-42}},
        color={0,0,127}));
  connect(mu, secFlowCon.mu) annotation (Line(points={{-120,78},{-82,78},{-82,-46},
          {-66,-46}}, color={255,127,0}));
  connect(pi, secFlowCon.pi) annotation (Line(points={{-120,40},{-92,40},{-92,-58},
          {-66,-58}}, color={255,127,0}));
  connect(temSecHot.port_b, hea_coo.port_a) annotation (Line(points={{-66,0},{-58,
          0},{-58,38},{-40,38},{-40,58},{-8,58}}, color={0,127,255}));
  annotation (Icon(graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Ellipse(
          extent={{-58,20},{-18,-20}},
          lineColor={28,108,200},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-46,8},{-30,8},{-38,20},{-46,8}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid),
        Line(points={{-38,20},{-38,32}}, color={28,108,200}),
        Line(points={{-38,-20},{-38,-32}}, color={28,108,200}),
        Polygon(
          points={{10,-26},{72,-26},{60,28},{56,2},{46,12},{42,20},{36,4},{32,22},
              {28,-2},{18,28},{10,-26}},
          lineColor={238,46,47},
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{52,-42},{52,-88},{72,-62},{52,-42}},
          lineColor={28,108,200},
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{-72,-78},{52,-78},{52,-52},{-72,-78}},
          lineColor={28,108,200},
          fillColor={238,46,47},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{50,-52},{-72,-52},{-72,-78},{50,-52}},
          lineColor={28,108,200},
          fillColor={28,108,200},
          fillPattern=FillPattern.Solid)}));
end SimpleSecondarySide;
