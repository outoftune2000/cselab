#include<stdio.h>

void main()
{
	int a[10],l,temp=0;
	printf("Enter the length");	
	scanf("%d",&l);
	int i =0,j=0;	
	printf("Enter the elements");
	for(i=0;i<l;i++)
		{
		scanf("%d",&a[i]);
		}


	for(i=0;i<l;i++)
		{
		
		for(j=0;j<l;j++)		
			{
			if(a[i]<a[j])
			{	
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;         ;
			}
			
			}
		}
printf("The sorted array is");
for(i=0;i<l;i++)
	printf("%d",a[i]);




}
