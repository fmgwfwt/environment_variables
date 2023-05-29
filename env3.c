#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char** argv, char** envp){

    putenv("PASSCODE1=KINGARTHUR");
    setenv("PASSCODE2=HEREIAM");
     
    for(int i = 0;environ[i] != NULL;i++){
        printf("%d: %s\n", i, environ[i]);
    }

    return 0;
}
