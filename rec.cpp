#include<stdio.h>
struct ll{
  int num;
  struct node *link;
};
typedef struct ll node;
node **rev(node **);
void main(){
node *temp,*head,*p;
int i=0;
head=(node *)malloc(sizeof(node));
temp=(node *)malloc(sizeof(node));
temp->num=-1;
temp->link=0;
head=temp;
p=head;
for(i=0;i<3;i++){
temp=(node *)malloc(sizeof(node));
temp->num=i;
p->link=temp;
p=p->link;
}
p->link=0;
rev(&head);
p=head;
while(p->link!=0){
	printf(" \n %d",p->num);
	p=p->link;
}
printf("%d",p->num);
}
node **rev(node **r){
	node p=*r;
	if((*r)->link!=0){
	return(rev(r));
}
else{
return  ;
}
}
