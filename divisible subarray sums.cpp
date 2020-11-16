#include<iostream>
using namespace std;

int main()
{
int t;
long long int a[100005],freq[100005];
cin>>t;
while(t--)
{
	int n,N;
	cin>>n;
	cin>>N;
	long long int sum=0;
	for(int i=0;i<n;i++)
	freq[i]=0;
	freq[0]=1;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		sum=sum%N;
		sum=(sum+N)%N;
		freq[sum]++;
	}
	long long int ways=0,no=0;
	for(int i=0;i<N;i++)
	{
		no=freq[i];
		ways+=(no*(no-1))/2;
	}
	cout<<"\n"<<ways<<"\n";
}

	return 0;
}
