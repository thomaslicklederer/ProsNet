within ProsNet.Examples;
model ThreeProsMeshed
  extends Modelica.Icons.Example;

  Prosumers.ProsumerSimple pros1(
    mode=ProsNet.Prosumers.Types.OperationMode.Consumption,
    m_flow_sec=0.1,
    T_sec=318.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-10,60},{10,80}})));
  Fluid.Pipes.InsulatedPipe pipe annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-46,34})));
  Fluid.Pipes.InsulatedPipe pipe1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={38,36})));
  Fluid.Pipes.InsulatedPipe pipe2 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-46,-34})));
  Fluid.Pipes.InsulatedPipe pipe3 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={38,-38})));
  Fluid.Sources.Boundary_pT bou(nPorts=1)
    annotation (Placement(transformation(extent={{68,-10},{48,10}})));
  Prosumers.ProsumerSimple pros2(
    mode=ProsNet.Prosumers.Types.OperationMode.Production,
    m_flow_sec=0.358,
    T_sec=323.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Prosumers.ProsumerSimple pros3(
    op=1,
    mode=ProsNet.Prosumers.Types.OperationMode.Consumption,
    m_flow_sec=0.358,
    T_sec=318.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-10,-80},{10,-60}})));
  Fluid.Pipes.InsulatedPipe pipe4 annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-74,0})));
  Fluid.Pipes.InsulatedPipe pipe5 annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={84,0})));
equation
  connect(pros1.port_b, pipe1.port_b)
    annotation (Line(points={{10,70},{38,70},{38,46}}, color={0,127,255}));
  connect(pros1.port_a, pipe.port_a) annotation (Line(points={{-10,70},{-46,70},
          {-46,44}}, color={0,127,255}));
  connect(pipe.port_b, pipe2.port_b)
    annotation (Line(points={{-46,24},{-46,-24}}, color={0,127,255}));
  connect(pros2.port_a, pipe2.port_b)
    annotation (Line(points={{-10,0},{-46,0},{-46,-24}}, color={0,127,255}));
  connect(pros3.port_a, pipe2.port_a) annotation (Line(points={{-10,-70},{-46,
          -70},{-46,-44}}, color={0,127,255}));
  connect(pros2.port_b, pipe1.port_a)
    annotation (Line(points={{10,0},{38,0},{38,26}}, color={0,127,255}));
  connect(pipe3.port_a, pipe1.port_a)
    annotation (Line(points={{38,-28},{38,26}}, color={0,127,255}));
  connect(pipe3.port_b, pros3.port_b) annotation (Line(points={{38,-48},{38,-70},
          {10,-70}}, color={0,127,255}));
  connect(bou.ports[1], pros2.port_b)
    annotation (Line(points={{48,0},{10,0}}, color={0,127,255}));
  connect(pipe4.port_a, pipe.port_a) annotation (Line(points={{-74,10},{-74,70},
          {-46,70},{-46,44}}, color={0,127,255}));
  connect(pipe4.port_b, pipe2.port_a) annotation (Line(points={{-74,-10},{-74,
          -70},{-46,-70},{-46,-44}}, color={0,127,255}));
  connect(pipe5.port_a, pipe1.port_b) annotation (Line(points={{84,10},{84,70},
          {38,70},{38,46}}, color={0,127,255}));
  connect(pipe5.port_b, pros3.port_b) annotation (Line(points={{84,-10},{84,-70},
          {10,-70}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false), graphics={Text(
          extent={{-96,98},{-10,90}},
          lineColor={28,108,200},
          fillColor={244,125,35},
          fillPattern=FillPattern.None,
          textString="Simulation is performed in steady-state by default")}));
end ThreeProsMeshed;
