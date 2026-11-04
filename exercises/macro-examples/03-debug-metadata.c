#include<stdio.h>


#define DEBUG(var) printf("Name: " #var "\nValue: %d\nFile: %s\nLine: %d\n", var, __FILE__, __LINE__);

int main() {
    
    int x = 5;
    DEBUG(x)

    return 0;
}