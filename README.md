# hackerrank-algorithms
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	int alli=0,bos=0;
	scanf("%d%d%d",&a1,&a2,&a3);
	scanf("%d%d%d",&b1,&b2,&b3);
	for(int i=1;i<=3;i++)
	{
		if(i=1)
	{
		if(a1>b1)
		{
		alli=alli+1;	
		}
		if(a1==b1)
		{
			alli=alli+0;
            bos=bos+0;
		}
		if(b1>a1)
		{
		bos=bos+1;	
		}
	}
		if(i=2)
		{
		if(a2>b2)
		{
		alli=alli+1;	
		}
		if(a2==b2)
		{
			alli=alli+0;
            bos=bos+0;
		}
		if(b2>a2)
		{
		bos=bos+1;	
		}
	}
		if(i=3)
	{
		if(a3>b3)
		{
		alli=alli+1;	
		}
		if(a3==b3)
		{
			alli=alli+0;
            bos=bos+0;
		}
		if(b3>a3)
		{
		bos=bos+1;	
		}
	}
	
}
printf("%d",alli);
printf(" ");
printf("%d",bos);
}
