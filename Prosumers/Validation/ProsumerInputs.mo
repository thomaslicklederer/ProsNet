within ProsNet.Prosumers.Validation;
model ProsumerInputs
  extends Modelica.Icons.Example;

  Fluid.Sources.Boundary_pT bou1(
    redeclare package Medium = Media.Water,
    T=278.15,                               nPorts=1)
    annotation (Placement(transformation(extent={{-80,-40},{-60,-20}})));
  Fluid.Sources.Boundary_pT bou2(
    redeclare package Medium = Media.Water, nPorts=1)
    annotation (Placement(transformation(extent={{76,-40},{56,-20}})));
  ProsumerIdeal prodSteadyState(
    use_mu_set_in=true,
    use_pi_set_in=true,
    use_kappa_set_in=false,
    use_u_set_in=true,
    mode=ProsNet.Prosumers.Types.OperationMode.Production,
    use_T_set_in=true,
    use_m_flow_set_in=true)
    annotation (Placement(transformation(extent={{-10,-42},{10,-22}})));
  Modelica.Blocks.Sources.Constant Tsec(k=273.15 + 60)
    annotation (Placement(transformation(extent={{48,80},{28,100}})));
  Modelica.Blocks.Sources.IntegerConstant pi(k=1)
    annotation (Placement(transformation(extent={{-94,46},{-74,66}})));
  Modelica.Blocks.Sources.IntegerConstant mu(k=1)
    annotation (Placement(transformation(extent={{-94,76},{-74,96}})));
  Modelica.Blocks.Sources.Constant m_flow(k=0.35)
    annotation (Placement(transformation(extent={{48,48},{28,68}})));
  Modelica.Blocks.Sources.Constant u(k=0.9)
    annotation (Placement(transformation(extent={{48,2},{28,22}})));
equation
  connect(bou1.ports[1], prodSteadyState.port_a) annotation (Line(points={{-60,-30},
          {-36,-30},{-36,-32},{-10,-32}},
                                       color={0,127,255}));
  connect(bou2.ports[1], prodSteadyState.port_b) annotation (Line(points={{56,-30},
          {34,-30},{34,-32},{10,-32}},
                                    color={0,127,255}));
  connect(pi.y, prodSteadyState.pi_set) annotation (Line(points={{-73,56},{
          -12.6,56},{-12.6,-20}}, color={255,127,0}));
  connect(mu.y, prodSteadyState.mu_set)
    annotation (Line(points={{-73,86},{-8,86},{-8,-20}}, color={255,127,0}));
  connect(m_flow.y, prodSteadyState.m_flow_sec_set)
    annotation (Line(points={{27,58},{2,58},{2,-20}}, color={0,0,127}));
  connect(Tsec.y, prodSteadyState.T_sec_set)
    annotation (Line(points={{27,90},{-2,90},{-2,-20}}, color={0,0,127}));
  connect(u.y, prodSteadyState.u_set)
    annotation (Line(points={{27,12},{9,12},{9,-20}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    experiment(StopTime=100, __Dymola_Algorithm="Dassl"));
end ProsumerInputs;
