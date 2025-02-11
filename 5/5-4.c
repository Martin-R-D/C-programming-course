#include<stdio.h>
#include<math.h>

void fourthPower_array(long array[], int size) {
    for(int i = 0; i < size; i++) {
        array[i] = (long) pow(array[i], 4);
    }
}

int main() {
    int arr[3] = {1, 2, 3};
    fourthPower_array(arr, 3);
    for(int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
}

