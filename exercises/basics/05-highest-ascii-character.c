#include <stdio.h>
#include <string.h>
char highest_ascii_code(char word[]) {
    int highest = 0;
    for(int i = 0; i < strlen(word); i++) {
        if(word[i] > highest) highest = word[i];
    }

    return highest;
}
 
int main() {
    char word[] = "Ivan";
    printf("%c", highest_ascii_code(word));
}