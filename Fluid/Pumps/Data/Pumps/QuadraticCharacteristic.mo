within ProsNet.Fluid.Pumps.Data.Pumps;
record QuadraticCharacteristic "Quadratic H(0)=402.21 hPa, Q(0)=55.33 l/min"
    extends ProsNet.Fluid.Pumps.Data.Generic(
    pressure(V_flow = {0, 14.667041, 24.462313, 30.074213, 34.336006, 38.062824, 41.525562, 44.863575, 48.173885,
     51.54548, 55.085773} * 0.001 / 60, dp = {402.21, 373.9471, 323.5912, 283.38165, 247.31725, 211.86847,
      175.66077, 137.77481, 97.3118, 53.139862, 3.5428736} * 100));

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end QuadraticCharacteristic;
