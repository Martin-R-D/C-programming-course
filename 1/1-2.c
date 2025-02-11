#include <stdio.h>

int main() {
    int number = 417;
    int product = 1;
    for(; number != 0; number /= 10) {
        product *= (number % 10);
    }

    printf("%d", product);
}