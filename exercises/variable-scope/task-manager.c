#include<stdio.h>
#include"processes.h"

int main() {
    printf("Type what do you want to do?\n");
    printf("Enter c - to create a process\n");
    printf("Enter p - to print a list with the processes\n");
    printf("Enter s - to stop a process\n");
    printf("Enter e - for exit\n");

    char c = getchar();
    while(1) {
        while(c != 'c' && c != 'p' && c != 's' && c != 'e') {
            printf("Invalid command. Try again!\n");
            c = getchar();
        }
        getchar();
        if(c == 'c') {
            printf("Enter name of the process: ");
            char name[31];
            int l = 0;
            char c_name = getchar();
            for(; l <= 30 && c_name != '\n'; l++) {
                name[l] = c_name;
                c_name = getchar();
            }
            name[l] = '\0';
            if(! createnewprocess(name)) {
                printf("The max number of running processes has been reached\n");
            } else {
                printf("The process has been added!\n");
            }
        }

        else if(c == 'p') {
            for(int i = 0; i < processescount; i++) {
                printf("%d   %s\n", processes[i].id, processes[i].name);
            }
        }

        else if(c == 's') {
            int process_to_stop;
            printf("Enter the number of the process you want to stop: ");
            scanf("%d", &process_to_stop);
            getchar();
            stopprocess(process_to_stop);
            printf("The process has been stopped!\n");
        }
        
        else if(c == 'e') return 0;
        c = getchar();
    }

}
