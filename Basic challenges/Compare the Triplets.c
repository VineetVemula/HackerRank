#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int arr[2];
int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    //int arr[2]={0};
    *result_size=2;
    if(a0>b0)
        arr[0]++;
    else if(a0<b0)
        arr[1]++;
    if(a1>b1)
        arr[0]++;
    else if(a1<b1)
        arr[1]++;
    if(a2>b2)
        arr[0]++;
    else if(a2<b2)
        arr[1]++;
    return arr;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
