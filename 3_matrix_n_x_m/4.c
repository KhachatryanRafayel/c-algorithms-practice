#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];
    short is_row_elms_unique[n];
    short is_there_a_unique_row = 0;
    for(int i=0;i<n;i++) is_row_elms_unique[i]=1;

    int *iter, *iter2;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
        }
    }

    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            for(iter2 = *row_iter; iter2<*row_iter+m; iter2++){
                if(iter!=iter2 && *iter==*iter2){
                    is_row_elms_unique[row_iter-mat]=0;
                    break;
                }
            }
        }
    }

    for(int i=0;i<n;i++) {
        if(is_row_elms_unique[i]==1){
            is_there_a_unique_row = 1;
            printf("%d ", i);
        }
    }
    if(is_there_a_unique_row == 0) printf("NO");
    // for(int i=0;i<n;i++) printf("|%d|", is_row_elms_unique[i]);



    return 0;
}