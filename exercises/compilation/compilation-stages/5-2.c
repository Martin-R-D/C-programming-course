#include <stdio.h>


int nok(int a, int b) {
    for(int i = a; i <= a * b; i++) {
        if((i % a == 0) && (i % b == 0)) return i;
    }
}

int main() {
    printf("%d", nok(12, 18));
}