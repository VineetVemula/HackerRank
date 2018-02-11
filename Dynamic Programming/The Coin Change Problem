#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long getWays(long n, int c_size, long int* c,long g[][51]){
    // Complete this function
    long i=0,s=0;
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    if(g[n][c_size]!=-1)
        return g[n][c_size];
    for(i=0;i<c_size;i++)
    {
        s=s+getWays(n-c[c_size-1-i],c_size-i,c,g);
    }
    g[n][c_size]=s;
    return s;
}

int main() {
    int n; 
    int m;
    int i,j;
    scanf("%d %d", &n, &m);
    long g[n+1][51];
    long *c = malloc(sizeof(long) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%ld",&c[c_i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            g[i][j]=-1;
        }
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n,m,c,g);
    printf("%ld\n",ways);
    return 0;
}
