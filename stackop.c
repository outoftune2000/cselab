#include<stdio.h>
int main()
{
int OP,num , i, top=-1, a[5], element, choice=1;
printf("Enter size of stack");
scanf("%d",&num);
while(choice!=0)
	{
	printf("Enter 1 for entering and 2 for deleting an elemnet \t");
	scanf("%d",&OP);
	switch(OP)
	{
	case 1 : if (top>= num-1)
			{
			print ("stack overflow");
			}
		else
			{
			print("Enter the element for adding it");
			scanf("%d",&element);
			top+=1;
			a[top]=element;
			}
		printf("ENter the element for adding it");
		for(i>=0;i<=top;i++)
			{
			printf("%d\t",a[i]);}
		printf("\n");break;
	case 2 : if(top<0)
		{printf("stack underflow");}
		else
		{top = top-1;
		printf("element is deleted");
		break;
	default :
		printf("INVALID CHOICE");}


}printf("Enter 1 to continue and 0 for exiting");
scanf("%d",&choice);
}
}
