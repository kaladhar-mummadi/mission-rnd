//if there are any duplicates remove them and sort

#include "stdafx.h"
#include<stdio.h>
#include<malloc.h>
#include<string.h>
char* readinput1();
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	s=readinput1();
	quicksort(s,0,strlen(s)-1);
	printf("%s",s);
	return 0;
}
char* readinput1()
{
	char *c;
	int n;
	printf("enter the maximum length");
	scanf("%d",&n);
	printf("enter the string");
	c=(char *)malloc(n);
	fflush(stdin);
	gets(c);
	return c;
}
