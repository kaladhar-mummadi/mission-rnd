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
	node *p,*head,*temp,*q,*r;
	int num,i=0,j=0;
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
	i=i/2;
	while(j<i){
		p=p->link;
		j++;
	}
	q=p->link;
	r=q->link;
	while(q->link!=0){
		q->link=p;
		p=q;
		q=r;
		r=r->link;
	}
	q->link=p;
	p=head;
	j=0;
	while(!(p==q) && !(p->link==q)){
		if(p->n==q->n){
			p=p->link;q=q->link;
			j++;
		}
		else
			break;
	}
	if(p->n==q->n && (j==i || j==i-1) )
		printf("given linkedlist is palindrome\n");
	else
		printf("given linkedlist is not a palindrmoe \n");

	return 0;
}