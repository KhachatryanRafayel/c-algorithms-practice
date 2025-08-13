#include <stdio.h>
#include <string.h>

int main() {
    
    char T[] = "This is a sentence";
    short i = 0, start = 0;

    printf("String before: %s\n", T);

    while (T[i] != '\0') {
        if (T[i] == ' ') {
            i++;
            start = i;
        } else {
            int end = i;
            while (T[end] != ' ' && T[end] != '\0') {
                end++;
            }

            int left = i, right = end - 1;
            while (left < right) {
                char temp = T[left];
                T[left] = T[right];
                T[right] = temp;
                left++;
                right--;
            }
            i = end;
        }
    }

    printf("String after: %s\n", T);
    return 0;
}