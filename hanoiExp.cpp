#include<iostream>
#include<stdlib.h>
using namespace std;

long int counter=0;

struct Stack
{
 int size;
 int top;
 int *S;
};
void create(struct Stack *st, int size)
{
 st->size = size;
 st->top=-1;
 st->S=(int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack *st)
{
 int i;
 if(st->top == -1){
 	printf("\nStack Empty\n");
 }
 for(i=st->top;i>=0;i--)
 printf("%d\n",st->S[i]);
 printf("\n");

}
void push(struct Stack *st,int x)
{
 if(st->top==st->size-1)
 printf("Stack overflow\n");
 else
 {
 st->top++;
 st->S[st->top]=x;
 }
 
}
int pop(struct Stack *st)
{
 int x=-1;
 if(st->top!=-1)
 {
 	x=st->S[st->top--];
 }
 return x;
}


void theHand(struct Stack* from, struct Stack* to, struct Stack* aux){
	int x;
	counter++;
	x = pop(from);
	push(to,x);
}


void toHanoi(int n, struct Stack* src, struct Stack* dest, struct Stack* helper){
	//base case
	if(n==0){
		return;
	}
		toHanoi(n-1,src,helper,dest);
		
		theHand(src,dest,helper);
			
		toHanoi(n-1,helper,dest,src);
}



int main(){
	int n;
	cin>>n;
	struct Stack src, dest, helper;
	create(&src,n+1);
	create(&dest,n+1);
	create(&helper,n+1);
	for(int i=n; i>0;i--){
		push(&src,i);
	}
	toHanoi(n,&src,&dest,&helper);
	cout<<"\n\nDest:\n";
	Display(&dest);
	cout<<"\nMinimum moves : "<<counter;
	return 0;
}
