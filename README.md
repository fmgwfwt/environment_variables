# environment_variables
Environment variables are truly dynamic and can be changed based on the environment that your program is running in. <br />
in linux there there is a path variable for example you can use ls or /bin/ls because there is a path variable you don't have to <br />
PASSCODE=HereTheKing ./a.out   // this environment variable is just for the program <br />
export PASSCODE=HereTheKing    // for the entire terminal session <br />
unset PASSCODE                 // unset the variable  <br />
in env3 putenv or setenv functions sets the variable just for the program and any child progress that it creates after that program is run and we turn to the terminal that variable will not be there <br /> 
in env4 this program sets the environment variable "PASSCODE" to "HEREIAM", forks a new process, and executes the same program (a.out) in the child process child will see the variable change <br />
<br />
in linux <br />
export INTERVAL=1 //sets the environment variable and echo $INTERVAL prints the environment variable printenv INTERVAL <br /> 
env command or printenv command show the envirnoment variables <br />
in windows <br />
set INTERVAL=1    //sets the environment variable and echo %INTERVAL% prints the environment variable <br /> 
set command shows the envirnoment variables <br />
<br />
in linux you can also create a file in one of the executable paths like /usr/bin/my_new_command <br />
and then start to run that command from your terminal <br />
in windows you can set the path to a folder as temporary set = PATH C:\mine <br /> 
and then the files in that folder will be executable <br /> 
<br />
For example you downloaded python and installed but didn't select the path for you os to look to execute the python command in cli when you put the environment variable it's gonna know where to look <br />

in linux for your environment variable to be constant you need to modify .bashrc file in /home/user_name/.bashrc <br />
for global change you can edit /etc/environment file <br /> 

## learn