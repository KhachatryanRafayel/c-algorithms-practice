#include <stdio.h>
#include <string.h>

int main(){
    char ch;

    char elm, s[100], newS[100]={}, word[20] = {}, vowels[]="aeiou";
    short i=0, j=0, k=0, wi=0, word_len, word_vowel_count=0;

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    for(i = 0; s[i]!='\0'; i++){

        if(s[i] == ' '){
            word[wi]='\0';
            wi=0;

            word_len=strlen(word);
            
            for(j=0; word[j]!='\0'; j++){
                elm = word[j];
                
                if(strchr(vowels, elm))
                    word_vowel_count++;
                
            }

            if(word_vowel_count==word_len-word_vowel_count){
                word[word_len]=' ';
                word[word_len+1]='\0';
                strcat(newS, word);  
            }

            word_vowel_count=0;

        }else{word[wi++]=s[i];}
    }

    printf("New sentence is: %s", newS);

    return 0;
}