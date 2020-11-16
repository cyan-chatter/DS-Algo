#include<iostream>
using namespace std;

searchIn(int a[50],int s,int e,int key)
{
	if(s>e)
	return -1;
	
	int mid;
	mid=(s+e)/2;
	
	if(a[mid]==key)
	return mid;
	
	if(a[mid]>=a[s])
	{
		if(key<a[mid] && key>=a[s])
		{
			return searchIn(a,s,mid-1,key);
		}
		else return searchIn(a,mid+1,e,key);
		
	}
	
	if(key>a[mid] && key<=a[e])
	{
		return searchIn(a,mid+1,e,key);
	}
	else return searchIn(a,s,mid-1,key);
	
}


int main()
{
	int a[50]={10,11,17,21,1,4,6,7,9},n=9,key,found=-1;
	cin>>key;
	cout<<endl;
	found = searchIn(a,0,n-1,key);
	if(found!=-1)
	cout<<"Found at index : "<<found<<endl;
	else cout<<"Element Not Found\n";
	return 0;
}
