//Input a number and get all prime numbers till that number- Highly Optimized Sieve of Eratosthenes
#include<iostream>
using namespace std;

void primeSieve(int p[],int n)
{
	
	p[0]=0;
	p[1]=0;
	p[2]=1;
	for(int i=3;i<=n;i=i+2)
	{
		p[i]=1;
	}
	for(int i=3;i<=n;i=i+2)
	{
		if(p[i])
		{
			for(int j= i*i;j<=n;j=j+(2*i))
			{
				p[j]=0;
			}
		}
	}
	cout<<endl;
	
}


int main()
{
	int N;
	int p[100000]={ };
	cin>>N;
	primeSieve(p,N);
	for(int i=0;i<=N;i++)
	{
		if(p[i])
		cout<<" "<<i<<" ";
	}
	return 0;
}

