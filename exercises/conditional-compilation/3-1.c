#include<stdio.h>

#define DEBUG 1


void sort(int arr[]) {
    for(int i = 0; i < 4 - 1; i++) {
        for(int j = i + 1; j < 4; j++) {
            if(arr[i] > arr[j]) {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    #ifdef DEBUG 
    int sum = 0;
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
        if(i % 3 == 0) {
            sum += arr[i];
        }
    }
    printf("\n%d", sum);
    #endif
}

int main() {
    int arr[4] = {9, 45, 3, 4};
    sort(arr);

    return 0;
}