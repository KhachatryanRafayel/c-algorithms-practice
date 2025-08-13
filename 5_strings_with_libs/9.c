#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char ch, s[100], temp_word_len_str[3];
    short i=0,j=0,k=0,l=0, temp_word_len=0, left, right;


    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        if(s[i]==' '){
            left = i-temp_word_len;
            right = i;
            itoa(temp_word_len, temp_word_len_str, 10);

            //strlen(temp_word_len_str) angam prabeli texenq toxum baric heto
            for(k = 0; k < strlen(temp_word_len_str) ;k++){
                for(j = strlen(s)+1; j > i; j--){
                    s[j]=s[j-1];
                }
                for(l=0; l<strlen(temp_word_len_str); l++){
                    s[i+l]=temp_word_len_str[l++];
                }
                l=0;
                i++;
            }
            temp_word_len=0;
        }else{temp_word_len++;}
    }

    printf("New sentence is| %s", s);

    return 0;
}