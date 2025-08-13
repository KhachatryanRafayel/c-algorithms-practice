#include <stdio.h>
#include <string.h>

int main() {
    
    char T[] = "This is an example example";
    int maxVowels = 0;
    int currentVowels = 0;
    int i = 0;

    do{
        if (T[i] == ' ') {
            if (currentVowels > maxVowels) {
                maxVowels = currentVowels;
            }
            currentVowels = 0;
            } else if (strchr("aeiouAEIOU", T[i]) != NULL) {
                currentVowels++;
            }
                i++;
    }while(T[i] != '\0');


    i = 0;
    currentVowels = 0;
    int wordStart = 0;

    while (T[i] != '\0') {
        if (T[i] == ' ') {
            if (currentVowels == maxVowels) {

                for (int j = wordStart; j < i; j++) {
                    printf("%c", T[j]);
                }
                printf("\n");
            }
            currentVowels = 0;
            wordStart = i + 1;
        } else if (strchr("aeiouAEIOU", T[i]) != NULL) {
            currentVowels++;
        }
        i++;
    }

    if (currentVowels == maxVowels) {
        for (int j = wordStart; j < i; j++) {
            printf("%c", T[j]);
        }
        printf("\n");
    }
    return 0;
}