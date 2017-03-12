// merge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[100],b[20];
	int i,j,k,m,n;
	i=j=k=0;
	printf("enter the size of array a");
	scanf("%d",&m);
	while(i<m){
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter the size of array b");
	scanf("%d",&n);
	while(j<n){
		scanf("%d",&b[j]);
		j++;
	}
	k=m+n-1;
	i--;j--;
	while(i>=0 && j>=0){
		if(a[i]<b[j]){
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
	if(i<0){
		while(j==0){
			a[k]=b[j];
			j--;k--;
		}
	}
	else{
		while(i==0){
			a[k]=a[i];
			k--;i--;
		}
	}
	i=0;
	while(i<(m+n)){
		printf("%d \n",a[i]);
		i++;
	}

	return 0;
}

