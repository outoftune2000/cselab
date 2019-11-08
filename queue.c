#include<stdio.h>
#include<stdlib.h>
int queue[100],choice,n,x,i;
int front=0,rear=0;
void enqueue(void)
{
	if(rear==-1)
		printf("queue is empty");
	else
	{
		printf("Enter the Number to be Pushed : \t");
		scanf("%d",&x);		
		queue[rear]=x;
		rear=rear+1;
		if(rear==n)
		{
			printf("The queue is filled.\n No more entries can be added!!!");
		}
	}		
}
void dequeue(void)
{
	if(front==-1)
		printf("Queue is underflow!!!");
	else
		front++;
}
void display(void)
{
	if(rear==-1)
	{
		printf("queue is empty");
	}
	else
	{	
		for(i=front;i<rear;i++)
			printf("%d",queue[i]);
	}
	printf("\nEnter Next Choice\n");
	printf("\t1. ENQUEUE\n\t2. DEQUEUE \n\t3. DISPLAY\n \t4.EXIT\n");
}
void main()
{
	printf("Enter the size of queue : \t");
	scanf("%d",&n);
	printf("OPERATIONS USING queue : \n");
	printf("\t1. ENQUEUE\n\t2. DEQUEUE \n\t3. DISPLAY\n \t4.EXIT\n");
	do
	{
		printf("Enter the choice : \t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	enqueue();
					break;
			case 2:	dequeue();
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

		
				
		

