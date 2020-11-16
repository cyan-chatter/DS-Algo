#include<iostream> 
using namespace std;
#define ll long long int

bool validConf(ll p[], ll n, ll m, ll limit)
{
	ll students=1;
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		if(sum+p[i]>limit)
		{
			sum=p[i];
			students++;
			if(students>m)
			return false;
		}
		else
		 {
			sum+=p[i];
		 } 
	}
	
	return true;
}


maxPage(ll p[100005], ll n, ll m)
{
	ll total=0;
	ll s=0;
	ll e=0;
	ll ans=0;
	
	for(ll i=0;i<n;i++)
	{
		total+=p[i];
		s=max(s,p[i]);
	}
	e=total;
	
	while(s<=e)
	{
		ll mid = (s+e)/2;
		if(validConf(p,n,m,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else s=mid+1;
	}
	
}


int main()
{
	ll n,p[100005],m,answer=0;
	cin>>n;
	cin>>m;
	for(ll i=0;i<n;i++)
	{
		cin>>p[i];
	}
	answer = maxPage(p,n,m);
	cout<<endl<<answer;
	return 0;
}
