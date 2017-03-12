// box.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<malloc.h>
bool maze(char **,int,int);
int r,c;
int _tmain(int argc, _TCHAR* argv[])
{
	char **b;
	int *a,i=0,j,k=0,l=0;
	printf("enter row & columnsize");
	scanf_s("%d%d",&r,&c);
	a=(int *)malloc((r*c)*sizeof(int));
	for(i;i<(r*c);i++)
		scanf_s("%d",&a[i]);
	j=c*4+1;
	b=(char **)malloc((2*r+1)*sizeof(char *));
	for(i=0;i<(2*r)+1;i++){
		b[i]=(char *)malloc(j*sizeof(char));
		for(k=0;k<j;k++){
			if(i%2==0)
				b[i][k]='-';
			else{
				if(k%4==0)
					b[i][k]='|';
				else if(k%4==1 || k%4==3)
					b[i][k]=' ';
				else{
					if(a[l]==1)
						b[i][k]='1';
					else
						b[i][k]='0';
				l++;
				}
			}
		}
	}
	maze(b,1,2);
	printf(" \\/\n");
	for(i=0;i<(2*r)+1;i++){
		for(k=0;k<j;k++){
			printf("%c",b[i][k]);
		}
		printf("\n");
	}
return 0;
}
bool maze(char **a,int i,int j){
	if(i>2*r || j>4*c  || i<0 || j<0){
		return false;
	}
	if(i==2*r-1 && j==4*c-2){
		a[i][j]=' ';
		return true;
	}
	if(a[i][j]!='1'){
		return false;
	}
	a[i][j]=' ';
	if(maze(a,i-2,j)==true){
		a[i-1][j-1]=' ';
		a[i-1][j]=' ';
		a[i-1][j+1]=' ';
	return true;
	}
	if(maze(a,i,j+4)==true){
		a[i][j+2]=' ';
		return true;
	}
	if(maze(a,i+2,j)==true){
		a[i+1][j-1]=' ';
		a[i+1][j]=' ';
		a[i+1][j+1]=' ';
		return true;
	}
	if(maze(a,i,j-4)==true){
		a[i][j-2]=' ';
		return true;
	}
	a[i][j]='3';
return false;
}