#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,k,temp,luck=0;
    scanf("%d %d",&n,&k);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j][0]<a[j+1][0])
            {
                temp=a[j][0];
                a[j][0]=a[j+1][0];
                a[j+1][0]=temp;
                temp=a[j][1];
                a[j][1]=a[j+1][1];
                a[j+1][1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][1]==0)
        {
            luck=luck+a[i][0];
            continue;
        }
        else if(k>0)
        {
            k--;
            luck=luck+a[i][0];
            continue;
        }
        else luck=luck-a[i][0];
    }
    printf("%d",luck);
    return 0;
}
