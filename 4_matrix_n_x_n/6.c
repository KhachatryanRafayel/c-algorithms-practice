#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];
    int multip=1;
    int Y=0;

    int *iterX = x, *iterInnerX=x, *endX = x + n;

    printf("Enter x elements (n):\n");

    int *m = 0;
        
    for (iterX = x; iterX<endX; iterX++) {
        scanf("%d", iterX);
        if(!m && *iterX<0) m = iterX;
    }

    for (iterX = x; iterX<m; iterX++) {
        for(iterInnerX = x; iterInnerX<=iterX; iterInnerX++){
            multip*=*iterInnerX;
            Y+=multip;
            multip=1;
        }
    }

    printf("Y = %d", Y);

    return 0;
}