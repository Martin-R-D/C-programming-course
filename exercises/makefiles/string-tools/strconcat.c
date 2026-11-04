#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char **argv) {
    if(argc != 3) {
        printf("Try again");
        return 0;
    }
    if(strlength(argv[1]) > 50 || strlength(argv[2]) > 50) {
        printf("The string is too long, max length is 50");
        return 0;
    }
    char str[101];
    strcpy(str, argv[1]);
    strconcat(str, argv[2]);
    printf("%s\n", str);
    return 0;
}