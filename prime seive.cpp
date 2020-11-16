#include <iostream>
#include<malloc.h>
using namespace std;

struct Array
{
 int *A;
 int size;
 int length;
};

void Append(struct Array *a,int x)
{
 if(a->length<a->size)
 a->A[a->length++]=x;
}

void InitArray(struct Array *a, int len)
{
 a->size = len;
 a->A=(int *)malloc(a->size*sizeof(int));
}

void Display(struct Array *a)
{
	int i;
	if(a->length<=0){
 	cout<<"\nnil\n";	
	 return; 
 }
 
 for(i=0;i<a->length;i++)
 cout<<a->A[i]<<" ";
}

int findMax(struct Array *arr)
{
	int grt;
	grt = arr->A[arr->length -1];
	return grt;
}

void prime_seive(int *arr, int len, struct Array *sorted){
   for (int i = 2; i < len; i++) {
      for (int j = i * i; j < len; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 1; i < len; i++) {
      if (arr[i - 1] == 0)
         Append(sorted, i);
   }
}

int main(){
	int len;
	cin>>len;
	int arr[len + 1] = {0};
	struct Array sorted;
  InitArray(&sorted,len);
	prime_seive(arr,len,&sorted);
	Display(&sorted);
		
	return 0;
} 
