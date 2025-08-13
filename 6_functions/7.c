#include <stdio.h>
#include <stdbool.h>

void fill_matrix_from_input(int matrix[][30], int *n, int *m);
bool is_col_ordered(int matrix[][30], int n, int m, int k);

int main(){
    
    int mat[30][30];
    int n,m;
    fill_matrix_from_input(mat, &n, &m);
    int arr_is_cols_ordered[m];

    for(int i=0; i<m; i++)
        arr_is_cols_ordered[i] = is_col_ordered(mat, n, m, i);

    for(int i=0; i<m; i++)
        printf(" |%d| ", arr_is_cols_ordered[i]);
}

void fill_matrix_from_input(int matrix[][30], int *n, int *m){
    printf("Input counts of rows and columns (n&m) | ");
    scanf("%d %d", n, m);
    printf("Enter matrix elements | \n");
    for(int i=0; i< *n; i++)
        for(int j=0; j< *m; j++)
            scanf("%d", &matrix[i][j]);
}

bool is_col_ordered(int matrix[][30], int n, int m, int k){
    for(int i=0; i<n-1; i++)
        if(matrix[i][k]>matrix[i+1][k]) return false;
    return true;
}