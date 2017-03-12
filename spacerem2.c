// spacerem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void remsp(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *c;
	int n;
	printf("enter the size of string you want to enter \n");
	scanf("%d",&n);
	c=(char *)malloc(n+1);
	printf("enter string with spaces\n");
	fflush(stdin);
	fgets(c,n+1,stdin);
	remsp(c);
	printf("The string with out spaces \n%s",c);
	return 0;
}
void remsp(char *r){
	int i=0,count=0;
	while(r[i]!=32)
		i++;
	while(r[i]==32 || r[i+count]==32){
		count++;
		while(r[i+count]!=32 && r[i-1]!='\n'){
			r[i]=r[i+count];
			i++;
		}
	}
r[i]=0;
}
