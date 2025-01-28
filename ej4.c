#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main() {
    u_int32_t parent = getpid();
    printf("Soy el proceso %d\n", parent);
    for (int i = 0; i < 3; i++) {
        if (fork() == 0) {
            printf("Soy el proceso %d, mi padre es %d\n", getpid(), parent);
            for (int i = 0; i < 2; i++) {
                if (fork() == 0) {
                    printf("Soy el proceso %d, mi padre es %d\n", getpid(), getppid());
                    break;
                }
            }
            break;
        }
    }
    sleep(20);
    return 0;
}