within ProsNet.Under_Development.Controller_PID_based.auxiliary;
model test_procedure

  parameter Real dotQ_low( min = 0) = 8
  "heat transfer setpoint for high heat transfer in test procedure";

  parameter Real dotQ_high( min= 0) = 12
  "heat transfer setpoint for low heat transfer in test procedure";

  parameter Real Tsecin_warm(  min= 0) = 45
  "warm inlet temperature for secondary side";

  parameter Real Tsecin_cold(  min= 0) = 30
   "cold inlet temperature for secondary side";

  parameter Real noise_mu( min = 0) = 0
  "mean value of noise for temperature"
  annotation(Dialog(group="Noise"));

  parameter Real noise_sigma( min = 0) = 5
  "standard deviation of noise for temperature"
  annotation(Dialog(group="Noise"));

  parameter Integer test_procedure[:,3] = [
        0,0,0;
        900,1,6;
        1800,1,6;
        2700,1,6;
        3600,0,0;
        4500,0,0;
        5400,0,0;
        6300,1,6;
        7200,1,9;
        8100,1,6;
        9000,0,0;
        9900,-1,6;
        10800,-1,9;
        11700,-1,6;
        12600,0,0;
        13500,1,9;
        14400,0,0;
        15300,0,0;
        16200,-1,9;
        17100,0,0;
        18000,0,0]
  "time [s], prosumer mode (producer[1], consumer[-1], idle[0]), heat transfer (high[9], low[6])";

  Modelica.Blocks.Sources.CombiTimeTable combiTimeTable(
    tableOnFile=false,
    table=test_procedure,
    smoothness=Modelica.Blocks.Types.Smoothness.ConstantSegments,
    extrapolation=Modelica.Blocks.Types.Extrapolation.Periodic)
    "time [s], prosumer mode (producer[1], consumer[-1], idle[0]), heat transfer (high[9], low[6])"
    annotation (Placement(transformation(extent={{-16,2},{4,22}})));


  Modelica.Blocks.Noise.NormalNoise normalNoise(
    samplePeriod=30,
    mu=noise_mu,
    sigma=noise_sigma)
    annotation (Placement(transformation(extent={{-62,-46},{-42,-26}})));

  Modelica.Blocks.Interfaces.RealOutput dotQ
    annotation (Placement(transformation(extent={{90,30},{110,50}})));
  Modelica.Blocks.Interfaces.RealOutput T
    annotation (Placement(transformation(extent={{90,-30},{110,-10}})));
  inner Modelica.Blocks.Noise.GlobalSeed globalSeed(enableNoise=false,
      fixedSeed=4345)
    annotation (Placement(transformation(extent={{-80,64},{-60,84}})));
equation

  if combiTimeTable.y[1] == 1 then
    T = Tsecin_warm + 273.15 + normalNoise.y;
      if combiTimeTable.y[2] == 6 then
        dotQ = dotQ_low;
      elseif combiTimeTable.y[2] == 9 then
        dotQ = dotQ_high;
      else
        dotQ = 0;
      end if;
  elseif combiTimeTable.y[1] == -1 then
    T = Tsecin_cold + 273.15 + normalNoise.y;
      if combiTimeTable.y[2] == 6 then
        dotQ = -dotQ_low;
      elseif combiTimeTable.y[2] == 9 then
        dotQ = -dotQ_high;
      else
        dotQ = 0;
      end if;
  else
    T = Tsecin_cold + 273.15;
    dotQ = 0;
  end if;

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end test_procedure;
