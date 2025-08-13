#include <stdio.h>

int main() {

    int n;
    short zero_count=0;
    short isZero=0;
    short max_zero_count=0;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int arr[n];

    int *arrIter = arr, *arrEnd = arr + n;

    printf("Enter arr elements (n):\n");
        
    for (arrIter = arr; arrIter<arrEnd; arrIter++) {
        scanf("%d", arrIter);
        if(*arrIter==0) {
            isZero=1;
        } else if (*arrIter!=0){
            isZero=0;
            if(zero_count>max_zero_count){
                max_zero_count=zero_count;
                zero_count=0;
            }
        }
        if(isZero) zero_count++;
    }
    printf("|  %d  |", max_zero_count);

    return 0;
}