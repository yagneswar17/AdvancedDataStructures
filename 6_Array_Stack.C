/* Program for array implementation of stack.	*/

#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int top;
	int size;
	int* array;
};

struct Stack* createStack(int size)
{
	struct Stack* s=(struct Stack*)malloc(sizeof(struct Stack));
	s->size= size;
	s->top=-1;
	s->array=(int*)malloc(s->size*sizeof(int));
	return s;
}

int isFull(struct Stack* s)
{
	if(s->top==s->size-1)
		return 1;
	else
		return 0;
}

int isEmpty(struct Stack* s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}

void push(struct Stack* s, int data)
{
	if (isFull(s)==1)
	{
		printf("\n OverFlow!!!\n");
	}
	else
	{
		++s->top;
		s->array[s->top]=data;
		printf(" %d pushed to stack\n", data);
	}
}

void pop(struct Stack* s)
{
	if (isEmpty(s)==1)
	{
		printf("\n UnderFlow!!!\n");
	}
	else
	{
		printf(" %d popped from stack\n", s->array[s->top]);
		s->top--;
	}
}

void peek(struct Stack* s)
{
	if (isEmpty(s)==1)
	{
		printf("\n UnderFlow!!!\n");
	}
	else
	{
		 printf("\n\n PEEK = %d \n",s->array[s->top]);
	}
}
void display(struct Stack* s)
{
	int temp;
	temp=s->top;
	while(temp>=0)
	{
		printf("%d ",s->array[temp]);
		temp--;
	}
	printf("\n");
}

int main()
{
	int opt,data;
	struct Stack* s=createStack(100);
	do
	{
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Peek");
		printf("\n 4. Display");
		printf("\n 5. Exit");
		printf("\n Select the operation : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				printf("\n Enter Data : ");
				scanf("%d",&data);
				push(s,data);
				break;
			case 2:
				pop(s);
				break;
			case 3:
				peek(s);
				break;
			case 4:
				printf("\n Stack is : ");
				display(s);
				break;
			case 5:
				break;
			default:
				printf("\n Invalid Choice!!!");
		}
	}while(opt!=5);
	return 0;
}
