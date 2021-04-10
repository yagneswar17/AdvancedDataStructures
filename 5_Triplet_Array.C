/* Program to find triplet from given Array.	*/
#include<stdio.h>

int main()
{
	int arr[100],sum,i,j,k,size,flag;
	printf("\n Enter Array Size : ");
	scanf("%d",&size);
	printf("\n Enter Array Elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter Sum : ");
	scanf("%d",&sum);
	flag=0;
	for(i=0;i<size-2;i++)
	{
		for(j=i+1;j<size-1;j++)
		{
			for(k=j+1;k<size;k++)
			{
				if(sum==(arr[i]+arr[j]+arr[k]))
				{
					flag=1;
					printf("\n %d %d %d",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	if(flag==0)
		printf("\n No Triplet!!");
	return 0;
}
