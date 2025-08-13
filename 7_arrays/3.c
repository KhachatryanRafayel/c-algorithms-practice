#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];
    int y[n];

    int current_count =0;

    int *iterX = x, *endX = x + n;
    int *iterY = y, *endY = y + n-1;

    printf("Enter x elements (n):\n");

    for (iterX = x; iterX<endX; iterX++,iterY++,current_count=0) {
        scanf("%d", iterX);
        for(int i = 1; i<=*iterX; i++) current_count+=i;
        *iterY=current_count;
    }

    printf("Y = {");
    for(iterY = y; iterY<endY; iterY++){
        printf("%d, ", *iterY);
    }
    printf("%d}", *iterY);

    return 0;
}