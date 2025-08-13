#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    
    char T[] = "This is blaalb sentence";
    
    short i = 0, start = 0;
    while (T[i] != '\0') {
        if (T[i] == ' ') {
            i++;
            start = i;
        } else {
            int end = i;
            while (T[end] != ' ' && T[end] != '\0') {
                end++;
            }
            short word_id_pallindrome = 1;
            int left = i, right = end - 1;

            for (;left<right;left++,right--){
                // printf("T[left] | %c\n", T[left]);
                // printf("T[right] | %c\n", T[right]);
                if(T[left]!=T[right]){
                    word_id_pallindrome = 0;
                }
            }
            if(word_id_pallindrome){
                for(int j=i; j<=end-1; j++){
                    printf("%c", T[j]);
                }
                return 0;
            }
            i = end;
        }
    }



    return 0;
}