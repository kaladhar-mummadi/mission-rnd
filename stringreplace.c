#include "stdafx.h"
#include<malloc.h>
char* readinput(); 
void replace(char*,char*);
int _tmain(int argc, _TCHAR* argv[])
{
	char *a,*b;
	a=readinput();
	b=readinput();
	replace(a,b);
	printf("%s \n",a);
	return 0;
}
void replace(char *a,char *b)
{
	int ind;
	printf("enter the index");
	scanf("%d",&ind);
	if(ind<0 || b==0 )
	{
		return;
	}
	else
	{
		while(a[ind]!=0 && *b)
		{
			a[ind]=*b;
			b++;
			ind++;
		}
	}
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