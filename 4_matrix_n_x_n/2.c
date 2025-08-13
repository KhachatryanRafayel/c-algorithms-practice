#include <stdio.h>

int main(){
    
    int n;

    printf("Input n | ");
    scanf("%d", &n);

    int (*row_iter)[n];

    int mat[n][n];

    int *iter, i=1, min_val=2000000000;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+n; iter++){
            scanf("%d", iter);
        }
    }
    
    for(row_iter=mat; row_iter<mat+n-1; row_iter++,i++){
        for(iter = *row_iter+i; iter<*row_iter+n; iter++){
            if(*iter<min_val) min_val=*iter;
        }
    }

    printf("Min val upper main ankyunagic is: %d", min_val);

    return 0;
}