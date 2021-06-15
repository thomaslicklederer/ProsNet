within ProsNet.Controls;
package Validation
extends Modelica.Icons.ExamplesPackage;

  model LinearizerValidation
    extends Modelica.Icons.Example;

      package Medium = ProsNet.Media.Water;

    ProsNet.Fluid.Sources.Boundary_pT bou1(redeclare package Medium = Medium,
      p=200000,
      nPorts=1)   annotation (Placement(visible=true, transformation(
          origin={20,44},
          extent={{10,-10},{-10,10}},
          rotation=90)));
    ProsNet.Fluid.Sources.Boundary_pT bou2(redeclare package Medium = Medium,
      p=100000,
      nPorts=1)   annotation (Placement(visible=true, transformation(
          origin={20,-46},
          extent={{-10,10},{10,-10}},
          rotation=90)));
    Modelica.Blocks.Sources.Ramp ramp(
      height=1,
      duration=1,
      offset=0)
      annotation (Placement(transformation(extent={{-86,-10},{-66,10}})));
    ProsNet.Fluid.Valves.TwoWayEqualPercentage val(redeclare package Medium = Medium,
      m_flow_nominal=0.3586,
      CvData=ProsNet.Fluid.Types.CvTypes.Kv,
        Kv=2.5,
      use_inputFilter=false,
      l=2e-3)   annotation (Placement(transformation(
          extent={{10,-10},{-10,10}},
          rotation=90,
          origin={20,0})));
    Linearizer lin(redeclare Data.Linearizer.EqualPercentage cha)
      annotation (Placement(transformation(extent={{-38,-8},{-18,12}})));
  equation
    connect(bou1.ports[1], val.port_a)
      annotation (Line(points={{20,34},{20,10}}, color={0,127,255}));
    connect(val.port_b, bou2.ports[1])
      annotation (Line(points={{20,-10},{20,-36}}, color={0,127,255}));
    connect(ramp.y, lin.kappa) annotation (Line(points={{-65,0},{-52,0},{-52,2},
            {-40,2}}, color={0,0,127}));
    connect(lin.op, val.y)
      annotation (Line(points={{-17,2},{-4,2},{-4,0},{8,0}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end LinearizerValidation;

  model FlowControl
    extends Modelica.Icons.Example;
    PrimaryFlowControl priFlCon annotation (Placement(transformation(extent={{0,2},{20,22}})));
    SecondaryFlowControl secFlCon
      annotation (Placement(transformation(extent={{42,-80},{62,-60}})));
    Modelica.Blocks.Sources.IntegerTable integerTable(table=[0,1; 1,1; 1,-1; 2,-1; 2,1; 3,1])
      annotation (Placement(transformation(extent={{-80,22},{-60,42}})));
    Modelica.Blocks.Sources.IntegerConstant pi(k=1)
      annotation (Placement(transformation(extent={{-80,-58},{-60,-38}})));
    Modelica.Blocks.Sources.Constant op(k=0.8)
      annotation (Placement(transformation(extent={{60,60},{40,80}})));
    Modelica.Blocks.Sources.Constant y(k=0.5)
      annotation (Placement(transformation(extent={{-30,60},{-10,80}})));
    Modelica.Blocks.Sources.Constant m_flow(k=10)
      annotation (Placement(transformation(extent={{0,-40},{20,-20}})));
  equation
    connect(pi.y, priFlCon.pi)
      annotation (Line(points={{-59,-48},{-22,-48},{-22,6},{-2,6}}, color={255,127,0}));
    connect(secFlCon.pi, priFlCon.pi)
      annotation (Line(points={{40,-76},{-22,-76},{-22,6},{-2,6}}, color={255,127,0}));
    connect(integerTable.y, priFlCon.mu)
      annotation (Line(points={{-59,32},{-30,32},{-30,18},{-2,18}}, color={255,127,0}));
    connect(secFlCon.mu, priFlCon.mu) annotation (Line(points={{40,-64},{-30,-64},{-30,18},{-2,18}},
          color={255,127,0}));
    connect(op.y, priFlCon.valve_op_set)
      annotation (Line(points={{39,70},{14,70},{14,24}}, color={0,0,127}));
    connect(y.y, priFlCon.pump_y_set)
      annotation (Line(points={{-9,70},{6,70},{6,24}}, color={0,0,127}));
    connect(m_flow.y, secFlCon.m_flow_set)
      annotation (Line(points={{21,-30},{52,-30},{52,-58}}, color={0,0,127}));

    annotation (experiment(StopTime=4,Tolerance=1e-006));
  end FlowControl;
end Validation;
