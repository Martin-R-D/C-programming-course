#include <stdio.h>

long to_decimal(int number) {
    long decimal = 0;
    for(int length = 0; number != 0; number /= 2, length++) {
        int m = 1;
        for(int j = 0, k = 0; k < length; k++, m *= 10) ;
        decimal = decimal + (number % 2) * m;
    }

    return decimal;
}
int main() {
    int number = 10;
    printf("%ld", to_decimal(number));
}