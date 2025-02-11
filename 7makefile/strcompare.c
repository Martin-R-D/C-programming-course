#include<stdio.h>
#include "mystrings.h"


int main(int argc, char **argv) {
    if(argc != 3) {
        printf("Try again!");
        return 0;
    }
    if(strlength(argv[1]) > 50 || strlength(argv[2]) > 50) {
        printf("The string is too long!");
        return 0;
    }

    printf("%d\n", strcompare(argv[1], argv[2]));
    return 0;
}