// bokka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int i=0,j=0,**a;
	int n;
	scanf("%d",&n)
	a=(int **)malloc(sizeof(4));
	for(i;i<4;i++)
	{
		a[i]=(int *)malloc(sizeof(4));
		for(j=0;j<4;j++)
		{
			if(i==j)
				a[i][j]=0;
			else if(i<j)
				a[i][j]=1;
			else
				a[i][j]=-1;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

