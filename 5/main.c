#include<stdio.h>
#include "transformation.h"

int main() {
    struct transformation trns1;
    trns1 = to_number("9a0");
    printf("%d   %s\n", trns1.result, trns1.error);

    trns1 = to_number("-900");
    printf("%d   %s\n", trns1.result, trns1.error);

    trns1 = to_number("+1");
    printf("%d   %s\n", trns1.result, trns1.error);

    trns1 = to_number("123");
    printf("%d   %s\n", trns1.result, trns1.error);

    trns1 = to_number("-");
    printf("%d   %s\n", trns1.result, trns1.error);
    return 0;
}