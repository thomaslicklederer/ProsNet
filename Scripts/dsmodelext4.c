#include <moutil.c>
PreNonAliasDef(21)
PreNonAliasDef(22)
PreNonAliasDef(23)
PreNonAliasDef(24)
PreNonAliasDef(25)
StartNonAlias(20)
DeclareAlias2("Controller_1.PID_prim_prod.gainTrack.y", "Output signal connector",\
 "Controller_1.PID_prim_prod.addI.u3", 1, 5, 18221, 0)
DeclareVariable("Controller_1.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_1.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_1.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_1.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_1.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_1.PID_sec_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_1.PID_sec_prod.I.y", "Connector of Real output signal",\
 231, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_1.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_1.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_1.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_1.PID_sec_prod.addI.k1", "Gain of input signal 1", 2435,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_1.PID_sec_prod.addI.k2", "Gain of input signal 2", 2436,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_1.PID_sec_prod.addI.k3", "Gain of input signal 3", 2437,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_1.PID_sec_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_1.PIDin_sec_prod_des_weighted", 1, 5, 6052, 0)
DeclareAlias2("Controller_1.PID_sec_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_1.PIDin_sec_prod_is_weighted", 1, 5, 6051, 0)
DeclareVariable("Controller_1.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_1.PID_sec_prod.addI.y", "Connector of Real output signal",\
 "Controller_1.PID_sec_prod.I.u", 1, 5, 18229, 0)
DeclareAlias2("Controller_1.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_1.PID_sec_prod.y", 1, 5, 6144, 0)
DeclareAlias2("Controller_1.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_1.PID_sec_prod.limiter.u", 1, 5, 6168, 0)
DeclareVariable("Controller_1.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_1.PID_sec_prod.addSat.k1", "Gain of input signal 1",\
 2438, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_1.PID_sec_prod.addSat.k2", "Gain of input signal 2",\
 2439, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_1.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_1.PID_sec_prod.gainTrack.u", "Input signal connector",\
 "Controller_1.PID_sec_prod.addSat.y", 1, 5, 18233, 0)
DeclareAlias2("Controller_1.PID_sec_prod.gainTrack.y", "Output signal connector",\
 "Controller_1.PID_sec_prod.addI.u3", 1, 5, 18232, 0)
DeclareVariable("Controller_2.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_2.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_prim_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_2.PID_prim_cons.I.y", "Connector of Real output signal",\
 232, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_2.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_2.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_2.PID_prim_cons.addI.k1", "Gain of input signal 1",\
 2440, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_cons.addI.k2", "Gain of input signal 2",\
 2441, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_cons.addI.k3", "Gain of input signal 3",\
 2442, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_2.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_2.PIDin_prim_cons_des_weighted", 1, 5, 6194, 0)
DeclareAlias2("Controller_2.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_2.PIDin_prim_cons_is_weighted", 1, 5, 6193, 0)
DeclareVariable("Controller_2.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_2.PID_prim_cons.addI.y", "Connector of Real output signal",\
 "Controller_2.PID_prim_cons.I.u", 1, 5, 18240, 0)
DeclareAlias2("Controller_2.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_2.PID_prim_cons.y", 1, 5, 6208, 0)
DeclareAlias2("Controller_2.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_2.PID_prim_cons.limiter.u", 1, 5, 6232, 0)
DeclareVariable("Controller_2.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_2.PID_prim_cons.addSat.k1", "Gain of input signal 1",\
 2443, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_cons.addSat.k2", "Gain of input signal 2",\
 2444, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_2.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_2.PID_prim_cons.gainTrack.u", "Input signal connector",\
 "Controller_2.PID_prim_cons.addSat.y", 1, 5, 18244, 0)
DeclareAlias2("Controller_2.PID_prim_cons.gainTrack.y", "Output signal connector",\
 "Controller_2.PID_prim_cons.addI.u3", 1, 5, 18243, 0)
DeclareVariable("Controller_2.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_2.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_sec_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_2.PID_sec_cons.I.y", "Connector of Real output signal",\
 233, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_2.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_2.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_2.PID_sec_cons.addI.k1", "Gain of input signal 1", 2445,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_cons.addI.k2", "Gain of input signal 2", 2446,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_cons.addI.k3", "Gain of input signal 3", 2447,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_2.PID_sec_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_2.PIDin_sec_cons_des_weighted", 1, 5, 6198, 0)
DeclareAlias2("Controller_2.PID_sec_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_2.PIDin_sec_cons_is_weighted", 1, 5, 6197, 0)
DeclareVariable("Controller_2.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_2.PID_sec_cons.addI.y", "Connector of Real output signal",\
 "Controller_2.PID_sec_cons.I.u", 1, 5, 18251, 0)
DeclareAlias2("Controller_2.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_2.PID_sec_cons.y", 1, 5, 6236, 0)
DeclareAlias2("Controller_2.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_2.PID_sec_cons.limiter.u", 1, 5, 6260, 0)
DeclareVariable("Controller_2.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_2.PID_sec_cons.addSat.k1", "Gain of input signal 1",\
 2448, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_cons.addSat.k2", "Gain of input signal 2",\
 2449, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_2.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_2.PID_sec_cons.gainTrack.u", "Input signal connector",\
 "Controller_2.PID_sec_cons.addSat.y", 1, 5, 18255, 0)
DeclareAlias2("Controller_2.PID_sec_cons.gainTrack.y", "Output signal connector",\
 "Controller_2.PID_sec_cons.addI.u3", 1, 5, 18254, 0)
DeclareVariable("Controller_2.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_2.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_prim_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_2.PID_prim_prod.I.y", "Connector of Real output signal",\
 234, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_2.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_2.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_2.PID_prim_prod.addI.k1", "Gain of input signal 1",\
 2450, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_prod.addI.k2", "Gain of input signal 2",\
 2451, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_prod.addI.k3", "Gain of input signal 3",\
 2452, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_2.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_2.PIDin_prim_prod_des_weighted", 1, 5, 6196, 0)
DeclareAlias2("Controller_2.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_2.PIDin_prim_prod_is_weighted", 1, 5, 6195, 0)
DeclareVariable("Controller_2.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_2.PID_prim_prod.addI.y", "Connector of Real output signal",\
 "Controller_2.PID_prim_prod.I.u", 1, 5, 18262, 0)
DeclareAlias2("Controller_2.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_2.PID_prim_prod.y", 1, 5, 6264, 0)
DeclareAlias2("Controller_2.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_2.PID_prim_prod.limiter.u", 1, 5, 6288, 0)
DeclareVariable("Controller_2.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_2.PID_prim_prod.addSat.k1", "Gain of input signal 1",\
 2453, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_prim_prod.addSat.k2", "Gain of input signal 2",\
 2454, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_2.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_2.PID_prim_prod.gainTrack.u", "Input signal connector",\
 "Controller_2.PID_prim_prod.addSat.y", 1, 5, 18266, 0)
DeclareAlias2("Controller_2.PID_prim_prod.gainTrack.y", "Output signal connector",\
 "Controller_2.PID_prim_prod.addI.u3", 1, 5, 18265, 0)
DeclareVariable("Controller_2.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_2.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_2.PID_sec_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_2.PID_sec_prod.I.y", "Connector of Real output signal",\
 235, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_2.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_2.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_2.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_2.PID_sec_prod.addI.k1", "Gain of input signal 1", 2455,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_prod.addI.k2", "Gain of input signal 2", 2456,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_prod.addI.k3", "Gain of input signal 3", 2457,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_2.PID_sec_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_2.PIDin_sec_prod_des_weighted", 1, 5, 6200, 0)
DeclareAlias2("Controller_2.PID_sec_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_2.PIDin_sec_prod_is_weighted", 1, 5, 6199, 0)
DeclareVariable("Controller_2.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_2.PID_sec_prod.addI.y", "Connector of Real output signal",\
 "Controller_2.PID_sec_prod.I.u", 1, 5, 18273, 0)
DeclareAlias2("Controller_2.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_2.PID_sec_prod.y", 1, 5, 6292, 0)
DeclareAlias2("Controller_2.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_2.PID_sec_prod.limiter.u", 1, 5, 6316, 0)
DeclareVariable("Controller_2.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_2.PID_sec_prod.addSat.k1", "Gain of input signal 1",\
 2458, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_2.PID_sec_prod.addSat.k2", "Gain of input signal 2",\
 2459, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_2.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_2.PID_sec_prod.gainTrack.u", "Input signal connector",\
 "Controller_2.PID_sec_prod.addSat.y", 1, 5, 18277, 0)
DeclareAlias2("Controller_2.PID_sec_prod.gainTrack.y", "Output signal connector",\
 "Controller_2.PID_sec_prod.addI.u3", 1, 5, 18276, 0)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER3.pump_sec_cons.port_a.h_outflow", 1, 5, 6667, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER3.pump_sec_cons.vol.dynBal.U", 1, 1, 236, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER3.pump_sec_cons.vol.dynBal.m", 1, 5, 18302, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_sec_cons.port_a.m_flow", 1, 5, 6666, 1156)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.bou.p", 1, 7, 1140, 1028)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_sec_cons.port_a.h_outflow", 1, 5, 6667, 1028)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_sec_cons.port_a.m_flow", -1, 5, 6666, 1156)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.bou.p", 1, 7, 1140, 1028)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_sec_cons.port_a.h_outflow", 1, 5, 6667, 1028)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.bou.p", 1, 7, 1140, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.pump_sec_cons.port_a.h_outflow", 1, 5, 6667, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pump_sec_cons.port_a.h_outflow", 1, 5, 6667, 1024)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.bou.p", 1, 7, 1140, 1024)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pump_sec_cons.vol.dynBal.medium.T", 1,\
 5, 18293, 1024)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER3.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]",\
 236, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER3.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER3.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 236, 1024)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER3.pump_sec_cons.senRelPre.p_rel", 1, 5, 6779, 1024)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER3.pump_sec_prod.port_a.h_outflow", 1, 5, 6863, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER3.pump_sec_prod.vol.dynBal.U", 1, 1, 237, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER3.pump_sec_prod.vol.dynBal.m", 1, 5, 18341, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_sec_prod.port_a.m_flow", 1, 5, 6862, 1156)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.heat_exchanger.port_a2.p", 1, 5, 6445, 1028)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_sec_prod.port_a.h_outflow", 1, 5, 6863, 1028)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_sec_prod.port_a.m_flow", -1, 5, 6862, 1156)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.heat_exchanger.port_a2.p", 1, 5, 6445, 1028)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_sec_prod.port_a.h_outflow", 1, 5, 6863, 1028)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.heat_exchanger.port_a2.p", 1, 5, 6445, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.pump_sec_prod.port_a.h_outflow", 1, 5, 6863, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pump_sec_prod.port_a.h_outflow", 1, 5, 6863, 1024)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.heat_exchanger.port_a2.p", 1,\
 5, 6445, 1024)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pump_sec_prod.vol.dynBal.medium.T", 1,\
 5, 18332, 1024)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER3.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 237, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER3.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER3.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 237, 1024)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER3.pump_sec_prod.senRelPre.p_rel", 1, 5, 6975, 1024)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER3.pump_prim_prod.port_a.h_outflow", 1, 5, 7168, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER3.pump_prim_prod.vol.dynBal.U", 1, 1, 238, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER3.pump_prim_prod.vol.dynBal.m", 1, 5, 18380, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_prim_prod.port_a.m_flow", 1, 5, 7166, 1156)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.pump_prim_prod.port_a.p", 1, 5, 7167, 1028)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_prim_prod.port_a.h_outflow", 1, 5, 7168, 1028)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.pump_prim_prod.port_a.m_flow", -1, 5, 7166, 1156)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER3.pump_prim_prod.port_a.p", 1, 5, 7167, 1028)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.pump_prim_prod.port_a.h_outflow", 1, 5, 7168, 1028)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pump_prim_prod.port_a.p", 1, 5, 7167, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.pump_prim_prod.port_a.h_outflow", 1, 5, 7168, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pump_prim_prod.port_a.h_outflow", 1, 5, 7168, 1024)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pump_prim_prod.port_a.p", 1, 5,\
 7167, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pump_prim_prod.vol.dynBal.medium.T", 1,\
 5, 18371, 1024)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER3.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 238, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER3.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER3.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 238, 1024)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]",\
 "PROSUMER3.pump_prim_prod.y_actual", 1, 5, 7253, 1024)
DeclareAlias2("PROSUMER3.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "PROSUMER3.pump_prim_prod.dpMachine", 1, 5, 7258, 1024)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.energyDynamics",\
 "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.substanceDynamics",\
 "Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.traceDynamics",\
 "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow",\
 "Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.use_mWat_flow",\
 "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"PROSUMER3.ideal_house.control_volume.Q_flow", 1, 5, 7790, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.hOut", \
"Leaving specific enthalpy of the component [J/kg]", "PROSUMER3.ideal_house.port_hot.h_outflow", 1,\
 5, 7791, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.UOut", \
"Internal energy of the component [J]", "PROSUMER3.ideal_house.control_volume.vol.dynBal.U", 1,\
 1, 239, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.mOut", \
"Mass of the component [kg]", "PROSUMER3.ideal_house.control_volume.vol.dynBal.m", 1,\
 5, 18418, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[1].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.heat_exchanger.port_a2.m_flow", 1, 5, 6444, 1156)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER3.bou.p", 1,\
 7, 1140, 1028)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.ideal_house.port_hot.h_outflow", 1, 5, 7791, 1028)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[2].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER3.heat_exchanger.port_a2.m_flow", -1, 5, 6444, 1156)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER3.bou.p", 1,\
 7, 1140, 1028)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER3.ideal_house.port_hot.h_outflow", 1, 5, 7791, 1028)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.bou.p", 1, 7, 1140, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "PROSUMER3.ideal_house.port_hot.h_outflow", 1,\
 5, 7791, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "PROSUMER3.ideal_house.port_hot.h_outflow", 1,\
 5, 7791, 1024)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.bou.p", 1, 7, 1140, 1024)
DeclareAlias2("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 18409, 1024)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.T_degC",\
 "Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER3.ideal_house.control_volume.vol.dynBal.U", \
"Internal energy of fluid [J]", 239, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER3.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.m", \
"Mass of fluid [kg]", 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.state_default.p",\
 "Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.state_default.T",\
 "Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER3.ideal_house.control_volume.vol.dynBal.mWat_flow_internal",\
 "Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[1].T", 1, 5, 8051, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.port_a.p", 1, 5, 7888, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.port_a.h_outflow", 1, 5, 7880, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.port_a.h_outflow", 1, 5, 7880, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.port_a.p", 1,\
 5, 7888, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[1].T", 1,\
 5, 8051, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[2].T", 1, 5, 8053, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[2].p", 1, 5, 8052, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[2].h", 1, 5, 18443, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[2].p", 1,\
 5, 8052, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[2].T", 1,\
 5, 8053, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[3].T", 1, 5, 8055, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[3].p", 1, 5, 8054, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[3].h", 1, 5, 18452, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[3].p", 1,\
 5, 8054, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[3].T", 1,\
 5, 8055, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[4].T", 1, 5, 8057, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[4].p", 1, 5, 8056, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[4].h", 1, 5, 18461, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[4].p", 1,\
 5, 8056, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[4].T", 1,\
 5, 8057, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[5].T", 1, 5, 8059, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[5].p", 1, 5, 8058, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[5].h", 1, 5, 18470, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[5].p", 1,\
 5, 8058, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[5].T", 1,\
 5, 8059, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[6].T", 1, 5, 8061, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[6].p", 1, 5, 8060, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[6].h", 1, 5, 18479, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[6].p", 1,\
 5, 8060, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[6].T", 1,\
 5, 8061, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[7].T", 1, 5, 8063, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[7].p", 1, 5, 8062, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[7].h", 1, 5, 18488, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[7].p", 1,\
 5, 8062, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[7].T", 1,\
 5, 8063, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[8].T", 1, 5, 8065, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[8].p", 1, 5, 8064, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[8].h", 1, 5, 18497, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[8].p", 1,\
 5, 8064, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[8].T", 1,\
 5, 8065, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[9].T", 1, 5, 8067, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[9].p", 1, 5, 8066, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_hot.pipe.mediums[9].h", 1, 5, 18506, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[9].p", 1,\
 5, 8066, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[9].T", 1,\
 5, 8067, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_hot.pipe.statesFM[10].T", 1, 5, 8068, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_hot.pipe.port_b.p", 1, 5, 7889, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.m_dot_sens_prim.port_a.h_outflow", 1, 5, 7851, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.m_dot_sens_prim.port_a.h_outflow", 1, 5, 7851, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_hot.pipe.port_b.p", 1,\
 5, 7889, 0)
DeclareAlias2("PROSUMER3.pipe_prim_hot.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_hot.pipe.statesFM[10].T", 1,\
 5, 8068, 0)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_hot.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[1].T", 1, 5, 8537, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.port_a.p", 1, 5, 8374, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.T_sens_prim_cold.port_a.h_outflow", 1, 5, 7860, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.T_sens_prim_cold.port_a.h_outflow", 1, 5, 7860, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.port_a.p", 1,\
 5, 8374, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[1].T", 1,\
 5, 8537, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[2].T", 1, 5, 8539, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[2].p", 1, 5, 8538, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[2].h", 1, 5, 18531, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[2].p", 1,\
 5, 8538, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[2].T", 1,\
 5, 8539, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[3].T", 1, 5, 8541, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[3].p", 1, 5, 8540, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[3].h", 1, 5, 18540, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[3].p", 1,\
 5, 8540, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[3].T", 1,\
 5, 8541, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[4].T", 1, 5, 8543, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[4].p", 1, 5, 8542, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[4].h", 1, 5, 18549, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[4].p", 1,\
 5, 8542, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[4].T", 1,\
 5, 8543, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[5].T", 1, 5, 8545, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[5].p", 1, 5, 8544, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[5].h", 1, 5, 18558, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[5].p", 1,\
 5, 8544, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[5].T", 1,\
 5, 8545, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[6].T", 1, 5, 8547, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[6].p", 1, 5, 8546, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[6].h", 1, 5, 18567, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[6].p", 1,\
 5, 8546, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[6].T", 1,\
 5, 8547, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[7].T", 1, 5, 8549, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[7].p", 1, 5, 8548, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[7].h", 1, 5, 18576, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[7].p", 1,\
 5, 8548, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[7].T", 1,\
 5, 8549, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[8].T", 1, 5, 8551, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[8].p", 1, 5, 8550, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[8].h", 1, 5, 18585, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[8].p", 1,\
 5, 8550, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[8].T", 1,\
 5, 8551, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[9].T", 1, 5, 8553, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[9].p", 1, 5, 8552, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.pipe.mediums[9].h", 1, 5, 18594, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[9].p", 1,\
 5, 8552, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[9].T", 1,\
 5, 8553, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER3.pipe_prim_cold.pipe.statesFM[10].T", 1, 5, 8554, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER3.pipe_prim_cold.pipe.port_b.p", 1, 5, 8375, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.port_b.h_outflow", 1, 5, 8366, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER3.pipe_prim_cold.port_b.h_outflow", 1, 5, 8366, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER3.pipe_prim_cold.pipe.port_b.p", 1,\
 5, 8375, 0)
DeclareAlias2("PROSUMER3.pipe_prim_cold.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER3.pipe_prim_cold.pipe.statesFM[10].T", 1,\
 5, 8554, 0)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER3.pipe_prim_cold.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_3.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_3.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_prim_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_3.PID_prim_cons.I.y", "Connector of Real output signal",\
 240, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_3.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_3.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_3.PID_prim_cons.addI.k1", "Gain of input signal 1",\
 2460, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_cons.addI.k2", "Gain of input signal 2",\
 2461, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_cons.addI.k3", "Gain of input signal 3",\
 2462, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_3.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_3.PIDin_prim_cons_des_weighted", 1, 5, 8881, 0)
DeclareAlias2("Controller_3.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_3.PIDin_prim_cons_is_weighted", 1, 5, 8880, 0)
DeclareVariable("Controller_3.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_3.PID_prim_cons.addI.y", "Connector of Real output signal",\
 "Controller_3.PID_prim_cons.I.u", 1, 5, 18616, 0)
DeclareAlias2("Controller_3.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_3.PID_prim_cons.y", 1, 5, 8895, 0)
DeclareAlias2("Controller_3.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_3.PID_prim_cons.limiter.u", 1, 5, 8919, 0)
DeclareVariable("Controller_3.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_3.PID_prim_cons.addSat.k1", "Gain of input signal 1",\
 2463, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_cons.addSat.k2", "Gain of input signal 2",\
 2464, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_3.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_3.PID_prim_cons.gainTrack.u", "Input signal connector",\
 "Controller_3.PID_prim_cons.addSat.y", 1, 5, 18620, 0)
DeclareAlias2("Controller_3.PID_prim_cons.gainTrack.y", "Output signal connector",\
 "Controller_3.PID_prim_cons.addI.u3", 1, 5, 18619, 0)
DeclareVariable("Controller_3.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_3.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_sec_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_3.PID_sec_cons.I.y", "Connector of Real output signal",\
 241, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_3.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_3.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_3.PID_sec_cons.addI.k1", "Gain of input signal 1", 2465,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_cons.addI.k2", "Gain of input signal 2", 2466,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_cons.addI.k3", "Gain of input signal 3", 2467,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_3.PID_sec_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_3.PIDin_sec_cons_des_weighted", 1, 5, 8885, 0)
DeclareAlias2("Controller_3.PID_sec_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_3.PIDin_sec_cons_is_weighted", 1, 5, 8884, 0)
DeclareVariable("Controller_3.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_3.PID_sec_cons.addI.y", "Connector of Real output signal",\
 "Controller_3.PID_sec_cons.I.u", 1, 5, 18627, 0)
DeclareAlias2("Controller_3.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_3.PID_sec_cons.y", 1, 5, 8923, 0)
DeclareAlias2("Controller_3.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_3.PID_sec_cons.limiter.u", 1, 5, 8947, 0)
DeclareVariable("Controller_3.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_3.PID_sec_cons.addSat.k1", "Gain of input signal 1",\
 2468, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_cons.addSat.k2", "Gain of input signal 2",\
 2469, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_3.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_3.PID_sec_cons.gainTrack.u", "Input signal connector",\
 "Controller_3.PID_sec_cons.addSat.y", 1, 5, 18631, 0)
DeclareAlias2("Controller_3.PID_sec_cons.gainTrack.y", "Output signal connector",\
 "Controller_3.PID_sec_cons.addI.u3", 1, 5, 18630, 0)
DeclareVariable("Controller_3.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_3.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_prim_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_3.PID_prim_prod.I.y", "Connector of Real output signal",\
 242, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_3.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_3.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_3.PID_prim_prod.addI.k1", "Gain of input signal 1",\
 2470, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_prod.addI.k2", "Gain of input signal 2",\
 2471, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_prod.addI.k3", "Gain of input signal 3",\
 2472, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_3.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_3.PIDin_prim_prod_des_weighted", 1, 5, 8883, 0)
DeclareAlias2("Controller_3.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_3.PIDin_prim_prod_is_weighted", 1, 5, 8882, 0)
DeclareVariable("Controller_3.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_3.PID_prim_prod.addI.y", "Connector of Real output signal",\
 "Controller_3.PID_prim_prod.I.u", 1, 5, 18638, 0)
DeclareAlias2("Controller_3.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_3.PID_prim_prod.y", 1, 5, 8951, 0)
DeclareAlias2("Controller_3.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_3.PID_prim_prod.limiter.u", 1, 5, 8975, 0)
DeclareVariable("Controller_3.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_3.PID_prim_prod.addSat.k1", "Gain of input signal 1",\
 2473, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_prim_prod.addSat.k2", "Gain of input signal 2",\
 2474, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_3.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_3.PID_prim_prod.gainTrack.u", "Input signal connector",\
 "Controller_3.PID_prim_prod.addSat.y", 1, 5, 18642, 0)
DeclareAlias2("Controller_3.PID_prim_prod.gainTrack.y", "Output signal connector",\
 "Controller_3.PID_prim_prod.addI.u3", 1, 5, 18641, 0)
DeclareVariable("Controller_3.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_3.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_3.PID_sec_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_3.PID_sec_prod.I.y", "Connector of Real output signal",\
 243, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_3.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_3.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_3.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_3.PID_sec_prod.addI.k1", "Gain of input signal 1", 2475,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_prod.addI.k2", "Gain of input signal 2", 2476,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_prod.addI.k3", "Gain of input signal 3", 2477,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_3.PID_sec_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_3.PIDin_sec_prod_des_weighted", 1, 5, 8887, 0)
DeclareAlias2("Controller_3.PID_sec_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_3.PIDin_sec_prod_is_weighted", 1, 5, 8886, 0)
DeclareVariable("Controller_3.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_3.PID_sec_prod.addI.y", "Connector of Real output signal",\
 "Controller_3.PID_sec_prod.I.u", 1, 5, 18649, 0)
DeclareAlias2("Controller_3.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_3.PID_sec_prod.y", 1, 5, 8979, 0)
DeclareAlias2("Controller_3.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_3.PID_sec_prod.limiter.u", 1, 5, 9003, 0)
DeclareVariable("Controller_3.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_3.PID_sec_prod.addSat.k1", "Gain of input signal 1",\
 2478, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_3.PID_sec_prod.addSat.k2", "Gain of input signal 2",\
 2479, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_3.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_3.PID_sec_prod.gainTrack.u", "Input signal connector",\
 "Controller_3.PID_sec_prod.addSat.y", 1, 5, 18653, 0)
DeclareAlias2("Controller_3.PID_sec_prod.gainTrack.y", "Output signal connector",\
 "Controller_3.PID_sec_prod.addI.u3", 1, 5, 18652, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[1].T", 1, 5, 9197, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.port_a.p", 1, 5, 9034, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.port_a.h_outflow", 1, 5, 9028, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.port_a.h_outflow", 1, 5, 9028, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.port_a.p", 1, 5, 9034, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[1].T", 1, 5, 9197, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[2].T", 1, 5, 9199, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[2].p", 1, 5, 9198, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[2].h", 1, 5, 18663, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[2].p", 1, 5, 9198, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[2].T", 1, 5, 9199, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[3].T", 1, 5, 9201, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[3].p", 1, 5, 9200, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[3].h", 1, 5, 18672, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[3].p", 1, 5, 9200, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[3].T", 1, 5, 9201, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[4].T", 1, 5, 9203, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[4].p", 1, 5, 9202, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[4].h", 1, 5, 18681, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[4].p", 1, 5, 9202, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[4].T", 1, 5, 9203, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[5].T", 1, 5, 9205, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[5].p", 1, 5, 9204, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[5].h", 1, 5, 18690, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[5].p", 1, 5, 9204, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[5].T", 1, 5, 9205, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[6].T", 1, 5, 9207, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[6].p", 1, 5, 9206, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[6].h", 1, 5, 18699, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[6].p", 1, 5, 9206, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[6].T", 1, 5, 9207, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[7].T", 1, 5, 9209, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[7].p", 1, 5, 9208, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[7].h", 1, 5, 18708, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[7].p", 1, 5, 9208, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[7].T", 1, 5, 9209, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[8].T", 1, 5, 9211, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[8].p", 1, 5, 9210, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[8].h", 1, 5, 18717, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[8].p", 1, 5, 9210, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[8].T", 1, 5, 9211, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[9].T", 1, 5, 9213, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[9].p", 1, 5, 9212, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.pipe.mediums[9].h", 1, 5, 18726, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[9].p", 1, 5, 9212, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[9].T", 1, 5, 9213, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_cold_23.pipe.statesFM[10].T", 1, 5, 9214, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_cold_23.pipe.port_b.p", 1, 5, 9035, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.port_b.h_outflow", 1, 5, 9029, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_cold_23.port_b.h_outflow", 1, 5, 9029, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "Pipe_ID_4_pipe_cold_23.pipe.port_b.p", 1,\
 5, 9035, 0)
DeclareAlias2("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "Pipe_ID_4_pipe_cold_23.pipe.statesFM[10].T", 1,\
 5, 9214, 0)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_cold_23.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[1].T", 1, 5, 9700, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.port_a.p", 1, 5, 9537, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.port_a.h_outflow", 1, 5, 9531, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.port_a.h_outflow", 1, 5, 9531, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.port_a.p", 1, 5, 9537, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[1].T", 1, 5, 9700, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[2].T", 1, 5, 9702, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[2].p", 1, 5, 9701, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[2].h", 1, 5, 18751, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[2].p", 1, 5, 9701, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[2].T", 1, 5, 9702, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[3].T", 1, 5, 9704, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[3].p", 1, 5, 9703, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[3].h", 1, 5, 18760, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[3].p", 1, 5, 9703, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[3].T", 1, 5, 9704, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[4].T", 1, 5, 9706, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[4].p", 1, 5, 9705, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[4].h", 1, 5, 18769, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[4].p", 1, 5, 9705, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[4].T", 1, 5, 9706, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[5].T", 1, 5, 9708, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[5].p", 1, 5, 9707, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[5].h", 1, 5, 18778, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[5].p", 1, 5, 9707, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[5].T", 1, 5, 9708, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[6].T", 1, 5, 9710, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[6].p", 1, 5, 9709, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[6].h", 1, 5, 18787, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[6].p", 1, 5, 9709, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[6].T", 1, 5, 9710, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[7].T", 1, 5, 9712, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[7].p", 1, 5, 9711, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[7].h", 1, 5, 18796, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[7].p", 1, 5, 9711, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[7].T", 1, 5, 9712, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[8].T", 1, 5, 9714, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[8].p", 1, 5, 9713, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[8].h", 1, 5, 18805, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[8].p", 1, 5, 9713, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[8].T", 1, 5, 9714, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[9].T", 1, 5, 9716, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[9].p", 1, 5, 9715, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.pipe.mediums[9].h", 1, 5, 18814, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[9].p", 1, 5, 9715, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[9].T", 1, 5, 9716, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[10].T", 1, 5, 9717, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.port_b.p", 1, 5, 9538, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.port_b.h_outflow", 1, 5, 9532, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_4_pipe_hot_23.port_b.h_outflow", 1, 5, 9532, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_4_pipe_hot_23.pipe.port_b.p", 1, 5, 9538, 0)
DeclareAlias2("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_4_pipe_hot_23.pipe.statesFM[10].T", 1, 5, 9717, 0)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_4_pipe_hot_23.pipe.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER4.pump_sec_cons.port_a.h_outflow", 1, 5, 10337, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER4.pump_sec_cons.vol.dynBal.U", 1, 1, 244, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER4.pump_sec_cons.vol.dynBal.m", 1, 5, 18854, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_sec_cons.port_a.m_flow", 1, 5, 10336, 1156)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.bou.p", 1, 7, 1628, 1028)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_sec_cons.port_a.h_outflow", 1, 5, 10337, 1028)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_sec_cons.port_a.m_flow", -1, 5, 10336, 1156)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.bou.p", 1, 7, 1628, 1028)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_sec_cons.port_a.h_outflow", 1, 5, 10337, 1028)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.bou.p", 1, 7, 1628, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.pump_sec_cons.port_a.h_outflow", 1, 5, 10337, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pump_sec_cons.port_a.h_outflow", 1, 5, 10337, 1024)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.bou.p", 1, 7, 1628, 1024)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pump_sec_cons.vol.dynBal.medium.T", 1,\
 5, 18845, 1024)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER4.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]",\
 244, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER4.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER4.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 244, 1024)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER4.pump_sec_cons.senRelPre.p_rel", 1, 5, 10449, 1024)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER4.pump_sec_prod.port_a.h_outflow", 1, 5, 10533, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER4.pump_sec_prod.vol.dynBal.U", 1, 1, 245, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER4.pump_sec_prod.vol.dynBal.m", 1, 5, 18893, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_sec_prod.port_a.m_flow", 1, 5, 10532, 1156)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.heat_exchanger.port_a2.p", 1, 5, 10115, 1028)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_sec_prod.port_a.h_outflow", 1, 5, 10533, 1028)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_sec_prod.port_a.m_flow", -1, 5, 10532, 1156)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.heat_exchanger.port_a2.p", 1, 5, 10115, 1028)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_sec_prod.port_a.h_outflow", 1, 5, 10533, 1028)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.heat_exchanger.port_a2.p", 1, 5, 10115, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.pump_sec_prod.port_a.h_outflow", 1, 5, 10533, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pump_sec_prod.port_a.h_outflow", 1, 5, 10533, 1024)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.heat_exchanger.port_a2.p", 1,\
 5, 10115, 1024)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pump_sec_prod.vol.dynBal.medium.T", 1,\
 5, 18884, 1024)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER4.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 245, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER4.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER4.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 245, 1024)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER4.pump_sec_prod.senRelPre.p_rel", 1, 5, 10645, 1024)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER4.pump_prim_prod.port_a.h_outflow", 1, 5, 10838, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER4.pump_prim_prod.vol.dynBal.U", 1, 1, 246, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER4.pump_prim_prod.vol.dynBal.m", 1, 5, 18932, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_prim_prod.port_a.m_flow", 1, 5, 10836, 1156)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.pump_prim_prod.port_a.p", 1, 5, 10837, 1028)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_prim_prod.port_a.h_outflow", 1, 5, 10838, 1028)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.pump_prim_prod.port_a.m_flow", -1, 5, 10836, 1156)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER4.pump_prim_prod.port_a.p", 1, 5, 10837, 1028)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.pump_prim_prod.port_a.h_outflow", 1, 5, 10838, 1028)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pump_prim_prod.port_a.p", 1, 5, 10837, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.pump_prim_prod.port_a.h_outflow", 1, 5, 10838, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pump_prim_prod.port_a.h_outflow", 1, 5, 10838, 1024)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pump_prim_prod.port_a.p", 1, 5,\
 10837, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pump_prim_prod.vol.dynBal.medium.T", 1,\
 5, 18923, 1024)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER4.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 246, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER4.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER4.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 246, 1024)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]",\
 "PROSUMER4.pump_prim_prod.y_actual", 1, 5, 10919, 1024)
DeclareAlias2("PROSUMER4.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "PROSUMER4.pump_prim_prod.dpMachine", 1, 5, 10924, 1024)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.energyDynamics",\
 "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.substanceDynamics",\
 "Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.traceDynamics",\
 "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow",\
 "Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.use_mWat_flow",\
 "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"PROSUMER4.ideal_house.control_volume.Q_flow", 1, 5, 11434, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.hOut", \
"Leaving specific enthalpy of the component [J/kg]", "PROSUMER4.ideal_house.port_hot.h_outflow", 1,\
 5, 11435, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.UOut", \
"Internal energy of the component [J]", "PROSUMER4.ideal_house.control_volume.vol.dynBal.U", 1,\
 1, 247, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.mOut", \
"Mass of the component [kg]", "PROSUMER4.ideal_house.control_volume.vol.dynBal.m", 1,\
 5, 18970, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[1].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.heat_exchanger.port_a2.m_flow", 1, 5, 10114, 1156)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER4.bou.p", 1,\
 7, 1628, 1028)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.ideal_house.port_hot.h_outflow", 1, 5, 11435, 1028)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[2].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER4.heat_exchanger.port_a2.m_flow", -1, 5, 10114, 1156)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER4.bou.p", 1,\
 7, 1628, 1028)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER4.ideal_house.port_hot.h_outflow", 1, 5, 11435, 1028)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.bou.p", 1, 7, 1628, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "PROSUMER4.ideal_house.port_hot.h_outflow", 1,\
 5, 11435, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "PROSUMER4.ideal_house.port_hot.h_outflow", 1,\
 5, 11435, 1024)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.bou.p", 1, 7, 1628, 1024)
DeclareAlias2("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 18961, 1024)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.T_degC",\
 "Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER4.ideal_house.control_volume.vol.dynBal.U", \
"Internal energy of fluid [J]", 247, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER4.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.m", \
"Mass of fluid [kg]", 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.state_default.p",\
 "Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.state_default.T",\
 "Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER4.ideal_house.control_volume.vol.dynBal.mWat_flow_internal",\
 "Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[1].T", 1, 5, 11695, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.port_a.p", 1, 5, 11532, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.port_a.h_outflow", 1, 5, 11524, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.port_a.h_outflow", 1, 5, 11524, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.port_a.p", 1,\
 5, 11532, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[1].T", 1,\
 5, 11695, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[2].T", 1, 5, 11697, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[2].p", 1, 5, 11696, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[2].h", 1, 5, 18995, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[2].p", 1,\
 5, 11696, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[2].T", 1,\
 5, 11697, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[3].T", 1, 5, 11699, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[3].p", 1, 5, 11698, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[3].h", 1, 5, 19004, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[3].p", 1,\
 5, 11698, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[3].T", 1,\
 5, 11699, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[4].T", 1, 5, 11701, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[4].p", 1, 5, 11700, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[4].h", 1, 5, 19013, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[4].p", 1,\
 5, 11700, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[4].T", 1,\
 5, 11701, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[5].T", 1, 5, 11703, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[5].p", 1, 5, 11702, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[5].h", 1, 5, 19022, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[5].p", 1,\
 5, 11702, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[5].T", 1,\
 5, 11703, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[6].T", 1, 5, 11705, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[6].p", 1, 5, 11704, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[6].h", 1, 5, 19031, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[6].p", 1,\
 5, 11704, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[6].T", 1,\
 5, 11705, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[7].T", 1, 5, 11707, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[7].p", 1, 5, 11706, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[7].h", 1, 5, 19040, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[7].p", 1,\
 5, 11706, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[7].T", 1,\
 5, 11707, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[8].T", 1, 5, 11709, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[8].p", 1, 5, 11708, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[8].h", 1, 5, 19049, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[8].p", 1,\
 5, 11708, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[8].T", 1,\
 5, 11709, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[9].T", 1, 5, 11711, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[9].p", 1, 5, 11710, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_hot.pipe.mediums[9].h", 1, 5, 19058, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[9].p", 1,\
 5, 11710, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[9].T", 1,\
 5, 11711, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_hot.pipe.statesFM[10].T", 1, 5, 11712, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_hot.pipe.port_b.p", 1, 5, 11533, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.m_dot_sens_prim.port_a.h_outflow", 1, 5, 11495, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.m_dot_sens_prim.port_a.h_outflow", 1, 5, 11495, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_hot.pipe.port_b.p", 1,\
 5, 11533, 0)
DeclareAlias2("PROSUMER4.pipe_prim_hot.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_hot.pipe.statesFM[10].T", 1,\
 5, 11712, 0)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_hot.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[1].T", 1, 5, 12181, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.port_a.p", 1, 5, 12018, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.T_sens_prim_cold.port_a.h_outflow", 1, 5, 11504, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.T_sens_prim_cold.port_a.h_outflow", 1, 5, 11504, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.port_a.p", 1,\
 5, 12018, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[1].T", 1,\
 5, 12181, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[2].T", 1, 5, 12183, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[2].p", 1, 5, 12182, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[2].h", 1, 5, 19083, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[2].p", 1,\
 5, 12182, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[2].T", 1,\
 5, 12183, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[3].T", 1, 5, 12185, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[3].p", 1, 5, 12184, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[3].h", 1, 5, 19092, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[3].p", 1,\
 5, 12184, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[3].T", 1,\
 5, 12185, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[4].T", 1, 5, 12187, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[4].p", 1, 5, 12186, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[4].h", 1, 5, 19101, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[4].p", 1,\
 5, 12186, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[4].T", 1,\
 5, 12187, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[5].T", 1, 5, 12189, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[5].p", 1, 5, 12188, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[5].h", 1, 5, 19110, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[5].p", 1,\
 5, 12188, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[5].T", 1,\
 5, 12189, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[6].T", 1, 5, 12191, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[6].p", 1, 5, 12190, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[6].h", 1, 5, 19119, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[6].p", 1,\
 5, 12190, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[6].T", 1,\
 5, 12191, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[7].T", 1, 5, 12193, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[7].p", 1, 5, 12192, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[7].h", 1, 5, 19128, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[7].p", 1,\
 5, 12192, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[7].T", 1,\
 5, 12193, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[8].T", 1, 5, 12195, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[8].p", 1, 5, 12194, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[8].h", 1, 5, 19137, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[8].p", 1,\
 5, 12194, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[8].T", 1,\
 5, 12195, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[9].T", 1, 5, 12197, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[9].p", 1, 5, 12196, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.pipe.mediums[9].h", 1, 5, 19146, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[9].p", 1,\
 5, 12196, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[9].T", 1,\
 5, 12197, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER4.pipe_prim_cold.pipe.statesFM[10].T", 1, 5, 12198, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER4.pipe_prim_cold.pipe.port_b.p", 1, 5, 12019, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.port_b.h_outflow", 1, 5, 12010, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER4.pipe_prim_cold.port_b.h_outflow", 1, 5, 12010, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER4.pipe_prim_cold.pipe.port_b.p", 1,\
 5, 12019, 0)
DeclareAlias2("PROSUMER4.pipe_prim_cold.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER4.pipe_prim_cold.pipe.statesFM[10].T", 1,\
 5, 12198, 0)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER4.pipe_prim_cold.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_4.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_4.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_prim_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_4.PID_prim_cons.I.y", "Connector of Real output signal",\
 248, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_4.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_4.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_4.PID_prim_cons.addI.k1", "Gain of input signal 1",\
 2480, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_cons.addI.k2", "Gain of input signal 2",\
 2481, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_cons.addI.k3", "Gain of input signal 3",\
 2482, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_4.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_4.PIDin_prim_cons_des_weighted", 1, 5, 12525, 0)
DeclareAlias2("Controller_4.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_4.PIDin_prim_cons_is_weighted", 1, 5, 12524, 0)
DeclareVariable("Controller_4.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_4.PID_prim_cons.addI.y", "Connector of Real output signal",\
 "Controller_4.PID_prim_cons.I.u", 1, 5, 19168, 0)
DeclareAlias2("Controller_4.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_4.PID_prim_cons.y", 1, 5, 12539, 0)
DeclareAlias2("Controller_4.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_4.PID_prim_cons.limiter.u", 1, 5, 12563, 0)
DeclareVariable("Controller_4.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_4.PID_prim_cons.addSat.k1", "Gain of input signal 1",\
 2483, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_cons.addSat.k2", "Gain of input signal 2",\
 2484, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_4.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_4.PID_prim_cons.gainTrack.u", "Input signal connector",\
 "Controller_4.PID_prim_cons.addSat.y", 1, 5, 19172, 0)
DeclareAlias2("Controller_4.PID_prim_cons.gainTrack.y", "Output signal connector",\
 "Controller_4.PID_prim_cons.addI.u3", 1, 5, 19171, 0)
DeclareVariable("Controller_4.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_4.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_sec_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_4.PID_sec_cons.I.y", "Connector of Real output signal",\
 249, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_4.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_4.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_4.PID_sec_cons.addI.k1", "Gain of input signal 1", 2485,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_cons.addI.k2", "Gain of input signal 2", 2486,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_cons.addI.k3", "Gain of input signal 3", 2487,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_4.PID_sec_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_4.PIDin_sec_cons_des_weighted", 1, 5, 12529, 0)
DeclareAlias2("Controller_4.PID_sec_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_4.PIDin_sec_cons_is_weighted", 1, 5, 12528, 0)
DeclareVariable("Controller_4.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_4.PID_sec_cons.addI.y", "Connector of Real output signal",\
 "Controller_4.PID_sec_cons.I.u", 1, 5, 19179, 0)
DeclareAlias2("Controller_4.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_4.PID_sec_cons.y", 1, 5, 12567, 0)
DeclareAlias2("Controller_4.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_4.PID_sec_cons.limiter.u", 1, 5, 12591, 0)
DeclareVariable("Controller_4.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_4.PID_sec_cons.addSat.k1", "Gain of input signal 1",\
 2488, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_cons.addSat.k2", "Gain of input signal 2",\
 2489, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_4.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_4.PID_sec_cons.gainTrack.u", "Input signal connector",\
 "Controller_4.PID_sec_cons.addSat.y", 1, 5, 19183, 0)
DeclareAlias2("Controller_4.PID_sec_cons.gainTrack.y", "Output signal connector",\
 "Controller_4.PID_sec_cons.addI.u3", 1, 5, 19182, 0)
DeclareVariable("Controller_4.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_4.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_prim_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_4.PID_prim_prod.I.y", "Connector of Real output signal",\
 250, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_4.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_4.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_4.PID_prim_prod.addI.k1", "Gain of input signal 1",\
 2490, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_prod.addI.k2", "Gain of input signal 2",\
 2491, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_prod.addI.k3", "Gain of input signal 3",\
 2492, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_4.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_4.PIDin_prim_prod_des_weighted", 1, 5, 12527, 0)
DeclareAlias2("Controller_4.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_4.PIDin_prim_prod_is_weighted", 1, 5, 12526, 0)
DeclareVariable("Controller_4.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_4.PID_prim_prod.addI.y", "Connector of Real output signal",\
 "Controller_4.PID_prim_prod.I.u", 1, 5, 19190, 0)
DeclareAlias2("Controller_4.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_4.PID_prim_prod.y", 1, 5, 12595, 0)
DeclareAlias2("Controller_4.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_4.PID_prim_prod.limiter.u", 1, 5, 12619, 0)
DeclareVariable("Controller_4.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_4.PID_prim_prod.addSat.k1", "Gain of input signal 1",\
 2493, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_prim_prod.addSat.k2", "Gain of input signal 2",\
 2494, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_4.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_4.PID_prim_prod.gainTrack.u", "Input signal connector",\
 "Controller_4.PID_prim_prod.addSat.y", 1, 5, 19194, 0)
DeclareAlias2("Controller_4.PID_prim_prod.gainTrack.y", "Output signal connector",\
 "Controller_4.PID_prim_prod.addI.u3", 1, 5, 19193, 0)
DeclareVariable("Controller_4.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_4.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_4.PID_sec_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_4.PID_sec_prod.I.y", "Connector of Real output signal",\
 251, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_4.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_4.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_4.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_4.PID_sec_prod.addI.k1", "Gain of input signal 1", 2495,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_prod.addI.k2", "Gain of input signal 2", 2496,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_prod.addI.k3", "Gain of input signal 3", 2497,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_4.PID_sec_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_4.PIDin_sec_prod_des_weighted", 1, 5, 12531, 0)
DeclareAlias2("Controller_4.PID_sec_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_4.PIDin_sec_prod_is_weighted", 1, 5, 12530, 0)
DeclareVariable("Controller_4.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_4.PID_sec_prod.addI.y", "Connector of Real output signal",\
 "Controller_4.PID_sec_prod.I.u", 1, 5, 19201, 0)
DeclareAlias2("Controller_4.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_4.PID_sec_prod.y", 1, 5, 12623, 0)
DeclareAlias2("Controller_4.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_4.PID_sec_prod.limiter.u", 1, 5, 12647, 0)
DeclareVariable("Controller_4.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_4.PID_sec_prod.addSat.k1", "Gain of input signal 1",\
 2498, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_4.PID_sec_prod.addSat.k2", "Gain of input signal 2",\
 2499, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_4.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_4.PID_sec_prod.gainTrack.u", "Input signal connector",\
 "Controller_4.PID_sec_prod.addSat.y", 1, 5, 19205, 0)
DeclareAlias2("Controller_4.PID_sec_prod.gainTrack.y", "Output signal connector",\
 "Controller_4.PID_sec_prod.addI.u3", 1, 5, 19204, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[1].T", 1, 5, 12849, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.port_a.p", 1, 5, 12686, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.port_a.h_outflow", 1, 5, 12680, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.port_a.h_outflow", 1, 5, 12680, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.port_a.p", 1, 5, 12686, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[1].T", 1, 5, 12849, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[2].T", 1, 5, 12851, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[2].p", 1, 5, 12850, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[2].h", 1, 5, 19215, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[2].p", 1, 5, 12850, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[2].T", 1, 5, 12851, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[3].T", 1, 5, 12853, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[3].p", 1, 5, 12852, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[3].h", 1, 5, 19224, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[3].p", 1, 5, 12852, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[3].T", 1, 5, 12853, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[4].T", 1, 5, 12855, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[4].p", 1, 5, 12854, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[4].h", 1, 5, 19233, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[4].p", 1, 5, 12854, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[4].T", 1, 5, 12855, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[5].T", 1, 5, 12857, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[5].p", 1, 5, 12856, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[5].h", 1, 5, 19242, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[5].p", 1, 5, 12856, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[5].T", 1, 5, 12857, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[6].T", 1, 5, 12859, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[6].p", 1, 5, 12858, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[6].h", 1, 5, 19251, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[6].p", 1, 5, 12858, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[6].T", 1, 5, 12859, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[7].T", 1, 5, 12861, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[7].p", 1, 5, 12860, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[7].h", 1, 5, 19260, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[7].p", 1, 5, 12860, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[7].T", 1, 5, 12861, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[8].T", 1, 5, 12863, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[8].p", 1, 5, 12862, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[8].h", 1, 5, 19269, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[8].p", 1, 5, 12862, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[8].T", 1, 5, 12863, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[9].T", 1, 5, 12865, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[9].p", 1, 5, 12864, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.pipe.mediums[9].h", 1, 5, 19278, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[9].p", 1, 5, 12864, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[9].T", 1, 5, 12865, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[10].T", 1, 5, 12866, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.port_b.p", 1, 5, 12687, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.port_b.h_outflow", 1, 5, 12681, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_hot_34.port_b.h_outflow", 1, 5, 12681, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_hot_34.pipe.port_b.p", 1, 5, 12687, 0)
DeclareAlias2("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_hot_34.pipe.statesFM[10].T", 1, 5, 12866, 0)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_hot_34.pipe.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[1].T", 1, 5, 13351, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.port_a.p", 1, 5, 13188, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.port_a.h_outflow", 1, 5, 13182, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.port_a.h_outflow", 1, 5, 13182, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.port_a.p", 1, 5, 13188, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[1].T", 1, 5, 13351, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[2].T", 1, 5, 13353, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[2].p", 1, 5, 13352, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[2].h", 1, 5, 19303, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[2].p", 1, 5, 13352, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[2].T", 1, 5, 13353, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[3].T", 1, 5, 13355, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[3].p", 1, 5, 13354, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[3].h", 1, 5, 19312, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[3].p", 1, 5, 13354, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[3].T", 1, 5, 13355, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[4].T", 1, 5, 13357, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[4].p", 1, 5, 13356, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[4].h", 1, 5, 19321, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[4].p", 1, 5, 13356, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[4].T", 1, 5, 13357, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[5].T", 1, 5, 13359, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[5].p", 1, 5, 13358, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[5].h", 1, 5, 19330, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[5].p", 1, 5, 13358, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[5].T", 1, 5, 13359, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[6].T", 1, 5, 13361, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[6].p", 1, 5, 13360, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[6].h", 1, 5, 19339, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[6].p", 1, 5, 13360, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[6].T", 1, 5, 13361, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[7].T", 1, 5, 13363, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[7].p", 1, 5, 13362, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[7].h", 1, 5, 19348, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[7].p", 1, 5, 13362, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[7].T", 1, 5, 13363, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[8].T", 1, 5, 13365, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[8].p", 1, 5, 13364, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[8].h", 1, 5, 19357, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[8].p", 1, 5, 13364, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[8].T", 1, 5, 13365, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[9].T", 1, 5, 13367, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[9].p", 1, 5, 13366, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.pipe.mediums[9].h", 1, 5, 19366, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[9].p", 1, 5, 13366, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[9].T", 1, 5, 13367, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_6_pipe_cold_34.pipe.statesFM[10].T", 1, 5, 13368, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_6_pipe_cold_34.pipe.port_b.p", 1, 5, 13189, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.port_b.h_outflow", 1, 5, 13183, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_6_pipe_cold_34.port_b.h_outflow", 1, 5, 13183, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "Pipe_ID_6_pipe_cold_34.pipe.port_b.p", 1,\
 5, 13189, 0)
DeclareAlias2("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "Pipe_ID_6_pipe_cold_34.pipe.statesFM[10].T", 1,\
 5, 13368, 0)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_6_pipe_cold_34.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER5.pump_sec_cons.port_a.h_outflow", 1, 5, 13984, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER5.pump_sec_cons.vol.dynBal.U", 1, 1, 252, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER5.pump_sec_cons.vol.dynBal.m", 1, 5, 19406, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_sec_cons.port_a.m_flow", 1, 5, 13983, 1156)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.bou.p", 1, 7, 2116, 1028)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_sec_cons.port_a.h_outflow", 1, 5, 13984, 1028)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_sec_cons.port_a.m_flow", -1, 5, 13983, 1156)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.bou.p", 1, 7, 2116, 1028)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_sec_cons.port_a.h_outflow", 1, 5, 13984, 1028)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.bou.p", 1, 7, 2116, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.pump_sec_cons.port_a.h_outflow", 1, 5, 13984, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pump_sec_cons.port_a.h_outflow", 1, 5, 13984, 1024)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.bou.p", 1, 7, 2116, 1024)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pump_sec_cons.vol.dynBal.medium.T", 1,\
 5, 19397, 1024)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER5.pump_sec_cons.vol.dynBal.U", "Internal energy of fluid [J]",\
 252, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER5.pump_sec_cons.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_cons.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER5.pump_sec_cons.vol.dynBal.der(U)", 1, 6, 252, 1024)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_cons.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_cons.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER5.pump_sec_cons.senRelPre.p_rel", 1, 5, 14096, 1024)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER5.pump_sec_prod.port_a.h_outflow", 1, 5, 14180, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER5.pump_sec_prod.vol.dynBal.U", 1, 1, 253, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER5.pump_sec_prod.vol.dynBal.m", 1, 5, 19445, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_sec_prod.port_a.m_flow", 1, 5, 14179, 1156)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.heat_exchanger.port_a2.p", 1, 5, 13762, 1028)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_sec_prod.port_a.h_outflow", 1, 5, 14180, 1028)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_sec_prod.port_a.m_flow", -1, 5, 14179, 1156)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.heat_exchanger.port_a2.p", 1, 5, 13762, 1028)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_sec_prod.port_a.h_outflow", 1, 5, 14180, 1028)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.heat_exchanger.port_a2.p", 1, 5, 13762, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.pump_sec_prod.port_a.h_outflow", 1, 5, 14180, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pump_sec_prod.port_a.h_outflow", 1, 5, 14180, 1024)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.heat_exchanger.port_a2.p", 1,\
 5, 13762, 1024)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pump_sec_prod.vol.dynBal.medium.T", 1,\
 5, 19436, 1024)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER5.pump_sec_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 253, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER5.pump_sec_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
EndNonAlias(20)
PreNonAliasNew(21)
StartNonAlias(21)
DeclareAlias2("PROSUMER5.pump_sec_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER5.pump_sec_prod.vol.dynBal.der(U)", 1, 6, 253, 1024)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.ports_H_flow[1]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.ports_H_flow[2]", "[W]", 0.0,\
 -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.rho_start", "Density, used to compute fluid mass [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_sec_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_sec_prod.eff.dp_in", "Prescribed pressure increase [Pa]",\
 "PROSUMER5.pump_sec_prod.senRelPre.p_rel", 1, 5, 14292, 1024)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.energyDynamics", \
"Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.substanceDynamics", \
"Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.traceDynamics", \
"Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 1, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.p_start", "Start value of pressure [Pa|bar]",\
 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.T_start", "Start value of temperature [K|degC]",\
 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.mSenFac", "Factor for scaling the sensible thermal mass of the volume",\
 1.0, 1.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.simplify_mWat_flow", \
"Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.nPorts", "Number of ports [:#(type=Integer)]",\
 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.use_mWat_flow", \
"Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.Q_flow", "Sensible plus latent heat flow rate transferred into the medium [W]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.hOut", "Leaving specific enthalpy of the component [J/kg]",\
 "PROSUMER5.pump_prim_prod.port_a.h_outflow", 1, 5, 14485, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.UOut", "Internal energy of the component [J]",\
 "PROSUMER5.pump_prim_prod.vol.dynBal.U", 1, 1, 254, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.mOut", "Mass of the component [kg]",\
 "PROSUMER5.pump_prim_prod.vol.dynBal.m", 1, 5, 19484, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[1].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_prim_prod.port_a.m_flow", 1, 5, 14483, 1156)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[1].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.pump_prim_prod.port_a.p", 1, 5, 14484, 1028)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[1].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_prim_prod.port_a.h_outflow", 1, 5, 14485, 1028)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[2].m_flow", \
"Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.pump_prim_prod.port_a.m_flow", -1, 5, 14483, 1156)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[2].p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "PROSUMER5.pump_prim_prod.port_a.p", 1, 5, 14484, 1028)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.ports[2].h_outflow", \
"Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.pump_prim_prod.port_a.h_outflow", 1, 5, 14485, 1028)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.T", "Temperature of medium [K|degC]",\
 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.medium.p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pump_prim_prod.port_a.p", 1, 5, 14484, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.medium.h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.pump_prim_prod.port_a.h_outflow", 1, 5, 14485, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.medium.u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pump_prim_prod.port_a.h_outflow", 1, 5, 14485, 1024)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pump_prim_prod.port_a.p", 1, 5,\
 14484, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pump_prim_prod.vol.dynBal.medium.T", 1,\
 5, 19475, 1024)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareState("PROSUMER5.pump_prim_prod.vol.dynBal.U", "Internal energy of fluid [J]",\
 254, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER5.pump_prim_prod.vol.dynBal.der(U)", "der(Internal energy of fluid) [W]",\
 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.m", "Mass of fluid [kg]", \
0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.der(m)", "der(Mass of fluid) [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.mb_flow", "Mass flows across boundaries [kg/s]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_prim_prod.vol.dynBal.Hb_flow", "Enthalpy flow across boundaries or energy source/sink [W]",\
 "PROSUMER5.pump_prim_prod.vol.dynBal.der(U)", 1, 6, 254, 1024)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.fluidVolume", "Volume [m3]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.CSen", "Aditional heat capacity for implementing mFactor [J/K]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.ports_H_flow[1]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.ports_H_flow[2]", "[W]", \
0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.state_default.p", \
"Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.state_default.T", \
"Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.hStart", "Start value for specific enthalpy [J/kg]",\
 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal._simplify_mWat_flow", \
"If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.pump_prim_prod.vol.dynBal.mWat_flow_internal", \
"Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pump_prim_prod.eff.y_in", "Prescribed mover speed [1]",\
 "PROSUMER5.pump_prim_prod.y_actual", 1, 5, 14570, 1024)
DeclareAlias2("PROSUMER5.pump_prim_prod.eff.dp", "Pressure increase (computed or prescribed) [Pa]",\
 "PROSUMER5.pump_prim_prod.dpMachine", 1, 5, 14575, 1024)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.energyDynamics",\
 "Type of energy balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.massDynamics", \
"Type of mass balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.substanceDynamics",\
 "Type of independent mass fraction balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.traceDynamics",\
 "Type of trace substance balance: dynamic (3 initialization options) or steady state [:#(type=Modelica.Fluid.Types.Dynamics)]",\
 2, 1.0,4.0,0.0,0,2565)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.p_start", \
"Start value of pressure [Pa|bar]", 300000, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.T_start", \
"Start value of temperature [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.X_start[1]", \
"Start value of mass fractions m_i/m [kg/kg]", 0.0, 0.0,1.0,0.1,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.mSenFac", \
"Factor for scaling the sensible thermal mass of the volume", 1.0, 1.0,1E+100,\
0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.initialize_p", \
"= true to set up initial equations for pressure [:#(type=Boolean)]", false, \
0.0,0.0,0.0,0,1539)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.simplify_mWat_flow",\
 "Set to true to cause port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero. Used only if Medium.nX > 1 [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.nPorts", \
"Number of ports [:#(type=Integer)]", 2, 0.0,0.0,0.0,0,2565)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.use_mWat_flow",\
 "Set to true to enable input connector for moisture mass flow rate [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.use_C_flow", \
"Set to true to enable input connector for trace substance [:#(type=Boolean)]", \
false, 0.0,0.0,0.0,0,2563)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.Q_flow", \
"Sensible plus latent heat flow rate transferred into the medium [W]", \
"PROSUMER5.ideal_house.control_volume.Q_flow", 1, 5, 15107, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.hOut", \
"Leaving specific enthalpy of the component [J/kg]", "PROSUMER5.ideal_house.port_hot.h_outflow", 1,\
 5, 15108, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.UOut", \
"Internal energy of the component [J]", "PROSUMER5.ideal_house.control_volume.vol.dynBal.U", 1,\
 1, 255, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.mOut", \
"Mass of the component [kg]", "PROSUMER5.ideal_house.control_volume.vol.dynBal.m", 1,\
 5, 19522, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[1].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.heat_exchanger.port_a2.m_flow", 1, 5, 13761, 1156)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[1].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER5.bou.p", 1,\
 7, 2116, 1028)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[1].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.ideal_house.port_hot.h_outflow", 1, 5, 15108, 1028)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[2].m_flow",\
 "Mass flow rate from the connection point into the component [kg/s]", \
"PROSUMER5.heat_exchanger.port_a2.m_flow", -1, 5, 13761, 1156)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[2].p", \
"Thermodynamic pressure in the connection point [Pa|bar]", "PROSUMER5.bou.p", 1,\
 7, 2116, 1028)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports[2].h_outflow",\
 "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "PROSUMER5.ideal_house.port_hot.h_outflow", 1, 5, 15108, 1028)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.T", \
"Temperature of medium [K|degC]", 300.0, 1.0,10000.0,300.0,0,2560)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.bou.p", 1, 7, 2116, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.h", \
"Specific enthalpy of medium [J/kg]", "PROSUMER5.ideal_house.port_hot.h_outflow", 1,\
 5, 15108, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.u", \
"Specific internal energy of medium [J/kg]", "PROSUMER5.ideal_house.port_hot.h_outflow", 1,\
 5, 15108, 1024)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.d", \
"Density of medium [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.MM", \
"Molar mass (of mixture or single fluid) [kg/mol]", 0.018015268, 0.0,1E+100,0.0,\
0,2561)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.bou.p", 1, 7, 2116, 1024)
DeclareAlias2("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.T", 1,\
 5, 19513, 1024)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.T_degC",\
 "Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.medium.p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareState("PROSUMER5.ideal_house.control_volume.vol.dynBal.U", \
"Internal energy of fluid [J]", 255, 0.0, 0.0,0.0,100000.0,0,2592)
DeclareDerivative("PROSUMER5.ideal_house.control_volume.vol.dynBal.der(U)", \
"der(Internal energy of fluid) [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.m", \
"Mass of fluid [kg]", 0.0, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.der(m)", \
"der(Mass of fluid) [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.mb_flow", \
"Mass flows across boundaries [kg/s]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.Hb_flow", \
"Enthalpy flow across boundaries or energy source/sink [W]", 0.0, 0.0,0.0,0.0,0,2560)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.fluidVolume", \
"Volume [m3]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.CSen", \
"Aditional heat capacity for implementing mFactor [J/K]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports_H_flow[1]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.ports_H_flow[2]",\
 "[W]", 0.0, -100000000.0,100000000.0,1000.0,0,2560)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.cp_default", \
"Heat capacity, to compute additional dry mass [J/(kg.K)]", 4184, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.rho_start", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.computeCSen", \
"[:#(type=Boolean)]", false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.state_default.p",\
 "Absolute pressure of medium [Pa|bar]", 300000.0, 0.0,100000000.0,100000.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.state_default.T",\
 "Temperature of medium [K|degC]", 293.15, 1.0,10000.0,300.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.rho_default", \
"Density, used to compute fluid mass [kg/m3|g/cm3]", 995.586, 0.0,1E+100,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.hStart", \
"Start value for specific enthalpy [J/kg]", 0.0, 0.0,0.0,0.0,0,2561)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal._simplify_mWat_flow",\
 "If true, then port_a.m_flow + port_b.m_flow = 0 even if mWat_flow is non-zero, and equations are simplified [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,2563)
DeclareVariable("PROSUMER5.ideal_house.control_volume.vol.dynBal.mWat_flow_internal",\
 "Needed to connect to conditional connector [kg/s]", 0, 0.0,0.0,0.0,0,2561)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[1].T", 1, 5, 15368, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.port_a.p", 1, 5, 15205, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.port_a.h_outflow", 1, 5, 15197, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.port_a.h_outflow", 1, 5, 15197, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.port_a.p", 1,\
 5, 15205, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[1].T", 1,\
 5, 15368, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[2].T", 1, 5, 15370, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[2].p", 1, 5, 15369, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[2].h", 1, 5, 19547, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[2].p", 1,\
 5, 15369, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[2].T", 1,\
 5, 15370, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[3].T", 1, 5, 15372, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[3].p", 1, 5, 15371, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[3].h", 1, 5, 19556, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[3].p", 1,\
 5, 15371, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[3].T", 1,\
 5, 15372, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[4].T", 1, 5, 15374, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[4].p", 1, 5, 15373, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[4].h", 1, 5, 19565, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[4].p", 1,\
 5, 15373, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[4].T", 1,\
 5, 15374, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[5].T", 1, 5, 15376, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[5].p", 1, 5, 15375, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[5].h", 1, 5, 19574, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[5].p", 1,\
 5, 15375, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[5].T", 1,\
 5, 15376, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[6].T", 1, 5, 15378, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[6].p", 1, 5, 15377, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[6].h", 1, 5, 19583, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[6].p", 1,\
 5, 15377, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[6].T", 1,\
 5, 15378, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[7].T", 1, 5, 15380, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[7].p", 1, 5, 15379, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[7].h", 1, 5, 19592, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[7].p", 1,\
 5, 15379, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[7].T", 1,\
 5, 15380, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[8].T", 1, 5, 15382, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[8].p", 1, 5, 15381, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[8].h", 1, 5, 19601, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[8].p", 1,\
 5, 15381, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[8].T", 1,\
 5, 15382, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[9].T", 1, 5, 15384, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[9].p", 1, 5, 15383, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_hot.pipe.mediums[9].h", 1, 5, 19610, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[9].p", 1,\
 5, 15383, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[9].T", 1,\
 5, 15384, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_hot.pipe.statesFM[10].T", 1, 5, 15385, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_hot.pipe.port_b.p", 1, 5, 15206, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.m_dot_sens_prim.port_a.h_outflow", 1, 5, 15168, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.m_dot_sens_prim.port_a.h_outflow", 1, 5, 15168, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_hot.pipe.port_b.p", 1,\
 5, 15206, 0)
DeclareAlias2("PROSUMER5.pipe_prim_hot.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_hot.pipe.statesFM[10].T", 1,\
 5, 15385, 0)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_hot.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[1].T", 1, 5, 15853, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.port_a.p", 1, 5, 15690, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.T_sens_prim_cold.port_a.h_outflow", 1, 5, 15177, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.T_sens_prim_cold.port_a.h_outflow", 1, 5, 15177, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.port_a.p", 1,\
 5, 15690, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[1].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[1].T", 1,\
 5, 15853, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[1].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[2].T", 1, 5, 15855, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[2].p", 1, 5, 15854, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[2].h", 1, 5, 19635, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[2].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[2].p", 1,\
 5, 15854, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[2].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[2].T", 1,\
 5, 15855, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[2].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[3].T", 1, 5, 15857, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[3].p", 1, 5, 15856, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[3].h", 1, 5, 19644, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[3].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[3].p", 1,\
 5, 15856, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[3].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[3].T", 1,\
 5, 15857, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[3].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[4].T", 1, 5, 15859, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[4].p", 1, 5, 15858, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[4].h", 1, 5, 19653, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[4].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[4].p", 1,\
 5, 15858, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[4].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[4].T", 1,\
 5, 15859, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[4].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[5].T", 1, 5, 15861, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[5].p", 1, 5, 15860, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[5].h", 1, 5, 19662, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[5].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[5].p", 1,\
 5, 15860, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[5].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[5].T", 1,\
 5, 15861, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[5].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[6].T", 1, 5, 15863, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[6].p", 1, 5, 15862, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[6].h", 1, 5, 19671, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[6].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[6].p", 1,\
 5, 15862, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[6].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[6].T", 1,\
 5, 15863, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[6].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[7].T", 1, 5, 15865, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[7].p", 1, 5, 15864, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[7].h", 1, 5, 19680, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[7].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[7].p", 1,\
 5, 15864, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[7].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[7].T", 1,\
 5, 15865, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[7].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[8].T", 1, 5, 15867, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[8].p", 1, 5, 15866, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[8].h", 1, 5, 19689, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[8].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[8].p", 1,\
 5, 15866, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[8].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[8].T", 1,\
 5, 15867, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[8].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[9].T", 1, 5, 15869, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[9].p", 1, 5, 15868, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.pipe.mediums[9].h", 1, 5, 19698, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[9].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[9].p", 1,\
 5, 15868, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[9].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[9].T", 1,\
 5, 15869, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[9].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "PROSUMER5.pipe_prim_cold.pipe.statesFM[10].T", 1, 5, 15870, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "PROSUMER5.pipe_prim_cold.pipe.port_b.p", 1, 5, 15691, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.port_b.h_outflow", 1, 5, 15682, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "PROSUMER5.pipe_prim_cold.port_b.h_outflow", 1, 5, 15682, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].X[1]", \
"Mass fractions (= (component mass)/total mass  m_i/m) [1]", 1, 0.0,1.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].R_s", \
"Gas constant (of mixture if applicable) [J/(kg.K)]", 0, 0.0,0.0,0.0,0,513)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "PROSUMER5.pipe_prim_cold.pipe.port_b.p", 1,\
 5, 15691, 0)
DeclareAlias2("PROSUMER5.pipe_prim_cold.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "PROSUMER5.pipe_prim_cold.pipe.statesFM[10].T", 1,\
 5, 15870, 0)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("PROSUMER5.pipe_prim_cold.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_5.PID_prim_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_prim_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_5.PID_prim_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_prim_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_5.PID_prim_cons.I.y", "Connector of Real output signal",\
 256, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_5.PID_prim_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_5.PID_prim_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_5.PID_prim_cons.addI.k1", "Gain of input signal 1",\
 2500, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_cons.addI.k2", "Gain of input signal 2",\
 2501, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_cons.addI.k3", "Gain of input signal 3",\
 2502, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_5.PID_prim_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_5.PIDin_prim_cons_des_weighted", 1, 5, 16196, 0)
DeclareAlias2("Controller_5.PID_prim_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_5.PIDin_prim_cons_is_weighted", 1, 5, 16195, 0)
DeclareVariable("Controller_5.PID_prim_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_5.PID_prim_cons.addI.y", "Connector of Real output signal",\
 "Controller_5.PID_prim_cons.I.u", 1, 5, 19720, 0)
DeclareAlias2("Controller_5.PID_prim_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_5.PID_prim_cons.y", 1, 5, 16210, 0)
DeclareAlias2("Controller_5.PID_prim_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_5.PID_prim_cons.limiter.u", 1, 5, 16234, 0)
DeclareVariable("Controller_5.PID_prim_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_5.PID_prim_cons.addSat.k1", "Gain of input signal 1",\
 2503, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_cons.addSat.k2", "Gain of input signal 2",\
 2504, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_5.PID_prim_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_5.PID_prim_cons.gainTrack.u", "Input signal connector",\
 "Controller_5.PID_prim_cons.addSat.y", 1, 5, 19724, 0)
DeclareAlias2("Controller_5.PID_prim_cons.gainTrack.y", "Output signal connector",\
 "Controller_5.PID_prim_cons.addI.u3", 1, 5, 19723, 0)
DeclareVariable("Controller_5.PID_sec_cons.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_sec_cons.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_cons.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_cons.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_5.PID_sec_cons.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_sec_cons.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_5.PID_sec_cons.I.y", "Connector of Real output signal",\
 257, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_5.PID_sec_cons.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_5.PID_sec_cons.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_cons.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_5.PID_sec_cons.addI.k1", "Gain of input signal 1", 2505,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_cons.addI.k2", "Gain of input signal 2", 2506,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_cons.addI.k3", "Gain of input signal 3", 2507,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_5.PID_sec_cons.addI.u1", "Connector of Real input signal 1",\
 "Controller_5.PIDin_sec_cons_des_weighted", 1, 5, 16200, 0)
DeclareAlias2("Controller_5.PID_sec_cons.addI.u2", "Connector of Real input signal 2",\
 "Controller_5.PIDin_sec_cons_is_weighted", 1, 5, 16199, 0)
DeclareVariable("Controller_5.PID_sec_cons.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_5.PID_sec_cons.addI.y", "Connector of Real output signal",\
 "Controller_5.PID_sec_cons.I.u", 1, 5, 19731, 0)
DeclareAlias2("Controller_5.PID_sec_cons.addSat.u1", "Connector of Real input signal 1",\
 "Controller_5.PID_sec_cons.y", 1, 5, 16238, 0)
DeclareAlias2("Controller_5.PID_sec_cons.addSat.u2", "Connector of Real input signal 2",\
 "Controller_5.PID_sec_cons.limiter.u", 1, 5, 16262, 0)
DeclareVariable("Controller_5.PID_sec_cons.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_5.PID_sec_cons.addSat.k1", "Gain of input signal 1",\
 2508, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_cons.addSat.k2", "Gain of input signal 2",\
 2509, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_5.PID_sec_cons.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_5.PID_sec_cons.gainTrack.u", "Input signal connector",\
 "Controller_5.PID_sec_cons.addSat.y", 1, 5, 19735, 0)
DeclareAlias2("Controller_5.PID_sec_cons.gainTrack.y", "Output signal connector",\
 "Controller_5.PID_sec_cons.addI.u3", 1, 5, 19734, 0)
DeclareVariable("Controller_5.PID_prim_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_prim_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_5.PID_prim_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_prim_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_5.PID_prim_prod.I.y", "Connector of Real output signal",\
 258, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_5.PID_prim_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_5.PID_prim_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_prim_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_5.PID_prim_prod.addI.k1", "Gain of input signal 1",\
 2510, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_prod.addI.k2", "Gain of input signal 2",\
 2511, -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_prod.addI.k3", "Gain of input signal 3",\
 2512, 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_5.PID_prim_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_5.PIDin_prim_prod_des_weighted", 1, 5, 16198, 0)
DeclareAlias2("Controller_5.PID_prim_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_5.PIDin_prim_prod_is_weighted", 1, 5, 16197, 0)
DeclareVariable("Controller_5.PID_prim_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_5.PID_prim_prod.addI.y", "Connector of Real output signal",\
 "Controller_5.PID_prim_prod.I.u", 1, 5, 19742, 0)
DeclareAlias2("Controller_5.PID_prim_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_5.PID_prim_prod.y", 1, 5, 16266, 0)
DeclareAlias2("Controller_5.PID_prim_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_5.PID_prim_prod.limiter.u", 1, 5, 16290, 0)
DeclareVariable("Controller_5.PID_prim_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_5.PID_prim_prod.addSat.k1", "Gain of input signal 1",\
 2513, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_prim_prod.addSat.k2", "Gain of input signal 2",\
 2514, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_5.PID_prim_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_5.PID_prim_prod.gainTrack.u", "Input signal connector",\
 "Controller_5.PID_prim_prod.addSat.y", 1, 5, 19746, 0)
DeclareAlias2("Controller_5.PID_prim_prod.gainTrack.y", "Output signal connector",\
 "Controller_5.PID_prim_prod.addI.u3", 1, 5, 19745, 0)
DeclareVariable("Controller_5.PID_sec_prod.I.k", "Integrator gain [1]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_sec_prod.I.use_reset", "= true, if reset port enabled [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_prod.I.use_set", "= true, if set port enabled and used as reinitialization value when reset [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_prod.I.initType", "Type of initialization (1: no init, 2: steady state, 3,4: initial output) [:#(type=Modelica.Blocks.Types.Init)]",\
 1, 1.0,4.0,0.0,0,517)
DeclareVariable("Controller_5.PID_sec_prod.I.y_start", "Initial or guess value of output (= state)",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("Controller_5.PID_sec_prod.I.u", "Connector of Real input signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareState("Controller_5.PID_sec_prod.I.y", "Connector of Real output signal",\
 259, 0.0, 0.0,0.0,0.0,0,544)
DeclareDerivative("Controller_5.PID_sec_prod.I.der(y)", "der(Connector of Real output signal)",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Controller_5.PID_sec_prod.I.local_reset", "[:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,1539)
DeclareVariable("Controller_5.PID_sec_prod.I.local_set", "", 0, 0.0,0.0,0.0,0,1537)
DeclareParameter("Controller_5.PID_sec_prod.addI.k1", "Gain of input signal 1", 2515,\
 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_prod.addI.k2", "Gain of input signal 2", 2516,\
 -1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_prod.addI.k3", "Gain of input signal 3", 2517,\
 1, 0.0,0.0,0.0,0,560)
DeclareAlias2("Controller_5.PID_sec_prod.addI.u1", "Connector of Real input signal 1",\
 "Controller_5.PIDin_sec_prod_des_weighted", 1, 5, 16202, 0)
DeclareAlias2("Controller_5.PID_sec_prod.addI.u2", "Connector of Real input signal 2",\
 "Controller_5.PIDin_sec_prod_is_weighted", 1, 5, 16201, 0)
DeclareVariable("Controller_5.PID_sec_prod.addI.u3", "Connector of Real input signal 3",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Controller_5.PID_sec_prod.addI.y", "Connector of Real output signal",\
 "Controller_5.PID_sec_prod.I.u", 1, 5, 19753, 0)
DeclareAlias2("Controller_5.PID_sec_prod.addSat.u1", "Connector of Real input signal 1",\
 "Controller_5.PID_sec_prod.y", 1, 5, 16294, 0)
DeclareAlias2("Controller_5.PID_sec_prod.addSat.u2", "Connector of Real input signal 2",\
 "Controller_5.PID_sec_prod.limiter.u", 1, 5, 16318, 0)
DeclareVariable("Controller_5.PID_sec_prod.addSat.y", "Connector of Real output signal",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareParameter("Controller_5.PID_sec_prod.addSat.k1", "Gain of input signal 1",\
 2518, 1, 0.0,0.0,0.0,0,560)
DeclareParameter("Controller_5.PID_sec_prod.addSat.k2", "Gain of input signal 2",\
 2519, -1, 0.0,0.0,0.0,0,560)
DeclareVariable("Controller_5.PID_sec_prod.gainTrack.k", "Gain value multiplied with input signal [1]",\
 1, 0.0,0.0,0.0,0,513)
DeclareAlias2("Controller_5.PID_sec_prod.gainTrack.u", "Input signal connector",\
 "Controller_5.PID_sec_prod.addSat.y", 1, 5, 19757, 0)
DeclareAlias2("Controller_5.PID_sec_prod.gainTrack.y", "Output signal connector",\
 "Controller_5.PID_sec_prod.addI.u3", 1, 5, 19756, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[1].T", 1, 5, 16519, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.port_a.p", 1, 5, 16356, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.port_a.h_outflow", 1, 5, 16350, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.port_a.h_outflow", 1, 5, 16350, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.port_a.p", 1, 5, 16356, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[1].T", 1, 5, 16519, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[2].T", 1, 5, 16521, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[2].p", 1, 5, 16520, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[2].h", 1, 5, 19767, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[2].p", 1, 5, 16520, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[2].T", 1, 5, 16521, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[3].T", 1, 5, 16523, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[3].p", 1, 5, 16522, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[3].h", 1, 5, 19776, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[3].p", 1, 5, 16522, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[3].T", 1, 5, 16523, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[4].T", 1, 5, 16525, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[4].p", 1, 5, 16524, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[4].h", 1, 5, 19785, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[4].p", 1, 5, 16524, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[4].T", 1, 5, 16525, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[5].T", 1, 5, 16527, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[5].p", 1, 5, 16526, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[5].h", 1, 5, 19794, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[5].p", 1, 5, 16526, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[5].T", 1, 5, 16527, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[6].T", 1, 5, 16529, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[6].p", 1, 5, 16528, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[6].h", 1, 5, 19803, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[6].p", 1, 5, 16528, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[6].T", 1, 5, 16529, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[7].T", 1, 5, 16531, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[7].p", 1, 5, 16530, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[7].h", 1, 5, 19812, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[7].p", 1, 5, 16530, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[7].T", 1, 5, 16531, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[8].T", 1, 5, 16533, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[8].p", 1, 5, 16532, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[8].h", 1, 5, 19821, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[8].p", 1, 5, 16532, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[8].T", 1, 5, 16533, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[9].T", 1, 5, 16535, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[9].p", 1, 5, 16534, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.pipe.mediums[9].h", 1, 5, 19830, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[9].p", 1, 5, 16534, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[9].T", 1, 5, 16535, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].T_degC", "Temperature of medium in [degC] [degC;]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[10].T", 1, 5, 16536, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.port_b.p", 1, 5, 16357, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.port_b.h_outflow", 1, 5, 16351, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_hot_45.port_b.h_outflow", 1, 5, 16351, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_hot_45.pipe.port_b.p", 1, 5, 16357, 0)
DeclareAlias2("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_hot_45.pipe.statesFM[10].T", 1, 5, 16536, 0)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_hot_45.pipe.mediums[10].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[1].T", 1, 5, 17020, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.port_a.p", 1, 5, 16857, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.port_a.h_outflow", 1, 5, 16851, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.port_a.h_outflow", 1, 5, 16851, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.port_a.p", 1, 5, 16857, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[1].T", 1, 5, 17020, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[1].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[2].T", 1, 5, 17022, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[2].p", 1, 5, 17021, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[2].h", 1, 5, 19855, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[2].p", 1, 5, 17021, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[2].T", 1, 5, 17022, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[2].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[3].T", 1, 5, 17024, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[3].p", 1, 5, 17023, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[3].h", 1, 5, 19864, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[3].p", 1, 5, 17023, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[3].T", 1, 5, 17024, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[3].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[4].T", 1, 5, 17026, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[4].p", 1, 5, 17025, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[4].h", 1, 5, 19873, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[4].p", 1, 5, 17025, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[4].T", 1, 5, 17026, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[4].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[5].T", 1, 5, 17028, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[5].p", 1, 5, 17027, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[5].h", 1, 5, 19882, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[5].p", 1, 5, 17027, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[5].T", 1, 5, 17028, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[5].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[6].T", 1, 5, 17030, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[6].p", 1, 5, 17029, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[6].h", 1, 5, 19891, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[6].p", 1, 5, 17029, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[6].T", 1, 5, 17030, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[6].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[7].T", 1, 5, 17032, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[7].p", 1, 5, 17031, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[7].h", 1, 5, 19900, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[7].p", 1, 5, 17031, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[7].T", 1, 5, 17032, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[7].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[8].T", 1, 5, 17034, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[8].p", 1, 5, 17033, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[8].h", 1, 5, 19909, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[8].p", 1, 5, 17033, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[8].T", 1, 5, 17034, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[8].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[9].T", 1, 5, 17036, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[9].p", 1, 5, 17035, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].h", "Specific enthalpy of medium [J/kg]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.pipe.mediums[9].h", 1, 5, 19918, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].state.p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[9].p", 1, 5, 17035, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].state.T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[9].T", 1, 5, 17036, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].preferredMediumStates", \
"= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[9].p_bar", "Absolute pressure of medium in [bar] [bar]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].T", "Temperature of medium [K|degC]",\
 "Pipe_ID_8_pipe_cold_45.pipe.statesFM[10].T", 1, 5, 17037, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].p", "Absolute pressure of medium [Pa|bar]",\
 "Pipe_ID_8_pipe_cold_45.pipe.port_b.p", 1, 5, 16858, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].h", "Specific enthalpy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.port_b.h_outflow", 1, 5, 16852, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].u", "Specific internal energy of medium [J/kg]",\
 "Pipe_ID_8_pipe_cold_45.port_b.h_outflow", 1, 5, 16852, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].d", "Density of medium [kg/m3|g/cm3]",\
 995.586, 0.0,1E+100,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].X[1]", "Mass fractions (= (component mass)/total mass  m_i/m) [1]",\
 1, 0.0,1.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].R_s", "Gas constant (of mixture if applicable) [J/(kg.K)]",\
 0, 0.0,0.0,0.0,0,513)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].MM", "Molar mass (of mixture or single fluid) [kg/mol]",\
 0.018015268, 0.0,1E+100,0.0,0,513)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].state.p", \
"Absolute pressure of medium [Pa|bar]", "Pipe_ID_8_pipe_cold_45.pipe.port_b.p", 1,\
 5, 16858, 0)
DeclareAlias2("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].state.T", \
"Temperature of medium [K|degC]", "Pipe_ID_8_pipe_cold_45.pipe.statesFM[10].T", 1,\
 5, 17037, 0)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].preferredMediumStates",\
 "= true if StateSelect.prefer shall be used for the independent property variables of the medium [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].standardOrderComponents",\
 "If true, and reducedX = true, the last element of X will be computed from the other ones [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].T_degC", \
"Temperature of medium in [degC] [degC;]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("Pipe_ID_8_pipe_cold_45.pipe.mediums[10].p_bar", \
"Absolute pressure of medium in [bar] [bar]", 0.0, 0.0,0.0,0.0,0,512)
EndNonAlias(21)
PreNonAliasNew(22)
