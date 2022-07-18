within ProsNet.Prosumers.SecondarySides.BaseClasses;
partial class ControlVolumeDynParam

  parameter Modelica.Fluid.Types.Dynamics energyDynamics_cv = Modelica.Fluid.Types.Dynamics.SteadyState
    "Energy dynamics" annotation(Dialog(tab="Dynamics", group="Secondary side control volume dynamics"));
  parameter Modelica.Units.SI.Time tau_cv(min=0) = 10
    "Time constant for control volume" annotation (Dialog(tab="Dynamics",
        group="Secondary side control volume dynamics"));
  parameter Modelica.Units.SI.Temperature T_start_cv=293.15
    "Initial temperature inside volume" annotation (Dialog(tab="Dynamics",
        group="Secondary side control volume dynamics"));

end ControlVolumeDynParam;
