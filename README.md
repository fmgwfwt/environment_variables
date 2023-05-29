# environment_variables

in linux there there is a path variable for example you can use ls or /bin/ls because there is a path variable you don't have to <br />
PASSCODE=HereTheKing ./a.out   // this environment variable is just for the program <br />
export PASSCODE=HereTheKing    // for the entire terminal session <br />
unset PASSCODE                 // unset the variable  <br />
in env3 putenv or setenv functions sets the variable just for the program and any child progress that it creates after that program is run and we turn to the terminal that variable will not be there <br /> 
in env4 this program sets the environment variable "PASSCODE" to "HEREIAM", forks a new process, and executes the same program (a.out) in the child process child will see the variable change <br />
<br />
in linux <br />
export INTERVAL=1 //sets the environment variable and echo $INTERVAL prints the environment variable <br /> 
env command or printenv command show the envirnoment variables <br />
in windows <br />
set INTERVAL=1    //sets the environment variable and echo %INTERVAL% prints the environment variable <br /> 
set command shows the envirnoment variables <br />
<br />
in linux you can also create a file in one of the executable paths like /usr/bin/my_new_command <br />
and then start to run that command from your terminal <br />
