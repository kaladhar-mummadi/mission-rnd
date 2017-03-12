// permutations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char a[10];
	char c[7][4]={0};
	int i=0,j=0,count=0,k=0;
	gets_s(a,4);
	for(i=0;i<3;i++){
		for(j=0;j<6;)
		{
			if(count<2){
				c[j][i]=a[k];
				count++;
				j++;
			}
			else{
				count=0;
				k++;
			}
		}
		count=0;
	}
	printf("%s",c[1]);
	return 0;
}

