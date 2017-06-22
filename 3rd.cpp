#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    long long n,s[n];
    long long result=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%lld",&s[i]);
     
    }
    accumulate(s.begin, s.end(), (long long int)0);
    printf("%lld",result);
}


