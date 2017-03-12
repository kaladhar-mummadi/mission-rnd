#include "stdafx.h"
char *readinput();
int _tmain(int argc, _TCHAR* argv[])
{
	
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
	fgets(a,n,stdin);
	return a;
}
