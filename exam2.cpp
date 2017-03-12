#include <math.h>
#include<stdio.h>
int main()
{
 int n, x,i=1;
 int j=1,k,sol=0;
 scanf("%d",&n);
 while(i<=n){
	 j=i+1;
	 k=i;
	 i++;
	 sol++;
 }
 printf("%d",sol);
 return 0;
}
