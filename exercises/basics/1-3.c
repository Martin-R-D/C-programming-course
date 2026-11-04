#include <stdio.h>

int main() {
    int arr[] = {1, 7, 3, 4, 9, 2};
    int size = 6;
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i] * i;
    }

    printf("%d", sum);
}