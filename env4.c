#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    putenv("PASSCODE=HEREIAM");
    
    if(fork() == 0){
        execl("./a.out", "./a.out", NULL);
    }
    return 0;
}
