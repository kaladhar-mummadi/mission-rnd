// r.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "malloc.h"
#include<string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int n,i=0,j;
	char *a,temp;
	printf("enter the size of the array:");
	scanf_s("%d",&n);
	a=(char *)malloc(sizeof(n));
	fflush(stdin);
	gets_s(a,n);
	printf("%s",a);
	for(i=0,j=n-2;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
	printf("\n%c",a[i]);
	}


	return 0;
}

