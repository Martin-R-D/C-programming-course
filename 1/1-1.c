#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int size = 8;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        int j = 2;
        for(; arr[i] % j; j++) ;
        if(arr[i] == j) {
            sum += arr[i];
        }
    }

    printf("%d", sum);
}