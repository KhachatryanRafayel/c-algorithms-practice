#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char ch, s[100], num_str[10]={};
    short i=0, j=0;
    float sum = 0;

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        if(isdigit(s[i]) || s[i]=='.'){
            num_str[j++]=s[i];
        }else{
            if(atof(num_str)){ //esi kara chlnie ekanomyaem anum zut
                num_str[j]='\0';
                sum+=atof(num_str);
                j=0;
                for(j=0; j<10; j++) num_str[j]='0';
            }
        }
    }
    printf("Sum: %0.2f", sum);
    return 0;
}