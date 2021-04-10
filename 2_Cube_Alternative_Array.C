/* Program to find the cubes of alternative elements from given Array.	*/
#include<stdio.h>

int main()
{
	int a[100],size,i,sum1=0,sum2=0;
	printf("\n Enter Size: ");
	scanf("%d",&size);
	printf("\n Enter Array Elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		if(i%2==0)
			sum1+=(a[i]*a[i]*a[i]);
		else
			sum2+=(a[i]*a[i]*a[i]);
	}
	printf("\n Sum of even index elements = %d ",sum1);
	printf("\n Sum of odd  index elements = %d ",sum2);
	return 0;
}
