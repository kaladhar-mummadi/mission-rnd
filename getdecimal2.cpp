// getdecimal2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char a[16];
	int i=0,sum=0;
	scanf("%s",a);
	sum=a[i]-'0';i++;
	while(a[i]!=0){
		sum=sum << 1;
		sum=sum+(a[i]-'0');
		i++;
	}
	printf("decimal value is \n %d",sum);
	return 0;
}

