#include "stdafx.h"
#include<malloc.h>
char * readinput();
void tolow(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	s=readinput();
	tolow(s);
	printf("%s",s);
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
	a=(char *)malloc(sizeof(n));
	return gets(a);
}
void tolow(char *ls){
	while(*ls){
		if(*ls>='A' && *ls<='Z'){
			*ls=*ls+('a'-'A');
		}
		*ls++;
	}
return;
}
