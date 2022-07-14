/**
 * @file lab2.c
 * Escriban un pequeño programa en C de manera que, utilizando la llamada al sistema fork(), 
 * creen un proceso zombie en el sistema. ¿Pueden comprobar que el proceso es definitivamente zombie?
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

 int main() {
    pid_t pid;
    pid = fork();
    
    // there was a problem with fork()
    if (pid < 0) {
        printf("Error en la llamada a fork()");
		exit(1);
    }

    // child process created
    else if (pid == 0){
        printf("Child\n");
        exit(1);
    }

    // parent process created
    else {
        printf("Parent\n");
        sleep(60);
    }

    return 0;
 }