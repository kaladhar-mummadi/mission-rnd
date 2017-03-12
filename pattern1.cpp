
#include "stdafx.h"

void patrn1();
int _tmain(int argc, _TCHAR* argv[])
{
	int i=0,j=0;

	return 0;
}
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
void patrn1(){
	int i=0,j;
	for(i;i<5;i++){
		for(j=0;j<=i;j++)
		{
			if(((i+j)%2)==0)
				printf("0");
			else printf("1");
		}
		printf("\n");
	}
}

