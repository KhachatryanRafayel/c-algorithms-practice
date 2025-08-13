#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];
    int count=0;

    int *iterX = x, *iterInnerX=x, *endX = x + n;

    printf("Enter x elements (n):\n");

    for (iterX = x; iterX<endX; iterX++) {
        scanf("%d", iterX);
    }
    for (iterX = x; iterX<endX; iterX++) {
        for(iterInnerX=x; iterInnerX<endX; iterInnerX++){
            if(iterX!=iterInnerX && *iterX==*iterInnerX){
                count += *iterInnerX;
                break;
            }
        }
    }

    printf("count = %d", count);

    return 0;
}