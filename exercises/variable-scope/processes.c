#include<stdio.h>
#include<string.h>
#include"processes.h"

int processescount = 0;
struct Process processes[5];

static int nextprocessid() {
    return processescount + 1 > 5 ? 0:processescount + 1; 
}

int createnewprocess(char proccess_name[]) {
    int id1 = nextprocessid();
    if(! id1) return 0;
    processes[processescount].id = id1;
    strcpy(processes[processescount].name, proccess_name);
    processescount++;
    return processes[processescount - 1].id;
}

void stopprocess(int process_id) {
    if(process_id < 1 || process_id > processescount) return;
    for(int i = process_id ; i <= processescount; i++) {
        processes[i - 1].id = processes[i].id - 1;
        strcpy(processes[i - 1].name, processes[i].name);
    }
    processescount--;
}




