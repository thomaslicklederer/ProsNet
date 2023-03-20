within ProsNet.Prosumers.BaseClasses;
partial class PrimarySideParameters

  // Heat exchanger - thermal parameters
  parameter Modelica.Units.SI.HeatFlowRate Q_flow_nominal=30000
    "Heat flow rate"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.Temperature T_a1_nominal=343.15
    "Inlet temperature on the primary side"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.Temperature T_a2_nominal=318.15
    "Inlet temperature on the secondary side"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.MassFlowRate m_flow_nominal_1=0.358
    "Primary side mass flow rate"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.PressureDifference dp1_nominal=155e2
    "Primary side pressure loss"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.MassFlowRate m_flow_nominal_2=0.358
    "Secondary side mass flow rate"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Modelica.Units.SI.PressureDifference dp2_nominal=155e2
    "Secondary side pressure loss"
    annotation (Dialog(group="Nominal conditions for heat exchanger"));
  parameter Real r_nominal(min=0, max=1) = (m_flow_nominal_1/m_flow_nominal_2)^n
   "Ratio between primary side and secondary side convective heat transfer coefficient" annotation (
    Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));
  parameter Real n(min=0, max=1) = 0.5 "Exponent coefficient" annotation (
    Dialog(tab = "Advanced", group = "Heat transfer in heat exchanger"));

  // Feed-in pump parameters
  replaceable parameter ProsNet.Fluid.Pumps.Data.Generic feedinPer
   constrainedby ProsNet.Fluid.Pumps.Data.Generic "Record with performance data"
    annotation (Dialog(group="Feed-in pump"),choicesAllMatching=true);
  // Feed-in pump dynamic options
  parameter Modelica.Fluid.Types.Dynamics energyDynamics_feedPump = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
   "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Feed-in pump"));
  parameter Modelica.Units.SI.Time tau_feedPump=3
    "Time constant for energy content inside the pump"
    annotation (Dialog(tab="Dynamics", group="Feed-in pump"));
  parameter Boolean use_inputFilter_feedPump = true "Activate start-up and shut-down transients"
   annotation(Dialog(tab="Dynamics", group="Feed-in pump"));
  parameter Modelica.Units.SI.Time riseTime_feedPump(min=0) = 8
    "Rise time for the transients"
    annotation (Dialog(tab="Dynamics", group="Feed-in pump"));
  parameter Modelica.Blocks.Types.Init init_feedPump=Modelica.Blocks.Types.Init.InitialOutput "Type of initialization"
   annotation(Dialog(tab="Dynamics", group="Feed-in pump"));
  parameter Real y_start_feedPump=0 "Initial value of speed"
   annotation(Dialog(tab="Dynamics", group="Feed-in pump"));

  // Control valve parameters
  parameter Real Kv_conVal=2.5 "Kv (metric) flow coefficient [m3h/bar^(1/2)]"
   annotation(Dialog(group="Control valve"));
  parameter Real l_conVal=2e-3 "Valve leakage, l=Kv(y=0)/Kv(y=1)"
   annotation(Dialog(group="Control valve"));
  // Dynamics of the valve
  parameter Boolean use_inputFilter_conVal = true "Transient behavior for moving the valve’s stem"
   annotation(Dialog(tab="Dynamics", group="Control valve"));
  parameter Modelica.Units.SI.Time riseTime_conVal(min=0) = 35 "Rise time"
    annotation (Dialog(tab="Dynamics", group="Control valve"));
  parameter Modelica.Blocks.Types.Init init_conVal=Modelica.Blocks.Types.Init.InitialOutput "Type of initialization"
   annotation(Dialog(tab="Dynamics", group="Control valve"));
  parameter Real y_start_conVal=1 "Initial value of output"
    annotation(Dialog(tab="Dynamics", group="Control valve"));

  // Check valve parameres
  parameter Real Kv_cheVal=11 "Kv (metric) flow coefficient [m3h/bar^(1/2)]"
   annotation(Dialog(group="Check valve"));
  parameter Real l_cheVal=0.001 "Valve leakage, l=Kv(y=0)/Kv(y=1)"
   annotation(Dialog(group="Check valve"));

  // parameters of pipe in transfer station
  parameter Real length_transfer_pipe_tot = 10
    "total length of the pipe in the transfer station [m]"
    annotation(Dialog(group="Transfer station pipes"));
  parameter Real zeta_transferstation = 3.5
    "flow coefficient for bends and other orifices in substation [-]"
    annotation(Dialog(group="Transfer station pipes"));
  parameter Real d_transferpipe = 0.022
    "diamter of pipes in heat transfer station [m]"
    annotation(Dialog(group="Transfer station pipes"));
  parameter Real R_ins_transferpipe = 3.78
    "insulation resistance for pipes in heat transfer station [(K m)/W]"
   annotation(Dialog(group="Transfer station pipes"));
   parameter Real ambient_temperature = 12+273.15
    "Ambient temperature, relevant for heat losses [K]"
   annotation(Dialog(group="Transfer station pipes"));

end PrimarySideParameters;
