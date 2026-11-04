#include<stdio.h>
#include "mystrings.h"

int strlength(char string[]) {
    int length = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void strconcat(char str1[], char str2[]) {
    int length1 = strlength(str1);
    int target = strlength(str2) + length1;
    for(int i = length1; i < target; i++) {
        str1[i] = str2[i - length1];
    }
    str1[target] = '\0';
}

int strcompare(char str1[], char str2[]) {
    int length1 = strlength(str1);
    int length2 = strlength(str2);
    for(int i = 0; i < length1; i++) {
        if(i >= length2) {
            return 1;
        }
        if(str1[i] < str2[i]) {
            return -1;
        } else if(str1[i] > str2[i]) {
            return 1;
        }
    }
    return 0;
}

