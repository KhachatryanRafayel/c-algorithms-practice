#include <stdio.h>

int main(){
    
    int n, m;

    printf("Input n & m | ");
    scanf("%d %d", &n, &m);

    int (*row_iter)[m];

    int mat[n][m];

    int *iter, max_val=0, sum=0;

    printf("Enter matrix elements | \n");
    
    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            scanf("%d", iter);
            if(*iter>max_val) max_val=*iter;
        }
    }

    for(row_iter=mat; row_iter<mat+n; row_iter++){
        for(iter = *row_iter; iter<*row_iter+m; iter++){
            if(*iter==max_val){
                sum-=*iter;
                for(iter = *row_iter; iter<*row_iter+m; iter++){
                    sum+=*iter;
                }
                break;
            }
        }
    }

    int *col_iter;

    for(col_iter=*mat; col_iter<*mat+m; col_iter++){
        for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
            if(*iter==max_val){
                for(iter = col_iter; iter<=col_iter+m*(n-1); iter+=m){
                    sum+=*iter;
                }
                break;
            }
        }
    }

    printf("Sum = |%d|", sum);

    return 0;
}