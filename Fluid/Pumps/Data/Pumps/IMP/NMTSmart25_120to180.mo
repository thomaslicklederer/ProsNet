within ProsNet.Fluid.Pumps.Data.Pumps.IMP;
record NMTSmart25_120to180
    extends ProsNet.Fluid.Pumps.Data.Generic(
    pressure(V_flow = {0,1,2,4,6,8,10,10.77} / 3600,
    dp = {1137.5714, 1176.798, 1078.7315, 804.1453, 578.59235, 353.0394, 176.5197} * 100));

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end NMTSmart25_120to180;
