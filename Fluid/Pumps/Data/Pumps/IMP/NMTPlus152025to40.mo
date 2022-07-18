within ProsNet.Fluid.Pumps.Data.Pumps.IMP;
record NMTPlus152025to40 "NMT PLUS 15, 20, 25/40"

  extends ProsNet.Fluid.Pumps.Data.Generic(
      pressure(V_flow = {0, 3.45} / 3600, dp = {40530, 0}),
      speed_rpm_nominal=3500);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end NMTPlus152025to40;
