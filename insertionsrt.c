#include<stdio.h>
void main()
{
	int a[10], min, n, i, j, temp;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
	min=i;
	while(min>0 && a[min-1]>a[min])
	{
		temp=a[min-1];
		a[min-1]=a[min];
		a[min]=temp;
		min--;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
}
