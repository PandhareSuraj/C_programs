//Write a program that demonstrates the use of nice() system call. After a child process is started using fork(), assign higher priority to the child using nice() systemcall.
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
    pid_t pid;
    int retnice;

    pid = fork();


    if (pid == 0) {
        /* Child process - increase priority (lower nice value) */
        retnice = nice(-1); // -1 increases priority
        printf("Child gets higher CPU priority: %d\n", retnice);
        sleep(10);//the optput gives 10 seconds delay
    } else {
        /* Parent process - decrease priority (higher nice value)*/
        retnice = nice(1); // 5 lowers priority
        printf("Parent gets lower CPU priority: %d\n", retnice);
        sleep(10);
    }
}

