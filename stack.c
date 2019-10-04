#include <stdio.h>
int a[10],n,top,ele,i;
void push()
{
	if (top==9){
		printf("Stack Overflow\n");
	}
	else{
		printf("Enter the element to be pushed");
		scanf("%d",&ele);
		printf("\n");
		top++;	
		a[top]=ele;
	}
}
void pop()
{
	if (top==-1){
		printf("Stack Underflow\n");
	}
	else{
		printf("Element to be popped: %d\n",a[top]);
		top--;
	}
}
void PrintStack()
{
	int t;
	t=top;
	if (top==-1){
		printf("Stack is empty\n");
	}
	else{
	printf("The current stack is :");
	for(i=0;i<=top;i++){
		printf("Element %d = %d\t",i+1,a[i]);
	}printf("\n");
}}	
void main(){
	top=-1;
	int c;
	char ch='y';
	while(ch=='y'){
	printf("Enter your choice:\n 1. PRINT STACK\n 2.PUSH ELEMENT \n 3.POP ELEMENT\n 4. EXIT \n");
	scanf("%d",&c);
	switch(c)
		{
			case 1: PrintStack();
				break;
			case 2:push();
				break;
			case 3:pop();
				break;
			case 4: ch='n';
				break;
			default: printf("INVALID CHOICE\n");
		}
	}
}
