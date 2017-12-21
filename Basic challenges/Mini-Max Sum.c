#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int min=10000000000,max=0,sum=0,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j)
                continue;
            sum=sum+arr[j];
        }
        if(sum>max)
            max=sum;
        if(sum<min)
            min=sum;
        sum=0;
    }
    printf("%ld %ld",min,max);
    //printf("\n%ld",sizeof(long int));
    return 0;
}
