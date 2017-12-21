#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *calories = malloc(sizeof(int) * n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       scanf("%d",&calories[calories_i]);
    }
    // your code goes here
    long int i,j,temp,sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(calories[j]<calories[j+1])
            {
                temp=calories[j];
                calories[j]=calories[j+1];
                calories[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+calories[i]*pow(2,i);
    }
    printf("%ld",sum);
    return 0;
}
