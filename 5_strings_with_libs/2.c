#include <stdio.h>
#include <string.h>

int main(){
    
    char s1[100], s2[100];
    short N1=0, N2=0;
    
    printf("Enter s1 string: ");
    scanf("%s", s1);

    printf("Enter s2 string: ");
    scanf("%s", s2);

    char* s1i;

    for(s1i=s1; s1i<s1+strlen(s1); s1i++)
        if(strchr(s2, *s1i) == NULL)
            N1++;
    for(s1i=s2; s1i<s2+strlen(s2); s1i++)
        if(strchr(s1, *s1i) == NULL)
            N2++;
    
    printf("N1, N2 | %d, %d\n", N1, N2);

    return 0;
}