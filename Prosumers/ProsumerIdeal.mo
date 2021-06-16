within ProsNet.Prosumers;
model ProsumerIdeal

  extends ProsNet.Prosumers.BaseClasses.PrimarySidePartial;

  /* Parameters */
  // Activates conditional inputs
  parameter Boolean use_T_set_in = false "Get temperature set point for the secondary side from a connector"
    annotation(Dialog(group="Conditional control inputs"));
  parameter Boolean use_m_flow_set_in = false "Get mass flow rate for the secondary side from a connector"
    annotation(Dialog(group="Conditional control inputs"));

  // Parameters for inputs substitution
  parameter Modelica.SIunits.Temperature T_sec=323.15 "Temperature set point for the secondary side"
   annotation(Dialog(group="Fixed control inputs"));
  parameter Modelica.SIunits.MassFlowRate m_flow_sec=0.358 "Mass flow set point for the secondary side"
   annotation(Dialog(group="Fixed control inputs"));

  // Dynamic parameters for CV in PrescribedSecondarySide
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.ControlVolumeDynParam;
  // PumpsPairPartial dynamic parameters
  extends ProsNet.Prosumers.SecondarySides.BaseClasses.PumpsPairDynParam;

  parameter Modelica.SIunits.Time tau_temSen=1 "Time constant for the temperature sensors"
  annotation(Dialog(tab="Advanced", group="Temperature sensors dynamics"));
  parameter Modelica.Blocks.Types.Init init_temSen=Modelica.Blocks.Types.Init.SteadyState "Type of initialization"
  annotation(Dialog(tab="Advanced", group="Temperature sensors dynamics"));

  SecondarySides.PrescribedSecondarySide secSide(
    redeclare final package Medium = Medium2,
    final dp_nominal=dp2_nominal,
    final m_flow_nominal_cv=m_flow_nominal_2,
    final dp_nominal_cv=0,
    final tau_cv=tau_cv,
    final energyDynamics_cv = energyDynamics_cv,
    final T_start_cv=T_start_cv,
    final energyDynamics_pumpsSec = energyDynamics_pumpsSec,
    final tau_pumpsSec = tau_pumpsSec,
    final use_inputFilter_pumpsSec = use_inputFilter_pumpsSec,
    final riseTime_pumpsSec=riseTime_pumpsSec,
    final m_flow_start_pumpsSec=m_flow_start_pumpsSec,
    final y_start_pumpsSec = y_start_pumpsSec) annotation (Placement(transformation(extent={{-6,-86},{14,-66}})));

  // Temperature sensors
  Fluid.Sensors.TemperatureTwoPort temSecHot(
    redeclare final package Medium = Medium2,
    m_flow_nominal=m_flow_nominal_2,
    tau=tau_temSen,
    initType=init_temSen) "Hot port temperature sensor on the secondary side"
    annotation (Placement(transformation(extent={{30,-86},{46,-66}})));
  Fluid.Sensors.TemperatureTwoPort temSecCold(
    redeclare final package Medium = Medium2,
    m_flow_nominal=m_flow_nominal_2,
    tau=tau_temSen,
    initType=init_temSen) "Cold port temperature sensor on the secondary side"
    annotation (Placement(transformation(extent={{-62,-86},{-82,-66}})));

  // Conditional input connectors
  Modelica.Blocks.Interfaces.RealInput m_flow_sec_set(unit="kg/s", displayUnit="kg/s") if
      use_m_flow_set_in "Mass flow rate on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={20,120})));
  Modelica.Blocks.Interfaces.RealInput T_sec_set(unit="K", displayUnit="degC") if
      use_T_set_in "Temperature on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-20,120})));

  // Internal input connectors
protected
  Modelica.Blocks.Interfaces.RealInput m_flow_sec_set_internal annotation (
      Placement(visible=false,transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={20,120}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={32,120})));
  Modelica.Blocks.Interfaces.RealInput T_sec_set_internal annotation (Placement(
        visible = false,transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-20,120}),iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-16,120})));

equation


  // Substitution for internal inputs
  if not use_T_set_in then
    T_sec_set_internal = T_sec;
  end if;
  if not use_m_flow_set_in then
    m_flow_sec_set_internal = m_flow_sec;
  end if;

  // Connect internal inputs with submodels
  connect(secSide.T_set, T_sec_set_internal)
    annotation (Line(points={{0,-64},{0,18},{-20,18},{-20,120}}, color={0,0,127}));
  connect(secSide.m_flow_set, m_flow_sec_set_internal)
  annotation (Line(points={{8,-64},{8,2},{20,2},{20,120}}, color={0,0,127}));

  // Connect internal inputs with condition inputs
  connect(m_flow_sec_set,m_flow_sec_set_internal);
  connect(T_sec_set,T_sec_set_internal);

  connect(secSide.mu, mu_set_internal) annotation (Line(points={{-8,-61},{-54,-61},{-54,
          24},{-80,24},{-80,120}}, color={255,127,0}));
  connect(secSide.pi, pi_set_internal) annotation (Line(points={{-8,-64.8},{-60,-64.8},{
          -60,18},{-116,18},{-116,120}}, color={255,127,0}));

  // Temperature sensors
  connect(secSide.port_b, temSecHot.port_a)
    annotation (Line(points={{14,-76},{30,-76}}, color={0,127,255}));
  connect(priSide.port_b2, temSecCold.port_b) annotation (Line(points={{28,-44},{-16,-44},
          {-16,-50},{-94,-50},{-94,-76},{-82,-76}}, color={0,127,255}));
  connect(temSecCold.port_a, secSide.port_a)
    annotation (Line(points={{-62,-76},{-6,-76}}, color={0,127,255}));


  connect(temSecHot.port_b, priSide.port_a2) annotation (Line(points={{46,-76},{
          52,-76},{52,-44},{48,-44}}, color={0,127,255}));
  annotation (defaultComponentName="pros", Icon(coordinateSystem(preserveAspectRatio=true), graphics={
                     Rectangle(extent={{-100,100},{100,-100}},
          lineColor={0,0,0},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),                                                                                           Rectangle(origin={36,
              2},                                                                                                                                                 fillColor = {255, 0, 0},
            fillPattern =                                                                                                                                                                                FillPattern.Solid, extent={{
              -36,32},{36,-32}}),                                                                                                                                                                                                        Rectangle(origin={
              -36,2},                                                                                                                                                                                                        fillColor = {85, 0, 255},
            fillPattern =                                                                                                                                                                                                        FillPattern.Solid, extent={{
              -36,32},{36,-32}})}),                              Diagram(
        coordinateSystem(preserveAspectRatio=true)));
end ProsumerIdeal;
