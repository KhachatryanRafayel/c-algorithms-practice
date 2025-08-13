#include <stdio.h>

void fill_matrix_from_input(int matrix[][30], int *n, int *m);
void print_matrix(int matrix[][30], int *n, int *m);
int min_num_in_row(int matrix[][30], int *m, int k);
void bubble_sorting(int matrix[][30], int *m, int array[30]);
void swap_2_rows_in_matrix(int matrix[][30], int *m, int f_r, int s_r);

int main(){
    int mat[30][30];
    int n,m;
    fill_matrix_from_input(mat, &n, &m);
    int rows_min_nums[n];
    for(int i=0; i<n; i++)
        rows_min_nums[i]=min_num_in_row(mat, &m, i);
    bubble_sorting(mat, &m, rows_min_nums);
    print_matrix(mat, &n, &m);
}

void fill_matrix_from_input(int matrix[][30], int *n, int *m){
    printf("Input counts of rows and columns (n&m) | ");
    scanf("%d %d", n, m);
    printf("Enter matrix elements | \n");
    for(int i=0; i < *n; i++)
        for(int j=0; j < *m; j++)
            scanf("%d", &matrix[i][j]);
}
void print_matrix(int matrix[][30], int *n, int *m){
    for(int i=0; i < *n; i++){
        for(int j=0; j < *m; j++)
            printf(" |%d| ", matrix[i][j]);
        printf("\n");
    }
}

int min_num_in_row(int matrix[][30], int *m, int k){
    int min_num = 2000000000;
    for(int i=0; i<*m; i++)
        if(matrix[k][i]<min_num) min_num=matrix[k][i];
    return min_num;
}

void swap_2_rows_in_matrix(int matrix[][30], int *m, int f_r, int s_r){
    int temp=0;
    for(int i=0; i<*m; i++){
        temp = matrix[f_r][i];
        matrix[f_r][i]=matrix[s_r][i];
        matrix[s_r][i] = temp;
    }
}

void bubble_sorting(int matrix[][30], int *m, int array[30]){
    int temp;
    int change=1;
    while(change!=0){
        change=0;
        for(int i=0; i<*m-1; i++){
            if(array[i]>array[i+1]){
                swap_2_rows_in_matrix(matrix, m, i,i+1);
                temp = array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
                change++;
            }
        }
    }
}
