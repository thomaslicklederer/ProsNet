within ProsNet.Examples;
model TwoProsRadial
  extends Modelica.Icons.Example;

  Fluid.Pipes.InsulatedPipe pipe annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-42,24})));
  Fluid.Pipes.InsulatedPipe pipe1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={38,24})));
  Fluid.Sources.Boundary_pT bou(redeclare package Medium = Media.Water, nPorts=1)
    annotation (Placement(transformation(extent={{90,-10},{70,10}})));
  Prosumers.ProsumerIdeal pros1(
    mode=ProsNet.Prosumers.Types.OperationMode.Production,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer,
    T_sec=343.15,
    m_flow_sec=0.358)
    annotation (Placement(transformation(extent={{-16,46},{4,66}})));
  Prosumers.ProsumerIdeal pros2(
    mode=ProsNet.Prosumers.Types.OperationMode.Consumption,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic feedinPer,
    T_sec=313.15,
    m_flow_sec=0.358)
    annotation (Placement(transformation(extent={{-16,-16},{4,4}})));
equation
  connect(pros1.port_b, pipe1.port_b)
    annotation (Line(points={{4,56},{38,56},{38,34}}, color={0,127,255}));
  connect(pros1.port_a, pipe.port_a)
    annotation (Line(points={{-16,56},{-42,56},{-42,34}}, color={0,127,255}));
  connect(pipe.port_b, pros2.port_a)
    annotation (Line(points={{-42,14},{-42,-6},{-16,-6}}, color={0,127,255}));
  connect(pros2.port_b, pipe1.port_a)
    annotation (Line(points={{4,-6},{38,-6},{38,14}}, color={0,127,255}));
  connect(bou.ports[1], pipe1.port_a) annotation (Line(points={{70,0},{54,0},{54,
          2},{38,2},{38,14}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false), graphics={Text(
          extent={{-96,98},{-10,90}},
          lineColor={28,108,200},
          fillColor={244,125,35},
          fillPattern=FillPattern.None,
          textString="Simulation is performed in steady-state by default")}));
end TwoProsRadial;
