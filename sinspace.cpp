// sinspace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>
char* readinput();
int counttok(char *);
void insspc(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *str;
	int n;
	str=readinput();
	n=counttok(str);
	printf("%d",n);
	return 0;
}
char* readinput()
{
	char *c;
	printf("enter the string");
	c=(char *)malloc(sizeof(char)*100);
	fflush(stdin);
	gets_s(c,50);
	return c;
}
int counttok(char *s){
	int i=0,j=0;
	int tok=0,cnt=0;
	while(s[i]!='\0'){
		if((s[i]>='a' && s[i]<='z') || (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='=')){
			tok++;cnt++;
			i++;
		}
		else if(s[i]>='0' && s[i]<='9'){
			while(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='=' && s[i]!='\0' && s[i]!=' '){
				i++;cnt++;
			}
			tok++;
		}
		else if(s[i]==' '){
			i++;
		}
	}
	j=cnt+(tok-1);
	i--;j--;
	while(i!=0){
		if(s[i]>='0' && s[i]<='9')
		while(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='=' && s[i]!=' '){
			s[j]=s[i];
			i--;j--;
		}
		else if((s[i]>='a' && s[i]<='z')|| s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='='){
			if(s[i]==' '){
				i--;
			}
			else{
				s[j]=s[i];
				i--;j--;
			}
		}
	if(s[j+1]!=' '){ 
	s[j]=' ';
	j--;
	}
}
	printf("%s",s);
return tok;
}