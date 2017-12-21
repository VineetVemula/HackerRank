#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    // Complete this function
    char * d,*k;
    int c='P';
    int v='A';
    d=strchr(s,c);
    k=strchr(s,v);
    if(d==NULL)
    {
       *k='\0';
       if(*s=='1' && *(s+1)=='2')
        {
            *s='0';
            *(s+1)='0';
        }
       return s;
    }
    else
    {
        *d='\0';
        *s=*s+1;
        *(s+1)=*(s+1)+2;
        if(*s=='2' && *(s+1)=='4')
        {
            *s='1';
            *(s+1)='2';
        }
        return s;
    }
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
