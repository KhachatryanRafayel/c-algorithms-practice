#include <stdio.h>
#include <string.h>

int main(){
    char ch;

    char s[100], word[20] = {};
    short i=0, j=0, k=0, wi=0, word_len, indx_to_delete;


    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    for(i = 0; s[i]!='\0'; i++){

        if(s[i] == ' '){
            word[wi++]='\0';
            wi=0;

            word_len=strlen(word);
            
            for(j=0; word[j]!='\0'; j++){
                
                if(strchr(word, word[j])-word!=j){
                    indx_to_delete = i-word_len+j;

                    for(k=indx_to_delete; s[k]!='\0'; k++){
                        printf("|s[%d]=s[%d] | %c=%c |\n", k, k+1, s[k], s[k+1]);
                        s[k]=s[k+1];
                    }
                    i--;
                }
            }
        }else{word[wi++]=s[i];}
    }

    printf("New sentence is: %s", s);

    return 0;
}