// merge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int *a,*b;
	int i,j,k,m,n;
	i=j=k=0;
	printf("enter the size of array a");
	scanf("%d",&m);
	printf("enter the size of array b");
	scanf("%d",&n);
	k=m+n-1;
	a=(int *)malloc(k*(sizeof(int)));
	b=(int *)malloc(n*(sizeof(int)));
	printf("ennter elements of array a \n");
	while(i<m){
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter elements of array b ");
	while(j<n){
		scanf("%d",&b[j]);
		j++;
	}
	i--;j--;
	while(i>=-1 && j>=-1){
		if((a[i]<b[j] )|| (i==-1 && j>=0)){
			a[k]=b[j];
			j--;
			k--;
		}
		else{
			a[k]=a[i];
			i--;
			k--;
		}
	}
	i=0;
	printf("the sorted array is \n");
	while(i<(m+n)){
		printf("%d \n",a[i]);
		i++;
	}

	return 0;
}

