#include <stdio.h>

int main(){
    
    int n;

    printf("Input n | ");
    scanf("%d", &n);

    int (*row_iter)[n];

    int mat[n][n];
    int X[n*n];

    int *iter, i=0, j=0;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+n; iter++){
            scanf("%d", iter);
        }
    }
    
    for(row_iter=mat; row_iter<mat+n; row_iter++, i++){
        if(*(*row_iter+i) == 0){
            for(iter = *row_iter; iter<*row_iter+n; iter++){
                X[j++]=*iter;
            }
        }
    }

    printf("X = ");
    for(i=0; i<j; i++) printf(" %d ", X[i]);

    return 0;
}