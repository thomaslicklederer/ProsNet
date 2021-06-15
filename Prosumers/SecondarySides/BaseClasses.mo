within ProsNet.Prosumers.SecondarySides;
package BaseClasses
    extends Modelica.Icons.BasesPackage;

  partial model PartialSecondarySide

    extends ProsNet.Fluid.Interfaces.PartialTwoPort(
      redeclare replaceable package Medium = ProsNet.Media.Water);

    Fluid.Pumps.FlowControlled_m_flow pump_prod annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={52,-42})));
    Fluid.Pumps.FlowControlled_m_flow pump_cons annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={2,-42})));
    Modelica.Blocks.Interfaces.IntegerInput mu annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-120,78})));
    Modelica.Blocks.Interfaces.IntegerInput pi annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-120,40})));
    Fluid.Sensors.TemperatureTwoPort temSecCold
      annotation (Placement(transformation(extent={{46,-96},{66,-76}})));
    Fluid.Sensors.TemperatureTwoPort temSecHot
      annotation (Placement(transformation(extent={{-86,-10},{-66,10}})));
  equation
    connect(pump_cons.port_a, pump_prod.port_b) annotation (Line(points={{2,-52},{
            2,-62},{52,-62},{52,-52}},
                                   color={0,127,255}));
    connect(pump_cons.port_b, pump_prod.port_a) annotation (Line(points={{2,-32},{
            2,-22},{52,-22},{52,-32}},
                                     color={0,127,255}));
    connect(port_b, temSecCold.port_b) annotation (Line(points={{100,0},{86,0},
            {86,-86},{66,-86}}, color={0,127,255}));
    connect(temSecCold.port_a, pump_prod.port_b) annotation (Line(points={{46,
            -86},{28,-86},{28,-62},{52,-62},{52,-52}}, color={0,127,255}));
    connect(port_a, temSecHot.port_a)
      annotation (Line(points={{-100,0},{-86,0}}, color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
          Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Ellipse(
            extent={{-58,20},{-18,-20}},
            lineColor={28,108,200},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-46,8},{-30,8},{-38,20},{-46,8}},
            lineColor={28,108,200},
            fillColor={28,108,200},
            fillPattern=FillPattern.Solid),
          Line(points={{-38,20},{-38,32}}, color={28,108,200}),
          Line(points={{-38,-20},{-38,-32}}, color={28,108,200})}),Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PartialSecondarySide;

  partial model SecondarySideParameters

   parameter Modelica.SIunits.Time tau(min=0) = 10 "Time constant"
   annotation(Dialog(tab="Dynamics", group="Secondary side heater/cooler dynamics"));

    parameter Modelica.Fluid.Types.Dynamics energyDynamics_hea_coo = Modelica.Fluid.Types.Dynamics.SteadyState
      "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side heater/cooler dynamics"));

    parameter Modelica.Fluid.Types.Dynamics energyDynamics_pump = Modelica.Fluid.Types.Dynamics.SteadyState
      "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

    parameter Modelica.SIunits.Time tau_pump = 1 "Time constant of fluid volume for nominal flow"
      annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

    parameter Boolean use_inputFilter = false "Filtering speed" annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

    parameter Modelica.SIunits.Time riseTime(min=0) = 5 "Rise time"
      annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

    parameter Modelica.SIunits.MassFlowRate m_flow_start=0 "Initial value of mass flow rate"
      annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

    /*parameter Modelica.SIunits.Time tau_temSen=1 "Time constant for the temperature sensors"
    annotation(Dialog(tab="Dynamics", group="Temperature sensors"));

  parameter Modelica.Blocks.Types.Init init_temSen=Modelica.Blocks.Types.Init.SteadyState "Type of initialization"
    annotation(Dialog(tab="Dynamics", group="Temperature sensors"));
*/

      parameter Modelica.SIunits.PressureDifference dp_nominal_hea_coo=0 "Pressure difference"
      annotation(Dialog(group="Secondary side heater/cooler nominal condition"));

    parameter Modelica.SIunits.PressureDifference dp_nominal_pump=10000 "Pressure difference"
      annotation(Dialog(group="Secondary side pump nominal condition"));

    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end SecondarySideParameters;

  partial model PumpsPairPartial

    extends ProsNet.Fluid.Interfaces.PartialTwoPort;

    // PumpsPairPartial dynamic parameters
    extends ProsNet.Prosumers.SecondarySides.BaseClasses.PumpsPairDynParam;

    // Parameters
    parameter Modelica.SIunits.MassFlowRate m_flow_nominal  "Nominal flow rate"
     annotation(Dialog(group="Secondary side pumps nominal conditions"));
    parameter Modelica.SIunits.PressureDifference dp_nominal "Nominal pressure difference"
      annotation(Dialog(group="Secondary side pumps nominal conditions"));

    ProsNet.Fluid.Pumps.FlowControlled_m_flow pump_prod(final energyDynamics=energyDynamics_pumpsSec,
        final tau=tau_pumpsSec,
        final m_flow_nominal=m_flow_nominal,
        final use_inputFilter=use_inputFilter_pumpsSec,
        final riseTime=riseTime_pumpsSec,
        final dp_nominal=dp_nominal,
        final m_flow_start=m_flow_start_pumpsSec) annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=270,
          origin={52,-42})));

    ProsNet.Fluid.Pumps.FlowControlled_m_flow pump_cons(final energyDynamics=energyDynamics_pumpsSec,
        final tau=tau_pumpsSec,
        final m_flow_nominal=m_flow_nominal,
        final use_inputFilter=use_inputFilter_pumpsSec,
        final riseTime=riseTime_pumpsSec,
        final dp_nominal=dp_nominal,
        final m_flow_start=m_flow_start_pumpsSec) annotation (Placement(
          transformation(
          extent={{-10,-10},{10,10}},
          rotation=90,
          origin={2,-42})));

    Modelica.Blocks.Interfaces.IntegerInput mu "Operating mode"
                                               annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-120,150})));

    Modelica.Blocks.Interfaces.IntegerInput pi "Participation"
                                               annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=0,
          origin={-120,112})));

  equation
    connect(pump_cons.port_a, pump_prod.port_b) annotation (Line(points={{2,-52},{
            2,-62},{52,-62},{52,-52}},
                                   color={0,127,255}));
    connect(pump_cons.port_b, pump_prod.port_a) annotation (Line(points={{2,-32},{
            2,-22},{52,-22},{52,-32}},
                                     color={0,127,255}));
    connect(port_b, pump_prod.port_b) annotation (Line(points={{100,0},{80,0},{80,-82},{28,-82},{
            28,-62},{52,-62},{52,-52}}, color={0,127,255}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
          Rectangle(
            extent={{-100,100},{100,-100}},
            lineColor={28,108,200},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Ellipse(
            extent={{-58,20},{-18,-20}},
            lineColor={28,108,200},
            fillColor={255,255,255},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-46,8},{-30,8},{-38,20},{-46,8}},
            lineColor={28,108,200},
            fillColor={28,108,200},
            fillPattern=FillPattern.Solid),
          Line(points={{-38,20},{-38,32}}, color={28,108,200}),
          Line(points={{-38,-20},{-38,-32}}, color={28,108,200})}),Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PumpsPairPartial;

  partial class PumpsPairDynParam
    extends Modelica.Icons.MaterialProperty;

    parameter Modelica.Fluid.Types.Dynamics energyDynamics_pumpsSec = Modelica.Fluid.Types.Dynamics.SteadyState
      "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
    parameter Modelica.SIunits.Time tau_pumpsSec(min=0) = 10 "Time constant of fluid volume in pumps"
     annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
    parameter Boolean use_inputFilter_pumpsSec = false "Start-up and shut-down dynamics of pumps"
     annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
    parameter Modelica.SIunits.Time riseTime_pumpsSec(min=0) = 5 "Rise time"
      annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
    parameter Modelica.SIunits.MassFlowRate m_flow_start_pumpsSec=0 "Initial value of mass flow rate"
      annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

  end PumpsPairDynParam;

  partial class PrescribedSecSideDynParam
    extends Modelica.Icons.MaterialProperty;

    parameter Modelica.Fluid.Types.Dynamics energyDynamics_cv = Modelica.Fluid.Types.Dynamics.SteadyState
      "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side control volume dynamics"));
    parameter Modelica.SIunits.Time tau_cv(min=0) = 10 "Time constant for control volume"
     annotation(Dialog(tab="Dynamics", group="Secondary side control volume dynamics"));
    parameter Modelica.SIunits.Temperature T_start_cv=293.15 "Initial temperature inside volume"
       annotation(Dialog(tab="Dynamics", group="Secondary side control volume dynamics"));

  end PrescribedSecSideDynParam;
end BaseClasses;
