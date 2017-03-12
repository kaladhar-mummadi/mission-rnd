// interpretor.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<malloc.h>
#include<vector>
#include<string.h>
#include<math.h>
std::vector<int>in(25,-1);
int isnum(char *);
void display(char *);
void readinput();
char * rmsp(char *);
int counttok(char *);
int interpretor(char **,int );
void token(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	readinput();
	return 0;
}
void readinput()
{
	char *a;
	printf("enter the string");
	a=(char *)malloc(sizeof(char)*270);
	while(1){
		fgets(a,50,stdin);
		rmsp(a);
		if(a=="exit") break;
		else token(a);
	}
}
int interpretor(char *si,int c){
	int t=0;
	int i=0,j=c-1,k=0;
	if(*si>='a' && *si<='z'){
		if(in[*si-97]==-1){
			printf("invalid");
			return 0;
		}
		else;
			t=in[*si-97];
	}
	else{
		while(j>=0){
			t=t+(*(si+i)-'0')*(int)pow(10.0,j);
			i++;
			j--;
		}
	}
return t;
}
void token(char *si){
	char *arr[26];
	int i=0,j=0,k=0,l=0,count=0,c=0;
	int nxt=1;
	int cnt=counttok(si);
	while(c<cnt){
		j=0;
		if(i==0 && *si>='a' && *si<='z')	arr[i++]=si+i;
		else if(i==1 && si[i]=='='){
			arr[i]=si+i;
			i++;
		}
		else if(c==2){
		j=isnum(si+i);
		l=interpretor(si+i,j);
		in[*si-'a']=l;
		while(j){arr[i]=si+i; }
		i=i+j;
		}
		else if(si[i]=='+' || si[i]=='-' || si[i]=='*' || si[i]=='/'){
			arr[i]=si+i;
			i++;
		}
		else if(c==4){
			arr[i]=si+i;
			in[*si-'a']=l+interpretor(arr[i],isnum(si+i));		
		}
	c++;
	}
	display(si);
}
int isnum(char *si){
	int i=0;
	while(*(si+i)>='0' && *(si+i)<='9' || (*(si+i)>='a' && *(si+i)<='z') && in[*si-'a']!=-1 ) i++;
	return i;
}
char * rmsp(char *si){
	int i=0,j=0;
	while(si[i]!='\n'){
		if(si[i]!=' ')
		{
			si[j]=si[i];
			j++;
		}
		i++;
	}
	si[j]='\0';
return si;
}
int counttok(char *si){
	int cnt1=0;
	cnt1=isnum(si+2);
	if(si[2+cnt1]!=0)
		return 5;
	else return 3;
}
void display(char *di){
	int i=0;
	printf("%c = %d",*di,in[*di-97]);
}