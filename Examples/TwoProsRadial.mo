within ProsNet.Examples;
model TwoProsRadial
  extends Modelica.Icons.Example;

  Prosumers.ProsumerSimple pros1(
    mode=ProsNet.Prosumers.Types.OperationMode.Production,
    m_flow_sec=0.358,
    T_sec=343.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-10,42},{10,62}})));
  Fluid.Pipes.InsulatedPipe pipe annotation (Placement(transformation(
        extent={{10,-10},{-10,10}},
        rotation=90,
        origin={-42,24})));
  Fluid.Pipes.InsulatedPipe pipe1 annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={38,24})));
  Fluid.Sources.Boundary_pT bou(nPorts=1)
    annotation (Placement(transformation(extent={{90,-10},{70,10}})));
  Prosumers.ProsumerSimple pros2(
    mode=ProsNet.Prosumers.Types.OperationMode.Consumption,
    m_flow_sec=0.358,
    T_sec=313.15,
    redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
    annotation (Placement(transformation(extent={{-12,-12},{8,8}})));
equation
  connect(pros1.port_b, pipe1.port_b)
    annotation (Line(points={{10,52},{38,52},{38,34}}, color={0,127,255}));
  connect(pros1.port_a, pipe.port_a) annotation (Line(points={{-10,52},{-42,52},
          {-42,34}}, color={0,127,255}));
  connect(pros2.port_b, pipe1.port_a)
    annotation (Line(points={{8,-2},{38,-2},{38,14}},color={0,127,255}));
  connect(bou.ports[1], pros2.port_b)
    annotation (Line(points={{70,0},{40,0},{40,-2},{8,-2}},
                                             color={0,127,255}));
  connect(pipe.port_b, pros2.port_a)
    annotation (Line(points={{-42,14},{-42,-2},{-12,-2}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false), graphics={Text(
          extent={{-96,98},{-10,90}},
          lineColor={28,108,200},
          fillColor={244,125,35},
          fillPattern=FillPattern.None,
          textString="Simulation is performed in steady-state by default")}));
end TwoProsRadial;
