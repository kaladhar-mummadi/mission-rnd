// mul.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[100],b[100]={0},i=0,n,val=1,c=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		if(a[i]==0)
			c++;
		else
			val=val*a[i];
		i++;
	}
	i=0;
	if(c==0){
		while(i<n){
			b[i]=val/a[i];
			i++;
		}
	}
	else if(c==1){
		while(a[i]!=0){
			i++;
		}
		b[i]=val;
	}
	i=0;
	while(i<n){
		printf("%d",b[i]);
		i++;
	}
return 0;
}

