#include <stdio.h>
#include <string.h>

int main(){
    char ch, char_for_check;
    char s[100], newS[150] = {}, word[20] = {};
    short i=0, wi=0;

    char *si;

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;

    s[i++] = ' ';
    s[i] = '\0';

    printf("Enter char for checking: ");
    char_for_check = getchar();

    for(si=s; si<s+strlen(s); si++){

        if(*si==' '){
            word[wi++]=' ';
            word[wi++]='\0';

            wi=0;

            if(strchr(word, char_for_check) != NULL)
                strcat(newS, word);

        }else
            word[wi++]=*si;
    }

    printf("New sentence is: %s", newS);

    return 0;
}