within ProsNet.Prosumers;
package PrimarySides "Primary side of prosumer"
      extends Modelica.Icons.VariantsPackage;

  model PrimarySide

    extends ProsNet.Prosumers.PrimarySides.BaseClasses.PrimarySideParameters;

    extends ProsNet.Prosumers.PrimarySides.BaseClasses.PartialCore(
    HEX(dp1_nominal=dp1_nominal,
      dp2_nominal=dp2_nominal,
      Q_flow_nominal=Q_flow_nominal,
      T_a1_nominal=T_a1_nominal,
      T_a2_nominal=T_a2_nominal),
     val(    CvData=ProsNet.Fluid.Types.CvTypes.Kv,
      Kv=Kv_mainVal,
      use_inputFilter=use_inputFilter_mainVal,
      riseTime=riseTime_mainVal,
      init=init_mainVal,
      y_start=y_start_mainVal,
      l=l_mainVal),
      cheVal(CvData=ProsNet.Fluid.Types.CvTypes.Kv,
      Kv=Kv_cheVal,
      l=l_cheVal),
      mainPump(
      energyDynamics=energyDynamics_mainPump,
      tau=tau_mainPump,
      use_inputFilter=use_inputFilter_mainPump,
      per=per,
      riseTime=riseTime_mainPump,
      init=init_mainPump,
      y_start=y_start_mainPump));
  /*    m1_flow_nominal=m1_flow_nominal,
    m2_flow_nominal=m2_flow_nominal,*/

   /*   m1_flow_nominal=m1_flow_nominal,
    m2_flow_nominal=m2_flow_nominal,*/




    BaseClasses.PrimaryFlowControl primaryFlowControl
      annotation (Placement(transformation(extent={{12,58},{-8,78}})));
    Modelica.Blocks.Interfaces.RealInput mainPump_y_set annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={-60,120})));
    Modelica.Blocks.Interfaces.RealInput mainVal_op_set annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={60,120})));
  equation


    connect(primaryFlowControl.valve_op, val.y) annotation (Line(points={{-9,73.1},
            {-20,73.1},{-20,10},{-28,10}}, color={0,0,127}));
    connect(primaryFlowControl.pump_y, mainPump.y) annotation (Line(points={{-9,62.9},
            {-12,62.9},{-12,-52},{-76,-52},{-76,-34},{-88,-34},{-88,-12},{-78,-12}},
          color={0,0,127}));
    connect(mainPump_y_set, primaryFlowControl.pump_y_set) annotation (Line(
          points={{-60,120},{-60,90},{-2,90},{-2,80}},
                                                     color={0,0,127}));
    connect(mainVal_op_set, primaryFlowControl.valve_op_set) annotation (Line(
          points={{60,120},{60,92},{6,92},{6,80}},   color={0,0,127}));
    connect(primaryFlowControl.pi, pi) annotation (Line(points={{13.8,62},{34,62},
            {34,40},{-32,40},{-32,68},{-88,68},{-88,94},{-120,94}}, color={255,127,
            0}));
    connect(primaryFlowControl.mu, mu) annotation (Line(points={{13.8,74},{28,74},
            {28,50},{-28,50},{-28,80},{-80,80},{-80,136},{-120,136}}, color={255,127,
            0}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
          Line(points={{100,0},{-100,0}}, color={28,108,200})}),   Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end PrimarySide;

  package Validation

    model PrimarySideValidation
      PrimarySide primarySide(
        m1_flow_nominal=0.358,
        m2_flow_nominal=0.358,
        redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per,
        init_mainPump=Modelica.Blocks.Types.Init.SteadyState,
        init_mainVal=Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
      Modelica.Blocks.Sources.IntegerConstant mu(k=1)
        annotation (Placement(transformation(extent={{-80,58},{-60,78}})));
      Modelica.Blocks.Sources.IntegerConstant pi(k=1)
        annotation (Placement(transformation(extent={{-78,18},{-58,38}})));
      Modelica.Blocks.Sources.Constant op(k=0.5)
        annotation (Placement(transformation(extent={{80,20},{60,40}})));
      Modelica.Blocks.Sources.Constant y(k=0.5)
        annotation (Placement(transformation(extent={{80,60},{60,80}})));
      Fluid.Sources.Boundary_pT bou1(p=100000,
                                     nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-76,-66})));
      Fluid.Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-74,-36})));
      Fluid.Sensors.MassFlowRate senMasFlo1
        annotation (Placement(transformation(extent={{-74,-14},{-54,6}})));
      Fluid.Sensors.TemperatureTwoPort senTem2(m_flow_nominal=1, initType=Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{32,-4},{52,16}})));
      Fluid.Sources.Boundary_pT bou2(
        p=300000,
        T=343.15,                    nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={92,6})));
      SecondarySides.SimpleSecondarySide simpleSecondarySide(use_inputFilter=
            false)
        annotation (Placement(transformation(extent={{-10,-32},{10,-52}})));
      Modelica.Blocks.Sources.Constant T(k=273.15 + 50)
        annotation (Placement(transformation(extent={{90,-38},{70,-18}})));
      Modelica.Blocks.Sources.Constant m_flow(k=1)
        annotation (Placement(transformation(extent={{90,-76},{70,-56}})));
      Fluid.Sources.Boundary_pT bou3(nPorts=1) annotation (Placement(transformation(
            extent={{-5,-5},{5,5}},
            rotation=180,
            origin={33,-53})));
    equation
      connect(pi.y, primarySide.pi) annotation (Line(points={{-57,28},{-44,28},{-44,
              9.4},{-12,9.4}}, color={255,127,0}));
      connect(mu.y, primarySide.mu) annotation (Line(points={{-59,68},{-38,68},
              {-38,13.6},{-12,13.6}},
                                 color={255,127,0}));
      connect(y.y, primarySide.mainPump_y_set)
        annotation (Line(points={{59,70},{-6,70},{-6,12}}, color={0,0,127}));
      connect(op.y, primarySide.mainVal_op_set)
        annotation (Line(points={{59,30},{6,30},{6,12}}, color={0,0,127}));
      connect(simpleSecondarySide.port_b, primarySide.port_a2) annotation (Line(
            points={{10,-42},{22,-42},{22,-6},{10,-6}}, color={0,127,255}));
      connect(simpleSecondarySide.port_a, primarySide.port_b2) annotation (Line(
            points={{-10,-42},{-16,-42},{-16,-40},{-20,-40},{-20,-6},{-10,-6}},
            color={0,127,255}));
      connect(simpleSecondarySide.pi, primarySide.pi) annotation (Line(points={{-12,
              -46},{-38,-46},{-38,9.4},{-12,9.4}}, color={255,127,0}));
      connect(simpleSecondarySide.mu, primarySide.mu) annotation (Line(points={{-12,
              -49.8},{-48,-49.8},{-48,68},{-38,68},{-38,13.6},{-12,13.6}}, color={255,
              127,0}));
      connect(m_flow.y, simpleSecondarySide.m_flow_set) annotation (Line(points={{69,-66},
              {6,-66},{6,-54}},                        color={0,0,127}));
      connect(T.y, simpleSecondarySide.T_set) annotation (Line(points={{69,-28},{62,
              -28},{62,-26},{50,-26},{50,-86},{-6,-86},{-6,-54}}, color={0,0,127}));
      connect(bou1.ports[1], senTem1.port_a) annotation (Line(points={{-76,-56},{-76,
              -46},{-74,-46}}, color={0,127,255}));
      connect(bou2.ports[1], senTem2.port_b)
        annotation (Line(points={{82,6},{52,6}}, color={0,127,255}));
      connect(senTem2.port_a, primarySide.port_b1)
        annotation (Line(points={{32,6},{10,6}}, color={0,127,255}));
      connect(senTem1.port_b, senMasFlo1.port_a)
        annotation (Line(points={{-74,-26},{-74,-4}}, color={0,127,255}));
      connect(senMasFlo1.port_b, primarySide.port_a1) annotation (Line(points={{-54,
              -4},{-32,-4},{-32,6},{-10,6}}, color={0,127,255}));
      connect(bou3.ports[1], simpleSecondarySide.port_b) annotation (Line(
            points={{28,-53},{22,-53},{22,-42},{10,-42}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end PrimarySideValidation;

    model PrimarySideValidation2
      PrimarySide primarySide(
        m1_flow_nominal=0.358,
        m2_flow_nominal=0.358,
        redeclare Fluid.Pumps.Data.Pumps.QuadraticCharacteristic per)
        annotation (Placement(transformation(extent={{-10,-10},{10,10}})));
      Modelica.Blocks.Sources.IntegerConstant mu(k=1)
        annotation (Placement(transformation(extent={{-78,58},{-58,78}})));
      Modelica.Blocks.Sources.IntegerConstant pi(k=1)
        annotation (Placement(transformation(extent={{-78,18},{-58,38}})));
      Modelica.Blocks.Sources.Constant op(k=0.5)
        annotation (Placement(transformation(extent={{80,20},{60,40}})));
      Modelica.Blocks.Sources.Constant y(k=0.5)
        annotation (Placement(transformation(extent={{80,60},{60,80}})));
      Fluid.Sources.Boundary_pT bou1(nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-76,-66})));
      Fluid.Sources.Boundary_pT bou2(nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=180,
            origin={92,6})));
      Fluid.Sources.MassFlowSource_T boundary(m_flow=0.35, nPorts=1)
        annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={28,-54})));
      Fluid.Sources.Boundary_pT bou3(nPorts=1) annotation (Placement(transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-28,-52})));
    equation
      connect(pi.y, primarySide.pi) annotation (Line(points={{-57,28},{-44,28},{-44,
              9.4},{-12,9.4}}, color={255,127,0}));
      connect(mu.y, primarySide.mu) annotation (Line(points={{-57,68},{-38,68},{-38,
              13.6},{-12,13.6}}, color={255,127,0}));
      connect(y.y, primarySide.mainPump_y_set)
        annotation (Line(points={{59,70},{-6,70},{-6,12}}, color={0,0,127}));
      connect(op.y, primarySide.mainVal_op_set)
        annotation (Line(points={{59,30},{6,30},{6,12}}, color={0,0,127}));
      connect(boundary.ports[1], primarySide.port_a2) annotation (Line(points={
              {28,-44},{28,-6},{10,-6}}, color={0,127,255}));
      connect(bou3.ports[1], primarySide.port_b2) annotation (Line(points={{-28,
              -42},{-28,-6},{-10,-6}}, color={0,127,255}));
      connect(primarySide.port_a1, bou1.ports[1]) annotation (Line(points={{-10,
              6},{-20,6},{-20,4},{-32,4},{-32,-2},{-76,-2},{-76,-56}}, color={0,
              127,255}));
      connect(primarySide.port_b1, bou2.ports[1])
        annotation (Line(points={{10,6},{82,6}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end PrimarySideValidation2;
  end Validation;

  package BaseClasses
      extends Modelica.Icons.BasesPackage;

    partial model PartialCore

      extends ProsNet.Fluid.Interfaces.PartialFourPortInterface(
        redeclare replaceable package Medium1 = ProsNet.Media.Water,
        redeclare replaceable package Medium2 = ProsNet.Media.Water);


      ProsNet.Fluid.HeatExchangers.LiquidToLiquid HEX(m1_flow_nominal=
            m1_flow_nominal, m2_flow_nominal=m2_flow_nominal)            annotation (Placement(transformation(
            extent={{-14,-17},{14,17}},
            rotation=0,
            origin={48,3})));
      ProsNet.Fluid.Valves.TwoWayEqualPercentage val(m_flow_nominal=m1_flow_nominal) annotation (Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=-90,
            origin={-40,10})));
      ProsNet.Fluid.FixedResistances.CheckValve cheVal(m_flow_nominal=
            m1_flow_nominal)                                                              annotation (Placement(transformation(
            extent={{10,-10},{-10,10}},
            rotation=90,
            origin={-66,26})));
      ProsNet.Fluid.Pumps.SpeedControlled_y mainPump                             annotation (Placement(
            transformation(
            extent={{10,-10},{-10,10}},
            rotation=90,
            origin={-66,-12})));
      Modelica.Blocks.Interfaces.IntegerInput mu
        annotation (Placement(transformation(extent={{-140,116},{-100,156}})));
      Modelica.Blocks.Interfaces.IntegerInput pi
        annotation (Placement(transformation(extent={{-140,74},{-100,114}})));
    equation
      connect(port_a1, val.port_b)
        annotation (Line(points={{-100,60},{-40,60},{-40,20}}, color={0,127,255}));
      connect(cheVal.port_a, port_a1)
        annotation (Line(points={{-66,36},{-66,60},{-100,60}}, color={0,127,255}));
      connect(cheVal.port_b, mainPump.port_a)
        annotation (Line(points={{-66,16},{-66,-2}}, color={0,127,255}));
      connect(mainPump.port_b, val.port_a) annotation (Line(points={{-66,-22},{-66,-32},
              {-40,-32},{-40,0}}, color={0,127,255}));
      connect(HEX.port_a1, val.port_a) annotation (Line(points={{34,13.2},{16,13.2},
              {16,14},{-2,14},{-2,-32},{-40,-32},{-40,1.77636e-15}}, color={0,127,255}));
      connect(port_b1, HEX.port_b1) annotation (Line(points={{100,60},{82,60},{82,14},
              {62,14},{62,13.2}}, color={0,127,255}));
      connect(HEX.port_a2, port_a2) annotation (Line(points={{62,-7.2},{72,-7.2},{72,
              -60},{100,-60}}, color={0,127,255}));
      connect(HEX.port_b2, port_b2) annotation (Line(points={{34,-7.2},{26,-7.2},{26,
              -8},{16,-8},{16,-60},{-100,-60}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(
              extent={{-100,100},{100,-100}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Rectangle(
              extent={{-60,66},{56,30}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Line(points={{-60,30},{56,66}}, color={28,108,200}),
            Ellipse(
              extent={{-58,-22},{-18,-62}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{18,-16},{50,-16},{34,-42},{18,-16}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{18,-68},{50,-68},{34,-42},{18,-68}},
              lineColor={28,108,200},
              fillColor={255,255,255},
              fillPattern=FillPattern.Solid),
            Polygon(
              points={{-46,-34},{-30,-34},{-38,-22},{-46,-34}},
              lineColor={28,108,200},
              fillColor={28,108,200},
              fillPattern=FillPattern.Solid),
            Line(points={{-38,-22},{-38,-10}},
                                             color={28,108,200}),
            Line(points={{-38,-62},{-38,-74}}, color={28,108,200}),
            Line(points={{34,-16},{34,-4}},
                                          color={28,108,200}),
            Line(points={{34,-68},{34,-82}}, color={28,108,200}),
            Line(points={{-44,66},{-44,80}}, color={28,108,200}),
            Line(points={{30,66},{30,80}}, color={28,108,200}),
            Line(points={{-44,30},{-44,18}}, color={28,108,200}),
            Line(points={{30,30},{30,18}}, color={28,108,200}),
            Line(points={{14,-42},{34,-42},{28,-38}}, color={28,108,200}),
            Line(points={{14,-42},{34,-42},{28,-46}}, color={28,108,200})}),
                                                                     Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end PartialCore;

    model PrimaryFlowControl

      extends ProsNet.Controls.BaseClasses.PartialModeDefiner;

      Modelica.Blocks.Logical.Switch switch1
        annotation (Placement(transformation(extent={{38,40},{58,60}})));
      Modelica.Blocks.Logical.Switch switch2
        annotation (Placement(transformation(extent={{40,-40},{60,-20}})));
      Modelica.Blocks.Sources.Constant zero(k=0)
        annotation (Placement(transformation(extent={{-32,-80},{-12,-60}})));
      Modelica.Blocks.Interfaces.RealOutput valve_op
        annotation (Placement(transformation(extent={{100,40},{120,62}})));
      Modelica.Blocks.Interfaces.RealOutput pump_y
        annotation (Placement(transformation(extent={{100,-62},{120,-40}})));
      Modelica.Blocks.Interfaces.RealInput pump_y_set annotation (Placement(
            transformation(
            extent={{-20,-20},{20,20}},
            rotation=-90,
            origin={40,120})));
      Modelica.Blocks.Interfaces.RealInput valve_op_set annotation (Placement(
            transformation(
            extent={{-20,-20},{20,20}},
            rotation=-90,
            origin={-40,120})));
    equation
      connect(zero.y, switch2.u3) annotation (Line(points={{-11,-70},{18,-70},{18,-38},
              {38,-38}}, color={0,0,127}));
      connect(switch1.u3, switch2.u3) annotation (Line(points={{36,42},{18,42},{18,-38},
              {38,-38}}, color={0,0,127}));
      connect(switch1.y, valve_op) annotation (Line(points={{59,50},{76,50},{76,51},
              {110,51}}, color={0,0,127}));
      connect(switch2.y, pump_y) annotation (Line(points={{61,-30},{72,-30},{72,-51},
              {110,-51}}, color={0,0,127}));
      connect(valve_op_set, switch1.u1)
        annotation (Line(points={{-40,120},{-40,58},{36,58}}, color={0,0,127}));
      connect(pump_y_set, switch2.u1) annotation (Line(points={{40,120},{40,78},{6,78},
              {6,-22},{38,-22}}, color={0,0,127}));
      connect(modeDefiner.consumption_mode, switch1.u2) annotation (Line(points={{
              -37,-23},{-14,-23},{-14,50},{36,50}}, color={255,0,255}));
      connect(modeDefiner.production_mode, switch2.u2) annotation (Line(points={{-37,
              -37.2},{4,-37.2},{4,-30},{38,-30}}, color={255,0,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
              Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200},
              fillColor={255,255,85},
              fillPattern=FillPattern.Solid),
              Text(
              extent={{-98,26},{98,-16}},
              lineColor={28,108,200},
              textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=false)));
    end PrimaryFlowControl;

    partial model PrimarySideParameters

      // General
    /*  replaceable package Medium1=ProsNet.Media.Water "Medium on the primary side"
      annotation(Dialog(group="Medium"));

  replaceable package Medium2=ProsNet.Media.Water "Medium on the secondary side"
      annotation(Dialog(group="Medium"));*/




    // Heat exchanger - flow parameters
    /* parameter Modelica.SIunits.MassFlowRate m1_flow_nominal=21.504/60 "Primary side nominal mass flow rate"
annotation(Dialog(group="Heat exchanger")); */

    /*parameter Modelica.SIunits.MassFlowRate m2_flow_nominal=21.504/60 "Secondary side nominal mass flow rate"
 annotation(Dialog(group="Heat exchanger"));*/

    /*parameter Real r_nominal=1 "Ratio between hA-values at primary and secondary side"
 annotation(Dialog(group="Heat exchanger"));*/

    // Heat exchanger - thermal parameters
    parameter Modelica.SIunits.HeatFlowRate Q_flow_nominal=30000 "Nominal heat transfer"
     annotation(Dialog(group="Heat exchanger"));
    parameter Modelica.SIunits.Temperature T_a1_nominal=343.15 "Nominal temperature at port a1"
     annotation(Dialog(group="Heat exchanger"));
    parameter Modelica.SIunits.Temperature T_a2_nominal=318.15 "Nominal temperature at port a2"
     annotation(Dialog(group="Heat exchanger"));
     parameter Modelica.SIunits.MassFlowRate m1_flow_nominal=0.358 "Primary side nominal mass flow rate"
      annotation(Dialog(group="Heat exchanger"));
      parameter Modelica.SIunits.PressureDifference dp1_nominal=155e2 "Primary side pressure difference"
     annotation(Dialog(group="Heat exchanger"));
      parameter Modelica.SIunits.MassFlowRate m2_flow_nominal=0.358 "Secondary side nominal mass flow rate"
      annotation(Dialog(group="Heat exchanger"));
      parameter Modelica.SIunits.PressureDifference dp2_nominal=155e2 "Secondary side pressure difference"
     annotation(Dialog(group="Heat exchanger"));


      parameter Real r_nominal(min = 0) = (m1_flow_nominal/m2_flow_nominal)^n
       "Ratio between primary-side and secondary-side convective heat transfer coefficient" annotation (
        Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));

      parameter Real n = 0.6 "Exponent coefficient" annotation (
        Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));



    // Pump
    replaceable parameter ProsNet.Fluid.Pumps.Data.Generic per
     constrainedby ProsNet.Fluid.Pumps.Data.Generic "Record with performance data"
        annotation (Dialog(group="Main pump"),choicesAllMatching=true);


    // Main valve
    /*parameter Modelica.SIunits.MassFlowRate m_flow_nominal_mainVal=m_flow_nominal "Nominal mass flow rate"
  annotation(Dialog(group="Main valve"));*/
    parameter Real Kv_mainVal=2.5 "Kv (metric) flow coefficient [m3h/bar^(1/2)]"
      annotation(Dialog(group="Main valve"));
    parameter Real l_mainVal=2e-3 "Valve leakage, l=Kv(y=0)/Kv(y=1)"
     annotation(Dialog(group="Main valve"));

    // Check valve
    /*parameter Modelica.SIunits.MassFlowRate m_flow_nominal_cheVal=m_flow_nominal "Nominal mass flow rate"*/
    parameter Real Kv_cheVal=6 "Kv (metric) flow coefficient [m3h/bar^(1/2)]"
      annotation(Dialog(group="Check valve"));
    parameter Real l_cheVal=0.001 "Valve leakage, l=Kv(y=0)/Kv(y=1)"
     annotation(Dialog(group="Check valve"));

     // Dynamics
    // Main pump
    parameter Modelica.Fluid.Types.Dynamics energyDynamics_mainPump = Modelica.Fluid.Types.Dynamics.SteadyState
        "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Main pump"));

        parameter Modelica.SIunits.Time tau_mainPump = 1 "Time constant of fluid volume for nominal flow"
          annotation(Dialog(tab="Dynamics", group="Main pump"));

    parameter Boolean use_inputFilter_mainPump = false "Filtering speed"
     annotation(Dialog(tab="Dynamics", group="Main pump"));

    parameter Modelica.SIunits.Time riseTime_mainPump(min=0) = 5 "Rise time"   annotation(Dialog(tab="Dynamics", group="Main pump"));

    parameter Modelica.Blocks.Types.Init init_mainPump=Modelica.Blocks.Types.Init.InitialOutput "Type of initialization"
      annotation(Dialog(tab="Dynamics", group="Main pump"));

    parameter Modelica.SIunits.MassFlowRate y_start_mainPump=0 "Initial value of mass flow rate"
     annotation(Dialog(tab="Dynamics", group="Main pump"));


    // Main valve
    parameter Boolean use_inputFilter_mainVal = false "Filtering speed"
     annotation(Dialog(tab="Dynamics", group="Main valve"));

    parameter Modelica.SIunits.Time riseTime_mainVal(min=0) = 5 "Rise time"
     annotation(Dialog(tab="Dynamics", group="Main valve"));

    parameter Modelica.Blocks.Types.Init init_mainVal=Modelica.Blocks.Types.Init.InitialOutput "Type of initialization"
      annotation(Dialog(tab="Dynamics", group="Main valve"));

    parameter Modelica.SIunits.MassFlowRate m_flow_start_mainVal=0 "Initial value of mass flow rate"
     annotation(Dialog(tab="Dynamics", group="Main valve"));

    parameter Real y_start_mainVal=1 "Initial value of output"
        annotation(Dialog(tab="Dynamics", group="Main valve"));

      annotation(Dialog(group="Check valve"),
                  Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end PrimarySideParameters;
  end BaseClasses;
end PrimarySides;
