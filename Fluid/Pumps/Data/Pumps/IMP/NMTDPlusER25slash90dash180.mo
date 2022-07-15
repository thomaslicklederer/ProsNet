within ProsNet.Fluid.Pumps.Data.Pumps.IMP;
record NMTDPlusER25slash90dash180 "NMTD Plus 25/90-180"

  extends ProsNet.Fluid.Pumps.Data.Generic(
      pressure(V_flow = {0, 1.3, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3, 4.5} / 3600, dp = {85200, 84800, 71000, 60000, 50000, 38000, 27000, 21000, 0}),
      speed_rpm_nominal=5100);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end NMTDPlusER25slash90dash180;
