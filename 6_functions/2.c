#include <stdio.h>
#include <string.h>

void fill_array_from_input(int elms_count, int array[elms_count]);
void get_arr_with_uniqs(int elms_count, int array[elms_count], int *new_elms_count,int new_arr[elms_count]);

int main(){
    int i, n;
    int newN;
    printf("Input count of elements = ");
    scanf("%d", &n);
    int arr[n];
    int new_arr[n];
    fill_array_from_input(n, arr);
    get_arr_with_uniqs(n, arr, &newN, new_arr);

    for(int i=0;i<newN;i++)
        printf("|%d|", new_arr[i]);
}

void fill_array_from_input(int elms_count, int array[elms_count]){
    printf("input your array elements| ");    
    for(int i=0;i<elms_count;i++)
        scanf("%d", &array[i]);
}

void get_arr_with_uniqs(int elms_count, int array[elms_count],int *new_elms_count, int new_arr[elms_count]){
    short is_elm_unique=1;
    *new_elms_count=0;
    for(int i=0;i<elms_count;i++){
        for(int j=0;j<i;j++){
            if(array[i]==array[j]){
                is_elm_unique=0;
            }
        }
        if(is_elm_unique) new_arr[(*new_elms_count)++]=array[i];
        is_elm_unique=1;
    }
}
