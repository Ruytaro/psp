#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){

    const int max_length = 50;
	int n, fd[2];
    pid_t pid;
    char linea[max_length];
    char msg[] = "Hola hijo, ¿cómo te va todo?";

    if (pipe(fd) < 0){
        printf("Error en creacion de pipe");
    }
 	
 	if ((pid=fork()) < 0){
 		printf("Error en el fork ");

    } else if (pid > 0){                // proceso PADRE
        close(fd[0]);
        write(fd[1], msg, strlen(msg));

    } else {                            // proceso HIJO
        close(fd[1]);
        n = read(fd[0], linea, max_length);
       // write(STDOUT_FILENO, linea, n);
        printf("La cadena \"%s\" tiene %ld caracteres\n",linea,strlen(linea));
    }
    exit(0);
}
