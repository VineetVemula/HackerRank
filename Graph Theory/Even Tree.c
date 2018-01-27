#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int dfs(int m,int neb[][m],int visit[],int degree[],int *ans,int node)
{
    int i,num=0,temp=0;
    visit[node]=1;
    for(i=0;i<degree[node];i++)
    {
        if(visit[(neb[node][i])]==0)
        {
            temp=dfs(m,neb,visit,degree,ans,neb[node][i]);
            if(temp%2==0)
                ((*ans)++);
            num += temp;
        }
    }
    return (num+1);
}
int evenTree(int n, int m,int degree[],int neb[][m]) {
    // Complete this function
    int visit[n+2],ans=0,total,i;
    for(i=0;i<=n+1;i++)
    {
        visit[i]=0;
    }
    total=dfs(m,neb,visit,degree,&ans,1);
    return ans;
}

int main() {
    int n; 
    int m;
    int i,j;
    scanf("%i %i", &n, &m);
    int tree[m][2],neb[n+1][m],degree[n+1];
    for(i=0;i<=n;i++)
    {
        degree[i]=0;
    }
    for (int tree_i = 0; tree_i < m; tree_i++) {
       for (int tree_j = 0; tree_j < 2; tree_j++) {
           scanf("%i",&tree[tree_i][tree_j]);
           
       }
    }
    
    for(i=0;i<m;i++)
    {
        neb[tree[i][0]][degree[tree[i][0]]++]=tree[i][1];
        neb[tree[i][1]][degree[tree[i][1]]++]=tree[i][0];
    }
    
    int result = evenTree(n, m, degree, neb);
    printf("%d\n", result);
    return 0;
}
