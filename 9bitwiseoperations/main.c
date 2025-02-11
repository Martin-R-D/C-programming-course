#include<stdio.h>
#include"quadraticroots.h"

int main() {
    double a1 = 1.5;
    double b1 = 6;
    double c1 = 7;
    struct QuadraticRootsResult a = findroots(a1, b1, c1);
    if(a.norealroots) {
        printf("There are no real roots\n");
    } else {
        printf("x1 = %.2Lf  x2 = %.2Lf\n", a.x1, a.x2);
    }

    float a2 = -3.6;
    float b2 = 5.1;
    float c2 = -4.2;
    a = findroots(a2, b2, c2);
    if(a.norealroots) {
        printf("There are no real roots\n");
    } else {
        printf("x1 = %.2Lf  x2 = %.2Lf", a.x1, a.x2);
    }

    int a3 = 1;
    int b3 = -3;
    int c3 = 2;
    a = findroots(a3, b3, c3);
    if(a.norealroots) {
        printf("There are no real roots\n");
    } else {
        printf("x1 = %.2Lf  x2 = %.2Lf", a.x1, a.x2);
    }
}
