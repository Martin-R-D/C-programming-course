#include<stdio.h>

#define FUNC(A, B) ((A) + (B)) * ((A) + (B))

int main() {
    printf("%d", FUNC(5, 4));
}