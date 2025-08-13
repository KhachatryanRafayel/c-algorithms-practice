#include <stdio.h>


void fill_matrix_from_input(int matrix[][30], int *n, int *m);
int max_zero_sequence_in_row(int matrix[][30], int *m, int k);
int max_zero_sequence_row_in_matrix(int matrix[][30], int *n, int *m);

int main(){
    int mat[30][30];
    int n,m;
    fill_matrix_from_input(mat, &n, &m);

    printf("%d", max_zero_sequence_row_in_matrix(mat, &n, &m));
    // printf("|%d|", max_zero_sequence_in_row(mat, &m, 1));

}

void fill_matrix_from_input(int matrix[][30], int *n, int *m){
    printf("Input counts of rows and columns (n&m) | ");
    scanf("%d %d", n, m);
    printf("Enter matrix elements | \n");
    for(int i=0; i < *n; i++)
        for(int j=0; j < *m; j++)
            scanf("%d", &matrix[i][j]);
}

int max_zero_sequence_in_row(int matrix[][30], int *m, int k){
    int temp_count=0;
    int max_count=0;
    for(int i=0; i<*m; i++){
        if(matrix[k][i]==0){
            temp_count++;
        }else{
            temp_count=0;
        }
        if(temp_count>max_count) max_count=temp_count;
    }
    return max_count;
}

int max_zero_sequence_row_in_matrix(int matrix[][30], int *n, int *m){
    int max_zero_count=0;
    int cur_row_max_zero_seq;
    for(int i=0; i<*n; i++){
        cur_row_max_zero_seq = max_zero_sequence_in_row(matrix, m, i);
        if(cur_row_max_zero_seq>max_zero_count)
            max_zero_count = cur_row_max_zero_seq;
    }
    if(max_zero_count==0) return -1;
    for(int i=*n; i>0; i--){
        if(max_zero_sequence_in_row(matrix, m, i)==max_zero_count)
            return i;
    }
    return -1;
}