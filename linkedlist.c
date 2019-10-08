#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node * link;
};struct node* head=NULL;

void delete(int item)
{struct node *ptr,*delnode;
ptr=head;
while(ptr->data!=item)
	
	{ptr=ptr->link;}				
delnode=ptr->link;
ptr->link=delnode->link;
free(delnode);}
void display()
{struct node *ptr;
ptr=head;
while(ptr->link!=NULL)
{printf("%d",ptr->data);
ptr=ptr->link;}
printf("%d",ptr->data);}

void insert(int item)
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the value");
scanf("%d",&temp->data);
ptr=head;
if (head==NULL)
	{
        head=temp;
	head->link=NULL;
	}
else{
	while(ptr->data!=item)
	{
		
			{ptr=ptr->link;}
	}temp->link=ptr->link;
			ptr->link=temp;}
}
int main()
{
struct node* head;
int item,n,m;
head=NULL;
while(1){
printf("enter 1 to insert 2 for delete 3 for display");
scanf("%d",&n);
switch(n)
{ case(1):
	
	{
	printf("enter the data after which to insert");
	scanf("%d",&item);
	insert(item);
	
	 break;}
 case (2):
	{printf("enter the data after which to delete");
	scanf("%d",&item);
	delete(item);
	break;}
case(3):
	{
        display();
	break;}
}
printf("enter 1 to continue");
	scanf("%d",&m);
	if (m!=1)
	 break;}
return 0;}














		
