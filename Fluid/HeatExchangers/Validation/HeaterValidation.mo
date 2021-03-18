within ProsNet.Fluid.HeatExchangers.Validation;
model HeaterValidation
     extends Modelica.Icons.Example;

      replaceable package Medium = ProsNet.Media.Water;



  Pumps.FlowControlled_m_flow pump(
    energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyState,
    m_flow_nominal=1,
    inputType=ProsNet.Fluid.Types.InputType.Constant,
    use_inputFilter=false,
    dp_nominal=1000,
    constantMassFlowRate=1)                         annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-40,10})));
  Sources.Boundary_pT bou(nPorts=1)
    annotation (Placement(transformation(extent={{-84,-54},{-64,-34}})));
  Modelica.Blocks.Sources.Constant const(k=273.15 + 25)
    annotation (Placement(transformation(extent={{-80,78},{-60,98}})));
  Sources.Boundary_pT bou1(nPorts=1)
    annotation (Placement(transformation(extent={{70,-16},{50,4}})));
  Sensors.TemperatureTwoPort senTem(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
                                                      annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={-40,38})));
  Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
                                                       annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={28,42})));
  Modelica.Blocks.Interaction.Show.RealValue realValue(significantDigits=3)
    annotation (Placement(transformation(extent={{66,64},{114,82}})));
  Modelica.Fluid.Pipes.StaticPipe pipe(
    redeclare package Medium = Medium,
    length=1,
    diameter=1)
    annotation (Placement(transformation(extent={{-14,50},{6,70}})));
equation
  connect(bou.ports[1], pump.port_a) annotation (Line(points={{-64,-44},{-54,-44},
          {-54,-38},{-40,-38},{-40,0}}, color={0,127,255}));
  connect(pump.port_b, senTem.port_a)
    annotation (Line(points={{-40,20},{-40,28}}, color={0,127,255}));
  connect(senTem1.port_a, bou1.ports[1])
    annotation (Line(points={{28,32},{28,-6},{50,-6}}, color={0,127,255}));
  connect(senTem.port_b, pipe.port_a)
    annotation (Line(points={{-40,48},{-40,60},{-14,60}}, color={0,127,255}));
  connect(pipe.port_b, senTem1.port_b)
    annotation (Line(points={{6,60},{28,60},{28,52}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),experiment(StopTime=100));
end HeaterValidation;
