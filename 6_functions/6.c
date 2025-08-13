#include <stdio.h>
#include <stdbool.h>

void fill_matrix_from_input(int matrix[][30], int *n, int *m);
bool is_summetric_by_auxiliary_diagonal(int matrix[][30], int *n, int *m);
int matrix_elms_sum(int matrix[][30], int *n, int *m, bool pos_nums);

int main(){
    int mat[30][30];
    int n,m;
    fill_matrix_from_input(mat, &n, &m);

    bool is_summetrix = is_summetric_by_auxiliary_diagonal(mat, &n, &m);
    printf("%d", matrix_elms_sum(mat, &n, &m, is_summetrix));

}

void fill_matrix_from_input(int matrix[][30], int *n, int *m){
    printf("Input counts of rows and columns (n&m) | ");
    scanf("%d %d", n, m);
    printf("Enter matrix elements | \n");
    for(int i=0; i< *n; i++)
        for(int j=0; j< *m; j++)
            scanf("%d", &matrix[i][j]);
}

bool is_summetric_by_auxiliary_diagonal(int matrix[][30], int *n, int *m){
    if(*n!=*m) return false;
    for(int i = 0; i < *n; i++) {
        for(int j = 0; j < *n; j++) {
            if (matrix[i][j] != matrix[*n - 1 - j][*n - 1 - i]) {
                return false;
            }
        }
    }
    return true;
}

int matrix_elms_sum(int matrix[][30], int *n, int *m, bool pos_nums){
    int sum=0;
    if(pos_nums){
        for(int i=0; i< *n; i++)
            for(int j=0; j< *m; j++)
                if(matrix[i][j]>0) sum+=matrix[i][j];
    }else{
        for(int i=0; i< *n; i++)
            for(int j=0; j< *m; j++)
                if(matrix[i][j]<0) sum+=matrix[i][j];
    }
    return sum;
}