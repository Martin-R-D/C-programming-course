#include<stdio.h>

#define BIGGER_NUMBER(a, b) (a) > (b) ? (a):(b)

int main() {
    int a = 5;
    int b = 6;
    printf("%d\n", BIGGER_NUMBER(a, b));
    printf("%d\n", BIGGER_NUMBER(4, 100));
}