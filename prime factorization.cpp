// C++ program to print all prime factors 
#include <bits/stdc++.h> 
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

void InitArray(struct Array *a, int n)
{
 a->size = n;
 a->A=(int *)malloc(a->size*sizeof(int));
}

int findMax(struct Array *arr)
{
	int grt;
	grt = arr->A[arr->length -1];
	return grt;
} 

void Display(struct Array *a)
{
	int i;
	if(a->length<=0){
 	 cout<<"nil";	
	 return; 
 }
 for(i=0;i<a->length;i++)
 	cout<<a->A[i]<<" ";
}


void primeFactors(long int n, int arr[], struct Array *sorted) 
{ 
	while (n % 2 == 0) 
	{ 
		n = n/2;
		if(sorted->A[sorted->length -1] != 2){
			Append(sorted, 2);
		} 
	} 

	for (long int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		// While i divides n, print i and divide n 
		while (n % i == 0) 
		{ 
			if(sorted->A[sorted->length -1] != i){
			Append(sorted, i);
			}	 
			n = n/i; 
		} 
	} 

	if (n > 2){
		if(sorted->A[sorted->length -1] != n){
			Append(sorted, n);
			}
	} 
		 
} 

int main() 
{ 
	long int n;
	struct Array sorted;
	int arr[1000];
	cin>>n; 
	InitArray(&sorted,n);
	primeFactors(n,arr,&sorted);
	Display(&sorted); 
	return 0; 
} 

