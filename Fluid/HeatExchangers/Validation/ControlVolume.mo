within ProsNet.Fluid.HeatExchangers.Validation;
model ControlVolume "ControlVolume_T_Validation2"
     extends Modelica.Icons.Example;

     package Medium = ProsNet.Media.Water;

  Pumps.FlowControlled_m_flow pump(
    energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyState,
    m_flow_nominal=1,
    inputType=ProsNet.Fluid.Types.InputType.Continuous,
    use_inputFilter=false,
    constantMassFlowRate=0.1)                       annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={30,16})));
  Sources.Boundary_pT bou(redeclare package Medium = Media.Water,
    T=323.15,             nPorts=1)
    annotation (Placement(transformation(extent={{-74,-16},{-54,4}})));
  Modelica.Blocks.Sources.Constant const(k=273.15 + 30)
    annotation (Placement(transformation(extent={{-80,74},{-60,94}})));
  Sources.Boundary_pT bou1(redeclare package Medium = Media.Water,
                           nPorts=1)
    annotation (Placement(transformation(extent={{68,-16},{48,4}})));
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
        origin={30,42})));
  ControlVolume_T controlVolume_T(m_flow_nominal=1, redeclare package Medium = Medium,
    tau=30,
    energyDynamics=Modelica.Fluid.Types.Dynamics.SteadyState,
    T_start=293.15)
    annotation (Placement(transformation(extent={{-14,50},{6,70}})));
  Modelica.Blocks.Sources.TimeTable timeTable(table=[0.0,0.0; 10,0; 10,1; 50,-1;
        50,-2; 100,-2])
    annotation (Placement(transformation(extent={{-20,-34},{0,-14}})));
equation
  connect(senTem1.port_a, pump.port_b)
    annotation (Line(points={{30,32},{30,26}},         color={0,127,255}));
  connect(pump.port_a, bou1.ports[1])
    annotation (Line(points={{30,6},{30,-6},{48,-6}}, color={0,127,255}));
  connect(senTem.port_a, bou.ports[1]) annotation (Line(points={{-40,28},{-40,
          -6},{-54,-6}},   color={0,127,255}));
  connect(controlVolume_T.port_b, senTem1.port_b)
    annotation (Line(points={{6,60},{30,60},{30,52}}, color={0,127,255}));
  connect(controlVolume_T.port_a, senTem.port_b)
    annotation (Line(points={{-14,60},{-40,60},{-40,48}}, color={0,127,255}));
  connect(const.y, controlVolume_T.TSet) annotation (Line(points={{-59,84},{-26,
          84},{-26,68},{-16,68}}, color={0,0,127}));
  connect(timeTable.y, pump.m_flow_in) annotation (Line(points={{1,-24},{12,-24},
          {12,16},{18,16}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),experiment(StopTime=100));
end ControlVolume;
