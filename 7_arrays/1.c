#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];
    int y[n-2];
    int maxValIndx, minValIndx;
    
    int *iterX = x, *endX = x + n;

    printf("Enter x elements (n):\n");

    scanf("%d", iterX);

    int max_value = 0, min_value = *iterX;

    for (iterX = x+1; iterX<endX; iterX++) {
        scanf("%d", iterX);
        if(*iterX>max_value) max_value = *iterX;
        if(*iterX<min_value) min_value = *iterX;

    }

    for (iterX = x; iterX<endX; iterX++) {
        if(*iterX == max_value) {maxValIndx=iterX-x; break;}
    }

    for (iterX = x+n; iterX>=endX-n; iterX--) {
        if(*iterX == min_value) {minValIndx=iterX-x; break;}
    }

    int *iterY = y, *endY = y+n-2;

    for (iterX = x; iterX<endX; iterX++) {
        if(iterX-x == maxValIndx || iterX-x == minValIndx) continue;
        *iterY = *iterX;
        iterY++;
    }

    printf("Y = {");
    for(iterY = y; iterY<endY-1; iterY++){
        printf("%d, ", *iterY);
    }
    printf("%d}", *iterY);

    return 0;
}