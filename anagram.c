// Given 2 strings s1 and s2. Determine if they are anagrams of each other.
//e.g. cat and act are anagrams (ie) they have same letters only the ordering is different. pit and top are not
#include<stdio.h>
#include "stdafx.h"
#include<malloc.h>
char * readinput();
void anagram(char *,char *);
int _tmain(int argc, _TCHAR* argv[])
{
	char *s1,*s2;
	s1=readinput();	//taking inputs
	s2=readinput();
	anagram(s1,s2);	//calling anagram testin function
	return 0;
}
char* readinput()
{
	char *c;
	int n;
	printf("enter the maximum length");
	scanf_s("%d",&n);
	printf("enter the string");
	c=(char *)malloc(n);
	fflush(stdin);
	gets_s(c,n+1);
	return c;
}
void anagram2(char *s1,char *s2){
	int a[62]={0},i=0;
	while(*s1){               //just considered alpha numeric values.
		if(*s1>='a' && *s1<='z'){   //this condition is to store low case letters in even number positions like a[0],a[2],a[4]
			a[2*((*s1)-'a')]=*s1;
		}
		else if(*s1>='A' && *s1<='Z'){ //this condition is to store uppercase in odd number positions lke a[1],a[3],a[5]
			a[(2*(*s1-'A'))+1]=*s1;
		}
		else if(*s1>='0' && *s1<='9'){ //this condition is to store numbers after storing upper and lower cases
			a[((*s1-'0')+52)]=*s1;
		}
		s1++;                       //all other symbols are ignored
	}
	while(i<62){
		if(a[i]!=0){


}

void anagram(char *s1,char *s2){
	int c1=0,c2=0;
	while(*s1 && *s2){
		c1=c1+*s1;
		c2=c2+*s2; //counting total sum of ASCII values and comparing
		s1++;
		s2++;
	}
	if(c1==c2 || ((c2-c1)%32)==0)  // second condition is for test case of capital letters
		printf("anagram \n");
	else
		printf("not anagram \n");
}
