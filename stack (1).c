#include<stdio.h>
int stack[100],choice,n,top,x,i;

int main()
	{
	top=-1;
	printf("Enter the size of the stack");
	scanf("%d",&n);
	printf("1.Push 2.Pop 3.display 4.display");
	do
		{
		printf("Enter the choice");
		scanf("%d",&choice)
		switch(choice);
			{
			case 1: push();	break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: exit(0); 
			default printf("invalid choice"); break;
		 			
			}					
		}while(choice!=0);
	}
