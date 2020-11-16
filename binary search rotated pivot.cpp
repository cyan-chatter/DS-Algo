#include<iostream>
using namespace std;

int findPivot(int a[],int s,int e)
{
	if(s==e)
	return s;
	
	int mid = (s+e)/2;
	
	if(a[mid]<a[mid-1]) 
	return mid-1;
	
	if(a[mid]>a[mid+1])
	return mid;
	
	if(a[mid]>=a[s])
	return findPivot(a,mid+1,e);
	
	if(a[mid]<a[s])
	return findPivot(a,s,mid-1);
}


int main()
{
	int a[50]={33,37,45,56,68,79,110,112,114,116,118,19,25,27,29},n=15,pivot;
	pivot=findPivot(a,0,n-1);
	cout<<"\nPivot (Highest) element is present at index : "<<pivot<<endl;
	return 0;
}
