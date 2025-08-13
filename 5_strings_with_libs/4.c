#include <stdio.h>
#include <string.h>

int main(){
    char ch;

    char s[100], word[20] = {};
    short i=0, wi=0, word_len;
    int max_word_len;

    char *si, *si2, *first_entry;

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    printf("Enter max word len: ");
    scanf("%d", &max_word_len);

    for(si = s; *si != '\0'; si++){

        if(*si == ' '){
            word[wi++]=' ';
            word[wi++]='\0';
            wi=0;

            word_len=strlen(word);

            if(word_len>max_word_len){
                first_entry=strstr(s, word);
                
                for(si2 = first_entry; *(si2+word_len) != '\0'; si2++){
                    *si2 = *(si2+word_len);
                }
                *si2='\0';
                si-=word_len;
            }
        }else{word[wi++]=*si;}
    }

    printf("New sentence is: %s", s);

    return 0;
}