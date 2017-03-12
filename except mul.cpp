// except mul.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i,j,val,n;
	int a[10],b[10];
	i=j=0;val=1;
	printf("enter the size of array");
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	b[i]=a[i];i++;
	while(i<n){
		b[i]=b[i-1]*a[i-1];
		i++;
	}
	i--;
	val=val*a[i];
	a[i]=b[i];
	i--;
	while(i>=0){
		j=a[i];
		a[i]=val*b[i];
		val=val*j;
		i--;
	}
	i=0;
	while(i<n){
		printf("%d \n",a[i]);
		i++;
	}
	return 0;
}

