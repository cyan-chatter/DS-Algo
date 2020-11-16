#include<iostream>
using namespace std;

int main()
{
	int N,t=0,i;
	cin>>N;
	if(N>=1&&N<=15)
	{
	 i=N+1;
	 while(i>1)
	 {
		if(i%3==0)
			{
				i=(i/3);
				
			}
		else if(i%2==0)
			{
				i=(i/2)-1;
				
			}
		else
			{
				i=i-1;
				
			}
		
		++t;
	 }
	
	cout<<t;
		
	}
	
	return 0;
}


