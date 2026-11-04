#include<stdio.h>


#define ARRAY_SIZE 5

int main() {
    #if defined ARRAY_SIZE && (0 < ARRAY_SIZE) && (11 > ARRAY_SIZE)  
    int array[ARRAY_SIZE];
    int current_number = 1;
    for(int current_number = 1, i = 0; i < ARRAY_SIZE; current_number *= 2, i++) {
        array[i] = current_number;
        printf("%d\n", array[i]);
    }
    #else 
    printf("NE");  
    #endif
}