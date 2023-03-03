#include <moutil.c>
PreNonAliasDef(6)
PreNonAliasDef(7)
PreNonAliasDef(8)
PreNonAliasDef(9)
PreNonAliasDef(10)
StartNonAlias(5)
DeclareState("pipe_cold23.plugFlowPipe.cor.del.x", "Spatial coordinate for spatialDistribution operator [m]",\
 40, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("pipe_cold23.plugFlowPipe.cor.del.der(x)", "der(Spatial coordinate for spatialDistribution operator) [m/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.del.v", "Flow velocity of medium in pipe [m/s]",\
 "pipe_cold23.plugFlowPipe.cor.del.der(x)", 1, 6, 40, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.del.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.del.h_ini_in", "For initialization of spatialDistribution inlet [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.del.h_ini_out", "For initialization of spatialDistribution outlet [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", 1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.port_a.p", 1, 5, 6228, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.cold_prim.h_outflow", 1, 5, 5180, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", -1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.port_a.p", 1, 5, 6228, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_a.h_outflow", 1, 5, 6219, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.dp_start", \
"Guess value of dp = port_a.p - port_b.p [Pa|Pa]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.m_flow_start", \
"Guess value of m_flow = port_a.m_flow [kg/s]", 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.show_V_flow", \
"= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B3.cold_prim.m_flow", 1, 5, 5178, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.C", "Thermal capacity per unit length of pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.T_start", \
"Initial output temperature [K|degC]", 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.tau_char", \
"Characteristic delay time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.tau", "Time delay at pipe level [s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.heatPort.T", \
"Port temperature [K|degC]", "pipe_cold23.bou.T", 1, 5, 6456, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.heatPort.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.T_a_inflow", \
"Temperature at port_a for inflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.T_b_outflow", \
"Temperature at port_b for outflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_a.TAmb", "Environment temperature [K|degC]",\
 "pipe_cold23.bou.T", 1, 5, 6456, 0)
DeclareParameter("pipe_cold23.plugFlowPipe.cor.heaLos_a.sta_default.p", \
"Absolute pressure of medium [Pa|bar]", 1185, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold23.plugFlowPipe.cor.heaLos_a.sta_default.T", \
"Temperature of medium [K|degC]", 1186, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_a.cp_default", \
"Heat capacity of medium [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", -1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", 1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.plugFlowPipe.cor.port_b.h_outflow", 1, 5, 6249, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.dp_start", \
"Guess value of dp = port_a.p - port_b.p [Pa|Pa]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.m_flow_start", \
"Guess value of m_flow = port_a.m_flow [kg/s]", 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.show_V_flow", \
"= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.C", "Thermal capacity per unit length of pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.T_start", \
"Initial output temperature [K|degC]", 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.tau_char", \
"Characteristic delay time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.tau", "Time delay at pipe level [s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.heatPort.T", \
"Port temperature [K|degC]", "pipe_cold23.bou.T", 1, 5, 6456, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.heatPort.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.T_a_inflow", \
"Temperature at port_a for inflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.T_b_outflow", \
"Temperature at port_b for outflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heaLos_b.TAmb", "Environment temperature [K|degC]",\
 "pipe_cold23.bou.T", 1, 5, 6456, 0)
DeclareParameter("pipe_cold23.plugFlowPipe.cor.heaLos_b.sta_default.p", \
"Absolute pressure of medium [Pa|bar]", 1187, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold23.plugFlowPipe.cor.heaLos_b.sta_default.T", \
"Temperature of medium [K|degC]", 1188, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.heaLos_b.cp_default", \
"Heat capacity of medium [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.senMasFlo.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", -1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_a.p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "pipe_cold23.plugFlowPipe.port_a.p", 1,\
 5, 6228, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.plugFlowPipe.cor.res.port_a.h_outflow", 1, 5, 6269, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", 1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_b.p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "pipe_cold23.plugFlowPipe.port_a.p", 1,\
 5, 6228, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.cold_prim.h_outflow", 1, 5, 5180, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.senMasFlo.m_flow_nominal", \
"Nominal mass flow rate, used for regularization near zero flow [kg/s]", 0, 0.0,\
1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.senMasFlo.m_flow_small", \
"For bi-directional flow, temperature is regularized in the region |m_flow| < m_flow_small (m_flow_small > 0 required) [kg/s]",\
 0, 0.0,1E+100,0.0,0,513)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.senMasFlo.m_flow", "Mass flow rate from port_a to port_b [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.length", "Pipe length [m]",\
 50, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.rho", "Standard density of fluid [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.initDelay", \
"Initialize delay for a constant m_flow_start if true, otherwise start from 0 [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.m_flow_start", \
"Initialization of mass flow rate to calculate initial time delay [kg/s]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.t_in_start", \
"Initial value of input time at inlet [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.t_out_start", \
"Initial value of input time at outlet [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.time_out_rev", \
"Reverse flow direction output time [s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.time_out_des", \
"Design flow direction output time [s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("pipe_cold23.plugFlowPipe.cor.timDel.x", "Spatial coordinate for spatialDistribution operator",\
 41, 0, 0.0,0.0,0.0,0,544)
DeclareDerivative("pipe_cold23.plugFlowPipe.cor.timDel.der(x)", "der(Spatial coordinate for spatialDistribution operator)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.timDel.u", "Normalized fluid velocity (1/s) [Hz]",\
 "pipe_cold23.plugFlowPipe.cor.timDel.der(x)", 1, 6, 41, 0)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.timDel.m_flow", "Mass flow of fluid",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 0)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.timDel.tau", "Time delay for design flow direction",\
 "pipe_cold23.plugFlowPipe.cor.heaLos_b.tau", 1, 5, 6339, 0)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.timDel.tauRev", "Time delay for reverse flow",\
 "pipe_cold23.plugFlowPipe.cor.heaLos_a.tau", 1, 5, 6322, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.cor.timDel.t0", "Start time of the simulation [s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heatPort.T", "Port temperature [K|degC]",\
 "pipe_cold23.bou.T", 1, 5, 6456, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.cor.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "pipe_cold23.plugFlowPipe.heatPort.Q_flow", 1, 5, 6247, 132)
DeclareParameter("pipe_cold23.plugFlowPipe.cor.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 1189, 995.586, 0.0,1E+100,0.0,0,2608)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareParameter("pipe_cold23.plugFlowPipe.vol.p_start", "Start value of pressure [Pa|bar]",\
 1190, 300000, 0.0,100000000.0,100000.0,0,560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,513)
DeclareParameter("pipe_cold23.plugFlowPipe.vol.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 1191, 1, 0.0,1.0,0.1,0,560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1, 1.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.prescribedHeatFlowRate", \
"Set to true if the model has a prescribed heat flow at its heatPort. If the heat flow rate at the heatPort is only based on temperature difference, then set to false [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 0.7569096105952771, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 7.569096105952771E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal. Used only if model has two ports. [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.V", "Volume [m3]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", 1, 5, 5178, 132)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 4)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.T", "Temperature of the fluid [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,512)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.U", "Internal energy of the component [J]",\
 "pipe_cold23.plugFlowPipe.vol.dynBal.U", 1, 1, 88, 0)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.p", "Pressure of the fluid [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 0)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.m", "Mass of the component [kg]", \
"pipe_cold23.plugFlowPipe.vol.dynBal.m", 1, 5, 7738, 0)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.rho_start", "Density, used to compute start and guess values [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.state_start.p", "Absolute pressure of medium [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.state_start.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.useSteadyStateTwoPort", \
"Flag, true if the model has two ports only and uses a steady state balance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.hOut_internal", "Internal connector for leaving temperature of the component [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.preTem.port.T", "Port temperature [K|degC]",\
 "pipe_cold23.plugFlowPipe.vol.T", 1, 5, 6372, 1028)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.preTem.port.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.preTem.T", "[K]", "pipe_cold23.plugFlowPipe.vol.T", 1,\
 5, 6372, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.portT.y", "Value of Real output", \
"pipe_cold23.plugFlowPipe.vol.T", 1, 5, 6372, 1024)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.heaFloSen.Q_flow", \
"Heat flow from port_a to port_b as output signal [W]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.heaFloSen.port_a.T", \
"Port temperature [K|degC]", "pipe_cold23.plugFlowPipe.vol.T", 1, 5, 6372, 1028)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.heaFloSen.port_a.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.heaFloSen.port_b.T", \
"Port temperature [K|degC]", "pipe_cold23.plugFlowPipe.vol.T", 1, 5, 6372, 1028)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.heaFloSen.port_b.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.heatPort.T", "Port temperature [K|degC]",\
 "pipe_cold23.plugFlowPipe.vol.T", 1, 5, 6372, 4)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("pipe_cold23.plugFlowPipe.CPip", "Heat capacity of pipe wall [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.VEqu", "Equivalent water volume to represent pipe wall thermal inertia [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("pipe_cold23.plugFlowPipe.sta_default.p", "Absolute pressure of medium [Pa|bar]",\
 1192, 300000.0, 0.0,100000000.0,100000.0,0,2608)
DeclareParameter("pipe_cold23.plugFlowPipe.sta_default.T", "Temperature of medium [K|degC]",\
 1193, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold23.plugFlowPipe.cp_default", "Heat capacity of medium [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.C", "Thermal capacity per unit length of water in pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareParameter("pipe_cold23.sta_default.p", "Absolute pressure of medium [Pa|bar]",\
 1194, 300000.0, 0.0,100000000.0,100000.0,0,2608)
DeclareParameter("pipe_cold23.sta_default.T", "Temperature of medium [K|degC]", 1195,\
 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold23.cp_default", "Heat capacity of medium [J/(kg.K)]", 4184,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold23.orifice2.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.orifice2.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 1028)
DeclareVariable("pipe_cold23.orifice2.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,2568)
DeclareAlias2("pipe_cold23.orifice2.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", 1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.orifice2.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.cold_prim.p", 1, 5, 3269, 1028)
DeclareAlias2("pipe_cold23.orifice2.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1028)
DeclareVariable("pipe_cold23.orifice2.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice2.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("pipe_cold23.orifice2.showDesignFlowDirection", \
"= false to hide the arrow in the model icon [:#(type=Boolean)]", 1196, true, \
0.0,0.0,0.0,0,2610)
DeclareVariable("pipe_cold23.orifice2.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 1000.0, -1E+60,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice2.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold23.orifice2.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 1024)
DeclareVariable("pipe_cold23.orifice2.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.orifice2.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.orifice2.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold23.orifice2.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold23.orifice2.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 1024)
DeclareVariable("pipe_cold23.orifice2.state_a.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold23.orifice2.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.cold_prim.p", 1, 5, 3269, 1024)
DeclareVariable("pipe_cold23.orifice2.state_b.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold23.orifice2.pathLength", "Length flow path [m]", 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.momentumDynamics", "Formulation of momentum balance [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 4, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.orifice2.I", "Momenta of flow segments [kg.m/s]", \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.Ib_flow", "Flow of momentum across boundaries [N]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.F_p", "Pressure force [N]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareAlias2("pipe_cold23.orifice2.F_fg", "Friction and gravity force [N]", \
"pipe_cold23.orifice2.F_p", -1, 5, 6412, 1024)
DeclareVariable("pipe_cold23.orifice2.diameter", "Diameter of orifice [m]", \
0.022, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.zeta", "Loss factor for flow of port_a -> port_b",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.use_zeta", "= false to obtain zeta from dp_nominal and m_flow_nominal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice2.m_flow_nominal", "Mass flow rate for dp_nominal [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.dp_nominal", "Nominal pressure drop [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.use_Re", "= true, if turbulent region is defined by Re, otherwise by m_flow_small [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice2.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice2.dp_small", "Regularization of zero flow if |dp| < dp_small [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareAlias2("pipe_cold23.orifice2.zeta_nominal", "", "pipe_cold23.orifice2.zeta", 1,\
 5, 6414, 1024)
DeclareVariable("pipe_cold23.orifice2.d", "[kg/m3|g/cm3]", 995.586, 0.0,100000.0,\
1.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.dp_fg", "Pressure loss due to friction and gravity [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.orifice2.A_mean", "Mean cross flow area [m2]", \
0.00038013271108436493, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice2.Re_turbulent", "cf. sharpEdgedOrifice [1]",\
 10000, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.orifice2.m_flow_turbulent", "[kg/s]", \
"pipe_cold23.orifice2.m_flow_small", 1, 5, 6399, 1024)
DeclareAlias2("pipe_cold23.orifice2.dp_turbulent", "[Pa|bar]", "pipe_cold23.orifice2.dp_small", 1,\
 5, 6420, 1024)
DeclareVariable("pipe_cold23.orifice1.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold23.orifice1.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.orifice1.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.cold_prim.p", 1, 5, 5179, 1028)
DeclareAlias2("pipe_cold23.orifice1.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_a.h_outflow", 1, 5, 6219, 1028)
DeclareAlias2("pipe_cold23.orifice1.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.cold_prim.m_flow", 1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.orifice1.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.port_a.p", 1, 5, 6228, 1028)
DeclareAlias2("pipe_cold23.orifice1.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.cold_prim.h_outflow", 1, 5, 5180, 1028)
DeclareVariable("pipe_cold23.orifice1.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice1.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("pipe_cold23.orifice1.showDesignFlowDirection", \
"= false to hide the arrow in the model icon [:#(type=Boolean)]", 1197, true, \
0.0,0.0,0.0,0,2610)
DeclareVariable("pipe_cold23.orifice1.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 1000.0, -1E+60,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice1.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold23.orifice1.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B3.cold_prim.m_flow", -1, 5, 5178, 1024)
DeclareVariable("pipe_cold23.orifice1.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.orifice1.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.orifice1.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold23.orifice1.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold23.orifice1.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.cold_prim.p", 1, 5, 5179, 1024)
DeclareVariable("pipe_cold23.orifice1.state_a.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold23.orifice1.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.port_a.p", 1, 5, 6228, 1024)
DeclareVariable("pipe_cold23.orifice1.state_b.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold23.orifice1.pathLength", "Length flow path [m]", 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.momentumDynamics", "Formulation of momentum balance [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 4, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.orifice1.I", "Momenta of flow segments [kg.m/s]", \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.Ib_flow", "Flow of momentum across boundaries [N]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.F_p", "Pressure force [N]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareAlias2("pipe_cold23.orifice1.F_fg", "Friction and gravity force [N]", \
"pipe_cold23.orifice1.F_p", -1, 5, 6443, 1024)
DeclareVariable("pipe_cold23.orifice1.diameter", "Diameter of orifice [m]", \
0.022, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.zeta", "Loss factor for flow of port_a -> port_b",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.use_zeta", "= false to obtain zeta from dp_nominal and m_flow_nominal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice1.m_flow_nominal", "Mass flow rate for dp_nominal [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.dp_nominal", "Nominal pressure drop [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.use_Re", "= true, if turbulent region is defined by Re, otherwise by m_flow_small [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice1.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.orifice1.dp_small", "Regularization of zero flow if |dp| < dp_small [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareAlias2("pipe_cold23.orifice1.zeta_nominal", "", "pipe_cold23.orifice1.zeta", 1,\
 5, 6445, 1024)
DeclareVariable("pipe_cold23.orifice1.d", "[kg/m3|g/cm3]", 995.586, 0.0,100000.0,\
1.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.dp_fg", "Pressure loss due to friction and gravity [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2624)
DeclareVariable("pipe_cold23.orifice1.A_mean", "Mean cross flow area [m2]", \
0.00038013271108436493, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.orifice1.Re_turbulent", "cf. sharpEdgedOrifice [1]",\
 10000, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.orifice1.m_flow_turbulent", "[kg/s]", \
"pipe_cold23.orifice1.m_flow_small", 1, 5, 6430, 1024)
DeclareAlias2("pipe_cold23.orifice1.dp_turbulent", "[Pa|bar]", "pipe_cold23.orifice1.dp_small", 1,\
 5, 6451, 1024)
DeclareVariable("pipe_cold23.bou.T", "Fixed temperature at port [K|degC]", \
288.15, 0.0,1E+100,300.0,0,2561)
DeclareAlias2("pipe_cold23.bou.port.T", "Port temperature [K|degC]", \
"pipe_cold23.bou.T", 1, 5, 6456, 1028)
DeclareAlias2("pipe_cold23.bou.port.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "pipe_cold23.plugFlowPipe.heatPort.Q_flow", -1, 5, 6247, 1156)
DeclareVariable("pipe_cold12.allowFlowReversal", "= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.cold_prim.p", 1, 5, 3269, 4)
DeclareVariable("pipe_cold12.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,83680.0,0,520)
DeclareAlias2("pipe_cold12.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.cold_prim.p", 1, 5, 1119, 4)
DeclareVariable("pipe_cold12.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,83680.0,0,520)
DeclareParameter("pipe_cold12.T_amb", "Ambient temperature [K|degC]", 1198, \
285.15, 0.0,1E+100,300.0,0,560)
DeclareParameter("pipe_cold12.R_ins", "Thermal resistance per meter [(K.m)/W]", 1199,\
 3.78, 0.0,1E+100,0.0,0,560)
DeclareVariable("pipe_cold12.length", "Length of the pipe [m]", 50, 0.0,0.0,0.0,\
0,513)
DeclareVariable("pipe_cold12.diameter", "Diameter of the pipe [m]", 0.022, \
0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.roughness", "inner roughness of the pipe material [m]",\
 1.1E-05, 0.0,0.0,0.0,0,513)
DeclareParameter("pipe_cold12.zeta", "Local resistance coefficient", 1200, 3.5, \
0.0,1E+100,0.0,0,560)
DeclareParameter("pipe_cold12.cPip", "Specific heat of pipe wall material. 2300 for PE, 500 for steel [J/(kg.K)]",\
 1201, 2300, 0.0,0.0,0.0,0,560)
DeclareParameter("pipe_cold12.rhoPip", "Density of pipe wall material. 930 for PE, 8000 for steel [kg/m3|kg/m3]",\
 1202, 930, 0.0,1E+100,0.0,0,560)
DeclareParameter("pipe_cold12.thickness", "Pipe wall thickness [m]", 1203, \
0.0035, 0.0,0.0,0.0,0,560)
DeclareVariable("pipe_cold12.u_nominal", "nominal flow velocity (used to calculate nominal mass flow rate) [m/s]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.m_flow_nominal", "Nominal mass flow rate [kg/s]", \
0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareParameter("pipe_cold12.energyDynamics", "Energy dynamics [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1204, 4, 1.0,4.0,0.0,0,564)
DeclareParameter("pipe_cold12.m_flow_start", "Start value for mass flow rate [kg/s]",\
 1205, 0, 0.0,0.0,0.0,0,560)
DeclareParameter("pipe_cold12.p_start", "Start value for pressure [Pa|bar]", 1206,\
 101325, 0.0,0.0,0.0,0,560)
DeclareParameter("pipe_cold12.T_start", "Start value for temperature [K|degC]", 1207,\
 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.nPorts", "Number of ports [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareVariable("pipe_cold12.plugFlowPipe.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareVariable("pipe_cold12.plugFlowPipe.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,520)
DeclareAlias2("pipe_cold12.plugFlowPipe.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_a.h_outflow", 1, 5, 6458, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.ports_b[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareVariable("pipe_cold12.plugFlowPipe.ports_b[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 0.0, 0.0,100000000.0,100000.0,0,520)
DeclareAlias2("pipe_cold12.plugFlowPipe.ports_b[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.show_T", "= true, if actual temperature at port is computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.homotopyInitialization", \
"= true, use homotopy method [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold12.plugFlowPipe.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.v_nominal", "Velocity at m_flow_nominal (used to compute default value for hydraulic diameter dh) [m/s]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.ReC", "Reynolds number where transition to turbulent starts",\
 4000, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.roughness", "Average height of surface asperities (default: smooth steel pipe) [m]",\
 1.1E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.length", "Pipe length [m]", 50, \
0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 7.569096105952771E-05, 0.0,0.0,0.0,0,513)
DeclareParameter("pipe_cold12.plugFlowPipe.dIns", "Thickness of pipe insulation, used to compute R [m|mm]",\
 1208, 0.019, 0.0,0.0,0.0,0,560)
DeclareParameter("pipe_cold12.plugFlowPipe.kIns", "Heat conductivity of pipe insulation, used to compute R [W/(m.K)]",\
 1209, 0.04, 0.0,0.0,0.0,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.cPip", "Specific heat of pipe wall material. 2300 for PE, 500 for steel [J/(kg.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.rhoPip", "Density of pipe wall material. 930 for PE, 8000 for steel [kg/m3|kg/m3]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.thickness", "Pipe wall thickness [m]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("pipe_cold12.plugFlowPipe.T_start_in", "Initialization temperature at pipe inlet [K|degC]",\
 1210, 293.15, 0.0,1E+100,300.0,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.T_start_out", "Initialization temperature at pipe outlet [K|degC]",\
 293.15, 0.0,1E+100,300.0,0,513)
DeclareParameter("pipe_cold12.plugFlowPipe.initDelay", "Initialize delay for a constant mass flow rate if true, otherwise start from 0 [:#(type=Boolean)]",\
 1211, false, 0.0,0.0,0.0,0,562)
DeclareParameter("pipe_cold12.plugFlowPipe.m_flow_start", "Initial value of mass flow rate through pipe [kg/s]",\
 1212, 0, 0.0,0.0,0.0,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.fac", "Factor to take into account flow resistance of bends etc., fac=dp_nominal/dpStraightPipe_nominal",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.linearized", "= true, use linear relation between m_flow and dp for any flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.heatPort.T", "Port temperature [K|degC]",\
 "pipe_cold12.bou.T", 1, 5, 6695, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,776)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_a.h_outflow", 1, 5, 6458, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,83680.0,0,520)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.homotopyInitialization", \
"= true, use homotopy method [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.v_nominal", "Velocity at m_flow_nominal (used to compute default value for hydraulic diameter dh) [m/s]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.length", "Pipe length [m]", 50, \
0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 0.7569096105952771, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 7.569096105952771E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.roughness", "Average height of surface asperities (default: smooth steel pipe) [m]",\
 1.1E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.C", "Thermal capacity per unit length of pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.fac", "Factor to take into account flow resistance of bends etc., fac=dp_nominal/dpStraightPipe_nominal",\
 1, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.thickness", "Pipe wall thickness [m]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.T_start_in", "Initialization temperature at pipe inlet [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.T_start_out", "Initialization temperature at pipe outlet [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.initDelay", "Initialize delay for a constant mass flow rate if true, otherwise start from 0 [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.m_flow_start", "[kg/s]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.ReC", "Reynolds number where transition to turbulent starts",\
 4000.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.linearized", "= true, use linear relation between m_flow and dp for any flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,83680.0,0,520)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.orifice1.port_b.h_outflow", 1, 5, 6664, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.show_T", "= true, if actual temperature at port is computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.res.m_flow", "Mass flow rate from port_a to port_b (m_flow > 0 is design flow direction) [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.dp", "Pressure difference between port_a and port_b [Pa|Pa]",\
 0, 0.0,0.0,10000.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res._m_flow_start", \
"Start value for m_flow, used to avoid a warning if not set in m_flow, and to avoid m_flow.start in parameter window [kg/s]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res._dp_start", "Start value for dp, used to avoid a warning if not set in dp, and to avoid dp.start in parameter window [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.homotopyInitialization", \
"= true, use homotopy method [:#(type=Boolean)]", true, 0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.dp_nominal", "Pressure drop at nominal mass flow rate [Pa|Pa]",\
 104725.6165147684, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.linearized", "= true, use linear relation between m_flow and dp for any flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.m_flow_turbulent", \
"Turbulent flow if |m_flow| >= m_flow_turbulent [kg/s]", 0.06911503837897544, \
0.0,1E+100,0.0,0,513)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.res.sta_default.p", \
"Absolute pressure of medium [Pa|bar]", 1213, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.res.sta_default.T", \
"Temperature of medium [K|degC]", 1214, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.eta_default", "Dynamic viscosity, used to compute transition to turbulent flow regime [Pa.s]",\
 0.001, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.m_flow_nominal_pos", \
"Absolute value of nominal flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.dp_nominal_pos", \
"Absolute value of nominal pressure difference [Pa|Pa]", 104725.6165147684, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.deltaM", "Fraction of nominal mass flow rate where transition to turbulent occurs",\
 0.09131214270699961, 1E-06,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.k", "Flow coefficient, k=m_flow/sqrt(dp), with unit=(kg.m)^(1/2)",\
 0.0023389317900275996, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.computeFlowResistance", \
"Flag to enable/disable computation of flow resistance [:#(type=Boolean)]", true,\
 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.coeff", "Precomputed coefficient to avoid division by parameter",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.length", "Length of the pipe [m]",\
 50, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.ReC", "Reynolds number where transition to turbulent starts",\
 4000.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.v_nominal", "Velocity at m_flow_nominal (used to compute default value for hydraulic diameter dh) [m/s]",\
 0.5, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.roughness", "Absolute roughness of pipe, with a default for a smooth steel pipe (dummy if use_roughness = false) [m]",\
 1.1E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.fac", "Factor to take into account resistance of bends etc., fac=dp_nominal/dpStraightPipe_nominal",\
 1, 1.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.dpStraightPipe_nominal", \
"Pressure loss of a straight pipe at m_flow_nominal [Pa|Pa]", 104725.6165147684,\
 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.v", "Flow velocity (assuming a round cross section area) [m/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.ARound", "Cross sectional area (assuming a round cross section area) [m2]",\
 0.00038013271108436493, 0.0,0.0,0.0,0,2561)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.res.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 1215, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.res.state_default.T", \
"Temperature of medium [K|degC]", 1216, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.rho_default", "Density at nominal condition [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.res.mu_default", "Dynamic viscosity at nominal condition [Pa.s]",\
 0.001, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.plugFlowPipe.cor.res.port_a.h_outflow", 1, 5, 6508, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,83680.0,0,520)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.length", "Pipe length [m]", 50,\
 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.A", "Cross-sectional area of pipe [m2]",\
 0.00038013271108436493, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.T_start_in", "Initial temperature in pipe at inlet [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.T_start_out", "Initial temperature in pipe at outlet [K|degC]",\
 288.15, 0.0,1E+100,300.0,0,513)
DeclareState("pipe_cold12.plugFlowPipe.cor.del.x", "Spatial coordinate for spatialDistribution operator [m]",\
 42, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("pipe_cold12.plugFlowPipe.cor.del.der(x)", "der(Spatial coordinate for spatialDistribution operator) [m/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.del.v", "Flow velocity of medium in pipe [m/s]",\
 "pipe_cold12.plugFlowPipe.cor.del.der(x)", 1, 6, 42, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.h_ini_in", "For initialization of spatialDistribution inlet [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.del.h_ini_out", "For initialization of spatialDistribution outlet [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.orifice1.port_b.h_outflow", 1, 5, 6664, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_a.h_outflow", 1, 5, 6458, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.dp_start", \
"Guess value of dp = port_a.p - port_b.p [Pa|Pa]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.m_flow_start", \
"Guess value of m_flow = port_a.m_flow [kg/s]", 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.show_V_flow", \
"= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.C", "Thermal capacity per unit length of pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.T_start", \
"Initial output temperature [K|degC]", 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.tau_char", \
"Characteristic delay time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.tau", "Time delay at pipe level [s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.heatPort.T", \
"Port temperature [K|degC]", "pipe_cold12.bou.T", 1, 5, 6695, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.heatPort.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.T_a_inflow", \
"Temperature at port_a for inflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.T_b_outflow", \
"Temperature at port_b for outflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_a.TAmb", "Environment temperature [K|degC]",\
 "pipe_cold12.bou.T", 1, 5, 6695, 0)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.heaLos_a.sta_default.p", \
"Absolute pressure of medium [Pa|bar]", 1217, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.heaLos_a.sta_default.T", \
"Temperature of medium [K|degC]", 1218, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_a.cp_default", \
"Heat capacity of medium [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.plugFlowPipe.cor.port_b.h_outflow", 1, 5, 6488, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.dp_start", \
"Guess value of dp = port_a.p - port_b.p [Pa|Pa]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.m_flow_start", \
"Guess value of m_flow = port_a.m_flow [kg/s]", 0.0, -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.m_flow_small", \
"Small mass flow rate for regularization of zero flow [kg/s]", 7.569096105952771E-05,\
 -100000.0,100000.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.show_V_flow", \
"= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|Pa]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.C", "Thermal capacity per unit length of pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.R", "Thermal resistance per unit length from fluid to boundary temperature [(m.K)/W]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.T_start", \
"Initial output temperature [K|degC]", 288.15, 0.0,1E+100,300.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.tau_char", \
"Characteristic delay time [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.tau", "Time delay at pipe level [s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.heatPort.T", \
"Port temperature [K|degC]", "pipe_cold12.bou.T", 1, 5, 6695, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.heatPort.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,776)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.T_a_inflow", \
"Temperature at port_a for inflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.T_b_outflow", \
"Temperature at port_b for outflowing fluid [K|degC]", 0.0, 0.0,1E+100,300.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heaLos_b.TAmb", "Environment temperature [K|degC]",\
 "pipe_cold12.bou.T", 1, 5, 6695, 0)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.heaLos_b.sta_default.p", \
"Absolute pressure of medium [Pa|bar]", 1219, 300000.0, 0.0,100000000.0,100000.0,\
0,2608)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.heaLos_b.sta_default.T", \
"Temperature of medium [K|degC]", 1220, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.heaLos_b.cp_default", \
"Heat capacity of medium [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.senMasFlo.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_a.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_a.p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "pipe_cold12.plugFlowPipe.port_a.p", 1,\
 5, 6467, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_a.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.plugFlowPipe.cor.res.port_a.h_outflow", 1, 5, 6508, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_b.m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_b.p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "pipe_cold12.plugFlowPipe.port_a.p", 1,\
 5, 6467, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.port_b.h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.orifice1.port_b.h_outflow", 1, 5, 6664, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.senMasFlo.m_flow_nominal", \
"Nominal mass flow rate, used for regularization near zero flow [kg/s]", 0, 0.0,\
1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.senMasFlo.m_flow_small", \
"For bi-directional flow, temperature is regularized in the region |m_flow| < m_flow_small (m_flow_small > 0 required) [kg/s]",\
 0, 0.0,1E+100,0.0,0,513)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.senMasFlo.m_flow", "Mass flow rate from port_a to port_b [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.length", "Pipe length [m]",\
 50, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.dh", "Hydraulic diameter (assuming a round cross section area) [m]",\
 0.022, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.rho", "Standard density of fluid [kg/m3|g/cm3]",\
 0.0, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.initDelay", \
"Initialize delay for a constant m_flow_start if true, otherwise start from 0 [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.m_flow_start", \
"Initialization of mass flow rate to calculate initial time delay [kg/s]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.m_flow_nominal", \
"Nominal mass flow rate [kg/s]", 0.7569096105952771, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.t_in_start", \
"Initial value of input time at inlet [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.t_out_start", \
"Initial value of input time at outlet [s]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.time_out_rev", \
"Reverse flow direction output time [s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.time_out_des", \
"Design flow direction output time [s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("pipe_cold12.plugFlowPipe.cor.timDel.x", "Spatial coordinate for spatialDistribution operator",\
 43, 0, 0.0,0.0,0.0,0,544)
DeclareDerivative("pipe_cold12.plugFlowPipe.cor.timDel.der(x)", "der(Spatial coordinate for spatialDistribution operator)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.timDel.u", "Normalized fluid velocity (1/s) [Hz]",\
 "pipe_cold12.plugFlowPipe.cor.timDel.der(x)", 1, 6, 43, 0)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.timDel.m_flow", "Mass flow of fluid",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 0)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.timDel.tau", "Time delay for design flow direction",\
 "pipe_cold12.plugFlowPipe.cor.heaLos_b.tau", 1, 5, 6578, 0)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.timDel.tauRev", "Time delay for reverse flow",\
 "pipe_cold12.plugFlowPipe.cor.heaLos_a.tau", 1, 5, 6561, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.cor.timDel.t0", "Start time of the simulation [s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heatPort.T", "Port temperature [K|degC]",\
 "pipe_cold12.bou.T", 1, 5, 6695, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.cor.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "pipe_cold12.plugFlowPipe.heatPort.Q_flow", 1, 5, 6486, 132)
DeclareParameter("pipe_cold12.plugFlowPipe.cor.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 1221, 995.586, 0.0,1E+100,0.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,517)
DeclareParameter("pipe_cold12.plugFlowPipe.vol.p_start", "Start value of pressure [Pa|bar]",\
 1222, 300000, 0.0,100000000.0,100000.0,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,513)
DeclareParameter("pipe_cold12.plugFlowPipe.vol.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 1223, 1, 0.0,1.0,0.1,0,560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1, 1.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.prescribedHeatFlowRate", \
"Set to true if the model has a prescribed heat flow at its heatPort. If the heat flow rate at the heatPort is only based on temperature difference, then set to false [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.m_flow_nominal", "Nominal mass flow rate [kg/s]",\
 0.7569096105952771, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,517)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 7.569096105952771E-05, 0.0,1E+100,0.0,0,513)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.allowFlowReversal", \
"= false to simplify equations, assuming, but not enforcing, no flow reversal. Used only if model has two ports. [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.V", "Volume [m3]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 132)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 4)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.T", "Temperature of the fluid [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,512)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.U", "Internal energy of the component [J]",\
 "pipe_cold12.plugFlowPipe.vol.dynBal.U", 1, 1, 89, 0)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.p", "Pressure of the fluid [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 0)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.m", "Mass of the component [kg]", \
"pipe_cold12.plugFlowPipe.vol.dynBal.m", 1, 5, 7777, 0)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.rho_start", "Density, used to compute start and guess values [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.state_start.p", "Absolute pressure of medium [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.state_start.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.useSteadyStateTwoPort", \
"Flag, true if the model has two ports only and uses a steady state balance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.hOut_internal", "Internal connector for leaving temperature of the component [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.preTem.port.T", "Port temperature [K|degC]",\
 "pipe_cold12.plugFlowPipe.vol.T", 1, 5, 6611, 1028)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.preTem.port.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.preTem.T", "[K]", "pipe_cold12.plugFlowPipe.vol.T", 1,\
 5, 6611, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.portT.y", "Value of Real output", \
"pipe_cold12.plugFlowPipe.vol.T", 1, 5, 6611, 1024)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.heaFloSen.Q_flow", \
"Heat flow from port_a to port_b as output signal [W]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.heaFloSen.port_a.T", \
"Port temperature [K|degC]", "pipe_cold12.plugFlowPipe.vol.T", 1, 5, 6611, 1028)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.heaFloSen.port_a.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.heaFloSen.port_b.T", \
"Port temperature [K|degC]", "pipe_cold12.plugFlowPipe.vol.T", 1, 5, 6611, 1028)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.heaFloSen.port_b.Q_flow", \
"Heat flow rate (positive if flowing from outside into the component) [W]", 0.0,\
 0.0,0.0,0.0,0,2825)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.heatPort.T", "Port temperature [K|degC]",\
 "pipe_cold12.plugFlowPipe.vol.T", 1, 5, 6611, 4)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.heatPort.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 0.0, 0.0,0.0,0.0,0,777)
DeclareVariable("pipe_cold12.plugFlowPipe.CPip", "Heat capacity of pipe wall [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.VEqu", "Equivalent water volume to represent pipe wall thermal inertia [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareParameter("pipe_cold12.plugFlowPipe.sta_default.p", "Absolute pressure of medium [Pa|bar]",\
 1224, 300000.0, 0.0,100000000.0,100000.0,0,2608)
DeclareParameter("pipe_cold12.plugFlowPipe.sta_default.T", "Temperature of medium [K|degC]",\
 1225, 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.plugFlowPipe.cp_default", "Heat capacity of medium [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.C", "Thermal capacity per unit length of water in pipe [J/(K.m)]",\
 1583.4549053653195, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareParameter("pipe_cold12.sta_default.p", "Absolute pressure of medium [Pa|bar]",\
 1226, 300000.0, 0.0,100000000.0,100000.0,0,2608)
DeclareParameter("pipe_cold12.sta_default.T", "Temperature of medium [K|degC]", 1227,\
 293.15, 1.0,10000.0,300.0,0,2608)
DeclareVariable("pipe_cold12.cp_default", "Heat capacity of medium [J/(kg.K)]", 4184,\
 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.rho_default", "Default density (e.g., rho_liquidWater = 995, rho_air = 1.2) [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold12.orifice2.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.orifice2.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 1028)
DeclareAlias2("pipe_cold12.orifice2.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.cold_prim.h_outflow", 1, 5, 1120, 1028)
DeclareAlias2("pipe_cold12.orifice2.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.orifice2.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.cold_prim.p", 1, 5, 1119, 1028)
DeclareAlias2("pipe_cold12.orifice2.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1028)
DeclareVariable("pipe_cold12.orifice2.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice2.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("pipe_cold12.orifice2.showDesignFlowDirection", \
"= false to hide the arrow in the model icon [:#(type=Boolean)]", 1228, true, \
0.0,0.0,0.0,0,2610)
DeclareVariable("pipe_cold12.orifice2.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 1000.0, -1E+60,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice2.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold12.orifice2.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 1024)
DeclareVariable("pipe_cold12.orifice2.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.orifice2.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.orifice2.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold12.orifice2.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold12.orifice2.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 1024)
DeclareVariable("pipe_cold12.orifice2.state_a.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold12.orifice2.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.cold_prim.p", 1, 5, 1119, 1024)
DeclareVariable("pipe_cold12.orifice2.state_b.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold12.orifice2.pathLength", "Length flow path [m]", 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.momentumDynamics", "Formulation of momentum balance [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 4, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.orifice2.I", "Momenta of flow segments [kg.m/s]", \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.Ib_flow", "Flow of momentum across boundaries [N]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.F_p", "Pressure force [N]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareAlias2("pipe_cold12.orifice2.F_fg", "Friction and gravity force [N]", \
"pipe_cold12.orifice2.F_p", -1, 5, 6650, 1024)
DeclareVariable("pipe_cold12.orifice2.diameter", "Diameter of orifice [m]", \
0.022, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.zeta", "Loss factor for flow of port_a -> port_b",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.use_zeta", "= false to obtain zeta from dp_nominal and m_flow_nominal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice2.m_flow_nominal", "Mass flow rate for dp_nominal [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.dp_nominal", "Nominal pressure drop [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.use_Re", "= true, if turbulent region is defined by Re, otherwise by m_flow_small [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice2.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice2.dp_small", "Regularization of zero flow if |dp| < dp_small [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareAlias2("pipe_cold12.orifice2.zeta_nominal", "", "pipe_cold12.orifice2.zeta", 1,\
 5, 6652, 1024)
DeclareVariable("pipe_cold12.orifice2.d", "[kg/m3|g/cm3]", 995.586, 0.0,100000.0,\
1.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.dp_fg", "Pressure loss due to friction and gravity [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2624)
DeclareVariable("pipe_cold12.orifice2.A_mean", "Mean cross flow area [m2]", \
0.00038013271108436493, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice2.Re_turbulent", "cf. sharpEdgedOrifice [1]",\
 10000, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.orifice2.m_flow_turbulent", "[kg/s]", \
"pipe_cold12.orifice2.m_flow_small", 1, 5, 6637, 1024)
DeclareAlias2("pipe_cold12.orifice2.dp_turbulent", "[Pa|bar]", "pipe_cold12.orifice2.dp_small", 1,\
 5, 6658, 1024)
DeclareVariable("pipe_cold12.orifice1.allowFlowReversal", "= true to allow flow reversal, false restricts to design direction (port_a -> port_b) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold12.orifice1.port_a.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.orifice1.port_a.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.cold_prim.p", 1, 5, 3269, 1028)
DeclareAlias2("pipe_cold12.orifice1.port_a.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_a.h_outflow", 1, 5, 6458, 1028)
DeclareAlias2("pipe_cold12.orifice1.port_b.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.cold_prim.m_flow", -1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.orifice1.port_b.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 1028)
DeclareVariable("pipe_cold12.orifice1.port_b.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 83680.0, -10000000000.0,10000000000.0,1000000.0,0,2568)
DeclareVariable("pipe_cold12.orifice1.port_a_exposesState", "= true if port_a exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice1.port_b_exposesState", "= true if port_b.p exposes the state of a fluid volume [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareParameter("pipe_cold12.orifice1.showDesignFlowDirection", \
"= false to hide the arrow in the model icon [:#(type=Boolean)]", 1229, true, \
0.0,0.0,0.0,0,2610)
DeclareVariable("pipe_cold12.orifice1.dp_start", "Guess value of dp = port_a.p - port_b.p [Pa|bar]",\
 1000.0, -1E+60,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.m_flow_start", "Guess value of m_flow = port_a.m_flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.m_flow_small", "Small mass flow rate for regularization of zero flow [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.show_T", "= true, if temperatures at port_a and port_b are computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice1.show_V_flow", "= true, if volume flow rate at inflowing port is computed [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareAlias2("pipe_cold12.orifice1.m_flow", "Mass flow rate in design flow direction [kg/s]",\
 "B1.cold_prim.m_flow", 1, 5, 1118, 1024)
DeclareVariable("pipe_cold12.orifice1.dp", "Pressure difference between port_a and port_b (= port_a.p - port_b.p) [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.orifice1.V_flow", "Volume flow rate at inflowing port (positive when flow from port_a to port_b) [m3/s]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.orifice1.port_a_T", "Temperature close to port_a, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold12.orifice1.port_b_T", "Temperature close to port_b, if show_T = true [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold12.orifice1.state_a.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.cold_prim.p", 1, 5, 3269, 1024)
DeclareVariable("pipe_cold12.orifice1.state_a.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold12.orifice1.state_b.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.port_a.p", 1, 5, 6467, 1024)
DeclareVariable("pipe_cold12.orifice1.state_b.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2560)
DeclareVariable("pipe_cold12.orifice1.pathLength", "Length flow path [m]", 0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.momentumDynamics", "Formulation of momentum balance [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 4, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.orifice1.I", "Momenta of flow segments [kg.m/s]", \
0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.Ib_flow", "Flow of momentum across boundaries [N]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.F_p", "Pressure force [N]", 0.0, 0.0,0.0,\
0.0,0,2560)
DeclareAlias2("pipe_cold12.orifice1.F_fg", "Friction and gravity force [N]", \
"pipe_cold12.orifice1.F_p", -1, 5, 6682, 1024)
DeclareVariable("pipe_cold12.orifice1.diameter", "Diameter of orifice [m]", \
0.022, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.zeta", "Loss factor for flow of port_a -> port_b",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.use_zeta", "= false to obtain zeta from dp_nominal and m_flow_nominal [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice1.m_flow_nominal", "Mass flow rate for dp_nominal [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.dp_nominal", "Nominal pressure drop [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.use_Re", "= true, if turbulent region is defined by Re, otherwise by m_flow_small [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice1.from_dp", "= true, use m_flow = f(dp) else dp = f(m_flow) [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.orifice1.dp_small", "Regularization of zero flow if |dp| < dp_small [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareAlias2("pipe_cold12.orifice1.zeta_nominal", "", "pipe_cold12.orifice1.zeta", 1,\
 5, 6684, 1024)
DeclareVariable("pipe_cold12.orifice1.d", "[kg/m3|g/cm3]", 995.586, 0.0,100000.0,\
1.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.dp_fg", "Pressure loss due to friction and gravity [Pa|bar]",\
 1000.0, 0.0,0.0,0.0,0,2624)
DeclareVariable("pipe_cold12.orifice1.A_mean", "Mean cross flow area [m2]", \
0.00038013271108436493, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.orifice1.Re_turbulent", "cf. sharpEdgedOrifice [1]",\
 10000, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.orifice1.m_flow_turbulent", "[kg/s]", \
"pipe_cold12.orifice1.m_flow_small", 1, 5, 6669, 1024)
DeclareAlias2("pipe_cold12.orifice1.dp_turbulent", "[Pa|bar]", "pipe_cold12.orifice1.dp_small", 1,\
 5, 6690, 1024)
DeclareVariable("pipe_cold12.bou.T", "Fixed temperature at port [K|degC]", \
288.15, 0.0,1E+100,300.0,0,2561)
DeclareAlias2("pipe_cold12.bou.port.T", "Port temperature [K|degC]", \
"pipe_cold12.bou.T", 1, 5, 6695, 1028)
DeclareAlias2("pipe_cold12.bou.port.Q_flow", "Heat flow rate (positive if flowing from outside into the component) [W]",\
 "pipe_cold12.plugFlowPipe.heatPort.Q_flow", -1, 5, 6486, 1156)
DeclareVariable("boundary.nPorts", "Number of ports [:#(type=Integer)]", 1, \
0.0,0.0,0.0,0,517)
DeclareAlias2("boundary.medium.T", "Temperature of medium [K|degC]", \
"boundary.T", 1, 7, 1231, 0)
DeclareAlias2("boundary.medium.p", "Absolute pressure of medium [Pa|bar]", \
"boundary.p", 1, 7, 1230, 0)
DeclareAlias2("boundary.medium.h", "Specific enthalpy of medium [J/kg]", \
"boundary.ports[1].h_outflow", 1, 5, 6706, 0)
DeclareAlias2("boundary.medium.u", "Specific internal energy of medium [J/kg]", \
"boundary.ports[1].h_outflow", 1, 5, 6706, 0)
DeclareVariable("boundary.medium.d", "Density of medium [kg/m3|g/cm3]", 995.586,\
 0.0,1E+100,0.0,0,513)
DeclareVariable("boundary.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("boundary.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("boundary.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("boundary.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "boundary.p", 1, 7, 1230, 0)
DeclareAlias2("boundary.medium.state.T", "Temperature of medium [K|degC]", \
"boundary.T", 1, 7, 1231, 0)
DeclareVariable("boundary.medium.preferredMediumStates", "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("boundary.medium.standardOrderComponents", "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("boundary.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("boundary.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("boundary.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -1E+60,1E+60,0.0,0,776)
DeclareAlias2("boundary.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "boundary.p", 1, 7, 1230, 4)
DeclareVariable("boundary.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,521)
DeclareVariable("boundary.flowDirection", "Allowed flow direction [:#(type=Modelica.Fluid.Types.PortFlowDirection)]",\
 3, 1.0,3.0,0.0,0,2565)
DeclareVariable("boundary.use_p_in", "Get the pressure from the input connector [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.use_T_in", "Get the temperature from the input connector [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.use_X_in", "Get the composition from the input connector [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("boundary.use_C_in", "Get the trace substances from the input connector [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareParameter("boundary.p", "Fixed value of pressure [Pa|bar]", 1230, 300000,\
 0.0,100000000.0,100000.0,0,560)
DeclareParameter("boundary.T", "Fixed value of temperature [K|degC]", 1231, \
325.4, 1.0,10000.0,300.0,0,560)
DeclareParameter("boundary.X[1]", "Fixed value of composition [kg/kg]", 1232, 1,\
 0.0,1.0,0.1,0,560)
DeclareAlias2("boundary.p_in_internal", "Needed to connect to conditional connector [Pa]",\
 "boundary.p", 1, 7, 1230, 1024)
DeclareAlias2("boundary.T_in_internal", "Needed to connect to conditional connector [K]",\
 "boundary.T", 1, 7, 1231, 1024)
DeclareVariable("boundary.X_in_internal[1]", "Needed to connect to conditional connector [1]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("add.u1", "Connector of Real input signal 1", 273.15, 0.0,0.0,\
0.0,0,513)
DeclareAlias2("add.u2", "Connector of Real input signal 2", "temp_sec_in1.a", 1,\
 5, 1913, 0)
DeclareAlias2("add.y", "Connector of Real output signal", "B1.contr_vars_real[1]", 1,\
 5, 46, 0)
DeclareParameter("add.k1", "Gain of input signal 1", 1233, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("add.k2", "Gain of input signal 2", 1234, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("realExpression.y", "Value of Real output", 273.15, 0.0,0.0,0.0,\
0,513)
DeclareVariable("realExpression1.y", "Value of Real output", 273.15, 0.0,0.0,0.0,\
0,513)
DeclareVariable("add1.u1", "Connector of Real input signal 1", 273.15, 0.0,0.0,\
0.0,0,513)
DeclareAlias2("add1.u2", "Connector of Real input signal 2", "temp_sec_in2.a", 1,\
 5, 4064, 0)
DeclareAlias2("add1.y", "Connector of Real output signal", "B2.contr_vars_real[1]", 1,\
 5, 2196, 0)
DeclareParameter("add1.k1", "Gain of input signal 1", 1235, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("add1.k2", "Gain of input signal 2", 1236, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("realExpression2.y", "Value of Real output", 273.15, 0.0,0.0,0.0,\
0,513)
DeclareVariable("add2.u1", "Connector of Real input signal 1", 273.15, 0.0,0.0,\
0.0,0,513)
DeclareAlias2("add2.u2", "Connector of Real input signal 2", "temp_sec_in3.a", 1,\
 5, 5973, 0)
DeclareAlias2("add2.y", "Connector of Real output signal", "B3.contr_vars_real[1]", 1,\
 5, 4106, 0)
DeclareParameter("add2.k1", "Gain of input signal 1", 1237, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("add2.k2", "Gain of input signal 2", 1238, 1, 0.0,0.0,0.0,0,560)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.pump_sec_cons.port_a.h_outflow", 1, 5, 291, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.pump_sec_cons.vol.dynBal.U", 1, 1, 44, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]", \
"B1.pump_sec_cons.vol.dynBal.m", 1, 5, 6742, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_sec_cons.port_a.m_flow", 1, 5, 290, 1156)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.bou.p", 1, 7, 191, 1028)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_sec_cons.port_a.h_outflow", 1, 5, 291, 1028)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_sec_cons.port_a.m_flow", -1, 5, 290, 1156)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.bou.p", 1, 7, 191, 1028)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_sec_cons.port_a.h_outflow", 1, 5, 291, 1028)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.bou.p", 1, 7, 191, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B1.pump_sec_cons.port_a.h_outflow", 1, 5, 291, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B1.pump_sec_cons.port_a.h_outflow", 1, 5, 291, 1024)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.bou.p", 1, 7, 191, 1024)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B1.pump_sec_cons.vol.dynBal.medium.T", 1, 5, 6733, 1024)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B1.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]", 44,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B1.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 44, 1024)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B1.pump_sec_cons.senRelPre.p_rel", 1, 5, 403, 1024)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.pump_sec_prod.port_a.h_outflow", 1, 5, 487, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.pump_sec_prod.vol.dynBal.U", 1, 1, 45, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]", \
"B1.pump_sec_prod.vol.dynBal.m", 1, 5, 6781, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_sec_prod.port_a.m_flow", 1, 5, 486, 1156)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.heat_exchanger.port_a2.p", 1, 5, 69, 1028)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_sec_prod.port_a.h_outflow", 1, 5, 487, 1028)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_sec_prod.port_a.m_flow", -1, 5, 486, 1156)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.heat_exchanger.port_a2.p", 1, 5, 69, 1028)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_sec_prod.port_a.h_outflow", 1, 5, 487, 1028)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.heat_exchanger.port_a2.p", 1, 5, 69, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B1.pump_sec_prod.port_a.h_outflow", 1, 5, 487, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B1.pump_sec_prod.port_a.h_outflow", 1, 5, 487, 1024)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.heat_exchanger.port_a2.p", 1, 5, 69, 1024)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B1.pump_sec_prod.vol.dynBal.medium.T", 1, 5, 6772, 1024)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B1.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]", 45,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B1.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 45, 1024)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B1.pump_sec_prod.senRelPre.p_rel", 1, 5, 599, 1024)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.pump_prim_prod.port_a.h_outflow", 1, 5, 792, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.pump_prim_prod.vol.dynBal.U", 1, 1, 46, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B1.pump_prim_prod.vol.dynBal.m", 1, 5, 6820, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_prim_prod.port_a.m_flow", 1, 5, 790, 1156)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.pump_prim_prod.port_a.p", 1, 5, 791, 1028)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_prim_prod.port_a.h_outflow", 1, 5, 792, 1028)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B1.pump_prim_prod.port_a.m_flow", -1, 5, 790, 1156)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B1.pump_prim_prod.port_a.p", 1, 5, 791, 1028)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pump_prim_prod.port_a.h_outflow", 1, 5, 792, 1028)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.pump_prim_prod.port_a.p", 1, 5, 791, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B1.pump_prim_prod.port_a.h_outflow", 1, 5, 792, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B1.pump_prim_prod.port_a.h_outflow", 1, 5, 792, 1024)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B1.pump_prim_prod.port_a.p", 1, 5, 791, 1024)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B1.pump_prim_prod.vol.dynBal.medium.T", 1, 5, 6811, 1024)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B1.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]", 46,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B1.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 46, 1024)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]", \
"B1.pump_prim_prod.y_actual", 1, 5, 843, 1024)
DeclareAlias2("B1.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "B1.pump_prim_prod.dpMachine", 1, 5, 848, 1024)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"B1.ideal_house.control_volume.Q_flow", 1, 5, 1192, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.ideal_house.port_hot.h_outflow", 1, 5, 1193, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.ideal_house.control_volume.vol.dynBal.U", 1, 1, 47, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B1.ideal_house.control_volume.vol.dynBal.m", 1, 5, 6858, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.heat_exchanger.port_a2.m_flow", 1, 5, 68, 1156)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.bou.p", 1, 7, 191,\
 1028)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.ideal_house.port_hot.h_outflow", 1, 5, 1193, 1028)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.heat_exchanger.port_a2.m_flow", -1, 5, 68, 1156)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.bou.p", 1, 7, 191,\
 1028)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.ideal_house.port_hot.h_outflow", 1, 5, 1193, 1028)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B1.bou.p", 1, 7, 191, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B1.ideal_house.port_hot.h_outflow", 1, 5,\
 1193, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B1.ideal_house.port_hot.h_outflow", 1,\
 5, 1193, 1024)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B1.bou.p", 1, 7, 191, 1024)
DeclareAlias2("B1.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B1.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 6849, 1024)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B1.ideal_house.control_volume.vol.dynBal.U", "Internal energy of fluid [J]",\
 47, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.ideal_house.control_volume.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.m_dot_sens_prim.port_a.h_outflow", 1, 5, 1253, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", 1, 1, 48, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", 1, 5, 6898, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.hot_prim.m_flow", 1, 5, 1121, 1156)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 1298, 1028)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.m_dot_sens_prim.port_a.h_outflow", 1, 5, 1253, 1028)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.hot_prim.m_flow", -1, 5, 1121, 1156)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 1298, 1028)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.m_dot_sens_prim.port_a.h_outflow", 1, 5, 1253, 1028)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B1.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 1298, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B1.m_dot_sens_prim.port_a.h_outflow", 1, 5,\
 1253, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B1.m_dot_sens_prim.port_a.h_outflow", 1,\
 5, 1253, 1024)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B1.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 1298, 1024)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 6889, 1024)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 48, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 48, 1024)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_hot.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B1.pipe_prim_cold.port_b.h_outflow", 1, 5, 1527, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", 1, 1, 49, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", 1, 5, 6937, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 1156)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 1539, 1028)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pipe_prim_cold.port_b.h_outflow", 1, 5, 1527, 1028)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 1156)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B1.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 1539, 1028)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B1.pipe_prim_cold.port_b.h_outflow", 1, 5, 1527, 1028)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B1.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 1539, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B1.pipe_prim_cold.port_b.h_outflow", 1, 5,\
 1527, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B1.pipe_prim_cold.port_b.h_outflow", 1,\
 5, 1527, 1024)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B1.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 1539, 1024)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 6928, 1024)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 49, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 49, 1024)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B1.pipe_prim_cold.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("Ctrl1.PID_prim_cons.addD.u1", "Connector of Real input signal 1",\
 "Ctrl1.PIDin_prim_cons_des_weighted", 1, 5, 1779, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.addD.u2", "Connector of Real input signal 2",\
 "Ctrl1.PIDin_prim_cons_is_weighted", 1, 5, 1778, 0)
DeclareVariable("Ctrl1.PID_prim_cons.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_prim_cons.addD.k2", "Gain of input signal 2", 1239, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl1.PID_prim_cons.I.y", "Connector of Real output signal", 50, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl1.PID_prim_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_prim_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_prim_cons.D.y_start", "Initial value of output (= state)",\
 1240, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_prim_cons.D.u", "Connector of Real input signal", \
"Ctrl1.PID_prim_cons.addD.y", 1, 5, 6953, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.D.y", "Connector of Real output signal", \
"Ctrl1.PID_prim_cons.addPID.u2", 1, 5, 1811, 0)
DeclareState("Ctrl1.PID_prim_cons.D.x", "State of block", 51, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_prim_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl1.PID_prim_cons.addI.k1", "Gain of input signal 1", 1241, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_cons.addI.k2", "Gain of input signal 2", 1242, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_cons.addI.k3", "Gain of input signal 3", 1243, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Ctrl1.PIDin_prim_cons_des_weighted", 1, 5, 1779, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Ctrl1.PIDin_prim_cons_is_weighted", 1, 5, 1778, 0)
DeclareVariable("Ctrl1.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl1.PID_prim_cons.addI.y", "Connector of Real output signal", \
"Ctrl1.PID_prim_cons.I.u", 1, 5, 6960, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl1.PID_prim_cons.y", 1, 5, 1793, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl1.PID_prim_cons.limiter.u", 1, 5, 1816, 0)
DeclareVariable("Ctrl1.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl1.PID_prim_cons.addSat.k1", "Gain of input signal 1", 1244,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_cons.addSat.k2", "Gain of input signal 2", 1245,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl1.PID_prim_cons.gainTrack.u", "Input signal connector", \
"Ctrl1.PID_prim_cons.addSat.y", 1, 5, 6969, 0)
DeclareAlias2("Ctrl1.PID_prim_cons.gainTrack.y", "Output signal connector", \
"Ctrl1.PID_prim_cons.addI.u3", 1, 5, 6968, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.addD.u1", "Connector of Real input signal 1", \
"Ctrl1.PIDin_sec_cons_des_weighted", 1, 5, 1783, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.addD.u2", "Connector of Real input signal 2", \
"Ctrl1.PIDin_sec_cons_is_weighted", 1, 5, 1782, 0)
DeclareVariable("Ctrl1.PID_sec_cons.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_sec_cons.addD.k2", "Gain of input signal 2", 1246, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl1.PID_sec_cons.I.y", "Connector of Real output signal", 52, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl1.PID_sec_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_sec_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_sec_cons.D.y_start", "Initial value of output (= state)",\
 1247, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_sec_cons.D.u", "Connector of Real input signal", \
"Ctrl1.PID_sec_cons.addD.y", 1, 5, 6971, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.D.y", "Connector of Real output signal", \
"Ctrl1.PID_sec_cons.addPID.u2", 1, 5, 1839, 0)
DeclareState("Ctrl1.PID_sec_cons.D.x", "State of block", 53, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_sec_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl1.PID_sec_cons.addI.k1", "Gain of input signal 1", 1248, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_cons.addI.k2", "Gain of input signal 2", 1249, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_cons.addI.k3", "Gain of input signal 3", 1250, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_sec_cons.addI.u1", "Connector of Real input signal 1", \
"Ctrl1.PIDin_sec_cons_des_weighted", 1, 5, 1783, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.addI.u2", "Connector of Real input signal 2", \
"Ctrl1.PIDin_sec_cons_is_weighted", 1, 5, 1782, 0)
DeclareVariable("Ctrl1.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl1.PID_sec_cons.addI.y", "Connector of Real output signal", \
"Ctrl1.PID_sec_cons.I.u", 1, 5, 6978, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl1.PID_sec_cons.y", 1, 5, 1820, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl1.PID_sec_cons.limiter.u", 1, 5, 1844, 0)
DeclareVariable("Ctrl1.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl1.PID_sec_cons.addSat.k1", "Gain of input signal 1", 1251,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_cons.addSat.k2", "Gain of input signal 2", 1252,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl1.PID_sec_cons.gainTrack.u", "Input signal connector", \
"Ctrl1.PID_sec_cons.addSat.y", 1, 5, 6987, 0)
DeclareAlias2("Ctrl1.PID_sec_cons.gainTrack.y", "Output signal connector", \
"Ctrl1.PID_sec_cons.addI.u3", 1, 5, 6986, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.addD.u1", "Connector of Real input signal 1",\
 "Ctrl1.PIDin_prim_prod_des_weighted", 1, 5, 1781, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.addD.u2", "Connector of Real input signal 2",\
 "Ctrl1.PIDin_prim_prod_is_weighted", 1, 5, 1780, 0)
DeclareVariable("Ctrl1.PID_prim_prod.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_prim_prod.addD.k2", "Gain of input signal 2", 1253, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl1.PID_prim_prod.I.y", "Connector of Real output signal", 54, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl1.PID_prim_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl1.PID_prim_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_prim_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_prim_prod.D.y_start", "Initial value of output (= state)",\
 1254, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_prim_prod.D.u", "Connector of Real input signal", \
"Ctrl1.PID_prim_prod.addD.y", 1, 5, 6989, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.D.y", "Connector of Real output signal", \
"Ctrl1.PID_prim_prod.addPID.u2", 1, 5, 1866, 0)
DeclareState("Ctrl1.PID_prim_prod.D.x", "State of block", 55, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_prim_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_prim_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl1.PID_prim_prod.addI.k1", "Gain of input signal 1", 1255, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_prod.addI.k2", "Gain of input signal 2", 1256, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_prod.addI.k3", "Gain of input signal 3", 1257, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Ctrl1.PIDin_prim_prod_des_weighted", 1, 5, 1781, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Ctrl1.PIDin_prim_prod_is_weighted", 1, 5, 1780, 0)
DeclareVariable("Ctrl1.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl1.PID_prim_prod.addI.y", "Connector of Real output signal", \
"Ctrl1.PID_prim_prod.I.u", 1, 5, 6996, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl1.PID_prim_prod.y", 1, 5, 1848, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl1.PID_prim_prod.limiter.u", 1, 5, 1871, 0)
DeclareVariable("Ctrl1.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl1.PID_prim_prod.addSat.k1", "Gain of input signal 1", 1258,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_prim_prod.addSat.k2", "Gain of input signal 2", 1259,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl1.PID_prim_prod.gainTrack.u", "Input signal connector", \
"Ctrl1.PID_prim_prod.addSat.y", 1, 5, 7005, 0)
DeclareAlias2("Ctrl1.PID_prim_prod.gainTrack.y", "Output signal connector", \
"Ctrl1.PID_prim_prod.addI.u3", 1, 5, 7004, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.addD.u1", "Connector of Real input signal 1", \
"Ctrl1.PIDin_sec_prod_des_weighted", 1, 5, 1785, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.addD.u2", "Connector of Real input signal 2", \
"Ctrl1.PIDin_sec_prod_is_weighted", 1, 5, 1784, 0)
DeclareVariable("Ctrl1.PID_sec_prod.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_sec_prod.addD.k2", "Gain of input signal 2", 1260, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl1.PID_sec_prod.I.y", "Connector of Real output signal", 56, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl1.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl1.PID_sec_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl1.PID_sec_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl1.PID_sec_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl1.PID_sec_prod.D.y_start", "Initial value of output (= state)",\
 1261, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_sec_prod.D.u", "Connector of Real input signal", \
"Ctrl1.PID_sec_prod.addD.y", 1, 5, 7007, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.D.y", "Connector of Real output signal", \
"Ctrl1.PID_sec_prod.addPID.u2", 1, 5, 1894, 0)
DeclareState("Ctrl1.PID_sec_prod.D.x", "State of block", 57, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl1.PID_sec_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl1.PID_sec_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl1.PID_sec_prod.addI.k1", "Gain of input signal 1", 1262, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_prod.addI.k2", "Gain of input signal 2", 1263, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_prod.addI.k3", "Gain of input signal 3", 1264, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl1.PID_sec_prod.addI.u1", "Connector of Real input signal 1", \
"Ctrl1.PIDin_sec_prod_des_weighted", 1, 5, 1785, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.addI.u2", "Connector of Real input signal 2", \
"Ctrl1.PIDin_sec_prod_is_weighted", 1, 5, 1784, 0)
DeclareVariable("Ctrl1.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl1.PID_sec_prod.addI.y", "Connector of Real output signal", \
"Ctrl1.PID_sec_prod.I.u", 1, 5, 7014, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl1.PID_sec_prod.y", 1, 5, 1875, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl1.PID_sec_prod.limiter.u", 1, 5, 1899, 0)
DeclareVariable("Ctrl1.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl1.PID_sec_prod.addSat.k1", "Gain of input signal 1", 1265,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl1.PID_sec_prod.addSat.k2", "Gain of input signal 2", 1266,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl1.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl1.PID_sec_prod.gainTrack.u", "Input signal connector", \
"Ctrl1.PID_sec_prod.addSat.y", 1, 5, 7023, 0)
DeclareAlias2("Ctrl1.PID_sec_prod.gainTrack.y", "Output signal connector", \
"Ctrl1.PID_sec_prod.addI.u3", 1, 5, 7022, 0)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "pipe_hot12.port_b.h_outflow", 1, 5, 1922, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "pipe_hot12.plugFlowPipe.vol.dynBal.U", 1, 1, 58, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "pipe_hot12.plugFlowPipe.vol.dynBal.m", 1, 5, 7048, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 1156)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_hot12.plugFlowPipe.ports_b[1].p", 1, 5, 1931, 1028)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_hot12.port_b.h_outflow", 1, 5, 1922, 1028)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 1156)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_hot12.plugFlowPipe.ports_b[1].p", 1, 5, 1931, 1028)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_hot12.port_b.h_outflow", 1, 5, 1922, 1028)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_hot12.plugFlowPipe.ports_b[1].p", 1, 5, 1931, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "pipe_hot12.port_b.h_outflow", 1, 5, 1922, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "pipe_hot12.port_b.h_outflow", 1, 5, 1922, 1024)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "pipe_hot12.plugFlowPipe.ports_b[1].p", 1,\
 5, 1931, 1024)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "pipe_hot12.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7039, 1024)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("pipe_hot12.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 58, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("pipe_hot12.plugFlowPipe.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_hot12.plugFlowPipe.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "pipe_hot12.plugFlowPipe.vol.dynBal.der(U)", 1, 6, 58, 1024)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot12.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.pump_sec_cons.port_a.h_outflow", 1, 5, 2441, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.pump_sec_cons.vol.dynBal.U", 1, 1, 59, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]", \
"B2.pump_sec_cons.vol.dynBal.m", 1, 5, 7087, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_sec_cons.port_a.m_flow", 1, 5, 2440, 1156)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.bou.p", 1, 7, 588, 1028)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_sec_cons.port_a.h_outflow", 1, 5, 2441, 1028)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_sec_cons.port_a.m_flow", -1, 5, 2440, 1156)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.bou.p", 1, 7, 588, 1028)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_sec_cons.port_a.h_outflow", 1, 5, 2441, 1028)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.bou.p", 1, 7, 588, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B2.pump_sec_cons.port_a.h_outflow", 1, 5, 2441, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B2.pump_sec_cons.port_a.h_outflow", 1, 5, 2441, 1024)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.bou.p", 1, 7, 588, 1024)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B2.pump_sec_cons.vol.dynBal.medium.T", 1, 5, 7078, 1024)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B2.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]", 59,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B2.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 59, 1024)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B2.pump_sec_cons.senRelPre.p_rel", 1, 5, 2553, 1024)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.pump_sec_prod.port_a.h_outflow", 1, 5, 2637, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.pump_sec_prod.vol.dynBal.U", 1, 1, 60, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]", \
"B2.pump_sec_prod.vol.dynBal.m", 1, 5, 7126, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_sec_prod.port_a.m_flow", 1, 5, 2636, 1156)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.heat_exchanger.port_a2.p", 1, 5, 2219, 1028)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_sec_prod.port_a.h_outflow", 1, 5, 2637, 1028)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_sec_prod.port_a.m_flow", -1, 5, 2636, 1156)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.heat_exchanger.port_a2.p", 1, 5, 2219, 1028)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_sec_prod.port_a.h_outflow", 1, 5, 2637, 1028)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.heat_exchanger.port_a2.p", 1, 5, 2219, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B2.pump_sec_prod.port_a.h_outflow", 1, 5, 2637, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B2.pump_sec_prod.port_a.h_outflow", 1, 5, 2637, 1024)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.heat_exchanger.port_a2.p", 1, 5, 2219, 1024)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B2.pump_sec_prod.vol.dynBal.medium.T", 1, 5, 7117, 1024)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B2.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]", 60,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B2.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 60, 1024)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B2.pump_sec_prod.senRelPre.p_rel", 1, 5, 2749, 1024)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.pump_prim_prod.port_a.h_outflow", 1, 5, 2942, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.pump_prim_prod.vol.dynBal.U", 1, 1, 61, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B2.pump_prim_prod.vol.dynBal.m", 1, 5, 7165, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_prim_prod.port_a.m_flow", 1, 5, 2940, 1156)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.pump_prim_prod.port_a.p", 1, 5, 2941, 1028)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_prim_prod.port_a.h_outflow", 1, 5, 2942, 1028)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B2.pump_prim_prod.port_a.m_flow", -1, 5, 2940, 1156)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B2.pump_prim_prod.port_a.p", 1, 5, 2941, 1028)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pump_prim_prod.port_a.h_outflow", 1, 5, 2942, 1028)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.pump_prim_prod.port_a.p", 1, 5, 2941, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B2.pump_prim_prod.port_a.h_outflow", 1, 5, 2942, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B2.pump_prim_prod.port_a.h_outflow", 1, 5, 2942, 1024)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B2.pump_prim_prod.port_a.p", 1, 5, 2941, 1024)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B2.pump_prim_prod.vol.dynBal.medium.T", 1, 5, 7156, 1024)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B2.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]", 61,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B2.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 61, 1024)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]", \
"B2.pump_prim_prod.y_actual", 1, 5, 2993, 1024)
DeclareAlias2("B2.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "B2.pump_prim_prod.dpMachine", 1, 5, 2998, 1024)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"B2.ideal_house.control_volume.Q_flow", 1, 5, 3342, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.ideal_house.port_hot.h_outflow", 1, 5, 3343, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.ideal_house.control_volume.vol.dynBal.U", 1, 1, 62, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B2.ideal_house.control_volume.vol.dynBal.m", 1, 5, 7203, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.heat_exchanger.port_a2.m_flow", 1, 5, 2218, 1156)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.bou.p", 1, 7, 588,\
 1028)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.ideal_house.port_hot.h_outflow", 1, 5, 3343, 1028)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.heat_exchanger.port_a2.m_flow", -1, 5, 2218, 1156)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.bou.p", 1, 7, 588,\
 1028)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.ideal_house.port_hot.h_outflow", 1, 5, 3343, 1028)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B2.bou.p", 1, 7, 588, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B2.ideal_house.port_hot.h_outflow", 1, 5,\
 3343, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B2.ideal_house.port_hot.h_outflow", 1,\
 5, 3343, 1024)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B2.bou.p", 1, 7, 588, 1024)
DeclareAlias2("B2.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B2.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 7194, 1024)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B2.ideal_house.control_volume.vol.dynBal.U", "Internal energy of fluid [J]",\
 62, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.ideal_house.control_volume.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.m_dot_sens_prim.port_a.h_outflow", 1, 5, 3403, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", 1, 1, 63, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", 1, 5, 7243, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.hot_prim.m_flow", 1, 5, 3271, 1156)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 3448, 1028)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.m_dot_sens_prim.port_a.h_outflow", 1, 5, 3403, 1028)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.hot_prim.m_flow", -1, 5, 3271, 1156)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 3448, 1028)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.m_dot_sens_prim.port_a.h_outflow", 1, 5, 3403, 1028)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B2.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 3448, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B2.m_dot_sens_prim.port_a.h_outflow", 1, 5,\
 3403, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B2.m_dot_sens_prim.port_a.h_outflow", 1,\
 5, 3403, 1024)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B2.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 3448, 1024)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7234, 1024)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 63, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 63, 1024)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_hot.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B2.pipe_prim_cold.port_b.h_outflow", 1, 5, 3677, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", 1, 1, 64, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", 1, 5, 7282, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.cold_prim.m_flow", -1, 5, 3268, 1156)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 3689, 1028)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pipe_prim_cold.port_b.h_outflow", 1, 5, 3677, 1028)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B2.cold_prim.m_flow", 1, 5, 3268, 1156)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B2.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 3689, 1028)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B2.pipe_prim_cold.port_b.h_outflow", 1, 5, 3677, 1028)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B2.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 3689, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B2.pipe_prim_cold.port_b.h_outflow", 1, 5,\
 3677, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B2.pipe_prim_cold.port_b.h_outflow", 1,\
 5, 3677, 1024)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B2.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 3689, 1024)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7273, 1024)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 64, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 64, 1024)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B2.pipe_prim_cold.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("Ctrl2.PID_prim_cons.addD.u1", "Connector of Real input signal 1",\
 "Ctrl2.PIDin_prim_cons_des_weighted", 1, 5, 3930, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.addD.u2", "Connector of Real input signal 2",\
 "Ctrl2.PIDin_prim_cons_is_weighted", 1, 5, 3929, 0)
DeclareVariable("Ctrl2.PID_prim_cons.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_prim_cons.addD.k2", "Gain of input signal 2", 1267, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl2.PID_prim_cons.I.y", "Connector of Real output signal", 65, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl2.PID_prim_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_prim_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_prim_cons.D.y_start", "Initial value of output (= state)",\
 1268, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_prim_cons.D.u", "Connector of Real input signal", \
"Ctrl2.PID_prim_cons.addD.y", 1, 5, 7298, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.D.y", "Connector of Real output signal", \
"Ctrl2.PID_prim_cons.addPID.u2", 1, 5, 3962, 0)
DeclareState("Ctrl2.PID_prim_cons.D.x", "State of block", 66, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_prim_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl2.PID_prim_cons.addI.k1", "Gain of input signal 1", 1269, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_cons.addI.k2", "Gain of input signal 2", 1270, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_cons.addI.k3", "Gain of input signal 3", 1271, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Ctrl2.PIDin_prim_cons_des_weighted", 1, 5, 3930, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Ctrl2.PIDin_prim_cons_is_weighted", 1, 5, 3929, 0)
DeclareVariable("Ctrl2.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl2.PID_prim_cons.addI.y", "Connector of Real output signal", \
"Ctrl2.PID_prim_cons.I.u", 1, 5, 7305, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl2.PID_prim_cons.y", 1, 5, 3944, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl2.PID_prim_cons.limiter.u", 1, 5, 3967, 0)
DeclareVariable("Ctrl2.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl2.PID_prim_cons.addSat.k1", "Gain of input signal 1", 1272,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_cons.addSat.k2", "Gain of input signal 2", 1273,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl2.PID_prim_cons.gainTrack.u", "Input signal connector", \
"Ctrl2.PID_prim_cons.addSat.y", 1, 5, 7314, 0)
DeclareAlias2("Ctrl2.PID_prim_cons.gainTrack.y", "Output signal connector", \
"Ctrl2.PID_prim_cons.addI.u3", 1, 5, 7313, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.addD.u1", "Connector of Real input signal 1", \
"Ctrl2.PIDin_sec_cons_des_weighted", 1, 5, 3934, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.addD.u2", "Connector of Real input signal 2", \
"Ctrl2.PIDin_sec_cons_is_weighted", 1, 5, 3933, 0)
DeclareVariable("Ctrl2.PID_sec_cons.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_sec_cons.addD.k2", "Gain of input signal 2", 1274, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl2.PID_sec_cons.I.y", "Connector of Real output signal", 67, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl2.PID_sec_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_sec_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_sec_cons.D.y_start", "Initial value of output (= state)",\
 1275, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_sec_cons.D.u", "Connector of Real input signal", \
"Ctrl2.PID_sec_cons.addD.y", 1, 5, 7316, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.D.y", "Connector of Real output signal", \
"Ctrl2.PID_sec_cons.addPID.u2", 1, 5, 3990, 0)
DeclareState("Ctrl2.PID_sec_cons.D.x", "State of block", 68, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_sec_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl2.PID_sec_cons.addI.k1", "Gain of input signal 1", 1276, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_cons.addI.k2", "Gain of input signal 2", 1277, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_cons.addI.k3", "Gain of input signal 3", 1278, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_sec_cons.addI.u1", "Connector of Real input signal 1", \
"Ctrl2.PIDin_sec_cons_des_weighted", 1, 5, 3934, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.addI.u2", "Connector of Real input signal 2", \
"Ctrl2.PIDin_sec_cons_is_weighted", 1, 5, 3933, 0)
DeclareVariable("Ctrl2.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl2.PID_sec_cons.addI.y", "Connector of Real output signal", \
"Ctrl2.PID_sec_cons.I.u", 1, 5, 7323, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl2.PID_sec_cons.y", 1, 5, 3971, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl2.PID_sec_cons.limiter.u", 1, 5, 3995, 0)
DeclareVariable("Ctrl2.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl2.PID_sec_cons.addSat.k1", "Gain of input signal 1", 1279,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_cons.addSat.k2", "Gain of input signal 2", 1280,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl2.PID_sec_cons.gainTrack.u", "Input signal connector", \
"Ctrl2.PID_sec_cons.addSat.y", 1, 5, 7332, 0)
DeclareAlias2("Ctrl2.PID_sec_cons.gainTrack.y", "Output signal connector", \
"Ctrl2.PID_sec_cons.addI.u3", 1, 5, 7331, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.addD.u1", "Connector of Real input signal 1",\
 "Ctrl2.PIDin_prim_prod_des_weighted", 1, 5, 3932, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.addD.u2", "Connector of Real input signal 2",\
 "Ctrl2.PIDin_prim_prod_is_weighted", 1, 5, 3931, 0)
DeclareVariable("Ctrl2.PID_prim_prod.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_prim_prod.addD.k2", "Gain of input signal 2", 1281, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl2.PID_prim_prod.I.y", "Connector of Real output signal", 69, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl2.PID_prim_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl2.PID_prim_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_prim_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_prim_prod.D.y_start", "Initial value of output (= state)",\
 1282, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_prim_prod.D.u", "Connector of Real input signal", \
"Ctrl2.PID_prim_prod.addD.y", 1, 5, 7334, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.D.y", "Connector of Real output signal", \
"Ctrl2.PID_prim_prod.addPID.u2", 1, 5, 4017, 0)
DeclareState("Ctrl2.PID_prim_prod.D.x", "State of block", 70, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_prim_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_prim_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl2.PID_prim_prod.addI.k1", "Gain of input signal 1", 1283, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_prod.addI.k2", "Gain of input signal 2", 1284, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_prod.addI.k3", "Gain of input signal 3", 1285, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Ctrl2.PIDin_prim_prod_des_weighted", 1, 5, 3932, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Ctrl2.PIDin_prim_prod_is_weighted", 1, 5, 3931, 0)
DeclareVariable("Ctrl2.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl2.PID_prim_prod.addI.y", "Connector of Real output signal", \
"Ctrl2.PID_prim_prod.I.u", 1, 5, 7341, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl2.PID_prim_prod.y", 1, 5, 3999, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl2.PID_prim_prod.limiter.u", 1, 5, 4022, 0)
DeclareVariable("Ctrl2.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl2.PID_prim_prod.addSat.k1", "Gain of input signal 1", 1286,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_prim_prod.addSat.k2", "Gain of input signal 2", 1287,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl2.PID_prim_prod.gainTrack.u", "Input signal connector", \
"Ctrl2.PID_prim_prod.addSat.y", 1, 5, 7350, 0)
DeclareAlias2("Ctrl2.PID_prim_prod.gainTrack.y", "Output signal connector", \
"Ctrl2.PID_prim_prod.addI.u3", 1, 5, 7349, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.addD.u1", "Connector of Real input signal 1", \
"Ctrl2.PIDin_sec_prod_des_weighted", 1, 5, 3936, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.addD.u2", "Connector of Real input signal 2", \
"Ctrl2.PIDin_sec_prod_is_weighted", 1, 5, 3935, 0)
DeclareVariable("Ctrl2.PID_sec_prod.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_sec_prod.addD.k2", "Gain of input signal 2", 1288, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl2.PID_sec_prod.I.y", "Connector of Real output signal", 71, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl2.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl2.PID_sec_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl2.PID_sec_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl2.PID_sec_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl2.PID_sec_prod.D.y_start", "Initial value of output (= state)",\
 1289, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_sec_prod.D.u", "Connector of Real input signal", \
"Ctrl2.PID_sec_prod.addD.y", 1, 5, 7352, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.D.y", "Connector of Real output signal", \
"Ctrl2.PID_sec_prod.addPID.u2", 1, 5, 4045, 0)
DeclareState("Ctrl2.PID_sec_prod.D.x", "State of block", 72, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl2.PID_sec_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl2.PID_sec_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl2.PID_sec_prod.addI.k1", "Gain of input signal 1", 1290, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_prod.addI.k2", "Gain of input signal 2", 1291, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_prod.addI.k3", "Gain of input signal 3", 1292, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl2.PID_sec_prod.addI.u1", "Connector of Real input signal 1", \
"Ctrl2.PIDin_sec_prod_des_weighted", 1, 5, 3936, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.addI.u2", "Connector of Real input signal 2", \
"Ctrl2.PIDin_sec_prod_is_weighted", 1, 5, 3935, 0)
DeclareVariable("Ctrl2.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl2.PID_sec_prod.addI.y", "Connector of Real output signal", \
"Ctrl2.PID_sec_prod.I.u", 1, 5, 7359, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl2.PID_sec_prod.y", 1, 5, 4026, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl2.PID_sec_prod.limiter.u", 1, 5, 4050, 0)
DeclareVariable("Ctrl2.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl2.PID_sec_prod.addSat.k1", "Gain of input signal 1", 1293,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl2.PID_sec_prod.addSat.k2", "Gain of input signal 2", 1294,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl2.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl2.PID_sec_prod.gainTrack.u", "Input signal connector", \
"Ctrl2.PID_sec_prod.addSat.y", 1, 5, 7368, 0)
DeclareAlias2("Ctrl2.PID_sec_prod.gainTrack.y", "Output signal connector", \
"Ctrl2.PID_sec_prod.addI.u3", 1, 5, 7367, 0)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.pump_sec_cons.port_a.h_outflow", 1, 5, 4351, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.pump_sec_cons.vol.dynBal.U", 1, 1, 73, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]", \
"B3.pump_sec_cons.vol.dynBal.m", 1, 5, 7393, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_sec_cons.port_a.m_flow", 1, 5, 4350, 1156)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.bou.p", 1, 7, 953, 1028)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_sec_cons.port_a.h_outflow", 1, 5, 4351, 1028)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_sec_cons.port_a.m_flow", -1, 5, 4350, 1156)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.bou.p", 1, 7, 953, 1028)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_sec_cons.port_a.h_outflow", 1, 5, 4351, 1028)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.bou.p", 1, 7, 953, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B3.pump_sec_cons.port_a.h_outflow", 1, 5, 4351, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B3.pump_sec_cons.port_a.h_outflow", 1, 5, 4351, 1024)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.bou.p", 1, 7, 953, 1024)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B3.pump_sec_cons.vol.dynBal.medium.T", 1, 5, 7384, 1024)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B3.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]", 73,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B3.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 73, 1024)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B3.pump_sec_cons.senRelPre.p_rel", 1, 5, 4463, 1024)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.pump_sec_prod.port_a.h_outflow", 1, 5, 4547, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.pump_sec_prod.vol.dynBal.U", 1, 1, 74, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]", \
"B3.pump_sec_prod.vol.dynBal.m", 1, 5, 7432, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_sec_prod.port_a.m_flow", 1, 5, 4546, 1156)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.heat_exchanger.port_a2.p", 1, 5, 4129, 1028)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[1].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_sec_prod.port_a.h_outflow", 1, 5, 4547, 1028)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_sec_prod.port_a.m_flow", -1, 5, 4546, 1156)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.heat_exchanger.port_a2.p", 1, 5, 4129, 1028)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.ports[2].h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_sec_prod.port_a.h_outflow", 1, 5, 4547, 1028)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.heat_exchanger.port_a2.p", 1, 5, 4129, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B3.pump_sec_prod.port_a.h_outflow", 1, 5, 4547, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B3.pump_sec_prod.port_a.h_outflow", 1, 5, 4547, 1024)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.heat_exchanger.port_a2.p", 1, 5, 4129, 1024)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B3.pump_sec_prod.vol.dynBal.medium.T", 1, 5, 7423, 1024)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B3.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]", 74,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B3.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 74, 1024)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "B3.pump_sec_prod.senRelPre.p_rel", 1, 5, 4659, 1024)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.energyDynamics", "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.massDynamics", "Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.traceDynamics", "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.X_start[1]", "Start value of mass fractions m_i/m [kg/kg]",\
 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.initialize_p", "= true to set up initial equations for pressure [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.use_mWat_flow", "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.use_C_flow", "Set to true to enable input connector for trace substance [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.pump_prim_prod.port_a.h_outflow", 1, 5, 4852, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.pump_prim_prod.vol.dynBal.U", 1, 1, 75, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B3.pump_prim_prod.vol.dynBal.m", 1, 5, 7471, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[1].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_prim_prod.port_a.m_flow", 1, 5, 4850, 1156)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.pump_prim_prod.port_a.p", 1, 5, 4851, 1028)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_prim_prod.port_a.h_outflow", 1, 5, 4852, 1028)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[2].m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "B3.pump_prim_prod.port_a.m_flow", -1, 5, 4850, 1156)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "B3.pump_prim_prod.port_a.p", 1, 5, 4851, 1028)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pump_prim_prod.port_a.h_outflow", 1, 5, 4852, 1028)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.pump_prim_prod.port_a.p", 1, 5, 4851, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "B3.pump_prim_prod.port_a.h_outflow", 1, 5, 4852, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "B3.pump_prim_prod.port_a.h_outflow", 1, 5, 4852, 1024)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.medium.state.p", "Absolute pressure of medium [Pa|bar]",\
 "B3.pump_prim_prod.port_a.p", 1, 5, 4851, 1024)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.medium.state.T", "Temperature of medium [K|degC]",\
 "B3.pump_prim_prod.vol.dynBal.medium.T", 1, 5, 7462, 1024)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.standardOrderComponents", \
"If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.medium.p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B3.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]", 75,\
 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", 0.0, 0.0,\
1E+100,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "B3.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 75, 1024)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0, \
-100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.cp_default", "Heat capacity, to compute additional dry mass [J/(kg.K)]",\
 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.computeCSen", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.state_default.p", "Absolute pressure of medium [Pa|bar]",\
 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.state_default.T", "Temperature of medium [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.rho_default", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]", \
"B3.pump_prim_prod.y_actual", 1, 5, 4903, 1024)
DeclareAlias2("B3.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "B3.pump_prim_prod.dpMachine", 1, 5, 4908, 1024)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"B3.ideal_house.control_volume.Q_flow", 1, 5, 5253, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.ideal_house.port_hot.h_outflow", 1, 5, 5254, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.ideal_house.control_volume.vol.dynBal.U", 1, 1, 76, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B3.ideal_house.control_volume.vol.dynBal.m", 1, 5, 7509, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.heat_exchanger.port_a2.m_flow", 1, 5, 4128, 1156)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.bou.p", 1, 7, 953,\
 1028)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.ideal_house.port_hot.h_outflow", 1, 5, 5254, 1028)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.heat_exchanger.port_a2.m_flow", -1, 5, 4128, 1156)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.bou.p", 1, 7, 953,\
 1028)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.ideal_house.port_hot.h_outflow", 1, 5, 5254, 1028)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B3.bou.p", 1, 7, 953, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B3.ideal_house.port_hot.h_outflow", 1, 5,\
 5254, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B3.ideal_house.port_hot.h_outflow", 1,\
 5, 5254, 1024)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B3.bou.p", 1, 7, 953, 1024)
DeclareAlias2("B3.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B3.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 7500, 1024)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("B3.ideal_house.control_volume.vol.dynBal.U", "Internal energy of fluid [J]",\
 76, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.ideal_house.control_volume.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.m_dot_sens_prim.port_a.h_outflow", 1, 5, 5314, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", 1, 1, 77, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", 1, 5, 7549, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.hot_prim.m_flow", 1, 5, 5181, 1156)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 5359, 1028)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.m_dot_sens_prim.port_a.h_outflow", 1, 5, 5314, 1028)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.hot_prim.m_flow", -1, 5, 5181, 1156)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 5359, 1028)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.m_dot_sens_prim.port_a.h_outflow", 1, 5, 5314, 1028)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B3.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 5359, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B3.m_dot_sens_prim.port_a.h_outflow", 1, 5,\
 5314, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B3.m_dot_sens_prim.port_a.h_outflow", 1,\
 5, 5314, 1024)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B3.pipe_prim_hot.plugFlowPipe.ports_b[1].p", 1,\
 5, 5359, 1024)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7540, 1024)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 77, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 77, 1024)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
EndNonAlias(5)
PreNonAliasNew(6)
StartNonAlias(6)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_hot.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", 0.0, \
0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "B3.pipe_prim_cold.port_b.h_outflow", 1, 5, 5587, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", 1, 1, 78, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", 1, 5, 7588, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", -1, 5, 5178, 1156)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 5599, 1028)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pipe_prim_cold.port_b.h_outflow", 1, 5, 5587, 1028)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", 1, 5, 5178, 1156)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "B3.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 5599, 1028)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "B3.pipe_prim_cold.port_b.h_outflow", 1, 5, 5587, 1028)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "B3.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 5599, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "B3.pipe_prim_cold.port_b.h_outflow", 1, 5,\
 5587, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "B3.pipe_prim_cold.port_b.h_outflow", 1,\
 5, 5587, 1024)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "B3.pipe_prim_cold.plugFlowPipe.ports_b[1].p", 1,\
 5, 5599, 1024)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7579, 1024)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 78, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]",\
 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", "B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.der(U)", 1,\
 6, 78, 1024)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[1]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.ports_H_flow[2]", \
"[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("B3.pipe_prim_cold.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("Ctrl3.PID_prim_cons.addD.u1", "Connector of Real input signal 1",\
 "Ctrl3.PIDin_prim_cons_des_weighted", 1, 5, 5839, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.addD.u2", "Connector of Real input signal 2",\
 "Ctrl3.PIDin_prim_cons_is_weighted", 1, 5, 5838, 0)
DeclareVariable("Ctrl3.PID_prim_cons.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_prim_cons.addD.k2", "Gain of input signal 2", 1295, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl3.PID_prim_cons.I.y", "Connector of Real output signal", 79, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl3.PID_prim_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_prim_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_prim_cons.D.y_start", "Initial value of output (= state)",\
 1296, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_prim_cons.D.u", "Connector of Real input signal", \
"Ctrl3.PID_prim_cons.addD.y", 1, 5, 7604, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.D.y", "Connector of Real output signal", \
"Ctrl3.PID_prim_cons.addPID.u2", 1, 5, 5871, 0)
DeclareState("Ctrl3.PID_prim_cons.D.x", "State of block", 80, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_prim_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl3.PID_prim_cons.addI.k1", "Gain of input signal 1", 1297, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_cons.addI.k2", "Gain of input signal 2", 1298, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_cons.addI.k3", "Gain of input signal 3", 1299, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Ctrl3.PIDin_prim_cons_des_weighted", 1, 5, 5839, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Ctrl3.PIDin_prim_cons_is_weighted", 1, 5, 5838, 0)
DeclareVariable("Ctrl3.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl3.PID_prim_cons.addI.y", "Connector of Real output signal", \
"Ctrl3.PID_prim_cons.I.u", 1, 5, 7611, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl3.PID_prim_cons.y", 1, 5, 5853, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl3.PID_prim_cons.limiter.u", 1, 5, 5876, 0)
DeclareVariable("Ctrl3.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl3.PID_prim_cons.addSat.k1", "Gain of input signal 1", 1300,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_cons.addSat.k2", "Gain of input signal 2", 1301,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl3.PID_prim_cons.gainTrack.u", "Input signal connector", \
"Ctrl3.PID_prim_cons.addSat.y", 1, 5, 7620, 0)
DeclareAlias2("Ctrl3.PID_prim_cons.gainTrack.y", "Output signal connector", \
"Ctrl3.PID_prim_cons.addI.u3", 1, 5, 7619, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.addD.u1", "Connector of Real input signal 1", \
"Ctrl3.PIDin_sec_cons_des_weighted", 1, 5, 5843, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.addD.u2", "Connector of Real input signal 2", \
"Ctrl3.PIDin_sec_cons_is_weighted", 1, 5, 5842, 0)
DeclareVariable("Ctrl3.PID_sec_cons.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_cons.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_sec_cons.addD.k2", "Gain of input signal 2", 1302, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_cons.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl3.PID_sec_cons.I.y", "Connector of Real output signal", 81, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl3.PID_sec_cons.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_cons.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_cons.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_sec_cons.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_sec_cons.D.y_start", "Initial value of output (= state)",\
 1303, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_sec_cons.D.u", "Connector of Real input signal", \
"Ctrl3.PID_sec_cons.addD.y", 1, 5, 7622, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.D.y", "Connector of Real output signal", \
"Ctrl3.PID_sec_cons.addPID.u2", 1, 5, 5899, 0)
DeclareState("Ctrl3.PID_sec_cons.D.x", "State of block", 82, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_sec_cons.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_cons.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl3.PID_sec_cons.addI.k1", "Gain of input signal 1", 1304, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_cons.addI.k2", "Gain of input signal 2", 1305, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_cons.addI.k3", "Gain of input signal 3", 1306, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_sec_cons.addI.u1", "Connector of Real input signal 1", \
"Ctrl3.PIDin_sec_cons_des_weighted", 1, 5, 5843, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.addI.u2", "Connector of Real input signal 2", \
"Ctrl3.PIDin_sec_cons_is_weighted", 1, 5, 5842, 0)
DeclareVariable("Ctrl3.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl3.PID_sec_cons.addI.y", "Connector of Real output signal", \
"Ctrl3.PID_sec_cons.I.u", 1, 5, 7629, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl3.PID_sec_cons.y", 1, 5, 5880, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl3.PID_sec_cons.limiter.u", 1, 5, 5904, 0)
DeclareVariable("Ctrl3.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl3.PID_sec_cons.addSat.k1", "Gain of input signal 1", 1307,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_cons.addSat.k2", "Gain of input signal 2", 1308,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl3.PID_sec_cons.gainTrack.u", "Input signal connector", \
"Ctrl3.PID_sec_cons.addSat.y", 1, 5, 7638, 0)
DeclareAlias2("Ctrl3.PID_sec_cons.gainTrack.y", "Output signal connector", \
"Ctrl3.PID_sec_cons.addI.u3", 1, 5, 7637, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.addD.u1", "Connector of Real input signal 1",\
 "Ctrl3.PIDin_prim_prod_des_weighted", 1, 5, 5841, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.addD.u2", "Connector of Real input signal 2",\
 "Ctrl3.PIDin_prim_prod_is_weighted", 1, 5, 5840, 0)
DeclareVariable("Ctrl3.PID_prim_prod.addD.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_prim_prod.addD.k2", "Gain of input signal 2", 1309, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl3.PID_prim_prod.I.y", "Connector of Real output signal", 83, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl3.PID_prim_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl3.PID_prim_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_prim_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_prim_prod.D.y_start", "Initial value of output (= state)",\
 1310, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_prim_prod.D.u", "Connector of Real input signal", \
"Ctrl3.PID_prim_prod.addD.y", 1, 5, 7640, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.D.y", "Connector of Real output signal", \
"Ctrl3.PID_prim_prod.addPID.u2", 1, 5, 5926, 0)
DeclareState("Ctrl3.PID_prim_prod.D.x", "State of block", 84, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_prim_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_prim_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl3.PID_prim_prod.addI.k1", "Gain of input signal 1", 1311, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_prod.addI.k2", "Gain of input signal 2", 1312, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_prod.addI.k3", "Gain of input signal 3", 1313, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Ctrl3.PIDin_prim_prod_des_weighted", 1, 5, 5841, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Ctrl3.PIDin_prim_prod_is_weighted", 1, 5, 5840, 0)
DeclareVariable("Ctrl3.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl3.PID_prim_prod.addI.y", "Connector of Real output signal", \
"Ctrl3.PID_prim_prod.I.u", 1, 5, 7647, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl3.PID_prim_prod.y", 1, 5, 5908, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl3.PID_prim_prod.limiter.u", 1, 5, 5931, 0)
DeclareVariable("Ctrl3.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl3.PID_prim_prod.addSat.k1", "Gain of input signal 1", 1314,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_prim_prod.addSat.k2", "Gain of input signal 2", 1315,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl3.PID_prim_prod.gainTrack.u", "Input signal connector", \
"Ctrl3.PID_prim_prod.addSat.y", 1, 5, 7656, 0)
DeclareAlias2("Ctrl3.PID_prim_prod.gainTrack.y", "Output signal connector", \
"Ctrl3.PID_prim_prod.addI.u3", 1, 5, 7655, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.addD.u1", "Connector of Real input signal 1", \
"Ctrl3.PIDin_sec_prod_des_weighted", 1, 5, 5845, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.addD.u2", "Connector of Real input signal 2", \
"Ctrl3.PIDin_sec_prod_is_weighted", 1, 5, 5844, 0)
DeclareVariable("Ctrl3.PID_sec_prod.addD.y", "Connector of Real output signal", \
0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_prod.addD.k1", "Gain of input signal 1", 0.0, \
0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_sec_prod.addD.k2", "Gain of input signal 2", 1316, -1,\
 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, 0.0,0.0,\
0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_prod.I.u", "Connector of Real input signal", 0.0,\
 0.0,0.0,0.0,0,512)
DeclareState("Ctrl3.PID_sec_prod.I.y", "Connector of Real output signal", 85, \
0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]", false,\
 0.0,0.0,0.0,0,1539)
DeclareVariable("Ctrl3.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareVariable("Ctrl3.PID_sec_prod.D.k", "Gains [1]", 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_prod.D.T", "Time constants (T>0 required; T=0 is ideal derivative block) [s]",\
 1E-60, 1E-60,1E+100,0.0,0,513)
DeclareVariable("Ctrl3.PID_sec_prod.D.initType", "Type of initialization (1: no init, 2: steady state, 3: initial state, 4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Ctrl3.PID_sec_prod.D.x_start", "Initial or guess value of state",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("Ctrl3.PID_sec_prod.D.y_start", "Initial value of output (= state)",\
 1317, 0, 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_sec_prod.D.u", "Connector of Real input signal", \
"Ctrl3.PID_sec_prod.addD.y", 1, 5, 7658, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.D.y", "Connector of Real output signal", \
"Ctrl3.PID_sec_prod.addPID.u2", 1, 5, 5954, 0)
DeclareState("Ctrl3.PID_sec_prod.D.x", "State of block", 86, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Ctrl3.PID_sec_prod.D.der(x)", "der(State of block)", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("Ctrl3.PID_sec_prod.D.zeroGain", "[:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,2563)
DeclareParameter("Ctrl3.PID_sec_prod.addI.k1", "Gain of input signal 1", 1318, 1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_prod.addI.k2", "Gain of input signal 2", 1319, -1,\
 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_prod.addI.k3", "Gain of input signal 3", 1320, 1,\
 0.0,0.0,0.0,0,560)
DeclareAlias2("Ctrl3.PID_sec_prod.addI.u1", "Connector of Real input signal 1", \
"Ctrl3.PIDin_sec_prod_des_weighted", 1, 5, 5845, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.addI.u2", "Connector of Real input signal 2", \
"Ctrl3.PIDin_sec_prod_is_weighted", 1, 5, 5844, 0)
DeclareVariable("Ctrl3.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Ctrl3.PID_sec_prod.addI.y", "Connector of Real output signal", \
"Ctrl3.PID_sec_prod.I.u", 1, 5, 7665, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Ctrl3.PID_sec_prod.y", 1, 5, 5935, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Ctrl3.PID_sec_prod.limiter.u", 1, 5, 5959, 0)
DeclareVariable("Ctrl3.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Ctrl3.PID_sec_prod.addSat.k1", "Gain of input signal 1", 1321,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Ctrl3.PID_sec_prod.addSat.k2", "Gain of input signal 2", 1322,\
 -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Ctrl3.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Ctrl3.PID_sec_prod.gainTrack.u", "Input signal connector", \
"Ctrl3.PID_sec_prod.addSat.y", 1, 5, 7674, 0)
DeclareAlias2("Ctrl3.PID_sec_prod.gainTrack.y", "Output signal connector", \
"Ctrl3.PID_sec_prod.addI.u3", 1, 5, 7673, 0)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "pipe_hot23.port_b.h_outflow", 1, 5, 5981, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "pipe_hot23.plugFlowPipe.vol.dynBal.U", 1, 1, 87, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "pipe_hot23.plugFlowPipe.vol.dynBal.m", 1, 5, 7699, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.hot_prim.m_flow", 1, 5, 5181, 1156)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_hot23.plugFlowPipe.ports_b[1].p", 1, 5, 5990, 1028)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_hot23.port_b.h_outflow", 1, 5, 5981, 1028)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.hot_prim.m_flow", -1, 5, 5181, 1156)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_hot23.plugFlowPipe.ports_b[1].p", 1, 5, 5990, 1028)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_hot23.port_b.h_outflow", 1, 5, 5981, 1028)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_hot23.plugFlowPipe.ports_b[1].p", 1, 5, 5990, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "pipe_hot23.port_b.h_outflow", 1, 5, 5981, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "pipe_hot23.port_b.h_outflow", 1, 5, 5981, 1024)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "pipe_hot23.plugFlowPipe.ports_b[1].p", 1,\
 5, 5990, 1024)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "pipe_hot23.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7690, 1024)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("pipe_hot23.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 87, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("pipe_hot23.plugFlowPipe.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_hot23.plugFlowPipe.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "pipe_hot23.plugFlowPipe.vol.dynBal.der(U)", 1, 6, 87, 1024)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_hot23.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "pipe_cold23.plugFlowPipe.vol.dynBal.U", 1, 1, 88, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "pipe_cold23.plugFlowPipe.vol.dynBal.m", 1, 5, 7738, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", -1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 1028)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1028)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B3.cold_prim.m_flow", 1, 5, 5178, 1156)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 1028)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1028)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold23.plugFlowPipe.ports_b[1].p", 1, 5, 6229, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "pipe_cold23.port_b.h_outflow", 1, 5, 6220, 1024)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "pipe_cold23.plugFlowPipe.ports_b[1].p", 1,\
 5, 6229, 1024)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "pipe_cold23.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7729, 1024)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("pipe_cold23.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 88, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("pipe_cold23.plugFlowPipe.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold23.plugFlowPipe.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "pipe_cold23.plugFlowPipe.vol.dynBal.der(U)", 1, 6, 88, 1024)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.ports_H_flow[1]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.ports_H_flow[2]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold23.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "pipe_cold12.plugFlowPipe.vol.dynBal.U", 1, 1, 89, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.mOut", "Mass of the component [kg]",\
 "pipe_cold12.plugFlowPipe.vol.dynBal.m", 1, 5, 7777, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", 1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 1028)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1028)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"B1.cold_prim.m_flow", -1, 5, 1118, 1156)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 1028)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1028)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "pipe_cold12.plugFlowPipe.ports_b[1].p", 1, 5, 6468, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "pipe_cold12.port_b.h_outflow", 1, 5, 6459, 1024)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "pipe_cold12.plugFlowPipe.ports_b[1].p", 1,\
 5, 6468, 1024)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "pipe_cold12.plugFlowPipe.vol.dynBal.medium.T", 1,\
 5, 7768, 1024)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("pipe_cold12.plugFlowPipe.vol.dynBal.U", "Internal energy of fluid [J]",\
 89, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("pipe_cold12.plugFlowPipe.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("pipe_cold12.plugFlowPipe.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "pipe_cold12.plugFlowPipe.vol.dynBal.der(U)", 1, 6, 89, 1024)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.ports_H_flow[1]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.ports_H_flow[2]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("pipe_cold12.plugFlowPipe.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
EndNonAlias(6)
PreNonAliasNew(7)
