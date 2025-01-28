#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){

    const int max_length = 50;
	int n, fd[2][2];
    pid_t pid;
    char linea[max_length];
    char msg[] = "Hola holita vecinito!";

    if (pipe(fd[0]) < 0 || pipe(fd[1]) < 0){
        printf("Error en creacion de pipe");
    }
 	
 	if ((pid=fork()) < 0){
 		printf("Error en el fork ");

    } else if (pid > 0){                // proceso PADRE
        close(fd[0][0]);
        close(fd[1][1]);
        write(fd[0][1], msg, sizeof(msg));
        n = read(fd[1][0],linea,max_length);
        printf("Recibido mensaje \"%s\"\n",linea);

    } else {        
        close(fd[1][0]);
        close(fd[0][1]);
        n = read(fd[0][0], linea, max_length);
        write(fd[1][1],linea,n);
    }
    exit(0);
}
