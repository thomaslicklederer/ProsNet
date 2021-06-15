within ProsNet.Prosumers;
model ProsumerSimple

  extends ProsNet.Prosumers.BaseClasses.ProsumerPartial;

  extends ProsNet.Prosumers.SecondarySides.BaseClasses.SecondarySideParameters;

  SecondarySides.SimpleSecondarySide simpleSecondarySide(
    redeclare package Medium = Medium2,
    tau = tau,
    energyDynamics_hea_coo = energyDynamics_hea_coo,
    energyDynamics_pump = energyDynamics_pump,
    use_inputFilter = use_inputFilter,
    riseTime = riseTime,
    m_flow_start = m_flow_start,
    m_flow_nominal_hea_coo=m_flow_nominal_hea_coo,
    dp_nominal_hea_coo=0,
    m_flow_nominal_pump=m_flow_nominal_pump,
    dp_nominal_pump = dp_nominal_pump,
    m_flow_nominal_temSen_sec=m_flow_nominal_temSen_sec,
    tau_temSen_sec=tau_temSen_sec,
    init_temSen_sec=init_temSen_sec)
    annotation (Placement(transformation(extent={{-24,-52},{-4,-72}})));

  Modelica.Blocks.Interfaces.RealInput op_set if use_op_set_in
    "Normalized and linearized flow coefficient for the main valve" annotation (
     Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={134,180}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={132,120})));
  Modelica.Blocks.Interfaces.RealInput u_set if use_u_set_in
    "Normalized velocity of the main pump" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={70,174})));
  Modelica.Blocks.Interfaces.RealInput m_flow_set if use_m_flow_set_in
    "Mass flow rate on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={26,120})));
  Modelica.Blocks.Interfaces.RealInput T_set if use_T_set_in
    "Temperature on the secondary side" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-6,120})));

  Modelica.Blocks.Interfaces.IntegerInput mu_set if use_mu_set_in
    "Operating mode: 1 - production, -1 consumption" annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-48,182})));
  Modelica.Blocks.Interfaces.IntegerInput pi_set if use_pi_set_in
    "Participation: 1 - on, 0 - off" annotation (Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-172,120})));

protected
    Modelica.Blocks.Interfaces.RealInput T_set_internal annotation (Placement(
        transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-42,120}),iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={-16,120})));
  Modelica.Blocks.Interfaces.RealInput m_flow_set_internal annotation (
      Placement(transformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={50,142}), iconTransformation(
        extent={{-20,-20},{20,20}},
        rotation=-90,
        origin={32,120})));

equation
  connect(op_set, op_set_internal);
  if not use_op_set_in then
    op_set_internal=op;
  end if;

  connect(u_set, u_set_internal);
  if not use_u_set_in then
    u_set_internal = u;
  end if;

  connect(mu_set,mu_set_internal);
  if not use_mu_set_in then
    mu_set_internal = if mode == ProsNet.Prosumers.Types.OperationMode.Production then 1 else -1;
  end if;

  connect(pi_set,pi_set_internal);
  if not use_pi_set_in then
    pi_set_internal = if participation then 1 else 0;
  end if;

  connect(m_flow_set, m_flow_set_internal);
  if not use_m_flow_set_in then
    m_flow_set_internal = m_flow_sec;
  end if;

  connect(T_set,T_set_internal);
  if not use_T_set_in then
    T_set_internal = T_sec;
  end if;



  connect(simpleSecondarySide.port_b, primarySide.port_a2) annotation (Line(
        points={{-4,-62},{90,-62},{90,-40},{60,-40}}, color={0,127,255}));
  connect(simpleSecondarySide.port_a, primarySide.port_b2) annotation (Line(
        points={{-24,-62},{-30,-62},{-30,-40},{40,-40}}, color={0,127,255}));
  connect(simpleSecondarySide.pi, primarySide.pi) annotation (Line(points={{-26,-66},
          {-38,-66},{-38,-24.6},{38,-24.6}},      color={255,127,0}));
  connect(simpleSecondarySide.mu, primarySide.mu) annotation (Line(points={{-26,
          -69.8},{-60,-69.8},{-60,24},{-46,24},{-46,-20.4},{38,-20.4}}, color={255,
          127,0}));
  connect(m_flow_set_internal, simpleSecondarySide.m_flow_set) annotation (Line(
        points={{50,142},{50,-86},{-8,-86},{-8,-74}}, color={0,0,127}));
  connect(T_set_internal, simpleSecondarySide.T_set) annotation (Line(points={{-42,120},
          {-42,-8},{-50,-8},{-50,-86},{-20,-86},{-20,-74}},     color={0,0,127}));
  annotation (defaultComponentName="pros", Icon(coordinateSystem(preserveAspectRatio=false), graphics={
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
        coordinateSystem(preserveAspectRatio=false)));
end ProsumerSimple;
