// inspos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void replace(char *,char *,int);
int _tmain(int argc, _TCHAR* argv[])
{
	char *c1,*c2;
	int n;
	int k;
	//for string 1
	printf("enter the size of 1st string\n");
	scanf("%d",&n);
	c1=(char *)malloc(n+1);
	printf("enter string \n");
	fflush(stdin);
	fgets(c1,n+1,stdin);
	//for string 2
	printf("enter the size of 2nd string\n");
	scanf("%d",&n);
	c2=(char *)malloc(n+1);
	printf("enter string \n");
	fflush(stdin);
	fgets(c2,n+1,stdin);
	//for index
	printf("enter index to insert");
	scanf("%d",&k);
	replace(c1,c2,k);
	printf("\n%s",c1);
	return 0;
}
void replace(char *r1,char *r2,int k){
	int i=0,count=0;
	while(r2[i]!=0){
		r1[k]=r2[i];
		i++;
		k++;
		if(r1[k]==0) count=1;
	}
	if(count==1)
		r1[k]=0;
}
