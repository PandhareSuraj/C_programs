//Implement the C Program to create a child process using fork(), display parent and child process id. Child process will display the message “I am Child Process” and the parent process should display “I am ParentProcess”.

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void ChildProcess();
void ParentProcess();

int main() {
    pid_t pid;
    pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    } else if (pid == 0) {
        ChildProcess();
    } else {
        ParentProcess();
    }

    return 0;
}

void ChildProcess() {
    printf("Child Process id: %d\n", getpid());
    printf("I am Child Process\n");
}

void ParentProcess() {
    printf("Parent Process id: %d\n", getpid());
    printf("I am Parent Process\n");
}

