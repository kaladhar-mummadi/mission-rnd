#include "stdafx.h"
#include<malloc.h>
char* readinput();
void palin(char *);
int strlen1(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *a;
	a=readinput();
	palin(a);
	return 0;
}
char* readinput()
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
void palin(char *al){
	int i=0;
	int j=strlen1(al);
	while(i<j){
		j--;
	while(i<j)
	{
		if(al[i]==al[j])
		{
			i++;
			j--;
		}
		else
		{
			break;
		}
	}
	if(i>=j) printf("palin");
	else printf("not ");
}
}
int strlen1(char *al)
{
	int i=0;
	while(al[i])
		i++;
return i;
}