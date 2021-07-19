within ProsNet.FMU.Validation;
model fmuSF1 "Validation of the fmuSF1 FMU model"
  extends Modelica.Icons.Example;

  Modelica.Blocks.Sources.IntegerConstant pi(k=1)
    annotation (Placement(transformation(extent={{-78,24},{-58,44}})));
  Modelica.Blocks.Sources.Constant op(k=0.5)
    annotation (Placement(transformation(extent={{60,60},{40,80}})));
  Modelica.Blocks.Sources.Constant y(k=0.5)
    annotation (Placement(transformation(extent={{60,20},{40,40}})));
  Fluid.Sources.Boundary_pT bou1(
    redeclare package Medium = Media.Water,
                                 nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-76,-66})));
  Fluid.Sources.Boundary_pT bou2(redeclare package Medium = Media.Water,
    p=400000,
    T=343.15,                    nPorts=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=180,
        origin={92,6})));
  Fluid.Sources.MassFlowSource_T boundary(
    redeclare package Medium = Media.Water,
    use_m_flow_in=true,
    m_flow=0.358,
    use_T_in=true,
    T=343.15,
    nPorts=1)
    annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-30,-42})));
  Fluid.Sources.Boundary_pT bou3(redeclare package Medium = Media.Water, nPorts=
       1)                                  annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={50,-70})));

  Prosumers.BaseClasses.PrimarySide priSide(
    redeclare package Medium1 = ProsNet.Media.Water,
    redeclare package Medium2 = ProsNet.Media.Water,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));

  Fluid.Sensors.TemperatureTwoPort temPriHot(m_flow_nominal=priSide.m_flow_nominal_1, tau=1)
    annotation (Placement(transformation(extent={{48,-10},{68,10}})));
  Fluid.Sensors.TemperatureTwoPort temPriCold(m_flow_nominal=priSide.m_flow_nominal_1, tau=1)
    annotation (Placement(transformation(extent={{-62,-4},{-42,16}})));
  fmuSF1_exp_fmu fmuSF1_exp_fmu1 annotation (Placement(transformation(
        extent={{-19,-19},{19,19}},
        rotation=90,
        origin={11,-151})));
  Modelica.Blocks.Sources.IntegerConstant mu(k=-1)
    annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
  Modelica.Blocks.Math.Gain gain(k=1000) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={4,-102})));
  Modelica.Blocks.Sources.Constant qvDHpump(k=0.000166667) annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={20,-224})));
  Fluid.Sensors.TemperatureTwoPort temSecHot(m_flow_nominal=priSide.m_flow_nominal_1,
      tau=1) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={36,-36})));
  Modelica.Blocks.Sources.Constant zero(k=0) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-16,-224})));
  Fluid.Sensors.TemperatureTwoPort temSecCold(m_flow_nominal=priSide.m_flow_nominal_1,
      tau=1) annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-32,-18})));
equation
  connect(pi.y, priSide.pi) annotation (Line(points={{-57,34},{-36,34},{-36,12},{-12,12}},
        color={255,127,0}));
  connect(priSide.feedPump_y_set, y.y)
    annotation (Line(points={{4,12},{4,30},{39,30}}, color={0,0,127}));
  connect(op.y, priSide.conVal_op_set)
    annotation (Line(points={{39,70},{-4,70},{-4,12}}, color={0,0,127}));
  connect(priSide.port_b1, temPriHot.port_a)
    annotation (Line(points={{10,6},{26,6},{26,0},{48,0}}, color={0,127,255}));
  connect(temPriHot.port_b, bou2.ports[1])
    annotation (Line(points={{68,0},{72,0},{72,6},{82,6}}, color={0,127,255}));
  connect(bou1.ports[1], temPriCold.port_a)
    annotation (Line(points={{-76,-56},{-76,6},{-62,6}}, color={0,127,255}));
  connect(temPriCold.port_b, priSide.port_a1)
    annotation (Line(points={{-42,6},{-10,6}}, color={0,127,255}));
  connect(mu.y, priSide.mu) annotation (Line(points={{-59,70},{-30,70},{-30,
          15.8},{-12,15.8}}, color={255,127,0}));
  connect(fmuSF1_exp_fmu1.qv_HEX, gain.u) annotation (Line(points={{4.54,-128.2},
          {4.54,-120.1},{4,-120.1},{4,-114}}, color={0,0,127}));
  connect(gain.y, boundary.m_flow_in) annotation (Line(points={{4,-91},{4,-80},
          {-38,-80},{-38,-54}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.qvDHpump, qvDHpump.y) annotation (Line(points={{18.98,
          -170.76},{18.98,-191.38},{20,-191.38},{20,-213}}, color={0,0,127}));
  connect(priSide.port_a2, temSecHot.port_a) annotation (Line(points={{10,-6},{
          24,-6},{24,-26},{36,-26}}, color={0,127,255}));
  connect(temSecHot.port_b, bou3.ports[1]) annotation (Line(points={{36,-46},{
          44,-46},{44,-60},{50,-60}}, color={0,127,255}));
  connect(temSecHot.T, fmuSF1_exp_fmu1.TDH_HEXout) annotation (Line(points={{25,
          -36},{-16,-36},{-16,-112},{-40,-112},{-40,-184},{8,-184},{8,-178},{
          8.15,-178},{8.15,-170.76}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.TDH_HEXin, boundary.T_in) annotation (Line(points={{
          17.27,-128.2},{17.27,-66},{-34,-66},{-34,-54}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.CBIn_TSet, zero.y) annotation (Line(points={{-2.68,
          -170.76},{-2.68,-192.38},{-16,-192.38},{-16,-213}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.CHPIn_P, zero.y) annotation (Line(points={{2.83,
          -170.76},{2.83,-192.38},{-16,-192.38},{-16,-213}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.qvSTpump, zero.y) annotation (Line(points={{13.66,
          -170.76},{13.66,-191.38},{-16,-191.38},{-16,-213}}, color={0,0,127}));
  connect(fmuSF1_exp_fmu1.qvDHWpump, zero.y) annotation (Line(points={{24.49,
          -170.76},{24.49,-192.38},{-16,-192.38},{-16,-213}}, color={0,0,127}));
  connect(boundary.ports[1], temSecCold.port_b) annotation (Line(points={{-30,
          -32},{-32,-32},{-32,-28}}, color={0,127,255}));
  connect(temSecCold.port_a, priSide.port_b2)
    annotation (Line(points={{-32,-8},{-32,-6},{-10,-6}}, color={0,127,255}));
  annotation (experiment(StopTime=100,Tolerance=1e-006),
  Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end fmuSF1;
