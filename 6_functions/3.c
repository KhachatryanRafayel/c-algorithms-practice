#include <stdio.h>
#include <string.h>

void fill_array_from_input(int elms_count, int array[elms_count]);
int sum_of_digits(int number);

int main(){
    int i, n, biggest_num=0;
    printf("Input count of elements = ");
    scanf("%d", &n);
    int arr[n];
    fill_array_from_input(n, arr);
    for(i=0;i<n;i++)
        if(sum_of_digits(arr[i])>biggest_num) biggest_num=sum_of_digits(arr[i]);
    printf("The biggest sum of digits between number is| %d", biggest_num);
}


void fill_array_from_input(int elms_count, int array[elms_count]){
    printf("input your array elements| ");    
    for(int i=0;i<elms_count;i++)
        scanf("%d", &array[i]);
}

int sum_of_digits(int number){
    int sum=0;
    if(number<0) number = -number;
    while(number>0){
        sum+=number%10;
        number /= 10;
    }
    return sum;
}