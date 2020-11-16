#include<iostream>
using namespace std;
int main()
{
	int n=5,a[100]={ }, cursum=0, maxsum=0;
	cin>>n; cout<<"\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		cursum=cursum+a[i];
		if(cursum<0)
		cursum=0; 
		if(cursum>maxsum)
		maxsum=cursum;
	}
	cout<<"\n"<<maxsum;
	return 0;
}
