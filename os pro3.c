#include <stdio.h>
#include <unistd.h>
int main() {
    pid_t childPid;
childPid = fork();

    if (childPid < 0) {
        perror("Fork failed");
        return 1;
    } else if (childPid == 0) {
        printf("Child Process: PID = %d, Parent PID = %d\n", getpid(), getppid());
    } else {
        printf("Parent Process: PID = %d\n", getpid());
    }
 return 0;
}

