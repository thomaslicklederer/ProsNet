within ProsNet.Fluid.Interfaces.Examples;
model EightPortHeatMassExchanger
  "EightPortHeatMassExchanger example model"
  extends Modelica.Icons.Example;
  package Medium = IBPSA.Media.Water;
  parameter Modelica.SIunits.MassFlowRate m_flow_nominal=1
    "Nominal mass flow rate";

  IBPSA.Fluid.Sources.Boundary_pT sin(redeclare package Medium = Medium, nPorts=
       4) "Mass flow sink" annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={0,-60})));
  IBPSA.Fluid.Sources.MassFlowSource_T sou2(
    redeclare package Medium = Medium,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) "Mass flow source"
    annotation (Placement(transformation(extent={{-60,30},{-40,50}})));
  IBPSA.Fluid.Sources.MassFlowSource_T sou1(
    redeclare package Medium = Medium,
    m_flow=1,
    nPorts=1,
    T=283.15) "Mass flow source"
    annotation (Placement(transformation(extent={{60,20},{40,40}})));
  Modelica.Blocks.Sources.Ramp ram_T2(
    height=10,
    offset=273.15,
    duration=5) "Temperature ramp"
    annotation (Placement(transformation(extent={{-90,20},{-70,40}})));
  Modelica.Blocks.Sources.Ramp ram_m2_flow(
    height=-2,
    offset=1,
    duration=5) "Mass flow rate ramp"
    annotation (Placement(transformation(extent={{-90,60},{-70,80}})));
  IBPSA.Fluid.Sources.MassFlowSource_T sou4(
    redeclare package Medium = Medium,
    use_m_flow_in=true,
    use_T_in=true,
    nPorts=1) "Mass flow source"
    annotation (Placement(transformation(extent={{-60,-50},{-40,-30}})));
  Modelica.Blocks.Sources.Ramp ram_T4(
    duration=5,
    height=-10,
    offset=283.15) "Temperature ramp"
    annotation (Placement(transformation(extent={{-90,-60},{-70,-40}})));
  Modelica.Blocks.Sources.Ramp ram_m4_flow(
    duration=5,
    height=2,
    offset=-1) "Mass flow rate ramp"
    annotation (Placement(transformation(extent={{-90,-20},{-70,0}})));
  IBPSA.Fluid.Sources.MassFlowSource_T sou3(
    redeclare package Medium = Medium,
    m_flow=1,
    nPorts=1,
    T=303.15) "Mass flow source"
    annotation (Placement(transformation(extent={{60,-20},{40,0}})));
equation
  connect(ram_m2_flow.y, sou2.m_flow_in) annotation (Line(points={{-69,70},{-66,
          70},{-66,48},{-62,48}}, color={0,0,127}));
  connect(ram_T2.y, sou2.T_in) annotation (Line(points={{-69,30},{-66,30},{-66,44},
          {-62,44}}, color={0,0,127}));
  connect(ram_m4_flow.y, sou4.m_flow_in) annotation (Line(points={{-69,-10},{-66,
          -10},{-66,-32},{-62,-32}}, color={0,0,127}));
  connect(ram_T4.y, sou4.T_in) annotation (Line(points={{-69,-50},{-66,-50},{-66,
          -36},{-62,-36}}, color={0,0,127}));
  connect(sou2.ports[1], eigPor.port_b2) annotation (Line(points={{-40,40},{-26,
          40},{-26,13},{-10,13}}, color={0,127,255}));
  connect(sou4.ports[1], eigPor.port_b4) annotation (Line(points={{-40,-40},{-26,
          -40},{-26,1.5},{-10,1.5}}, color={0,127,255}));
  connect(sou3.ports[1], eigPor.port_b3) annotation (Line(points={{40,-10},{26,
          -10},{26,6.9},{10,6.9}}, color={0,127,255}));
  connect(sou1.ports[1], eigPor.port_b1) annotation (Line(points={{40,30},{26,
          30},{26,18},{10,18}}, color={0,127,255}));
  connect(eigPor.port_a1, sin.ports[1]) annotation (Line(points={{-10,18},{-16,
          18},{-16,-50},{-3,-50}}, color={0,127,255}));
  connect(eigPor.port_a3, sin.ports[2]) annotation (Line(points={{-10,6.8},{-16,
          6.8},{-16,-50},{-1,-50}}, color={0,127,255}));
  connect(eigPor.port_a2, sin.ports[3]) annotation (Line(points={{10,13},{16,13},
          {16,-50},{1,-50}}, color={0,127,255}));
  connect(eigPor.port_a4, sin.ports[4]) annotation (Line(points={{10,2},{16,2},
          {16,-50},{3,-50}}, color={0,127,255}));
  annotation (    Documentation(info="<html>
<p>
This example model demonstrates the use of the
<a href=\"modelica://IBPSA.Fluid.Interfaces.EightPortHeatMassExchanger\">EightPortHeatMassExchanger</a> model.
</p>
</html>", revisions="<html>
<ul>
<li>
July 18, 2018, by Massimo Cimmino:<br/>
First implementation.
</li>
</ul>
</html>"),
experiment(Tolerance=1e-6, StopTime=5),
__Dymola_Commands(file=
          "Resources/Scripts/Dymola/Fluid/Interfaces/Examples/EightPortHeatMassExchanger.mos"
        "Simulate and plot"));
end EightPortHeatMassExchanger;
