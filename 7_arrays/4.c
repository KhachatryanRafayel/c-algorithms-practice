#include <stdio.h>

int main() {

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int x[n];
    int is_unique[n];
    for(int i=0; i<n; i++) is_unique[i]=1;

    int *iterX = x, *iterInnerX=x, *endX = x + n;

    printf("Enter x elements (n):\n");

    for (iterX = x; iterX<endX; iterX++) {
        scanf("%d", iterX);
    }
    for (iterX = x; iterX<endX; iterX++) {
        for(iterInnerX=x; iterInnerX<endX; iterInnerX++){
            if(iterX!=iterInnerX && *iterX==*iterInnerX){
                is_unique[iterInnerX-x]=0;
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(is_unique[i]==1) printf("%d\n", x[i]);
    }

    return 0;
}