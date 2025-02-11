#include<stdio.h>


#define COMMAND(NAME, TYPE)  TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void) {\
    printf("Hello!\n"); \
}

int main() {
    DEFINE_COMMAND(quit, internal)
    internal_quit_command();
    DEFINE_COMMAND(quit, external)
    external_quit_command();
    return 0;
}