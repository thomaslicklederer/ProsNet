within ProsNet.Controls;
package BaseClasses
  extends Modelica.Icons.BasesPackage;

  package Data
    record GenericLin "Generic data record for the linearizator"

      parameter Real[:,:] lin;

      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));
    end GenericLin;

    record EqualPercentage "Equal percentage"

      extends ProsNet.Controls.BaseClasses.Data.GenericLin(lin={{0,0},{0.029575152,0.1},{0.043734483,0.2},{0.0646727,0.3},{0.09563525,0.4},
                                            {0.14142136,0.5},{0.20912792,0.6},{0.3092495,0.7},{0.45730504,0.8},{0.67624336,0.9},
                                            {1,1}})
      annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
            coordinateSystem(preserveAspectRatio=false)));

    end EqualPercentage;
  end Data;

  partial model PartialModeDefiner
    ModeDefiner          modeDefiner
      annotation (Placement(transformation(extent={{-58,-40},{-38,-20}})));
    Modelica.Blocks.Interfaces.IntegerInput mu
      annotation (Placement(transformation(extent={{-138,40},{-98,80}})));
    Modelica.Blocks.Interfaces.IntegerInput pi
      annotation (Placement(transformation(extent={{-138,-80},{-98,-40}})));
  equation
    connect(mu,modeDefiner. mu) annotation (Line(points={{-118,60},{-72,60},{
            -72,-23},{-60,-23}},
                        color={255,127,0}));
    connect(pi,modeDefiner. pi) annotation (Line(points={{-118,-60},{-72,-60},{
            -72,-37},{-60,-37}},
                             color={255,127,0}));
    annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
            Rectangle(extent={{-100,100},{100,-100}}, lineColor={28,108,200},
            fillColor={255,255,85},
            fillPattern=FillPattern.Solid),
            Text(
            extent={{-98,26},{98,-16}},
            lineColor={28,108,200},
            textString="%name")}), Diagram(coordinateSystem(preserveAspectRatio=
             false)));
  end PartialModeDefiner;
end BaseClasses;
