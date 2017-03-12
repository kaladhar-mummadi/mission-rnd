// rec2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
struct ll{
	int n;
	struct ll *link;
};
typedef struct ll node;
node * create(node *);
int _tmain(int argc, _TCHAR* argv[])
{
	node *head,*p;
	head=(node *)malloc(sizeof(node));
	head=0;
	create(head);
	p=head;
	while(p->link!=0){
		printf("%d",p->n);
		p=p->link;
	}
	return 0;
}
node * create(node *c){
	node *temp;
	int num,i;
	temp=(node *)malloc(sizeof(node));
	scanf("%d",&num);
	if(num!=0){
		temp->n=num;
		temp->link=0;
		if(c==0)
			c=temp;
		else{
			c->link=temp;
			c=c->link;
			}
		return create(c);
		i=i+1;
	}
	else
	return(c);
	return temp;
}