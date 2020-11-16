#include<iostream>
using namespace std;

int main()
{
	int h[50]={ },n,max,lmax[50]={ },rmax[50]={ },wl[50]={ },hw;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	
	max=h[0];
	for(int i=0;i<n;i++)
	{
		if(h[i]>max)
			max=h[i];
		lmax[i]=max;
	}
	
	max=h[n-1];
	for(int i=n-1;i>=0;i--)
	{
		if(h[i]>max)
			max=h[i];
		rmax[i]=max;
	}
	
	hw=0;
	for(int i=0;i<n;i++)
	{
		wl[i]=min(lmax[i],rmax[i])-h[i];
		hw = hw + wl[i]; 
	}
	
	cout<<endl<<hw<<endl;
	
	return 0;
}
