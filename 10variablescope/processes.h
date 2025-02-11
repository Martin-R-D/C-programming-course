#ifndef PROCESSES_
#define PROCESSES_

struct Process {
    int id;
    char name[31];
};

extern struct Process processes[5];

extern int processescount; 

static int nextprocessid();
int createnewprocess(char proccess_name[]);
void stopprocess(int process_id);
#endif