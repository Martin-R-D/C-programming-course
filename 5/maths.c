#include<stdio.h>

#include "maths.h"

int factorial(int num) {
    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

