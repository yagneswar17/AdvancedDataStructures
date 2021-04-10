/* Program to reverse an array.	*/
#include<stdio.h>

int main()
{
	int a[100],size,i,j,temp;
	printf("\n Enter Size: ");
	scanf("%d",&size);
	printf("\n Enter Array Elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=size-1,j=0;i>j;i--,j++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\n Reversed Array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
