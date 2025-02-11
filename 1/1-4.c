#include <stdio.h> 


int isFound(int arr[], int number, int right) {
    int left = 0;
    int middle = (right + left) / 2;
    while(left <= right) {
        if(arr[middle] == number) return middle;
        if(arr[middle] > number) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
        middle = (left + right) / 2;
    }
    return -1;
}


int main() {
    int arr[] = {1, 2, 5, 7, 8, 10};
    int right = sizeof(arr) / sizeof(arr[0]);
    int number = 6;
    printf("%d", isFound(arr, number, right));
}