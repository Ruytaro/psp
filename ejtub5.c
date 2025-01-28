#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){

	int n, fd[2];
    pid_t pid;
    char linea[50];
    char msg[] = "Hola, hijo\n";
    int len = sizeof(msg);

    if (pipe(fd) < 0){
        printf("Error en creacion de pipe");
    }
 	
 	if ((pid=fork()) < 0){
 		printf("Error en el fork ");

    } else if (pid > 0){                // proceso PADRE
        close(fd[0]);
        write(fd[1], msg, strlen(msg));
        close(fd[1]);

    } else {                            // proceso HIJO
        close(fd[1]);
        n = read(fd[0], linea, len);
        close(fd[0]);
        write(STDOUT_FILENO, linea, n);
    }
    exit(0);
}
