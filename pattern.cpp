// pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int i=0,j=0,n=12,s=5,k=0;
	char c='*';
	
	/*printf("%*c\n %*c",n,c,n-3);
	printf("%c",c);
	printf("%c",c);
	printf("\n %*c",n-4);
	printf("%c",c);*/
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=s;j++)
			printf(" ");
		s--;
		for(k=1;k<=i;k++)
			printf("*");		
		printf("\n");
	}
	return 0;
}

