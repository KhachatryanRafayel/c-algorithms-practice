#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void fill_array_from_input(int elms_count, int array[elms_count]);
void get_new_arr(int elms_count, int array[elms_count], int *new_elms_count,int new_arr[elms_count], int N);
int is_num_palindrome(int number);

int main(){
    int i, n, N;
    int newN;

    printf("Input count of elements = ");
    scanf("%d", &n);

    printf("Input N = ");
    scanf("%d", &N);

    int arr[n];
    int new_arr[n];
    fill_array_from_input(n, arr);
    get_new_arr(n, arr, &newN, new_arr, N);

    for(int i=0;i<newN;i++)
        printf("|%d|", new_arr[i]);
}

void fill_array_from_input(int elms_count, int array[elms_count]){
    printf("input your array elements| ");
    for(int i=0;i<elms_count;i++)
        scanf("%d", &array[i]);
}

void get_new_arr(int elms_count, int array[elms_count], int *new_elms_count,int new_arr[elms_count], int N){
    *new_elms_count=0;
    for(int i=0; i<elms_count; i++){
        if(array[i]<N && is_num_palindrome(array[i]))
            new_arr[(*new_elms_count)++]=array[i];
    }
}

int is_num_palindrome(int number) {
    int orig = number;
    int opposite = 0;
    while (orig > 0) {
        opposite = opposite * 10 + orig % 10;
        orig /= 10;
    }
    return opposite==number;
}