within ProsNet.Prosumers.BaseClasses;
partial model ProsumerParameters "Model with parameters for prosumers"

  replaceable package Medium1 = ProsNet.Media.Water;// annotation(Dialog(enable = false));

  replaceable package Medium2 = ProsNet.Media.Water;

  parameter Boolean use_op_set_in = false "Get the main valve's opening from the input connector"
    annotation(Dialog(group="Conditional control inputs"));
  parameter Boolean use_u_set_in = false "Get the main pump's velocity from the input connector"
    annotation(Dialog(group="Conditional control inputs"));

  parameter Boolean use_mu_set_in = false "Get operating mode from the input connector"
    annotation(Dialog(group="Conditional control inputs"));
  parameter Boolean use_pi_set_in = false "Get participation mode from the input connector"
    annotation(Dialog(group="Conditional control inputs"));

  parameter Boolean use_m_flow_set_in = false "Get mass flow rate on the secondary side from the input connector"
    annotation(Dialog(group="Conditional control inputs"));

  parameter Boolean use_T_set_in = false "Get temperature on the secondary side from the input connector"
    annotation(Dialog(group="Conditional control inputs"));


  parameter Real op(min=0, max=1)=1 "Normalized linearized main valve's opening"
    annotation(Dialog(group="Fixed control inputs"));

  parameter Real u(min=0, max=1)=1 "Normalized main pump's velocity"
    annotation(Dialog(group="Fixed control inputs"));

  parameter ProsNet.Prosumers.Types.OperationMode mode=ProsNet.Prosumers.Types.OperationMode.Production "Mode of operation"
   annotation(Dialog(group="Fixed control inputs"));

  parameter Boolean participation=true "Participation"
   annotation(Dialog(group="Fixed control inputs"));

  parameter Modelica.SIunits.MassFlowRate m_flow_sec "Mass flow rate on the secondary side"
   annotation(Dialog(group="Fixed control inputs"));

  parameter Modelica.SIunits.Temperature T_sec(displayUnit="degC") "Temperature on the secondary side"
   annotation(Dialog(group="Fixed control inputs"));




  parameter Modelica.SIunits.Time tau_temSen=1 "Time constant for the temperature sensors"
  annotation(Dialog(tab="Sensors", group="Temperature sensors dynamics"));
  parameter Modelica.Blocks.Types.Init init_temSen=Modelica.Blocks.Types.Init.SteadyState "Type of initialization"
  annotation(Dialog(tab="Sensors", group="Temperature sensors dynamics"));

  parameter Modelica.SIunits.PressureDifference preDro_pros = 4.27e3 "Additional hydraulic losses on the primary side"
  annotation(Dialog(group="Local hydraulic losses"));


  parameter Modelica.SIunits.MassFlowRate m_flow_nominal_hea_coo = m2_flow_nominal
    annotation(Dialog(group="Secondary side heater/cooler nominal condition"));

  parameter Modelica.SIunits.MassFlowRate m_flow_nominal_pump = m2_flow_nominal
        annotation(Dialog(group="Secondary side pump nominal condition"));

 final parameter Modelica.SIunits.MassFlowRate m_flow_nominal_temSen_sec = m2_flow_nominal;

 final parameter Modelica.SIunits.Time tau_temSen_sec = tau_temSen;
 final parameter Modelica.Blocks.Types.Init init_temSen_sec=init_temSen;





  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end ProsumerParameters;
