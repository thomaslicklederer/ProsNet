# ProsNet
ProsNet is a modelica library for modeling prosumer-based heat networks. The library is free and open-source.
A detailed description on the motivation, design and validation of this library can be found in the paper [ProsNet – a Modelica library for prosumer-based heat networks: description and validation](https://www.doi.org/10.1088/1742-6596/2042/1/012031).

This library was available before under the repository adress https://github.com/ilyaelizarov/ProsNet and was moved to this repository where it will me maintained and devoloped further.

***Important:*** The name of the top folder must be "ProsNet" in oder to be able to import the library to Dymola. You may need to change the folder name after downloading.

# Overview - prosumer concept and model
A prosumer can operate either in production or consumption mode with respect to a heat network. It can also be detached or attached to the network by setting appropriate participation: participation or non-participation. Control elements on the primary side (network) are a control valve and a feed-in pump. Together with a heat exchanger, the control elements allow bidirectional heat transfer between the network and technology-dependent heat supply/demand on the secondary side depending on the temperature gradient between the sides. The prosumer model and other components like pipes and sensors can be simulated for steady-state (statically) or transient-state (dynamically).

![ProsScheme](https://user-images.githubusercontent.com/54630145/157418834-7e4c67e4-211d-4cb5-a4be-304b689c7e67.gif)

There are four inputs that determine its interaction with the network:
* Operation mode <img src="https://render.githubusercontent.com/render/math?math=\mu">: consumption, production
* Participation or non-participation in heat exchange with the network <img src="https://render.githubusercontent.com/render/math?math=\pi">
* Non-dimensional flow coefficient for the control valve <img src="https://render.githubusercontent.com/render/math?math=\kappa">
* Feed-in pump velocity <img src="https://render.githubusercontent.com/render/math?math=u">

Operating mode and participation have integer counterparts, which are used as inputs of the multiple models:
- <img src="https://render.githubusercontent.com/render/math?math=\mu=1"> for production mode and <img src="https://render.githubusercontent.com/render/math?math=\mu=-1"> for consumption mode,
- <img src="https://render.githubusercontent.com/render/math?math=\pi=1"> when participating in heat exchage is on, <img src="https://render.githubusercontent.com/render/math?math=\pi=0"> for non-participating.

Mode details can be found in the ProsumerIdeal model.

# Library structure
* *Controls* package: contains elements that are control related and transform the incoming external control signal into inputs for the component models.
* *Fluid* package: contains models for the relevant components (pipes, valves, heat exchanger, pumps) and the the thermo-fluid flow.
* *Media* package: contains media models for water (liquid water with constant density) and moist air. All fluid components are initialized with the incompressible water media model.
* *Prosumer* package: contains the prosumer model of an idealized prosumer, as well as its base classes
* *Utilities* package: contains auxiliary utility models, such as math functions for smoothing etc.
* *Examples* package: contains example models of prosumer-based heat networks, e.g. with two prosumers and a radial grid or three prosumers and a meshed grid. The examples should be executable without modifications needed.
* *Experimental* package: contains experimental extensions of the library, e.g. FMU export and integration, PID controllers, new prosumer models etc.

*Validation* subpackages allow to confirm the expected behavior of sub-models. Additional insights on how the sub-models work can be gained from these packages.

For the **ProsNET** library a liquid-to-liquid heat exchanger model (LiquidToLiquid), a control volume with prescribed outlet temperature independent of the flow direction (Heater_Cooler_T), and a pipe model with thermal losses (InsulatedPipe) were developed for the library.
 

# Requirements
The library is developed and tested with the modeling and simulation environment "Dymola – Dynamic Modeling Laboratory" by Dessault Systèmes. The used version of Dymola is "Version 2021x (64-bit), 2020-11-26".

The library inherits from the [Modelica Standard Library](https://github.com/modelica/ModelicaStandardLibrary) (version 4.0.0) and the [IBPSA library](https://github.com/ibpsa/modelica-ibpsa) (version 3.0.0). Necessary components of the IBPSA library were copied to ProsNet so the library can be used with the default workspace available for every simulation environment. Compatibility with the Modelica Standard Library and the IBPSA library is assured.

The name of the top folder must be "ProsNet" in oder to be able to import the library to Dymola. You may need to change the folder name after downloading.
