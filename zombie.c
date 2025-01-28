#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <wait.h>
#include <signal.h>


int main(){
    int child = fork();
    if (!child){
       exit(0);
    } else {
       sleep(5);
      pid_t *status;
     wait(status);
     sleep(5);
    }
    return 0;
}