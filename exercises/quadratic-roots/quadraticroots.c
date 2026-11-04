#include<stdio.h>
#include<math.h>
#include"quadraticroots.h"

struct QuadraticRootsResult findroots(long double a, long double b, long double c) {
    struct QuadraticRootsResult result;
    long double D = (b * b) - (4 * a * c);
    if(D < 0) {
        result.norealroots = 1;
        return result;
    }
    result.norealroots = 0;
    result.x1 = (-b + sqrtl(D)) / (2 * a);
    result.x2 = (-b - sqrtl(D)) / (2 * a);

    return result;
}

