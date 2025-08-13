#include <stdio.h>
#include <string.h>

int main(){
    
    char s1[100], s2[100];
    short count=0, dubl=0;
    
    printf("Enter s1 string: ");
    scanf("%s", s1);

    printf("Enter s2 string: ");
    scanf("%s", s2);

    char* s1i;

    for(s1i=s1; s1i<s1+strlen(s1); s1i++)
        if(strchr(s1, *s1i)==s1i && strchr(s2, *s1i) != NULL )
            count++;
    
    printf("Count | %d", count);

    return 0;
}