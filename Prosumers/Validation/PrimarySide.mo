within ProsNet.Prosumers.Validation;
model PrimarySide
  extends Modelica.Icons.Example;

  Modelica.Blocks.Sources.IntegerConstant pi(k=1)
    annotation (Placement(transformation(extent={{-78,24},{-58,44}})));
  Modelica.Blocks.Sources.Constant op(k=0.5)
    annotation (Placement(transformation(extent={{60,60},{40,80}})));
  Modelica.Blocks.Sources.Constant y(k=0.5)
    annotation (Placement(transformation(extent={{60,20},{40,40}})));
  Fluid.Sources.Boundary_pT bou1(
    redeclare package Medium = Media.Water,
    T=318.15,                    nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-76,-66})));
  Fluid.Sources.Boundary_pT bou2(redeclare package Medium = Media.Water,
                                 nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={92,6})));
  Fluid.Sources.MassFlowSource_T boundary(
    redeclare package Medium = Media.Water,
    m_flow=0.358,
    T=343.15,                                          nPorts=1)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={28,-54})));
  Fluid.Sources.Boundary_pT bou3(redeclare package Medium = Media.Water,
                                 nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-28,-52})));

  BaseClasses.PrimarySide_new priSide(
    redeclare package Medium1 = ProsNet.Media.Water,
    redeclare package Medium2 = ProsNet.Media.Water,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));

  Fluid.Sensors.TemperatureTwoPort temPriHot(m_flow_nominal=priSide.m_flow_nominal_1)
    annotation (Placement(transformation(extent={{48,-10},{68,10}})));
  Fluid.Sensors.TemperatureTwoPort temPriCold(m_flow_nominal=priSide.m_flow_nominal_1)
    annotation (Placement(transformation(extent={{-62,-4},{-42,16}})));
  Modelica.Blocks.Sources.IntegerTable mu(table=[0,1; 100,1; 100,-1])
    annotation (Placement(transformation(extent={{-80,62},{-60,82}})));
equation
  connect(pi.y, priSide.pi) annotation (Line(points={{-57,34},{-36,34},{-36,12},{-12,12}},
        color={255,127,0}));
  connect(priSide.feedPump_y_set, y.y)
    annotation (Line(points={{4,12},{4,30},{39,30}}, color={0,0,127}));
  connect(op.y, priSide.conVal_op_set)
    annotation (Line(points={{39,70},{-4,70},{-4,12}}, color={0,0,127}));
  connect(boundary.ports[1], priSide.port_a2)
    annotation (Line(points={{28,-44},{28,-6},{10,-6}}, color={0,127,255}));
  connect(bou3.ports[1], priSide.port_b2) annotation (Line(points={{-28,-42},{-26,-42},{-26,-6},
          {-10,-6}}, color={0,127,255}));
  connect(priSide.port_b1, temPriHot.port_a)
    annotation (Line(points={{10,6},{26,6},{26,0},{48,0}}, color={0,127,255}));
  connect(temPriHot.port_b, bou2.ports[1])
    annotation (Line(points={{68,0},{72,0},{72,6},{82,6}}, color={0,127,255}));
  connect(bou1.ports[1], temPriCold.port_a)
    annotation (Line(points={{-76,-56},{-76,6},{-62,6}}, color={0,127,255}));
  connect(temPriCold.port_b, priSide.port_a1)
    annotation (Line(points={{-42,6},{-10,6}}, color={0,127,255}));
  connect(mu.y, priSide.mu) annotation (Line(points={{-59,72},{-42,72},{-42,70},
          {-24,70},{-24,15.8},{-12,15.8}}, color={255,127,0}));
  annotation (experiment(StopTime=100,Tolerance=1e-006),
  Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end PrimarySide;
