within ProsNet.Prosumers.Validation;
model ProsumerValidation
  extends Modelica.Icons.Example;

  ProsumerSimple prosumerSimple(
    mode=ProsNet.Prosumers.Types.OperationMode.Consumption,
    m_flow_sec=0.358,
    T_sec=318.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-2,0},{22,22}})));
  Fluid.Sources.Boundary_pT bou1(p=100000, nPorts=1)
    annotation (Placement(transformation(extent={{-92,-38},{-72,-18}})));
  Fluid.Sources.Boundary_pT bou2(
    p=300000,
    T=343.15,
    nPorts=1)
    annotation (Placement(transformation(extent={{100,-40},{80,-20}})));
  Modelica.Blocks.Sources.IntegerStep pro1_pi_(height=1, startTime=0)           "Participation" annotation (
    Placement(visible = true, transformation(extent={{-42,36},{-22,56}},      rotation = 0)));
  Modelica.Blocks.Sources.IntegerConstant pro1_mu_(k=1)         "Mode" annotation (
    Placement(visible = true, transformation(extent={{-42,68},{-22,88}},      rotation = 0)));
  Modelica.Blocks.Sources.Constant pro1_kappa_(k=1)            "Valve opening" annotation (
    Placement(visible = true, transformation(extent={{92,26},{72,46}},      rotation = 0)));
  Modelica.Blocks.Sources.Constant pro1_u_(k=1)        "Pump speed" annotation (
    Placement(visible = true, transformation(extent={{92,54},{72,74}},      rotation = 0)));
  Modelica.Blocks.Sources.Constant pro1_Vsec_(k=0.358)               annotation (
    Placement(visible = true, transformation(extent={{56,48},{36,68}},      rotation = 0)));
  Modelica.Blocks.Sources.Constant pro1_Tsec_(k=70 + 273.15)     annotation (
    Placement(visible = true, transformation(extent={{56,82},{36,102}},     rotation = 0)));
equation
  connect(prosumerSimple.port_b, bou2.ports[1]) annotation (Line(points={{22,11},
          {48,11},{48,6},{60,6},{60,-30},{80,-30}},color={0,127,255}));
  connect(prosumerSimple.port_a, bou1.ports[1]) annotation (Line(points={{-2,11},
          {-14,11},{-14,8},{-46,8},{-46,-28},{-72,-28}},color={0,127,255}));
  connect(pro1_pi_.y, prosumerSimple.pi_set) annotation (Line(points={{-21,46},
          {-4.4,46},{-4.4,24.2}}, color={255,127,0}));
  connect(pro1_mu_.y, prosumerSimple.mu_set) annotation (Line(points={{-21,78},
          {-0.08,78},{-0.08,24.2}}, color={255,127,0}));
  connect(pro1_kappa_.y, prosumerSimple.op_set) annotation (Line(points={{71,36},
          {25.84,36},{25.84,24.2}}, color={0,0,127}));
  connect(pro1_u_.y, prosumerSimple.u_set) annotation (Line(points={{71,64},{66,
          64},{66,40},{20.08,40},{20.08,24.2}}, color={0,0,127}));
  connect(pro1_Vsec_.y, prosumerSimple.m_flow_set) annotation (Line(points={{35,
          58},{13.12,58},{13.12,24.2}}, color={0,0,127}));
  connect(pro1_Tsec_.y, prosumerSimple.T_set) annotation (Line(points={{35,92},
          {22,92},{22,90},{9.28,90},{9.28,24.2}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ProsumerValidation;
