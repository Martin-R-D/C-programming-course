#include<stdio.h>

#define SIZE 5

void sortWin(int arr[]) {
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }

        }
    }
}

void sortLinux(int arr[]) {
    int min_index;
    for(int i = 0; i < SIZE - 1; i++) {
        min_index = i;
        for(int j = i + 1; j < SIZE; j++) {
            if(arr[j] < arr[min_index])  {
                min_index = j;
            }
        }

        int swap = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = swap;
    }
}

void sortApple(int arr[]) {
    int current_num;
    for(int i = 0; i < SIZE; i++) {
        current_num = arr[i];
        for(int j = i - 1; j >= 0 && arr[j] > current_num; j--) {
            int swap = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = swap;
        }
    } 
}

void sortOther(int arr[]) {
    for(int i = 0; i < SIZE / 2; i++) {
        int swap = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = swap;
    }
}
int main() {
    int arr[SIZE] = {4, 2, 1, 5, 3};
    #ifdef _WIN32
    sortWin(arr);
    #elif defined __linux__
    sortLinux(arr);
    #elif defined __APPLE__
    sortApple(arr);
    #else
    sortOther(arr);
    #endif
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
}