within ProsNet.Prosumers;
package SecondarySides
    extends Modelica.Icons.VariantsPackage;
  model SimpleSecondarySide

      parameter Modelica.SIunits.MassFlowRate m_flow_nominal_hea_coo  "Nominal flow rate"
      annotation(Dialog(group="Secondary side heater/cooler nominal condition"));
  /*  parameter Modelica.SIunits.PressureDifference dp_nominal_hea_coo=0.4e5 "Pressure difference"
annotation(Dialog(group="Secondary side heater/cooler nominal condition"));
    */

    parameter Modelica.SIunits.MassFlowRate m_flow_nominal_pump "Nominal flow rate"
      annotation(Dialog(group="Secondary side pump nominal condition"));

    parameter Modelica.SIunits.MassFlowRate m_flow_nominal_temSen_sec;

    parameter Modelica.SIunits.Time tau_temSen_sec;
   parameter Modelica.Blocks.Types.Init init_temSen_sec;


    extends ProsNet.Prosumers.SecondarySides.BaseClasses.SecondarySideParameters;



    extends ProsNet.Prosumers.SecondarySides.BaseClasses.PartialSecondarySide(
        pump_prod(
        energyDynamics=energyDynamics_pump,
        tau=tau_pump,
                  m_flow_nominal=m_flow_nominal_pump,
        use_inputFilter=use_inputFilter,
        riseTime=riseTime,                            dp_nominal=dp_nominal_pump,
        m_flow_start=m_flow_start),
        pump_cons(
        energyDynamics=energyDynamics_pump,
        tau=tau_pump,
                  m_flow_nominal=m_flow_nominal_pump,
        use_inputFilter=use_inputFilter,
        riseTime=riseTime,                            dp_nominal=dp_nominal_pump,
        m_flow_start=m_flow_start),
      temSecHot(
        m_flow_nominal=m_flow_nominal_temSen_sec,
        tau=tau_temSen_sec,
        initType=init_temSen_sec),
      temSecCold(
        m_flow_nominal=m_flow_nominal_temSen_sec,
        tau=tau_temSen_sec,
        initType=init_temSen_sec));

    Modelica.Blocks.Interfaces.RealInput T_set annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={-60,120})));
    Modelica.Blocks.Interfaces.RealInput m_flow_set annotation (Placement(
          transformation(
          extent={{-20,-20},{20,20}},
          rotation=-90,
          origin={60,120})));
    Controls.SecondaryFlowControl secondaryFlowControl
      annotation (Placement(transformation(extent={{-64,-62},{-44,-42}})));
    Fluid.HeatExchangers.Heater_Cooler_T hea_coo(
      m_flow_nominal=m_flow_nominal_hea_coo,
      dp_nominal=dp_nominal_hea_coo,
      energyDynamics=energyDynamics_hea_coo,
      tau=tau)
      annotation (Placement(transformation(extent={{-8,48},{12,68}})));

  equation
    connect(secondaryFlowControl.m_flow_consumption, pump_cons.m_flow_in)
      annotation (Line(points={{-43,-57.1},{-20,-57.1},{-20,-42},{-10,-42}},
          color={0,0,127}));
    connect(m_flow_set, secondaryFlowControl.m_flow_set) annotation (Line(points={{60,120},
            {60,86},{86,86},{86,18},{50,18},{50,6},{-54,6},{-54,-40}},
          color={0,0,127}));
    connect(hea_coo.port_b, pump_prod.port_a) annotation (Line(points={{12,58},{26,
            58},{26,-22},{52,-22},{52,-32}}, color={0,127,255}));
    connect(T_set, hea_coo.TSet)
      annotation (Line(points={{-60,120},{-60,66},{-10,66}}, color={0,0,127}));
    connect(secondaryFlowControl.m_flow_production, pump_prod.m_flow_in)
      annotation (Line(points={{-43,-46.9},{-32,-46.9},{-32,-10},{76,-10},{76,-42},
            {64,-42}}, color={0,0,127}));
    connect(mu, secondaryFlowControl.mu) annotation (Line(points={{-120,78},{
            -82,78},{-82,-46},{-66,-46}},
                                  color={255,127,0}));
    connect(pi, secondaryFlowControl.pi) annotation (Line(points={{-120,40},{
            -92,40},{-92,-58},{-66,-58}},
                                  color={255,127,0}));
    connect(temSecHot.port_b, hea_coo.port_a) annotation (Line(points={{-66,0},{-58,
            0},{-58,38},{-40,38},{-40,58},{-8,58}}, color={0,127,255}));
    annotation (Icon(graphics={
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
          Line(points={{-38,-20},{-38,-32}}, color={28,108,200}),
          Polygon(
            points={{10,-26},{72,-26},{60,28},{56,2},{46,12},{42,20},{36,4},{32,22},
                {28,-2},{18,28},{10,-26}},
            lineColor={238,46,47},
            fillColor={238,46,47},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{52,-42},{52,-88},{72,-62},{52,-42}},
            lineColor={28,108,200},
            fillColor={238,46,47},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{-72,-78},{52,-78},{52,-52},{-72,-78}},
            lineColor={28,108,200},
            fillColor={238,46,47},
            fillPattern=FillPattern.Solid),
          Polygon(
            points={{50,-52},{-72,-52},{-72,-78},{50,-52}},
            lineColor={28,108,200},
            fillColor={28,108,200},
            fillPattern=FillPattern.Solid)}));
  end SimpleSecondarySide;

  package Validation
      extends Modelica.Icons.ExamplesPackage;

    model SimpleSecondarySideValidation
        extends Modelica.Icons.Example;
      SimpleSecondarySide simpleSecondarySide(
        m_flow_nominal_hea_coo=1,
        m_flow_nominal_pump=1,
        m_flow_nominal_temSen_sec=0.1,
        tau_temSen_sec=1,
        init_temSen_sec=Modelica.Blocks.Types.Init.SteadyState,
                                              use_inputFilter=false)
        annotation (Placement(transformation(extent={{-8,-10},{12,10}})));
      Modelica.Blocks.Sources.IntegerConstant pi(k=1)
        annotation (Placement(transformation(extent={{-80,20},{-60,40}})));
      Modelica.Blocks.Sources.IntegerConstant mu(k=-1)
        annotation (Placement(transformation(extent={{-80,60},{-60,80}})));
      Modelica.Blocks.Sources.Constant T(k=273.15 + 50)
        annotation (Placement(transformation(extent={{80,60},{60,80}})));
      Modelica.Blocks.Sources.Constant m_flow(k=1)
        annotation (Placement(transformation(extent={{80,20},{60,40}})));
      Fluid.Sensors.TemperatureTwoPort senTem1(m_flow_nominal=1, initType=
            Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{-74,-34},{-54,-14}})));
      Fluid.Sensors.MassFlowRate senMasFlo1
        annotation (Placement(transformation(extent={{-42,-34},{-22,-14}})));
      Fluid.Sensors.TemperatureTwoPort senTem2(m_flow_nominal=1, initType=
            Modelica.Blocks.Types.Init.SteadyState)
        annotation (Placement(transformation(extent={{28,-34},{48,-14}})));
      Fluid.Sources.Boundary_pT bou1(nPorts=1) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={-80,-54})));
      Fluid.Sources.Boundary_pT bou2(nPorts=1) annotation (Placement(
            transformation(
            extent={{-10,-10},{10,10}},
            rotation=90,
            origin={72,-46})));
    equation
      connect(T.y, simpleSecondarySide.T_set)
        annotation (Line(points={{59,70},{-4,70},{-4,12}}, color={0,0,127}));
      connect(m_flow.y, simpleSecondarySide.m_flow_set)
        annotation (Line(points={{59,30},{8,30},{8,12}}, color={0,0,127}));
      connect(mu.y, simpleSecondarySide.mu) annotation (Line(points={{-59,70},{
              -18,70},{-18,7.8},{-10,7.8}},
                                    color={255,127,0}));
      connect(pi.y, simpleSecondarySide.pi) annotation (Line(points={{-59,30},{
              -40,30},{-40,4},{-10,4}},
                                color={255,127,0}));
      connect(senMasFlo1.port_a, senTem1.port_b)
        annotation (Line(points={{-42,-24},{-54,-24}}, color={0,127,255}));
      connect(senMasFlo1.port_b, simpleSecondarySide.port_a) annotation (Line(
            points={{-22,-24},{-16,-24},{-16,0},{-8,0}}, color={0,127,255}));
      connect(simpleSecondarySide.port_b, senTem2.port_a) annotation (Line(
            points={{12,0},{22,0},{22,-24},{28,-24}}, color={0,127,255}));
      connect(senTem1.port_a, bou1.ports[1]) annotation (Line(points={{-74,-24},
              {-78,-24},{-78,-44},{-80,-44}}, color={0,127,255}));
      connect(bou2.ports[1], senTem2.port_b) annotation (Line(points={{72,-36},
              {72,-24},{48,-24}}, color={0,127,255}));
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end SimpleSecondarySideValidation;
  end Validation;

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
  end BaseClasses;
end SecondarySides;
