#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i;
void push(void)
{
	if(top>=n-1)
		printf("STACK OVERFLOW");
	else
	{
		printf("Enter the Number to be Pushed : \t");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}		
}
void pop(void)
{
	if(top<=-1)
		printf("STACK UNDERFLOW");
	else
		top--;
}
void display(void)
{
	if(top>0)
	{
		printf("STACK ELEMENTS : \t");
		for(i=top;i>=0;i--)
			printf("%d",stack[i]);
	printf("\nEnter Next Choice");
	printf("\t1. PUSH \n\t2. POP \n\t3. DISPLAY\n \t4.  EXIT\n");
	}
	else
		printf("NOTHING TO DISPLAY\nEMPTY STACK");
}
void main()
{
	top=-1;
	printf("Enter the size of Stack : \t");
	scanf("%d",&n);
	printf("OPERATIONS USING STACK : \n");
	printf("\t1. PUSH \n\t2. POP \n\t3. DISPLAY\n \t4.EXIT\n");
	do
	{
		printf("Enter the choice : \t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push();
					break;
			case 2:	pop();
					break;
			case 3:	display();
					break;
			case 4:	printf("OPERATION TERMINATED\n");
					exit(0);
			default:	printf("Invalid Input");
					break;
		}
	}
	while(choice!=4);
		
}

		
				
		

