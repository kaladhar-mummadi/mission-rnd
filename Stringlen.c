#include "stdafx.h"
#include<malloc.h>
char *readinput();
int strlen1(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	s=readinput();
	printf("%d \n",strlen1(s));
	return 0;
}
char* readinput()
{
	char *a;
	int n;
	printf("enter the maximum length");
	scanf("%d",&n);
	printf("enter the string");
	fflush(stdin);
	a=(char *)malloc(sizeof(n+1));
	return gets(a);
}
int strlen1(char *al)
{
	int i=0;
	while(al[i])
		i++;
return i;
}
