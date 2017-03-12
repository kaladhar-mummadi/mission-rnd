// spacerem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char c[100],temp;
	int i,count=0;
	scanf("%[^\n]",c);
	for(i=0;c[i-1]!=0;){
		if(c[i]==32){
			count++;
			while(c[i+count]!=32 && c[i-1]!=0){
				temp=c[i+count];
				c[i+count]=c[i];
				c[i]=temp;
				i++;
			}
		
		}
		else if(c[i]!=32 && c[i+count]!=32)
			i++;
	}
	printf("%s",c);
	return 0;
}

