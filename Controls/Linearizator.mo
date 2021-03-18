within ProsNet.Controls;
block Linearizator
  "Linearizes mass flow rate with respect to opening of the equal-percentage valve"

  replaceable parameter ProsNet.Controls.BaseClasses.Data.GenericLin lin
    constrainedby ProsNet.Controls.BaseClasses.Data.GenericLin
    "Record with performance data"
    annotation (choicesAllMatching=true,
      Placement(transformation(extent={{52,60},{72,80}})));

  extends Modelica.Blocks.Tables.CombiTable1D(table=lin.lin);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false), graphics={
        Rectangle(
          extent={{-92,92},{88,-92}},
          lineColor={255,255,255},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-88,92}}, color={255,255,255}),
          Polygon(
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid,
            points={{-78,88},{-86,66},{-70,66},{-78,88}}),
          Line(
            points={{-78,76},{-78,-92}},
            color={192,192,192}),
          Line(
            points={{-78,-82},{82,78}},
            color={0,0,127}),
          Line(
            points={{-88,-82},{84,-82}},
            color={192,192,192}),
          Polygon(
            lineColor={192,192,192},
            fillColor={192,192,192},
            fillPattern=FillPattern.Solid,
            points={{92,-82},{70,-74},{70,-90},{92,-82}})}),     Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Linearizator;
