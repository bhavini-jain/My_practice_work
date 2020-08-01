#include<stdio.h>
#include<conio.h>
void main()
{
	int n, top1,top2,ch=1,a,i,arr[100];
	printf("enter size of array\n");
	scanf("%d",&n);
	top1=-1;
	top2=n;
	while(ch!=0)
	{
		printf("what do you want to do?\n");
		printf("1. Push in stack 1\n");
		printf("2. Push in stack 2\n");
		printf("1. Pop in stack 1\n");
		printf("2. Pop in stack 2\n");
		printf("1. display stack 1\n");
		printf("2. display stack 1\n");
		
	}
	switch(ch)
	{
		case 1: 
		{
		printf("enter element");
		scanf("%d",&a);
		if(top1!=(top2-1)) 
		   arr[++top1]=a;
		   else
		   printf("Overflow\n");       
			break;
		}
		
		case 2: 
		{
				printf("enter element");
		scanf("%d",&a);
		if(top2!=(top1+1)) 
		   arr[--top2]=a;
		   else
		   printf("Overflow\n"); 
			break;
		}
		case 3:
		{
			if(top1==-1)
			printf("stack is empty\n");
			else
			{
				a=arr[top--];
				printf("%d\n",a);
			}
			break;
		}
		case 4:
		{
			if(top2==n)
			printf("stack is empty\n");
			else
			{
				a=arr[top2++];
				printf("%d\n",a);
			}
			break;
		}
		case 5:
			{if(top==-1)
			printf("stack is empty\n");
			else
			{
				printf
			}
			}
	}
}
