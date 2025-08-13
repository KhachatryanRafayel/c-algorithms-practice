#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];
    int maxs_in_row[n], mins_in_col[m]; 

    int *iter, max_val=0, temp_max=0, min_val=2000000000, temp_min=2000000000;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
            if(*iter>temp_max) temp_max=*iter;
        }
        maxs_in_row[row_iter-mat]=temp_max;
        temp_max=0;
    }

    int *col_iter;

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            if(*iter<temp_min) temp_min=*iter;
        }
        mins_in_col[col_iter-*mat]=temp_min;
        temp_min=2000000000;
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(maxs_in_row[i]==mins_in_col[j]) printf("|%d|", mat[i][j]);

    return 0;
}