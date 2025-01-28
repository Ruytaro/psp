#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>

void reproduce(int);

int main() {
    pid_t test;
    u_int32_t parent = getpid();
    printf("Soy el proceso %d\n", parent);
    reproduce(3);
    if (parent == getpid()){
        sleep(20);
        exit(0);
    }
    reproduce(2);
    sleep(20);
    return 0;
}

void reproduce(int c){
    for (int i=0;i<c;i++){
        if (!fork()){
            return;
        }
    }
}