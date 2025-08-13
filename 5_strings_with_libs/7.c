#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char ch, s[100], num_str[3]={};
    short sum = 0, i=0, j=0;

    printf("Enter sentence: ");
    while ((ch = getchar()) != '\n') s[i++] = ch;
    
    s[i++] = ' ';
    s[i] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        if(isdigit(s[i])){
            num_str[j++]=s[i];
        }else{
            if(atoi(num_str)){ //esi kara chlnie ekanomyaem anum zut
                num_str[j]='\0';
                sum+=atoi(num_str);
                j=0;
                for(j=0; j<3; j++) num_str[j]='0';
            }
        }
    }
    printf("Sum: %d", sum);
    return 0;
}