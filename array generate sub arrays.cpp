#include<iostream>
using namespace std;
int main()
{
	int n=5,A[100]={ }, cursum, maxsum=0;
	cin>>n; cout<<"\n";
	for(int i=0;i<n;i++)
	cin>>A[i];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			cursum=0;
			for(int k=i;k<j;k++)
			{
				cout<<"\t"<<A[k];
				cursum=cursum+A[k];
			}
			cout<<"\n";
			if(cursum>maxsum)
			maxsum=cursum;
		}
	}
	cout<<"\n"<<maxsum;
	return 0;
}
