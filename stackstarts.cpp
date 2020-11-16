#include<stdio.h>
#include<stdlib.h>
int stack[100];
int n; 
int top=-1;
void stackpush()
{
	int val;
	if(top==n-1)
	{
		printf("Stack overflow\n");
		return;
	}
	printf("Enter the value to be inserted in the stack\n");
	scanf("%d",&val);
	top++;
	stack[top]=val;
	printf("%d added\n",stack[top]);	
}

void stackpop()
{
	if(top<=-1)
	{
		printf("The stack is empty\n");
		return;
	}
	printf("%d is getting popped ot of stack\n",stack[top]);
	top--;
}
void display()
{
	if(top>=0)
	{
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	else
		{
			printf("The stack is empty\n");
		}
}

int main()
{
	int ch;
	printf("Enter the number of maximum elements in the stack \n");
	scanf("%d",&n);
	
	do{
		printf("1	:	push\n");
		printf("2	:	pop\n");
		printf("3	:	display\n");
		printf("4	:	exit\n");
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: stackpush(); break;
		case 2: stackpop(); break;
		case 3: display(); break;
		case 4: exit(0);
		}	
		
	}while(1);
return 0;	
}
