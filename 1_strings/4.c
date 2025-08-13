#include <stdio.h>

int main() {

    char T[] = "   This is    my     sentencd        ";
    
    int i = 0, j = 0;

    while (T[i] == ' ') {
        i++;
    }

    while (T[i] != '\0') {
        if (T[i] != ' ') {
            T[j++] = T[i];
        } else if (T[i + 1] != ' ' && T[i + 1] != '\0') {
            T[j++] = ' ';
        }
        i++;
    }

    T[j] = '\0';

    printf("Result: \"%s\"\n", T);

    return 0;
}