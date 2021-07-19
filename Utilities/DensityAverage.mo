within ProsNet.Utilities;
model DensityAverage
  "Average density for non-isothermal flow inside a control volume"

  Medium1.Density rho_a_inflow "Density of inflowing fluid at port_a";
  Medium1.Density rho_b_outflow "Density of outflowing fluid at port_b";
  Medium1.Density average_rho_a_b "Average density of the flow from port_a to port_b";

  Medium1.Density rho_b_inflow "Density of inflowing fluid at port_b";
  Medium1.Density rho_a_outflow "Density of outflowing fluid at port_a";
  Medium1.Density average_rho_b_a "Average density of the flow from port_b to port_a";

  Medium1.Density density_average "Average density inside the control volume";

equation

  rho_a_inflow = Medium1.density(Medium.setState_phX(port_a.p,
 inStream(port_a.h_outflow),
 inStream(port_a.Xi_outflow)));
  rho_b_outflow = Medium1.density(Medium.setState_phX(port_b.p,
 port_b.h_outflow,
 port_b.Xi_outflow));
  average_rho_a_b = (rho_a_inflow + rho_b_outflow)/2;

  rho_b_inflow = Medium1.density(Medium.setState_phX(port_b.p,
 inStream(port_b.h_outflow),
 inStream(port_b.Xi_outflow)));
  rho_a_outflow = Medium1.density(Medium.setState_phX(port_a.p,
 port_a.h_outflow,
 port_a.Xi_outflow));
  average_rho_b_a = (rho_b_inflow + rho_a_outflow)/2;

  density_average = Modelica.Fluid.Utilities.regStep(port_a.m_flow, average_rho_a_b, average_rho_b_a, m_flow_small);

  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end DensityAverage;
