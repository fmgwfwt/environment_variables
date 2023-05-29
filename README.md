# environment_variables

In linux env command or printenv command shows the envirnoment variables <br />
in there there is a path variable for example you can use ls or /bin/ls because there is a path variable you don't have to <br />
PASSCODE=HereTheKing ./a.out   // this environment variable is just for the program <br />
export PASSCODE=HereTheKing    // for the entire terminal session <br />
unset PASSCODE                 // unset the variable  <br />
in env3 putenv or setenv functions sets the variable just for the program and any child progress that it creates after that program is run and we turn to the terminal that variable will not be there <br /> 
in env4 this program sets the environment variable "PASSCODE" to "HEREIAM", forks a new process, and executes the same program (a.out) in the child process child will see the variable change <br />
