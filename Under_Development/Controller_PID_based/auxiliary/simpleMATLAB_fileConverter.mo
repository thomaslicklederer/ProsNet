within ProsNet.Under_Development.Controller_PID_based.auxiliary;
function simpleMATLAB_fileConverter
"Function to import trajectory result files and write them as MatLab compatible .mat f
iles"
input String filename="filename" "File to be converted" annotation (Dialog(__Dymola_loadSelector(filter="Matlab files (*.mat)",
caption="Select the results trajectory file")));
input String varOrigNames[:]={"Time","J1.w","J2.w"} "Variable names/headers in the fil
e in modelica syntax";
input String varReNames[:]={"Time","Inertia_1_angularVel","Inertia_2_angularVel"}
"Variable names which will appear in the MATLAB results file";
input String outputFilename="outputFile.mat";
protected
Integer noRows "Number of rows in the trajectory being converted";
Integer noColumn=12 "Number of columns in the trajectory being converted";
Real data[:,:] "Data read in from trajectory file";
Real dataDump[:,:] "Sacrificial dump variable for writeMatrix command";
Integer i=2 "Loop counter";
algorithm
noRows := DymolaCommands.Trajectories.readTrajectorySize(filename);
data := DymolaCommands.Trajectories.readTrajectory(
filename,
varOrigNames,
noRows);
data := transpose(data);
noColumn := size(data, 2);
while i <= noColumn loop
dataDump := [data[:, 1],data[:, i]];
if i == 2 then
DymolaCommands.MatrixIO.writeMatrix(
outputFilename,
varReNames[i],
dataDump);
else
DymolaCommands.MatrixIO.writeMatrix(
outputFilename,
varReNames[i],
dataDump,
true);
end if;
i := i + 1;
end while;
annotation (Documentation(info="<html>
<p></p>
</html>"), uses(DymolaCommands(version="1.4")));
end simpleMATLAB_fileConverter;
