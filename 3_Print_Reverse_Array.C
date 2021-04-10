/* Program to print the array in reverse order.	*/
#include<stdio.h>

int main()
{
	int a[100],size,i;
	printf("\n Enter Size: ");
	scanf("%d",&size);
	printf("\n Enter Array Elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Reversed Array is : ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
