#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv) {
    if(argc != 2) {
        printf("Try again");
        return 0;
    }
    if(strlength(argv[1]) > 50) {
        printf("The string is too long!");
        return 0;
    }
    printf("%d\n", strlength(argv[1]));
    return 0;
}