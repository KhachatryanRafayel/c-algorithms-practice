#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];

    int *iter, mult_temp=1, min_mult=2000000000;

    printf("Enter matrix elements | \n");

    int *col_iter;

    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
        }
    }

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            mult_temp *= *iter;
        }
        if(mult_temp<min_mult) min_mult=mult_temp;
        mult_temp=1;
    }

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            mult_temp *= *iter;
        }
        if(mult_temp==min_mult) {
            printf("Col with min mult is | %d (indx=%d)", col_iter-*mat+1, col_iter-*mat);
            break;
        }else{mult_temp=1;}
    }

    return 0;
}