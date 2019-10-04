#include <stdio.h>
int a[10],n,first,top,ele,i;
void queue()
{
	if (top==9){
		printf("Queue Overflow\n");
	}
	else{
		printf("Enter the element to be pushed");
		scanf("%d",&ele);
		printf("\n");
		top++;	
		a[top]=ele;
	}
}
void dequeue()
{
	if (first==top){
		printf("Queue Underflow\n");
	}
	else{
		printf("Element to be popped: %d\n",a[top]);
		first++;
	}
}
void PrintQ()
{
	if (top==first){
		printf("queue is empty\n");
	}
	else{
	printf("The current queue is :");
	for(i=first;i<=top;i++){
		printf("Element %d = %d\t",i+1,a[i]);
	}printf("\n");
}}	
void main(){
	top=-1,first=-1;
	int c;
	char ch='y';
	while(ch=='y'){
	printf("Enter your choice:\n 1. PRINT QUEUE\n 2.QUEUE ELEMENT \n 3.DEQUEUE ELEMENT\n 4. EXIT \n");
	scanf("%d",&c);
	switch(c)
		{
			case 1: PrintQ();
				break;
			case 2:queue();
				break;
			case 3:dequeue();
				break;
			case 4: ch='n';
				break;
			default: printf("INVALID CHOICE\n");
		}
	}
}
