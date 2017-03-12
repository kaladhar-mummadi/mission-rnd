// palin2.cpp : Defines the entry point for the console application.

#include<stdio.h>
#include "stdafx.h"

struct ll{
	int n;
	struct ll *link;
};
typedef struct ll node;
int _tmain(int argc, _TCHAR* argv[])
{
	node *p,*head,*temp;
	int num,i=0,j=0,k=0,a[100],count=0;;
	head=(node *)malloc(sizeof(node));
	head=0;
	printf(" enter 0 to exit \n");
	while(1){
		scanf("%d",&num);
		if(num!=0){
			temp=(node *)malloc(sizeof(node));
			temp->n=num;
			temp->link=0;
			if(head==0){
				head=temp;
				p=head;
			}
			else{
				p->link=temp;
				p=p->link;
			}
			i++;
		}
		
		else
			break;
	}
	p=head;
	j=(i-1)/2;
	while(k<=j){
			a[k]=p->n;
			p=p->link;
			k++;
	}
	if(i%2!=0){
		k=k-2;
		while(p->link!=0 && (a[k]==p->n)){
			k--;
			count++;
			p=p->link;
		}
	}
	else{
		k--;
		while(p->link!=0 && (a[k]==p->n)){
			k--;
			count++;
			p=p->link;
		}

	}
	if(a[k]==p->n && (count==j-1 || count==j))
		printf("it is palin");
	else 
		printf("it is not");
	
	return 0;			
}

