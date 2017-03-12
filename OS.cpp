// OS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int fr[3];
int _tmain(int argc, _TCHAR* argv[])
{
	int p[]={2,3,4,5,6,2,1,3,4,5,7,4};
	int i=0,j=0,k=0,index=0,flag1=0,flag2=0,pf=0,lg[3],max=0,frsize=3,found=0;
	for(i=0;i<3;i++) fr[i]=-1;
	for(j=0;j<12;j++){
		for(i=0;i<3;i++){
			if(fr[i]==p[j]){
				flag1=1;
				flag2=1;
				break;
			}
		}
		if(flag1==0){
			for(i=0;i<3;i++){
				if(fr[i]==-1){
					flag2=1;
					fr[i]=p[j];
					break;
				}
			}
		}
		if(flag2==0){
			for(i=0;i<3;i++)
				lg[i]=0;
			for(i=0;i<frsize;i++){
				for(k=j+1;k<12;k++){
					if(fr[i]==p[k]){
						lg[i]=k-j;
						break;
					}
				}
			}
			found=0;
			for(i=0;i<frsize;i++){
				if(lg[i]==0){
					index=j;
					found=1;
					break;
				}
			}
			if(found==0){
				max=lg[0];
				index=0;
				for(i=1;i<frsize;i++){
					if(max<lg[i]){
						max=lg[i];
						index=i;
					}
				}
			}
			fr[index]=p[j];
			pf++;
		}
		display();
	}
	return 0;
}
void dl(){
	int c[10][10],p[10][10],r[6],a[6],i,j,k=1,found=0,sum,m[6],temp[6],tp,l;
	printf("enter clain matrix");
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++)
			scanf_s("%d",c[i][j]);
	printf("enter allocation matrix");
	for(i=1;i<=4;i++)
		for(j=1;j<=5;j++)
			scanf_s("%d",&p[i][j]);
	printf("enter resource matrix");
	for(i=1;i<=5;i++)
		scanf_s("%d",&r[i]);
	for(i=1;i<=5;i++){
		scanf_s("%d",&p[i]);
		temp[i]=a[i];
	}
	for(i=1;i<=4;i++){
		sum=0;
			for(j=1;j<=5;j++){
				sum=sum+p[i][j];
			}
			if(sum==0){
				m[k]=i;
				k++;
			}
	}
	for(i=1;i<=4;i++){
		for(l=1;l<k;l++){
			if(
