#include<stdio.h>
int stack[20],n=5,top;

int isempty()
	{
	if(top==-1)
		{
		return(1);
		}
	else
		{
		return(0);
		}
	}
int isfull()
	{
	if(top==(n-1))
		{
		return(1);
		}
	else
		{
		return(0);
		}
	}
void push(int item)
	{
	
	if(isfull())
		{
		printf("stack is full");
		}
	else	
		{
		stack[top]=item;
		top ++;
		}
		
	}
void pop()
	{
	if(isempty())
		{
		printf("stack is empty");
		}
	else
		{
		top--;
		}
	}

int main()
{top=-1;
char ch='y';
int option;
while(ch=='y'){
	int option,item;
	printf("\nchoose an option:\n");
	printf("1.push 2.pop 3.display 9.exit\nenter the option:::");
	scanf("%d",&option);
	switch(option)
	{
	
	case 1:
		//push
		printf("enter the item to push: ");
		scanf("%d",&item);
		push(item);
		break;
	case 2:
		//pop
		pop();
		printf("pop is working");
		break;
	case 9:ch='n';
		break;
		
	default:printf("INVALID");
	
	}
	}

}

