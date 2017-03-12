#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
char ** s;
char **r;
char **r2;
int c[10]={0};
int n,i=0,j=0,k=0,y=0;
int z=0;
int ru=0;
scanf("%d",&n);
s=(char**)malloc(sizeof(n)+1);
r=(char **)malloc(sizeof((n)+1));
r2=(char **)malloc(sizeof((n)+1));
while(i<n)
{
	s[i]=(char *)malloc(sizeof(n)+1);
	fflush(stdin);
	gets(s[i]);
	i++;
}
s[i]=0;
i=0,k=0;
j=0;
while(s[i][j]!=0){
	r[j]=(char *)malloc(sizeof(n));
	while(s[i+1]!=0){
		if(s[i][j]!=r[j][k-1]){
		r[j][k]=s[i][j];
		k++;
		c[j]++;
		}
		i++;
	}
	if(s[i][j]!=r[j][k-1]){
		r[j][k]=s[i][j];
		k++;
		c[j]++;
		}
	r[j][k]=0;
	j++;
	i=0;
	k=0;
}
r[j]=0;
i=0;
j=0;
r2[0]=(char *)malloc(sizeof(100));
r2[1]=(char *)malloc(sizeof(100));
k=0;
while(r[i]!=0){
	if(c[i]<c[i+1]){
		while(r[i+1][k]!=0){
		r2[0][k]=r[i+1][k];
		k++;
		}
		ru=1;
	}
i++;
}
r2[0][k]=0;
printf("%d \n",n-1);
	if(ru){
		i=0;
		while(r2[0][i]!=0){
		printf("%c \n",r2[0][i]);
		i++;
		}
}
	else{
		i=0;
		while(r[0][i]!=0){
		printf("%c \n",r[0][i]);
		i++;
		}
	}
return 0;
}

