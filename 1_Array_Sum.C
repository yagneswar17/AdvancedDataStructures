/* Program to find sum of a given Array.	*/
#include<stdio.h>

int main()
{
	int a[100],size,i,sum=0;
	printf("\n Enter Size: ");
	scanf("%d",&size);
	printf("\n Enter Array Elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("\n Sum = %d ",sum);
	return 0;
}
