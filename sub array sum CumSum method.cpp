#include<iostream>
using namespace std;
int main()
{
	int n=5,a[100]={ }, cumsum[100]={ }, cursum=0, maxsum=0;
	
	cin>>n; cout<<"\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cumsum[0]=a[0];
	cumsum[-1]=0;
	for(int i=1;i<n;i++)
	cumsum[i]= cumsum[i-1]+a[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=j)
			continue;
			cursum=0;
			cursum= cumsum[j]-cumsum[i-1];
			
			cout<<"\n"<<cursum;
			if(cursum>maxsum)
			maxsum=cursum;
		}
		cout<<"\n";
	}
	
	cout<<"\n"<<maxsum;
	return 0;
}
