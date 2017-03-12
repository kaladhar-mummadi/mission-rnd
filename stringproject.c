#include "stdafx.h"
#include<malloc.h>
#include<string.h>
char** readinput();
void splitu(char **);
int _tmain(int argc, _TCHAR* argv[])
{
	char **a;
	a=readinput();
	splitu(a);
}
char** readinput()
{
	char **a;
	int i=0;
	int n;
	FILE *fp;
	printf("enter max number oflines \n");
	scanf("%d",&n);
	a=(char **)malloc(sizeof(n)+1);
	fp=fopen("test.txt","r");
	while(i<n)
	{
		a[i]=(char *)malloc(1000);
		if(fscanf(fp,"%s",a[i])==EOF){
			break;
		}
		i++;
	}
	a[i]=0;
	fclose(fp);
return a;
}
void splitu(char **a){
	char * ptoken;
	int i=0;
	while(a[i]){
		ptoken=strtok(a[i],",");
		while(ptoken){
			printf("%-*s",i,ptoken);
			ptoken=strtok(NULL,",");
		}
		printf("\n");
		i++;
	}
}