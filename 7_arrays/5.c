#include <stdio.h>

int main(){

    int x[5], y[5];
    int *xIter=x, *xEnd = x+5;
    int *yIter=y, *yEnd = y+5;

    printf("Enter X values (30) with space: ");
    for(xIter=x; xIter<xEnd; xIter++){
        scanf("%d", xIter);
    }
    printf("Enter Y values (30) with space: ");
    for(yIter=y; yIter<yEnd; yIter++){
        scanf("%d", yIter);
    }

    int is_in_y[30]={0};

    int *isIter=is_in_y, *isEnd = is_in_y+5;

    for(xIter=x; xIter<xEnd; xIter++, isIter++){
        for(yIter=y; yIter<yEnd; yIter++){
            if(*xIter==*yIter){
                *isIter=1;
                break;
            }
        }
    }
    for(isIter=is_in_y; isIter<isEnd; isIter++){
        if(*isIter==0){
            printf("|  %d  |\n", x[isIter-is_in_y]);
            break;
        }
    }

    return 0;
}