// repeated.cpp : Defines the entry point for the console application.
//
#include<malloc.h>
#include "stdafx.h"
char* readinput1();
int _tmain(int argc, _TCHAR* argv[])
{
	char* s;
	int a[62]={0},i=0,j=0;
	s=readinput1();
	while(*s){               //just considered alpha numeric values.
		if(*s>='a' && *s<='z'){   //this condition is to store low case letters in even number positions like a[0],a[2],a[4]
			a[2*((*s)-'a')]=*s;
		}
		else if(*s>='A' && *s<='Z'){ //this condition is to store uppercase in odd number positions lke a[1],a[3],a[5]
			a[(2*(*s-'A'))+1]=*s;
		}
		else if(*s>='0' && *s<='9'){ //this condition is to store numbers after storing upper and lower cases
			a[((*s-'0')+52)]=*s;
		}
		s++;                       //all other symbols are ignored
	}
	i=0;
	j=0;
	while(i<62){           /// this loop is to store all the sorted values in given input array
		if(a[i]!=0){
		s[j]=a[i];
		j++;
		}
		i++;
	}
	s[j]=0;
	printf("\n%s",s);
	
	return 0;
}
char* readinput1()
{
	char* c;
	int n;
	printf("enter the maximum length");
	scanf_s("%d",&n);
	printf("enter the string");
	c=(char *)malloc(n);
	fflush(stdin);
	gets_s(c,n);
	return c;
}

