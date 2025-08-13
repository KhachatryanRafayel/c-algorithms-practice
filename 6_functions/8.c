#include <stdio.h>
#include <stdbool.h>

void print_matrix(int matrix[][30], int *n, int *m);
void fill_matrix_from_input(int matrix[][30], int *n, int *m);
void del_from_matrix_neg_rows(int matrix[][30], int *n, int *m);
void del_from_matrix_neg_cols(int matrix[][30], int *n, int *m);

int main(){
    int mat[30][30];
    int n,m;
    fill_matrix_from_input(mat, &n, &m);
    del_from_matrix_neg_rows(mat, &n, &m);
    del_from_matrix_neg_cols(mat, &n, &m);
    print_matrix(mat, &n, &m);
}

void print_matrix(int matrix[][30], int *n, int *m){
    for(int i=0; i < *n; i++){
        for(int j=0; j < *m; j++)
            printf(" |%d| ", matrix[i][j]);
        printf("\n");
    }
}

void fill_matrix_from_input(int matrix[][30], int *n, int *m){
    printf("Input counts of rows and columns (n&m) | ");
    scanf("%d %d", n, m);
    printf("Enter matrix elements | \n");
    for(int i=0; i < *n; i++)
        for(int j=0; j < *m; j++)
            scanf("%d", &matrix[i][j]);
}

void del_from_matrix_neg_rows(int matrix[][30], int *n, int *m) {
    bool is_cur_row_neg;
    for (int i = 0; i < *n; i++) {
        is_cur_row_neg = true;
        for (int j = 0; j < *m; j++) {
            if (matrix[i][j] > 0) {
                is_cur_row_neg = false;
                break;
            }
        }
        if (is_cur_row_neg) {
            for (int k = i; k < *n - 1; k++) {
                for (int l = 0; l < *m; l++) {
                    matrix[k][l] = matrix[k + 1][l];
                }
            }
            (*n)--;
            i--;
        }
    }
}

void del_from_matrix_neg_cols(int matrix[][30], int *n, int *m) {
    bool is_cur_col_neg;
    for (int j = 0; j < *m; j++) {
        is_cur_col_neg = true;
        for (int i = 0; i < *n; i++) {
            if (matrix[i][j] > 0) {
                is_cur_col_neg = false;
                break;
            }
        }
        if (is_cur_col_neg) {
            for (int k = 0; k < *n; k++) {
                for (int l = j; l < *m - 1; l++) {
                    matrix[k][l] = matrix[k][l + 1];
                }
            }
            (*m)--;
            j--;
        }
    }
}