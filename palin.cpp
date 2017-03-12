// palindrome.cpp : Defines the entry point for the console application.
//
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
	int num,i=0;
	head=(node *)malloc(sizeof(node));
	head=0;
	for(i=0;i<9;i++){
		scanf("%d",&num);
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
	}
	p=head;
	while(p->link!=0){
		printf("%d",p->n);
		p++;
	}
	return 0;
}

