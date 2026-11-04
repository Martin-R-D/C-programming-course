#include <stdio.h>

long to_decimal(int number, int length, long decimal) {
    if(number == 0) return decimal;
    int m = 1;
    for(int k = 0; k < length; k++, m *= 10) ;
    decimal = decimal + (number % 2) * m;
    return to_decimal(number / 2, length + 1, decimal);
}


int main() {
    int number = 10;
    printf("%ld", to_decimal(number, 0, 0));
}
