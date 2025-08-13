#include <stdio.h>

int main(){

    int n;

    printf("Length of your array will be (n) = ");
    scanf("%d", &n);
    
    int arr[n];

    int *arrIter = arr, *arrEnd = arr + n;

    printf("Enter arr elements (n):\n");
        
    for (arrIter = arr; arrIter<arrEnd; arrIter++) {
        scanf("%d", arrIter);
    }


    int pos_count=0;

    short ourCondition=1;
    short swicher=0;
    for(arrIter=arr; arrIter<arrEnd; arrIter++){
        if(*arrIter>0) pos_count++;
        else pos_count--;
        if(pos_count==2 || pos_count==-2){
            ourCondition=0;
            break;
        }
    }

    int sum=0, mult=1;

    if(ourCondition){
        for(arrIter=arr; arrIter<arrEnd; arrIter+=2) sum+=*arrIter;
        printf("Sum = %d\n", sum);
    }else{
        for(arrIter=arr+1; arrIter<arrEnd; arrIter+=2) mult*=*arrIter;
        printf("Mult = %d\n", mult);
    }

    return 0;
}