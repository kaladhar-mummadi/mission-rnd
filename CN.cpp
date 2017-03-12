// CN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
void bitstuffing();
void charstuff();
void cc();
int _tmain(int argc, _TCHAR* argv[])
{
	
	return 0;
}
void sp(){
	int path[6][6],a[6][6],i=0,j=0,k=0;
	int st=1,ed=5,stp,edp,t[10],index,min;
	printf("enter matrix");
	for(i;i<6;i++)
		for(j;j<6;j++)
			scanf_s("%d",&a[i][j]);
	printf("enter path matrix");
	for(i=1;i<5;i++)
		for(j=1;j<6;j++)
			scanf_s("%d",&path[i][j]);
	for(i=1;i<5;i++){
		t[i]=0;
		stp=st;
		for(j=1;j<=5;j++){
			edp=path[i][j];
			t[i]=t[i]+a[stp][edp];
			if(edp==ed) break;
			else
				stp=edp;
		}
	}
	min=t[st];
	index=st;
	for(i=1;i<=4;i++){
		if(min>t[i]){
			min=t[i];
			index=i;
		}
	}
	printf("total %d",min);
	for(i=0;i<=5;i++){
		printf("%d",path[index][i]);
		if(path[index][i]==ed)
			break;
	}
}
void crc(){
	int data[20],div[10],rem[10];
	int i=0,j=0,k=0,datalen,divlen;
	char ch;
	printf("enter data");
	while((ch=fgetc(stdin))!='\n'){
		if(ch=='1')
			data[i]=1;
		else
			data[i]=0;
		i++;
	}
	datalen=i;
	i=0;
	while((ch=fgetc(stdin))!='\n'){
		if(ch=='1')
			div[i]=1;
		else
			div[i]=0;
		i++;
	}
	divlen=i;
	for(i=datalen;i<datalen+divlen-1;i++)
		data[i]=0;
	datalen=datalen+divlen-1;
	while(k<divlen){
		rem[k]=data[k];
		k++;
	}
	i=0;
	k=divlen-1;
	while(k<datalen){
		if(rem[0]==1){
			while(i<divlen){
			rem[i]=rem[i]^div[i];
			i++;
			}
		}
		else{
			if(k==datalen-1) break;
			for(j=1;j<divlen-1;j++){
				rem[j]=rem[j+1];
				printf("%d",rem[j]);
			}
			k++;
			rem[i]=data[k];
			printf("%d",rem[i]);
		}
	}
	j=1;
	for(i=datalen-divlen+1;i<datalen;i++){
		data[i]=rem[j++];
	}
}
void cc(){
	char c[5][10]={0},s[51]={0};
	int i=0,k=0,n,l=0;
	printf("enter number of messages");
	scanf_s("%d",&n);
	for(i;i<n;i++){
		fflush(stdin);
		scanf_s("%s",c[i]);
		l=strlen(c[i]);
		s[k]=l+1+'0';
		k++;
		strcat_s(s,c[i]);
		k=k+l;
	}
	printf("%s",s);
}



void charstuff(){
	char c[100],d[100];
	int i=0,j=0;
	printf("enter string");
	scanf_s("%s",c);
	while(c[i]!=0){
		if(c[i]=='a' || c[i]=='k'){
			d[j]='b';j++;
		}
		d[j]=c[i];
		j++;i++;
	}
	d[j]=0;
	printf("%s",d);
}

void bitstuffing(){
	int a[100],i=0,count=0,j=0,n;
	printf("enter the size of bit array\n");
	scanf_s("%d",&n);
	while(i<n){
		scanf_s("%d",&a[i]);
		i++;
	}
	i=0;
	while(i<n){
		if(a[i]==1){
			count++;
			if(count==5){
				j=n;
				count=0;
				while(j>i+1){
					a[j]=a[j-1];
					j--;
				}
				a[i+1]=0;
				n++;
			}
		}
		else count=0;
		i++;
	}
	i=0;
	while(i<n){
		printf("%d",a[i]);
		i++;
	}
}