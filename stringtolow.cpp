#include "stdafx.h"
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
	gets(a);
	return a;
}
void tolow(char *ls){
	int i=0;
	while(*ls){
		if(ls[i]>='A' && ls[i]<='Z'){
			ls[i]=ls[i]+('a'-'A');
		}
		i++;	
	}


}
