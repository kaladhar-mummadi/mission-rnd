#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
char ** s;
char **r;
char **r2;
//int c[10]={0};
int n,i=0,j=0,k=0,y=0;
int z=0;
scanf("%d",&n);
s=(char**)malloc(sizeof(n)+1);
r=(char **)malloc(sizeof((n)+1));
r2=(char **)malloc(sizeof((n)+1));
while(i<n)
{
	s[i]=(char *)malloc(sizeof(100));
	fflush(stdin);
	gets(s[i]);
	i++;
}
s[i]=0;
i=0,k=0;
j=0;

/*while(s[i][j]!=0){
	r[j]=(char *)malloc(sizeof(n));
while(s[i+1]!=0){
	if(s[i][j]==s[i+1][j] && r[k-1]!=s[i+1][j] && k<n-1){
		r[k]=s[i][j];
		k++;
	}
	else if(r2[y]!=r[k-1]) {
		r2[y]=s[i+1][j];
		y++;
	}
		i++;
}
i=0;
j++;
}

r[k]=0;
r2[y]=0;
i=0;
while(i<n-1){
printf("%c \n",r2);
i++;
}*/
while(s[i][j]!=0){
	r[j]=(char *)malloc(sizeof(n));
	while(s[i+1]!=0){
		if(s[i][j]!=r[j][k-1]){
		r[j][k]=s[i][j];
		k++;
//		c[j]++;
		}
		i++;
	}
	if(s[i][j]!=r[j][k-1]){
		r[j][k]=s[i][j];
		k++;
//		c[j]++;
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
r2=0;
while(r[i]!=0){
//	if(c[i]<c[i+1])
		r2[0]=r[i];
	}
	r2[1]=0;
	if(r2[0]==0)printf("%s",r[1]);
	else printf("%s",r2[0]);
return 0;
}

