#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];

    int *iter, temp_max_mult=1, min_in_max_mult=2000000000;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
        }
    }

    int *col_iter;

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            temp_max_mult *= *iter;
        }
        if(temp_max_mult<min_in_max_mult) min_in_max_mult = temp_max_mult;
        temp_max_mult=1;
    }

    printf("The smallest number in the biggest mult's of cols is = |%d|", min_in_max_mult);

    return 0;
}