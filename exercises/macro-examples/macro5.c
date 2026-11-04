#include<stdio.h>

#define SWAP(A, B, TYPE) TYPE x = A; \
                         A = B; \
                         B = x; 

int main() {

    int a = 5;
    int b = 6;
    printf("a = %d and b = %d\n", a, b);
    SWAP(a, b, int);
    printf("a = %d and b = %d\n", a, b);
    return 0;
}