// printtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>


int _tmain(int argc, _TCHAR* argv[])
{
	int i=0,j=0,**a;
	a=(int **)malloc(sizeof(6));
	for(i=0;i<6;i++)
	{ 
		a[i]=(int *)malloc(sizeof(6));
		for(j=0;j<6;j++)
		{
			if(j==5-i)
				a[i][j]=0;
			else if(i<=5 && a[i][j-1]!=0 && a[i][j-1]!=-1)
				a[i][j]=1;
			else 
				a[i][j]=-1;

		}
	}
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

