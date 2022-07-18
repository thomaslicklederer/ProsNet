within ProsNet.Controls.Data.Linearizer;
record Generic "Generic data record for linearizer"

  parameter Real[:,:] inv "Flow coeffient vs. opening (both normalized)";

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)),
    Documentation(info="<html>
<p>Generic data record of inherent valve characteristic inverse.</p>
</html>"));
end Generic;
