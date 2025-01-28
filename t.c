#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void reproduce(int);

int main(int argc, char *argv[])
{
    int tuberia[2];
    reproduce(25);
    while (!pipe(tuberia)) {

    }
}


void reproduce(int c){
    for (int i=0;i<c;i++){
        if (!fork()){
            return;
        }
    }
}