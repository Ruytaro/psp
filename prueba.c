#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>


int main(){
    int c =0;
    while (c<10000)
    {
        c++;
        fork();
    }
    return 0;
}