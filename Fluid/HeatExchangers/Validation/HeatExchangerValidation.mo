within ProsNet.Fluid.HeatExchangers.Validation;
model HeatExchangerValidation "HeatExchangerValidation"
 extends Modelica.Icons.Example;
 replaceable package Medium = ProsNet.Media.Water;
  ProsNet.Fluid.HeatExchangers.LiquidToLiquid plateHEX1(
    m1_flow_nominal=0.3586,
    m2_flow_nominal=0.3586,
    dp1_nominal=40e3,
    dp2_nominal=40e3,
    Q_flow_nominal=30000,
    T_a1_nominal=343.15,
    T_a2_nominal=318.15) annotation (Placement(transformation(origin={3,11},
          extent={{-15,-15},{15,15}})));
 ProsNet.Fluid.Sources.MassFlowSource_T boundary1(
  redeclare package Medium = Medium,
  nPorts=1,
  use_m_flow_in=true,
  m_flow=2,
  T=70 + 273.15) annotation(Placement(transformation(
  origin={-30,62},
  extent={{10,-10},{-10,10}})));
 ProsNet.Fluid.Sources.MassFlowSource_T boundary2(
  redeclare package Medium = Medium,
  nPorts=1,
  use_m_flow_in=true,
  m_flow=4,
  T=45 + 273.15) annotation(Placement(transformation(
  origin={68,-36},
  extent={{-10,-10},{10,10}})));
 ProsNet.Fluid.Sources.Boundary_pT bou1(nPorts=1)
            annotation(Placement(transformation(
  origin={70,66},
  extent={{10,-10},{-10,10}})));
//  redeclare package Medium = Medium,
 ProsNet.Fluid.Sources.Boundary_pT bou2(nPorts=1)
            annotation(Placement(transformation(
  origin={-70,-28},
  extent={{-10,-10},{10,10}})));
//  redeclare package Medium = Medium,
 //redeclare package
 //     Medium =                                                                     Medium
 //redeclare package
 //     Medium =                                                                     Medium
 inner Modelica.Fluid.System system annotation(Placement(transformation(
  origin={98,-90},
  extent={{-10,-10},{10,10}})));
 Modelica.Blocks.Sources.TimeTable timeTable1(table=[0, 0; 1, 1; 2, 2; 3, 0; 4, -1; 5, -2; 6, 0]) annotation(Placement(transformation(
  origin={18,84},
  extent={{10,-10},{-10,10}})));
 Modelica.Blocks.Sources.TimeTable timeTable2(table=[0, 0; 1, 1; 2, 2; 3, 0; 4, -1; 5, -2; 6, 0]) annotation(Placement(transformation(
  origin={20,-32},
  extent={{-10,-10},{10,10}})));
 Modelica.Blocks.Sources.Constant const(k=0.3586) annotation(Placement(transformation(extent={{10,-72},{30,-52}})));
 Modelica.Blocks.Sources.Constant const1(k=0.3586) annotation(Placement(transformation(extent={{28,44},{8,64}})));
  Sensors.TemperatureTwoPort senTem(m_flow_nominal=0.3, initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{-46,-36},{-26,-16}})));
  Sensors.TemperatureTwoPort senTem1(m_flow_nominal=0.3, initType=Modelica.Blocks.Types.Init.SteadyState)
    annotation (Placement(transformation(extent={{32,10},{52,30}})));
equation
    connect(boundary2.ports[1], plateHEX1.port_a2) annotation (
      Line(points={{78,-36},{90,-36},{90,0},{18,0},{18,2}},          color = {0, 127, 255}));
    connect(boundary1.ports[1], plateHEX1.port_a1) annotation (
      Line(points={{-40,62},{-52,62},{-52,12},{-12,12},{-12,20}},            color = {0, 127, 255}));
  // annotation (
  //  uses(IBPSA(version = "3.0.0"), Modelica(version = "3.2.3")));
    connect(const.y, boundary2.m_flow_in) annotation (Line(points={{31,-62},{44,
            -62},{44,-30},{56,-30},{56,-28}}, color={0,0,127}));
    connect(const1.y, boundary1.m_flow_in) annotation (Line(points={{7,54},{-2,54},
            {-2,70},{-18,70}}, color={0,0,127}));
  connect(plateHEX1.port_b2, senTem.port_b) annotation (Line(points={{-12,2},{
          -16,2},{-16,-26},{-26,-26}}, color={0,127,255}));
  connect(senTem.port_a, bou2.ports[1]) annotation (Line(points={{-46,-26},{-50,
          -26},{-50,-28},{-60,-28}}, color={0,127,255}));
  connect(plateHEX1.port_b1, senTem1.port_a)
    annotation (Line(points={{18,20},{32,20}}, color={0,127,255}));
  connect(senTem1.port_b, bou1.ports[1]) annotation (Line(points={{52,20},{56,
          20},{56,22},{62,22},{62,48},{44,48},{44,66},{60,66}}, color={0,127,
          255}));
end HeatExchangerValidation;
