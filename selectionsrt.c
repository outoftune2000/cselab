#include<stdio.h>
void main()
{
	int a[10], low, n, i, j, k, temp;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	low=a[i];
	for(j=i;j<n;j++){
	if(a[j]<low){
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;}}
	}
	for(i=0;i<n;i++){
	printf("%d",a[i]);
	}
}
