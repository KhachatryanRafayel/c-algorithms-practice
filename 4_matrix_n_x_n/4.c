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

    int *col_iter;

    for(col_iter=*mat; col_iter<*mat+n; col_iter++,i++){
        if(*(col_iter+n*i) == 0){
            for(iter = col_iter; iter<=col_iter+n*(n-1); iter+=n){
                X[j++]=*iter;
            }
        }
    }



    printf("X = ");
    for(i=0; i<j; i++) printf(" %d ", X[i]);

    return 0;
}