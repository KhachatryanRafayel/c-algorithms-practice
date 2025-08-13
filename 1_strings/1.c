#include <stdio.h>
#include <string.h>

int main() {
    
    char S[] = "hello";
    char T[] = "lleoh";
    
    if (strlen(S) != strlen(T)) {
        printf("FALSE\n");
        return 0;
    }
    
    int is_anagram[250] = { 0 };
    
    for (int i = 0; i < strlen(S); i++) {
        for(int j = 0; j < strlen(T); j++){   
            if(S[i]==T[j]){
                is_anagram[i] = 1;
            }
        }
    }
    
    for(int i = 0; i < strlen(S); i++){
        if(is_anagram[i]!=1){
            printf("FALSE\n");
            return 0;
        }
    }
    
    printf("TRUE\n");
    return 0;
}