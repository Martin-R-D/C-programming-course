#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE x = A; \
                         A = B; \
                         B = x; 


#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
        for(int i = 0; i < SIZE - 1; i++) { \ 
            for(int j = i + 1; j < SIZE; j++) { \
                if(ARRAY[i] COMPARE ARRAY[j]) { \
                    SWAP(ARRAY[i], ARRAY[j], TYPE) \
                } \
            } \
        } 

int main() {
    int array[5] = {3, 4, 6, 10, 1};
    SORT(array, 5, int, >)
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
}