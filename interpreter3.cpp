// interpretor.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<malloc.h>
#include<vector>
#include<string.h>
#include<math.h>
int pre(char);
#define pre(x) (x=='/'?1:(x=='*'?2:(x=='+'?3:(x=='-'?4:0))))
std::vector<int>in(25,-1);
int order[10];
char op[10];
int isnum(char *);
void sort();
void display(char *);
void readinput();
char * rmsp(char *);
int evaluate(char **,int );
void token(char *);
int cal(char *,char,int,int);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	readinput();
	return 0;
}
void readinput()
{
	char *a;
	printf("enter the string \n");
	a=(char *)malloc(sizeof(char)*270);
	while(1){
		fgets(a,50,stdin);
		rmsp(a);
		if(a=="exit") break;
		else token(a);
	}
}
int evaluate(char *si,int c){
	int t=0;
	int i=0,j=c-1,k=0;
	if(*si>='a' && *si<='z'){
		if(in[*si-97]==-1){
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
	int i=0,j=0,t=-1;
	char ch;
	while(*(si+i)){
		if(i==0 && *si>='a' && *si<='z') i++;
		else if(i==1 ){
			if(*(si+i)=='=' )
				i++;
		/*	else if(si[i]=='+' || si[i]=='-' || si[i]=='*' || si[i]=='/'){
				ch=*(si+i);
				i=i+2;
				j=isnum(si+i);
				t=in[*si-'a'];
				t=cal(si+i,ch,j,t);
				i=i+j;
			}*/
			//else i++;
		}
		else if(j=isnum(si+i)){
			t=evaluate(si+i,j);
			i=i+j;
		}
		else if(si[i]=='+' || si[i]=='-' || si[i]=='*' || si[i]=='/'){
			ch=*(si+i);
			i++;
			j=isnum(si+i);
			t=cal(si+i,ch,j,t);
			i=i+j;
		}
		else {
			printf("invalid\n");
			i++;
		}
	}
	if(i<=2 && *si!='=') printf("invalid \n");
	if(*si>='a' && *si<='z')
	in[*si-'a']=t;
	display(si);
}
int cal(char *si,char ch,int j,int t){
	switch(ch){
				case '+':
					t=t+evaluate(si,j);break;
				case '-':
					t=t-evaluate(si,j);break;
				case '/':
					t=t/evaluate(si,j);break;
				case '*':
					t=t*evaluate(si,j);break;
			}
return t;
}
int isnum(char *si){
	int i=0;
	while(*(si+i)>='0' && *(si+i)<='9' || (*(si+i)>='a' && *(si+i)<='z') && in[*si-'a']!=-1) i++;
	return i;
}
char * rmsp(char *si){
	int i=0,j=0,k=0;
	char c;
	while(si[i]!='\n'){
		if(si[i]!=' ')
		{
		si[j]=si[i];
			if(si[j]=='+' || si[j]=='-' || si[j]=='*' || si[j]=='/'){
				if(pre(op[k-1])<pre(si[j])){
					c=op[k-1];
					op[k-1]=si[j];
					op[k]=c;
				}
				else{
					op[k]=si[j];
					order[k]=j;
					k++;
				}
			}
		j++;
		}
		
		i++;
	}
	si[j]='\0';
	sort();
return si;
}
void display(char *di){
	int i=0;
	if(*di>='a' && *di<='z')
	if(in[*di-'a']!=-1)
	printf("The value assigned is %c = %d\n",*di,in[*di-97]);
}
void sort(){
	char t;
	int i=0,j=0;
for(i=0;op[i];i++){
	for(j=i+1;op[j];j++){
		if(op[i]<op[j]){
			t=op[i];
			op[i]=op[j];
			op[j]=t;
		}
	}
}
}