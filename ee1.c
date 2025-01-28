#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>



int main(){
    printf("¿Cuantos procesos desea crear?: ");
    unsigned int a;
    scanf("%d",&a);
    printf("Soy el proceso %d\n",getpid());
    for (int i= 0; i < a; i++){
        if(!fork()){
            printf("Soy el proceso %d, mi padre es %d\n",getpid(),getppid());
            sleep(5);
            exit(0);
        }
    }
    sleep(5);
    return 0;
}