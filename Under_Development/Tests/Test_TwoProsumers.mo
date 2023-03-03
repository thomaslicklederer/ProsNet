within ProsNet.Under_Development.Tests;
model Test_TwoProsumers
  new_prosumer_models.heat_transfer_station B1(n=0.5, redeclare
      Fluid.Pumps.Data.Pumps.IMP.NMTSmart25_120to180 feedinPer)
                                                      annotation (Placement(
        transformation(
        extent={{20,-18},{-20,18}},
        rotation=0,
        origin={-48,8})));
  Controller_PID_based.PID_Q_T_weighted Ctrl1(alpha_prim_prod=0.35, alpha_sec_cons=0.35)
                                              annotation (Placement(transformation(
        extent={{-12,-17},{12,17}},
        rotation=0,
        origin={-44,73})));
  Controller_PID_based.auxiliary.TimeTable_noInterp power_set1(table=[0,10; 900,10;
        1800,10; 2700,10; 3600,-10; 4500,-4; 5400,4; 6300,4])  annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-70,134})));
  Controller_PID_based.auxiliary.TimeTable_noInterp temp_sec_in1(table=[0,55; 900,55;
        1800,55; 2700,55; 3600,30; 4500,30; 5400,55; 6300,55])   annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={-28,134})));
  Fluid.Pipes.InsulatedPipe_plug pipe_hot12
    annotation (Placement(transformation(extent={{-8,-58},{18,-32}})));
  new_prosumer_models.heat_transfer_station B2(n=0.5, redeclare
      Fluid.Pumps.Data.Pumps.IMP.NMTSmart25_120to180 feedinPer)
                                                      annotation (Placement(
        transformation(
        extent={{20,-18},{-20,18}},
        rotation=0,
        origin={50,8})));
  Controller_PID_based.PID_Q_T_weighted Ctrl2(alpha_prim_prod=0.35, alpha_sec_cons=0.35)
                                              annotation (Placement(transformation(
        extent={{-12,-17},{12,17}},
        rotation=0,
        origin={52,73})));
  Controller_PID_based.auxiliary.TimeTable_noInterp power_set2(table=[0,-10; 900,-10;
        1800,-10; 2700,-10; 3600,10; 4500,4; 5400,-4; 6300,-4])
                                                               annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={28,134})));
  Controller_PID_based.auxiliary.TimeTable_noInterp temp_sec_in2(table=[0,30; 900,30;
        1800,30; 2700,30; 3600,55; 4500,55; 5400,30; 6300,30])   annotation (
      Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={70,134})));
  Fluid.Pipes.InsulatedPipe_plug pipe_cold12
    annotation (Placement(transformation(extent={{18,-103},{-8,-77}})));
  Modelica.Fluid.Sources.Boundary_pT boundary(
    redeclare package Medium = Media.Water,
    use_p_in=false,
    T=325.4,
    nPorts=1) annotation (Placement(transformation(extent={{-92,-55},{-72,-35}})));
  inner Modelica.Fluid.System system(T_ambient=285.15)
    annotation (Placement(transformation(extent={{-92,-114},{-72,-94}})));
  Modelica.Blocks.Math.Add add annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=-90,
        origin={-31,103})));
  Modelica.Blocks.Sources.RealExpression realExpression(y=273.15) annotation (Placement(
        transformation(
        extent={{-5,-6},{5,6}},
        rotation=270,
        origin={-8,117})));
  Modelica.Blocks.Sources.RealExpression realExpression1(y=273.15) annotation (
      Placement(transformation(
        extent={{-5,-6},{5,6}},
        rotation=270,
        origin={82,115})));
  Modelica.Blocks.Math.Add add1 annotation (Placement(transformation(
        extent={{-5,-5},{5,5}},
        rotation=-90,
        origin={59,101})));
equation
  connect(B1.contr_vars_real, Ctrl1.contr_vars_real)
    annotation (Line(points={{-27.8,8},{-20,8},{-20,72},{-32,72}}, color={0,0,127}));
  connect(Ctrl1.states, B1.states)
    annotation (Line(points={{-56,72},{-74,72},{-74,8},{-68,8}}, color={0,0,127}));
  connect(power_set1.y, Ctrl1.Q_dot_set) annotation (Line(points={{-70,123},{-70,118},{
          -50,118},{-50,90.8}},  color={0,0,127}));
  connect(B2.contr_vars_real,Ctrl2. contr_vars_real)
    annotation (Line(points={{70.2,8},{78,8},{78,72},{64,72}},     color={0,0,127}));
  connect(Ctrl2.states,B2. states)
    annotation (Line(points={{40,72},{24,72},{24,8},{30,8}},     color={0,0,127}));
  connect(power_set2.y,Ctrl2. Q_dot_set) annotation (Line(points={{28,123},{28,118},{
          46,118},{46,90.8}},    color={0,0,127}));
  connect(B1.hot_prim, pipe_hot12.port_a)
    annotation (Line(points={{-34,-10.2},{-34,-45},{-8,-45}}, color={0,127,255}));
  connect(pipe_hot12.port_b, B2.hot_prim)
    annotation (Line(points={{18,-45},{64,-45},{64,-10.2}}, color={0,127,255}));
  connect(B1.cold_prim, pipe_cold12.port_b)
    annotation (Line(points={{-62,-10},{-62,-90},{-8,-90}}, color={0,127,255}));
  connect(pipe_cold12.port_a, B2.cold_prim)
    annotation (Line(points={{18,-90},{36,-90},{36,-10}}, color={0,127,255}));
  connect(pipe_hot12.port_a, boundary.ports[1])
    annotation (Line(points={{-8,-45},{-72,-45}}, color={0,127,255}));
  connect(add.y, Ctrl1.T_sec_in_is)
    annotation (Line(points={{-31,97.5},{-31,91},{-38,91}}, color={0,0,127}));
  connect(temp_sec_in1.y, add.u2) annotation (Line(points={{-28,123},{-28,114},{-34,114},
          {-34,109}}, color={0,0,127}));
  connect(add.u1, realExpression.y) annotation (Line(points={{-28,109},{-12,109},{-12,
          106},{-8,106},{-8,111.5}}, color={0,0,127}));
  connect(temp_sec_in2.y, add1.u2)
    annotation (Line(points={{70,123},{70,114},{56,114},{56,107}}, color={0,0,127}));
  connect(add1.y, Ctrl2.T_sec_in_is)
    annotation (Line(points={{59,95.5},{58,95.5},{58,91}}, color={0,0,127}));
  connect(realExpression1.y, add1.u1) annotation (Line(points={{82,109.5},{82,104},{68,
          104},{68,107},{62,107}}, color={0,0,127}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false, extent={{-100,-120},{
            200,160}})),                                         Diagram(
        coordinateSystem(preserveAspectRatio=false, extent={{-100,-120},{200,160}}),
                                                     graphics={Rectangle(extent={{-92,
              154},{-2,-20}}, lineColor={28,108,200}),         Rectangle(extent={{6,
              154},{96,-20}}, lineColor={28,108,200})}),
    experiment(
      StopTime=6300,
      Interval=0.1,
      __Dymola_Algorithm="Dassl"));
end Test_TwoProsumers;
