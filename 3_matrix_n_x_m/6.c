#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];

    int newM=m;

    int *iter, temp_neg_cout=0;
    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
        }
    }

    int *col_iter, *col_iter2;

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            if(*iter<0) temp_neg_cout++;
        }
        if(temp_neg_cout==n){
            for(col_iter2=col_iter; col_iter2<*mat+m; col_iter2++){
                for(iter = col_iter2; iter<=col_iter2+m*(n-1); iter+=m){
                    *iter=*(iter+1);
                }
            }
            newM--;
        }
        temp_neg_cout=0;
    }

    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+newM; iter++){
            printf("|%d|", *iter);
        }
        printf("\n");
    }

    return 0;
}