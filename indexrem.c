// indexrem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void indrem(char *,int,int);
int _tmain(int argc, _TCHAR* argv[])
{
	char *c;
	int n;
	int i,j;
	printf("enter the size of string you want to enter \n");
	scanf("%d",&n);
	c=(char *)malloc(n+1);
	printf("enter string \n");
	fflush(stdin);
	fgets(c,n+1,stdin);
	printf("enter index to remove");
	scanf("%d %d",&i,&j);
	indrem(c,i,j);
	printf("\n%s",c);
	return 0;
}
void indrem(char *r,int i,int j){
	int k=j;
	while(r[j+1]!='\n'){
		r[i]=r[j+1];
		j++;i++;
	}
	r[i]=0;
}