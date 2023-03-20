within ProsNet.Under_Development.new_prosumer_models;
model controlled_prosumer
  //extends heat_transfer_station;
  //extends ProsNet.Under_Development.Controller_PID_based.PID_Q_T_weighted;
  Controller_PID_based.PID_Q_T_weighted pID_Q_T_weighted
    annotation (Placement(transformation(extent={{-82,-22},{-16,36}})));
  heat_transfer_station heat_transfer_station1
    annotation (Placement(transformation(extent={{20,-30},{96,44}})));
  Modelica.Fluid.Interfaces.FluidPort_a hot_prim(redeclare final package Medium =
        Medium_prim)
    annotation (Placement(transformation(extent={{-70,-110},{-50,-90}})));
  Modelica.Fluid.Interfaces.FluidPort_b cold_prim(redeclare final package
      Medium = Medium_prim)
    annotation (Placement(transformation(extent={{50,-110},{70,-90}})));
  Modelica.Blocks.Interfaces.RealInput Qdot_set(unit="kW", displayUnit="kW")
    "setpoint heat transfer (positive production, negative consumption)"
    annotation (Placement(transformation(extent={{-14,-14},{14,14}},
        rotation=-90,
        origin={-60,100}), iconTransformation(
        extent={{-14,-14},{14,14}},
        rotation=-90,
        origin={-60,100})));
  Modelica.Blocks.Interfaces.RealInput T_sec_sim(unit="K", displayUnit="degC")
"Temperature on the secondary side" annotation (Placement(
        transformation(
        extent={{-14,-14},{14,14}},
        rotation=-90,
        origin={60,100}), iconTransformation(
        extent={{-14,-14},{14,14}},
        rotation=-90,
        origin={60,100})));
equation
  connect(pID_Q_T_weighted.T_sec_set, heat_transfer_station1.T_sec_in_set)
    annotation (Line(points={{-16,36},{4,36},{4,35.7778},{20,35.7778}}, color={
          0,0,127}));
  connect(pID_Q_T_weighted.V_dot_sec_set, heat_transfer_station1.V_dot_sec_set)
    annotation (Line(points={{-16,24.4},{14,24.4},{14,27.5556},{20,27.5556}},
        color={0,0,127}));
  connect(heat_transfer_station1.pi, pID_Q_T_weighted.pi_set) annotation (Line(
        points={{20,15.2222},{-2,15.2222},{-2,12.8},{-16,12.8}}, color={255,127,
          0}));
  connect(heat_transfer_station1.mu, pID_Q_T_weighted.mu_set) annotation (Line(
        points={{20,7},{4,7},{4,1.2},{-16,1.2}}, color={255,127,0}));
  connect(heat_transfer_station1.u_set, pID_Q_T_weighted.u_set) annotation (
      Line(points={{20,-1.22222},{6,-1.22222},{6,-10.4},{-16,-10.4}}, color={0,
          0,127}));
  connect(pID_Q_T_weighted.kappa_set, heat_transfer_station1.kappa_set)
    annotation (Line(points={{-16,-22},{14,-22},{14,-9.44444},{20,-9.44444}},
        color={0,0,127}));
  connect(heat_transfer_station1.hot_prim, hot_prim) annotation (Line(points={{55.4667,
          -30.4111},{-60,-30.4111},{-60,-100}},         color={0,127,255}));
  connect(heat_transfer_station1.cold_prim, cold_prim) annotation (Line(points={{80.8,
          -30.4111},{80.8,-84},{60,-84},{60,-100}},        color={0,127,255}));
  connect(heat_transfer_station1.T_sec_cold, pID_Q_T_weighted.T_sec_cold)
    annotation (Line(points={{90.9333,44},{90.9333,50},{-38,50},{-38,40},{-39.1,
          40},{-39.1,36}}, color={0,0,127}));
  connect(heat_transfer_station1.T_sec_hot, pID_Q_T_weighted.T_sec_hot)
    annotation (Line(points={{50.4,44},{50.4,52},{-58.9,52},{-58.9,36}}, color=
          {0,0,127}));
  connect(T_sec_sim, pID_Q_T_weighted.T_sec_in_is) annotation (Line(points={{60,100},{
          60,54},{-32.5,54},{-32.5,36}}, color={0,0,127}));
  connect(heat_transfer_station1.V_dot_sec, pID_Q_T_weighted.V_dot_sec)
    annotation (Line(points={{70.6667,44},{70.6667,60},{-92,60},{-92,24.4},{-82,
          24.4}}, color={0,0,127}));
  connect(Qdot_set, pID_Q_T_weighted.Qdot_set) annotation (Line(points={{-60,
          100},{-60,62},{-94,62},{-94,12.8},{-82,12.8}}, color={0,0,127}));
  connect(heat_transfer_station1.T_prim_hot, pID_Q_T_weighted.T_prim_hot)
    annotation (Line(points={{50.4,-30},{50.4,-36},{-58.9,-36},{-58.9,-22}},
        color={0,0,127}));
  connect(heat_transfer_station1.T_prim_cold, pID_Q_T_weighted.T_prim_cold)
    annotation (Line(points={{90.9333,-30},{90.9333,-36},{50,-36},{50,-34},{-38,
          -34},{-38,-26},{-39.1,-26},{-39.1,-22}}, color={0,0,127}));
  connect(heat_transfer_station1.Q_dot_trnsf_is, pID_Q_T_weighted.Qdot_is)
    annotation (Line(points={{20,-21.7778},{2,-21.7778},{2,-28},{-62,-28},{-62,
          -30},{-94,-30},{-94,1.2},{-82,1.2}}, color={0,0,127}));
  connect(heat_transfer_station1.V_dot_prim, pID_Q_T_weighted.V_dot_prim)
    annotation (Line(points={{70.6667,-30},{70.6667,-38},{-68,-38},{-68,-28},{
          -90,-28},{-90,-20},{-92,-20},{-92,-10.4},{-82,-10.4}}, color={0,0,127}));
  annotation (Icon(graphics={
        Rectangle(
          extent={{-100,100},{100,-100}},
          lineColor={28,108,200},
          pattern=LinePattern.Dash,
          lineThickness=1),
        Bitmap(extent={{62,70},{96,94}}, fileName=
              "modelica://ProsNet/../../../../Downloads/setpoint.svg"),
        Bitmap(extent={{-168,-78},{170,66}}, fileName=
              "modelica://ProsNet/../../../../Downloads/noun-smart-home-control-2266360.png")}));
end controlled_prosumer;
