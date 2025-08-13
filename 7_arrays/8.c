#include <stdio.h>

int main() {

    int N;

    printf("Length of your array will be (N) = ");
    scanf("%d", &N);
    
    int arr[N];

    int *arrIter = arr, *innerIter=arr, *inner2Iter=arr, *arrEnd = arr + N;

    printf("Enter arr elements (N):\n");
        
    for (arrIter = arr; arrIter<arrEnd; arrIter++) {
        scanf("%d", arrIter);
    }

    for (arrIter = arr; arrIter<arrEnd; arrIter++) {
        for(innerIter = arrIter; innerIter<arrEnd; innerIter++){
            if(arrIter!=innerIter && *arrIter==*innerIter){
                for(inner2Iter=innerIter; inner2Iter<arrEnd; inner2Iter++){
                    *inner2Iter=*(inner2Iter+1);
                }
                arrEnd--;
                innerIter--;
            }
        }
    }
   
    printf("Arr = ");
    for (arrIter = arr; arrIter<arrEnd; arrIter++) {
        printf("%d ", *arrIter);
    }

    return 0;
}