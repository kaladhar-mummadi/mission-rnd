#include <stdio.h>
int cal(int,int,int);
int main(){
	int n,i=0,so=0;
	int q,p;
	int d;
	printf("enter the number of types of tasks \n");
	scanf("%d",&n);
	while(i<n){
		printf("enter the %d task \n",i+1);
		scanf("%d %d %d",&q,&d,&p);
		so=so+cal(q,d,p);
		i++;
	}
	printf(" the solution is \n %d",so);
	return 0;
}
int cal(int a,int b,int c){
	int ii,ji,pro=0;
		ji=0;
		ii=0;
		while(ii<a && ji<b){
			pro=pro+c;
			ii++;
			ji++;
		}
return pro;
}