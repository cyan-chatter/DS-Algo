#include<iostream>
using namespace std;

float squareRoot(int n, int p)
{
	int s=0,e=n,ans,mid;
	
	while(s<=e)
	{
		mid= (s+e)/2;
		
		if(mid*mid==n)
		{
			ans=mid;
			break;	
		}
		
		if(mid*mid<n)
		{
			ans=mid;
			s=mid+1;
		}
		else e=mid-1;
	}
	float inc=0.1;
	float res=float(ans);
	
	for(int i=0;i<p;i++)
	{
		while(res*res<=n)
		{
			res+=inc;
		}
		res-=inc;
		inc=inc/10;
	}
	return res;
}


int main()
{
	int no,precision;
	cin>>no;
	cin>>precision;
	cout<<"\n"<<squareRoot(no,precision)<<"\n";
	return 0;
}
