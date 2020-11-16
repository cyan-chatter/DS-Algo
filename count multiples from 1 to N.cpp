#include<iostream>
using namespace std;
int main()
{
	int no,mask,setBits,n,a[100000]={},temp,pos,ans=0;
	
	cin>>no;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=1;i<(1<<n);i++)
	{
		mask=i;
		setBits= __builtin_popcount(mask);
		temp=1;
		pos=0;
		while(mask>0)
		{
			int lastBit = (mask&1);
			if(lastBit)
			{
				temp=temp*a[pos];
			}
			++pos;
			mask=mask>>1;
		}
		if(setBits)
		{
			ans+=no/temp;
		}
		else
			ans-=no/temp; 
	}
		cout<<"\n"<<ans;
		return 0;
}
