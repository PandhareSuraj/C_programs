//Write a C program to illustrate the concept of an process.Parentprocesscreate child and terminate for child has finished it task.So child process become sorphan process. (Use fork(), sleep(), getpid(),getppid()).

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int pid = fork();

    if (pid < 0) {
        printf("Fork failed.\n");
        return 1;
    }
    else if (pid == 0) {
        // Child process
        printf("Child Process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        sleep(5);  // Wait to ensure parent exits first
        printf("Child Process (After Sleep): PID = %d, New Parent PID = %d\n", getpid(), getppid());
    }
    else {
        // Parent process
        printf("Parent Process: PID = %d\n", getpid());
        printf("Parent is terminating...\n");
        exit(0);  // Parent terminates immediately
    }

    return 0;
}

