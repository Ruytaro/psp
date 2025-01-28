#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){

    const int max_length = 50;
	int n, fd[2];
    pid_t pid;
    int linea[max_length];
    
    if (pipe(fd) < 0) {
        printf("Error en creacion de pipe");
    }
 	
 	if ((pid=fork()) < 0){
 		printf("Error en el fork ");

    } else if (pid > 0){                // proceso PADRE
        close(fd[0]);
        int nums[] = {2,3,5,7,11,13,15,17,19,23};
        int nnum = (sizeof(nums)/sizeof(int));
        write(fd[1],&nnum,sizeof(nums[0]));
        for (int i =0; i < nnum ;i++) {
            write(fd[1],&nums[i],sizeof(int));
        }
    } else {                            // proceso HIJO
        close(fd[1]);
        int nnum, num;
        n = read(fd[0], &nnum, sizeof(int));
        for (int i = 0; i < nnum; i++) {
            read(fd[0], &num, sizeof(int));
            printf("Leido: %d\n",num);
        }
    }
    exit(0);
}

