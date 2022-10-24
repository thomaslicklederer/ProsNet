within ProsNet.Fluid.Pipes;
model InsulatedPipe

  extends ProsNet.Fluid.Interfaces.PartialTwoPort(
    redeclare package Medium = ProsNet.Media.Water);

  parameter Modelica.Units.SI.Temperature T_amb(displayUnit="degC") = 285.15
    "Ambient temperature";

  parameter Real R_ins(min=0,unit="(K.m)/W")=3.78 "Thermal resistance per meter";

  parameter Modelica.Units.SI.Length length=10 "Length of the pipe";

  parameter Modelica.Units.SI.Length diameter=0.022 "Diameter of the pipe";

  parameter Real zeta(min=0)=3.5 "Local resistance coefficient";

  parameter Modelica.Fluid.Types.Dynamics energyDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
    "Energy dynamics" annotation(Dialog(tab="Dynamics"));

  parameter Modelica.Units.SI.MassFlowRate m_flow_start=0
    "Start value for mass flow rate" annotation (Dialog(tab="Dynamics"));

  parameter Modelica.Units.SI.Pressure p_start=101325
    "Start value for pressure" annotation (Dialog(tab="Dynamics"));

  parameter Modelica.Units.SI.Temperature T_start=293.15
    "Start value for temperature" annotation (Dialog(tab="Dynamics"));

  Modelica.Fluid.Pipes.DynamicPipe pipe(
    allowFlowReversal=true,             mediums(each preferredMediumStates = false),
   redeclare replaceable package Medium =
        ProsNet.Media.Water,
    length=length,
    diameter=diameter,
    nNodes=10,
    use_HeatTransfer=true,
    energyDynamics = energyDynamics)
    annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
  Modelica.Fluid.Fittings.SimpleGenericOrifice orifice2(
    redeclare replaceable package Medium = ProsNet.Media.Water,
    diameter=diameter,
    zeta=zeta/2)
    annotation (Placement(transformation(extent={{40,-10},{60,10}})));
  Modelica.Fluid.Fittings.SimpleGenericOrifice orifice1(
    redeclare replaceable package Medium = ProsNet.Media.Water,
    diameter=diameter,
    zeta=zeta/2)
    annotation (Placement(transformation(extent={{-60,-10},{-40,10}})));


  Modelica.Thermal.HeatTransfer.Sources.FixedTemperature bou(T=T_amb)
    "Boundary temperature"
    annotation (Placement(transformation(extent={{-60,80},{-40,100}})));

  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond1(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-93,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond2(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-73,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond3(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-51,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond4(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-31,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond5(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={-9,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond6(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={13,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond7(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={35,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond8(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={55,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond9(G=(1/R_ins)*
        (length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={75,37})));
  Modelica.Thermal.HeatTransfer.Components.ThermalConductor thCond10(G=(1/R_ins)
        *(length/10))
                annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=90,
        origin={95,37})));
equation
  connect(port_a, orifice1.port_a)
    annotation (Line(points={{-100,0},{-60,0}}, color={0,127,255}));
  connect(orifice1.port_b, pipe.port_a)
    annotation (Line(points={{-40,0},{-10,0}}, color={0,127,255}));
  connect(pipe.port_b, orifice2.port_a)
    annotation (Line(points={{10,0},{40,0}}, color={0,127,255}));
  connect(orifice2.port_b, port_b)
    annotation (Line(points={{60,0},{100,0}}, color={0,127,255}));
  connect(pipe.heatPorts[1], thCond1.port_a) annotation (Line(points={{-2.69,4.4},
          {-2.69,22},{-93,22},{-93,30}}, color={127,0,0}));
  connect(pipe.heatPorts[2], thCond2.port_a) annotation (Line(points={{-2.07,4.4},
          {-2,4.4},{-2,22},{-73,22},{-73,30}}, color={127,0,0}));
  connect(pipe.heatPorts[3], thCond3.port_a) annotation (Line(points={{-1.45,4.4},
          {-2,4.4},{-2,22},{-51,22},{-51,30}}, color={127,0,0}));
  connect(pipe.heatPorts[4], thCond4.port_a) annotation (Line(points={{-0.83,4.4},
          {-2,4.4},{-2,22},{-31,22},{-31,30}}, color={127,0,0}));
  connect(pipe.heatPorts[5], thCond5.port_a) annotation (Line(points={{-0.21,4.4},
          {-2,4.4},{-2,22},{-9,22},{-9,30}}, color={127,0,0}));
  connect(pipe.heatPorts[6], thCond6.port_a) annotation (Line(points={{0.41,4.4},
          {-2,4.4},{-2,22},{12,22},{12,26},{13,26},{13,30}}, color={127,0,0}));
  connect(pipe.heatPorts[7], thCond7.port_a) annotation (Line(points={{1.03,4.4},
          {-2,4.4},{-2,22},{34,22},{34,26},{35,26},{35,30}}, color={127,0,0}));
  connect(pipe.heatPorts[8], thCond8.port_a) annotation (Line(points={{1.65,4.4},
          {-2,4.4},{-2,22},{54,22},{54,26},{55,26},{55,30}}, color={127,0,0}));
  connect(pipe.heatPorts[9], thCond9.port_a) annotation (Line(points={{2.27,4.4},
          {-2,4.4},{-2,22},{74,22},{74,26},{75,26},{75,30}}, color={127,0,0}));
  connect(pipe.heatPorts[10], thCond10.port_a) annotation (Line(points={{2.89,4.4},
          {-2,4.4},{-2,22},{94,22},{94,26},{95,26},{95,30}}, color={127,0,0}));
  connect(bou.port, thCond1.port_b) annotation (Line(points={{-40,90},{-34,90},{
          -34,48},{-93,48},{-93,44}}, color={191,0,0}));
  connect(thCond2.port_b, bou.port) annotation (Line(points={{-73,44},{-73,48},{
          -34,48},{-34,90},{-40,90}}, color={191,0,0}));
  connect(thCond3.port_b, bou.port) annotation (Line(points={{-51,44},{-51,48},{
          -34,48},{-34,90},{-40,90}}, color={191,0,0}));
  connect(thCond4.port_b, bou.port)
    annotation (Line(points={{-31,44},{-31,90},{-40,90}}, color={191,0,0}));
  connect(thCond5.port_b, bou.port)
    annotation (Line(points={{-9,44},{-9,90},{-40,90}}, color={191,0,0}));
  connect(thCond6.port_b, bou.port) annotation (Line(points={{13,44},{12,44},{12,
          90},{-40,90}}, color={191,0,0}));
  connect(thCond7.port_b, bou.port) annotation (Line(points={{35,44},{34,44},{34,
          90},{-40,90}}, color={191,0,0}));
  connect(thCond8.port_b, bou.port) annotation (Line(points={{55,44},{54,44},{54,
          90},{-40,90}}, color={191,0,0}));
  connect(thCond9.port_b, bou.port) annotation (Line(points={{75,44},{74,44},{74,
          90},{-40,90}}, color={191,0,0}));
  connect(thCond10.port_b, bou.port) annotation (Line(points={{95,44},{94,44},{94,
          90},{-40,90}}, color={191,0,0}));
  annotation (defaultComponentName="pipe", Icon(coordinateSystem(preserveAspectRatio=true), graphics={
                                     Rectangle(
          extent={{-100,44},{100,-44}},
          fillPattern=FillPattern.HorizontalCylinder,
          fillColor={0,127,255}),
        Rectangle(
          extent={{-100,60},{100,44}},
          lineColor={28,108,200},
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-100,-44},{100,-60}},
          lineColor={28,108,200},
          fillColor={244,125,35},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{22,-68},{62,-83},{22,-98},{22,-68}},
          lineColor={0,128,255},
          fillColor={0,128,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{22,-73},{52,-83},{22,-93},{22,-73}},
          lineColor={255,255,255},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(
          points={{57,-83},{-58,-83}},
          color={0,128,255}),
        Polygon(
          points={{22,-68},{62,-83},{22,-98},{22,-68}},
          lineColor={0,128,255},
          fillColor={0,128,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{22,-73},{52,-83},{22,-93},{22,-73}},
          lineColor={255,255,255},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(
          points={{57,-83},{-58,-83}},
          color={0,128,255})}),                    Diagram(
        coordinateSystem(preserveAspectRatio=true)),
    Documentation(info="<html>
<p><b>Model of insulated pipe.</b></p>
<p><br>The pipe model is based on <a href=\"modelica://Modelica.Fluid.Pipes.DynamicPipe\">DynamicPipe</a> from the Modelica Standard Library. Two features have been added to the base model. First, thermal losses are modeled. Second, the influence of minor hydraulic losses can be taken into account.</p>
</html>"),
    experiment(
      StartTime=700,
      StopTime=11025,
      Interval=10,
      __Dymola_Algorithm="Dassl"));
end InsulatedPipe;
