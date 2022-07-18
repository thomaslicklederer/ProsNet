within ProsNet.Prosumers.SecondarySides.BaseClasses;
partial class PumpsPairDynParam

  parameter Modelica.Fluid.Types.Dynamics energyDynamics_pumpsSec = Modelica.Fluid.Types.Dynamics.SteadyState
    "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
  parameter Modelica.Units.SI.Time tau_pumpsSec(min=0) = 10
    "Time constant of fluid volume in pumps" annotation (Dialog(tab=
          "Dynamics", group="Secondary side pumps dynamics"));
  parameter Boolean use_inputFilter_pumpsSec = false "Start-up and shut-down dynamics of pumps"
   annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
  parameter Modelica.Units.SI.Time riseTime_pumpsSec(min=0) = 5 "Rise time"
    annotation (Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));
  parameter Modelica.Units.SI.MassFlowRate m_flow_start_pumpsSec=0
    "Initial value of mass flow rate" annotation (Dialog(tab="Dynamics",
        group="Secondary side pumps dynamics"));
  parameter Real y_start_pumpsSec = 1 "Initial value of speed"
    annotation(Dialog(tab="Dynamics", group="Secondary side pumps dynamics"));

end PumpsPairDynParam;
