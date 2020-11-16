#include<iostream>
using namespace std;


int maxPage(int a[100],int s,int e,int m,int n)
{	
	int i=0,j=1,sum,mid=(s+e)/2;
	static int ans=0;
	
	if(s==e)
	return ans;
	
	while(j<=m)
	{
		sum=0;
		while(sum<=mid)
	  {
		 sum+=a[i];
		 i++;
	  }
	  --i;
	  ++j;  
	}
	
	if(i==n-1)
	{
		ans=mid;
		return maxPage(a,s,mid,m,n);
	}
	else 
		return maxPage(a,mid,e,m,n); 
	
}

int main()
{
	int n,p[100],m,total=0,answer=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		total+=p[i];
	}
	cin>>m;
	answer = maxPage(p,0,total,m,n);
	cout<<endl<<answer<<endl;
	return 0;
}
