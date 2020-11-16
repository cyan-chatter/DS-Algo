#include<iostream>
using namespace std;

int filter(int a[],int j,int key)
{
	int sum=0,i=0,no=j;
	while(no>0)
	 {
		 sum+=((no&1)?a[i]:0);
		 i++;
		 no = no>>1;
	 }
	if(sum==key)
	return 1;
	else return 0;
}


int main()
{
	int t,n,m,a[20],range,ans=0;
	cin>>t>>n>>m;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	range= (1<<n)-1;
	
	for(int no=0;no<=range;no++)
	{
		ans=filter(a,no,m);
		if(ans==1)
		{
			cout<<"Yes";
			break;
		}
	}
	if(ans==0)
	cout<<"No";
	
	return 0;
}
