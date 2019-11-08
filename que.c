#include<stdio.h>
#include<stdlib.h>


int  queue[100], front=-1, rear=1,i=0;
int pin;
int insert(); int delete(); int display();

main()
	{
	
	while(pin!=4)
		{
		printf("Enter the choice");
		printf("1.Insertion 2.deletion 3.display 4. exit");
		scanf("%d",&pin);
		switch(pin)
			{
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display();break;
			case 4: exit(0);
			default: printf("invalid");
	  		}

		 }
		
	}

insert()
	{

	if (rear==99)
		{printf("Overflow");
		}
	else if	(front==-1)
		{
		front++;
		rear++;	
		printf("Enter the element");
		scanf('%d',&queue[rear]);
		}

	else 
		{
		rear++;
		printf("Enter the element");
		scanf('%d',&queue[rear]);
		}

	}

delete()
	{
	
	if (rear==-1)
		{printf("the queue is full");
		}
	else if (front==rear)
		{
		front=-1;
		rear=-1;
		}
	else
		{		
		printf("Element deleted");		
		front++;
		}

	}


display()
	{

	if(front=-1)
		{printf("the queue is empty");
		}	
	else
		{
		for(i=0;i<100;i++)
		printf("%d",queue[i]);
		}
	
	
	}


