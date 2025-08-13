#include <stdio.h>
#include <string.h>

void fill_array_from_input(int elms_count, int array[elms_count]);

int is_neg_num_in_arr(int elms_count, int array[elms_count]);


int main(){
    int i, n;
    printf("Input count of elements = ");
    scanf("%d", &n);
    int arr[n];
    fill_array_from_input(n, arr);
    
    if(is_neg_num_in_arr(n, arr)){
        printf("The first negative number is | %d", is_neg_num_in_arr(n, arr));
    }else{
        printf("All elements are positive");
    }
}

void fill_array_from_input(int elms_count, int array[elms_count]){
    printf("input your array elements| ");    
    for(int i=0;i<elms_count;i++)
        scanf("%d", &array[i]);
}

int is_neg_num_in_arr(int elms_count, int array[elms_count]){
    for(int i=0;i<elms_count;i++)
        if(array[i]<0)
            return array[i];
    return 0;
}