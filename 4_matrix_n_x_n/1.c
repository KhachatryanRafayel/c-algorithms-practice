#include <stdio.h>

int main(){
    
    int n;

    printf("Input n | ");
    scanf("%d", &n);

    int (*row_iter)[n];

    int mat[n][n];

    int *iter, i=1, max_val=0;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+n; iter++){
            scanf("%d", iter);
        }
    }
    
    for(row_iter=mat+1; row_iter<mat+n; row_iter++,i++){
        for(iter = *row_iter; iter<*row_iter+i; iter++){
            if(*iter>max_val) max_val=*iter;
        }
    }

    printf("Max val under main ankyunagic is: %d", max_val);

    return 0;
}