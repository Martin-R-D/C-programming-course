#include <stdio.h>
#include <string.h>

#include "transformation.h"

struct transformation to_number(char string[]) {
    struct transformation trns1;
    trns1.result = 0;
    strcpy(trns1.error, "\0");
    int size = strlen(string);

    int minus = 0;
    int i = 0;
    if(string[0] != '-' && string[0] != '+' && (string[0] < '0' || string[0] > '9')) {
        strcpy(trns1.error, "Invalid input string");
        return trns1;
    } else if(string[0] == '-') {minus = 1; i++;}
    else if(string[0] == '+') {i++;} 
    if(size == 1 && i == 1) {
        strcpy(trns1.error, "Invalid input string");
        return trns1;
    }
    for(; i < size; i++) {
        if(string[i] >= '0' && string[i] <= '9') {
            trns1.result = trns1.result * 10 + string[i] - '0';
        } else {
            trns1.result = 0;
            strcpy(trns1.error, "Invalid input string");
            return trns1;
        }
    }
    if(minus) trns1.result = -trns1.result;
    return trns1;
}

