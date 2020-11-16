#include<iostream>
using namespace std;

bool isSorted(int* a,int n)
{
	if(n==1)
	return true;
	if(a[0]<a[1] && isSorted(a+1,n-1))
	return true;
	
	return false;
}

int main()
{
	int a[]={1,2,3,5,4,6};
	int n=sizeof(a)/sizeof(int);
	isSorted(a,n)?cout<<"\nTRUE\n":cout<<"\nFALSE\n";
	return 0;
}
