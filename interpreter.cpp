// interpretor.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<malloc.h>
#include<vector>
#include<string.h>
#include<math.h>
//int in[26];
//std::fill(in,in+25,-1);
std::vector<int>in(25,-1);
int isnum(char *);
void display(char **,int);
char* readinput();
char * rmsp(char *);
int counttok(char *);
void assign(char ** ,int);
void interpretor(char **,int  );
void parser(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s;
	readinput();
	printf("main");
	return 0;
}
char* readinput()
{
	char *a;
	printf("enter the string");
	a=(char *)malloc(sizeof(char)*270);
	while(1){
		fgets(a,50,stdin);
		a=rmsp(a);
		if(a=="exit"){
			printf("out");
			break;
		}
		else{
			parser(a);
		}
	}
return a;
}
void interpretor(char **si,int c){
	int t=0;
	int i=0,j=c-1;
	if(**(si+2)>='a' && **(si+2)<='z'){
		if(in[**(si+2)-97]==-1){
			printf("invalid");
			return ;
		}
		else;
			t=in[**(si+2)-97];
	}
	else{
		while(j>=0){
			t=t+(*(*(si+2)+i)-'0')*(int)pow(10.0,j);
			i++;
			j--;
		}
	}
	in[**si-97]=t;
}
void assign(char **si,int c){
	char ch=**(si+3);
	int j=c-1,i=0,t=0;
	if(**(si+4)>='a' && **(si+4)<='z'){
		if( in[**(si+4)-97]==-1){
			printf("not valid");
			return ;
		}
		else{
			switch(ch){
				case '+':
					t=in[**(si+2)-97]+in[**(si+4)-97];break;
				case '-':
					t=in[**(si+2)-97]-in[**(si+4)-97];break;
				case '/':
					t=in[**(si+2)-97]/in[**(si+4)-97];break;
				case '*':
					t=in[**(si+2)-97]*in[**(si+4)-97];break;
			}
		}
	}
	else{
		while(j>=0){
			t=t+(*(*(si+4)+i)-'0')*(int)pow(10.0,j);
			i++;
			j--;
		}
		t=t+in[**(si+2)-97];
	}
	in[**si-97]=t;
	printf("%d",in[**si-97]);
}
void parser(char *si){
	char **arr;
	int i=0,j=0,k=0,l=0,count=0,c=0;
	int nxt=1;
	arr=(char **)malloc(sizeof(char)*5);
	int cnt=counttok(si);
	while(c<cnt){
		j=0;
		if(i==0){
			if(*si>='a' && *si<='z'){
				arr[i]=(char *)malloc(sizeof(char)*2);
				arr[i][j]=si[i];
			}
			else
			{
				printf("invalid character");
				break;
			}
		arr[i][j+1]=0;
		i++;
		}
		else if(i==1 && si[i]=='='){
			arr[i]=(char *)malloc(sizeof(char)*2);
			arr[i][j]=si[i];
			arr[i][j+1]=0;
			i++;
		}
		else if(i==2){
			count=isnum(&si[i]);
			arr[i]=(char *)malloc(sizeof(count+1));
			l=i;
			if(count>10){
				printf("size of number is exceeded\n");
				arr[l][j]=0;
				break;
			}
			for(k=0;k<10 && k<count;k++){
					arr[l][j]=si[i];
					j++;
					i++;
			}
		arr[l][j]=0;
		interpretor(arr,count);
		l++;
		}
		else if(si[i]=='+' || si[i]=='-' || si[i]=='*' || si[i]=='/'){
			arr[l]=(char *)malloc(sizeof(char)*2);
			arr[l][j]=si[i];
			arr[l][j+1]=0;
			l++;
			i++;
		}
		else if(c==4){
			count=isnum(&si[i]);
			arr[l]=(char *)malloc(sizeof(count+1));
			if(count>10){
				printf("size of number is exceeded\n");
				arr[l][j]=0;
				break;
			}
			for(k=0;k<10 && k<count;k++){
				arr[l][j]=si[i];
				j++;
				i++;
			}
			arr[l][j]=0;
			assign(arr,count);
		}
	c++;
	}
	display(arr,cnt);
}
int isnum(char *si){
	int i=0;
	while((*si>='0' && *si<='9') || (*si>='a' && *si<='z') ) {
		i++;
		si++;
	}
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
	cnt1=isnum(&si[2]);
	if(si[2+cnt1]!=0)
		return 5;
	else return 3;
}
void display(char **di,int cnt){
	int i=0;
	while(i<cnt){
		printf("%s\n",*(di+i));
		i++;
	}
}