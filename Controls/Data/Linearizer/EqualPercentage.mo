within ProsNet.Controls.Data.Linearizer;
record EqualPercentage "Inverse of the equal percentage characteristic"

  extends ProsNet.Controls.Data.Linearizer.Generic(
                                           inv={{0,0},{0.029575152,0.1},{0.043734483,
        0.2},{0.0646727,0.3},{0.09563525,0.4},{0.14142136,0.5},{0.20912792,0.6},
        {0.3092495,0.7},{0.45730504,0.8},{0.67624336,0.9},{1,1}})
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));

  annotation (Documentation(info="<html>
<p>This is the inverse of the inherent valve characteristic <a href=\"modelica://ProsNet.Fluid.Valves.BaseClasses.equalPercentage\">ProsNet.Fluid.Valves.BaseClasses.equalPercentage</a> for the <a href=\"modelica://ProsNet.Fluid.Valves.TwoWayEqualPercentage\">TwoWayEqualPercentage</a> valve.</p>
</html>"));
end EqualPercentage;
