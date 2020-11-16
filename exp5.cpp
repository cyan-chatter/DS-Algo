#include<iostream>
using namespace std;

int min(int a, int b)
{
	if(a<b)
	return a;
	else return b; 
}

int main()
{
	int t,c1,c2,c3,c4,m,n,r[1005],c[1005],ropt,copt,optcost;
	cin>>t;
	cout<<"\n Test case obtained\n";
	while(t--)
	{
		ropt=0;
		copt=0;
		optcost=0;
		cin>>c1>>c2>>c3>>c4;
		cout<<"\n Test case obtained\n";
		cin>>n>>m;
		cout<<"\n Test case obtained\n";
		
		for(int i=0;i<n;i++)
		cin>>r[n];
		cout<<"\n Test case obtained\n";
		for(int i=0;i<m;i++)
		cin>>c[m];
		cout<<"\n Test case obtained\n";
		
	
		for(int i=0;i<n;i++)
		{
			ropt=ropt+min(c1*r[i],c2);
		}
	  cout<<"\n Ropt\n"<<ropt;
		ropt=min(ropt,c3);
	  cout<<"\n Min Ropt\n"<<ropt;
	  
		
		for(int i=0;i<m;i++)
		{
			copt=copt+min(c1*c[i],c2);
		}
	  cout<<"\n Copt\n"<<ropt;
		copt=min(copt,c3);
	  cout<<"\n Min Copt\n"<<ropt;
	  
	  
	  optcost=min(ropt+copt,c4);
	  
	  cout<<"\n OptCost= \n";
	  cout<<"\n"<<optcost<<"\n";
	}
	
	
	return 0;
}
