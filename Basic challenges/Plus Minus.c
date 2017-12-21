#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float p=0,ne=0,z=0;
    float a1,a2,a3;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if(arr[arr_i]>0)
           p++;
       else if(arr[arr_i]<0)
           ne++;
       else z++;
    }
    a1=(float)(p/n);
    a2=(float)(ne/n);
    a3=(float)(z/n);
    printf("%f\n%f\n%f",a1,a2,a3);
    return 0;
}
