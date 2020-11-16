#include<iostream>
using namespace std;

int uniqueNo3(int a[], int n)
{
	int count[64]={ },ans=0;
	for(int j=0; j<n; j++)
	{
		int no=a[j];
		for(int i=0; no>0; i++)
		{
			count[i]+=(no&1);
			no=no>>1;
		}
	}
	for(int i=0; i<64; i++)
	{
		count[i]=count[i]%3;
	}
	for(int i=0; i<64; i++)
	{
		ans+=((1<<i)*count[i]);
	}
	return ans;
}


int main()
{
	int a[50],n,unique=-1;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	unique = uniqueNo3(a,n);
	cout<<"\n"<<unique;
	return 0;
}
