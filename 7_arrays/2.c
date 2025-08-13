#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];

    int zero_count=0;

    int *iterX = x, *endX = x + n;

    printf("Enter x elements (n):\n");

    for (iterX = x; iterX<endX; iterX++) {
        scanf("%d", iterX);
        if(*iterX==0) zero_count++;
    }

    int y_size = n+zero_count*2-1;
    int y[y_size];
    int *iterY = y, *endY = y + y_size;

    for (iterX = x; iterX<endX; iterX++) {
        if(*iterX == 0){
            *iterY=0; iterY++;
            *iterY=0; iterY++;
            *iterY=0; iterY++;
        }else{*iterY = *iterX; iterY++;}
    }

    printf("Y = {");
    for(iterY = y; iterY<endY; iterY++){
        printf("%d, ", *iterY);
    }
    printf("%d}", *iterY);

    return 0;
}