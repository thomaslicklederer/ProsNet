within ProsNet.Controls;
package Validation
extends Modelica.Icons.ExamplesPackage;

  model ValveLinearization
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
    Linearizer linearizer(redeclare Data.Linearizer.EqualPercentage cha)
      annotation (Placement(transformation(extent={{-38,-8},{-18,12}})));
  equation
    connect(bou1.ports[1], val.port_a)
      annotation (Line(points={{20,34},{20,10}}, color={0,127,255}));
    connect(val.port_b, bou2.ports[1])
      annotation (Line(points={{20,-10},{20,-36}}, color={0,127,255}));
    connect(ramp.y, linearizer.kappa) annotation (Line(points={{-65,0},{-52,0},
            {-52,2},{-40,2}}, color={0,0,127}));
    connect(linearizer.op, val.y)
      annotation (Line(points={{-17,2},{-4,2},{-4,0},{8,0}}, color={0,0,127}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end ValveLinearization;
end Validation;
