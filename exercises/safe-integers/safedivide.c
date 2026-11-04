#include<stdio.h>
#include"safeint.h"

int main(int argc, char **argv) {
    struct SafeResult a;
    struct SafeResult b;

    a = safestrtoint(argv[1]);
    b = safestrtoint(argv[2]);
    if(a.errorflag == 1 || b.errorflag == 1) {
        printf("The numbers are out of range!\n");
        return 0;
    }
    struct SafeResult result;
    result = safedivide(a.value, b.value);
    if(result.errorflag == 1) {
        printf("The result is out of range!\n");
        return 0;
    }
    printf("%d \n", result.value);
    return 0;
}