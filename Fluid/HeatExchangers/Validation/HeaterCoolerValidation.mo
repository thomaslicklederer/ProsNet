within ProsNet.Fluid.HeatExchangers.Validation;
model HeaterCoolerValidation
     extends Modelica.Icons.Example;

      replaceable package Medium = ProsNet.Media.Water;

  Heater_Cooler_T hea(m_flow_nominal=1, dp_nominal=0)
    annotation (Placement(transformation(extent={{-10,50},{10,70}})));
  Pumps.FlowControlled_m_flow pump(
    energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyState,
    m_flow_nominal=1,
    inputType=ProsNet.Fluid.Types.InputType.Constant,
    use_inputFilter=false,
    constantMassFlowRate=1)                         annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={30,16})));
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
equation
  connect(const.y, hea.TSet) annotation (Line(points={{-59,88},{-42,88},{-42,90},
          {-32,90},{-32,68},{-12,68}}, color={0,0,127}));
  connect(senTem.port_b, hea.port_a)
    annotation (Line(points={{-40,48},{-40,60},{-10,60}}, color={0,127,255}));
  connect(hea.port_b, senTem1.port_b) annotation (Line(points={{10,60},{24,60},{
          24,58},{28,58},{28,52}}, color={0,127,255}));
  connect(hea.Q_flow, realValue.numberPort) annotation (Line(points={{11,68},{32,
          68},{32,73},{62.4,73}}, color={0,0,127}));
  connect(senTem1.port_a, pump.port_b)
    annotation (Line(points={{28,32},{30,32},{30,26}}, color={0,127,255}));
  connect(pump.port_a, bou1.ports[1])
    annotation (Line(points={{30,6},{30,-6},{50,-6}}, color={0,127,255}));
  connect(senTem.port_a, bou.ports[1]) annotation (Line(points={{-40,28},{-40,
          -44},{-64,-44}}, color={0,127,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),experiment(StopTime=100));
end HeaterCoolerValidation;
