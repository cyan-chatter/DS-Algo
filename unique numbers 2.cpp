#include<iostream>
using namespace std;

void uniqueNumbers2(int a[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=(res^a[i]);
	}
	int setbit=0,temp=res;
	while(temp>0)
	{
		if(temp&1)
		break;
		++setbit;
		temp=(temp>>1);
	}
	
	int firstNo=0, secondNo=0, mask=(1<<setbit);
	for(int i=0;i<n;i++)
	{
		if((mask&a[i])!=0)
		{
			firstNo=(firstNo^a[i]);
		}
	}
	secondNo=(res^firstNo);
	
	cout<<"\n"<<firstNo<<"\n"<<secondNo<<"\n";
	
}

int main()
{
	int a[50],n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	uniqueNumbers2(a,n);
	
	return 0;
}
