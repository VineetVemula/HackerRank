#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n,i,j,k,c=0;
    char temp;
    char a[100][100];
    scanf("%d",&t);
    while(t>0)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='\n')
                {
                    j--;
                }
            }
        }
        for(k=0;k<n;k++)
        {
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-1;j++)
                {
                    if(a[k][j]>a[k][j+1])
                    {
                        temp=a[k][j];
                        a[k][j]=a[k][j+1];
                        a[k][j+1]=temp;
                    }
                }
            } 
        }
        for(k=0;k<n && c==0;k++)
        {
            for(j=0;j<n-1 && c==0;j++)
            {
                if(a[j][k]>a[j+1][k])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
            printf("YES\n");
        else printf("NO\n");
        t--;
    }
    return 0;
}
