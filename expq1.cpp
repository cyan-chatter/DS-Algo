#include<iostream>
using namespace std;

int main()
{
	int cell[100]={}, count=0;
	//0 for close and 1 for open lock 
	for(int i=1; i<=100; ++i )
	{
		for(int j=0; j<100; ++j)
		{
				if((j+1)%i==0)
					{
						if(cell[j]==0)
						cell[j]=1;
						if(cell[j]==1)
						cell[j]=0;
					}	
					cout<<cell[j];
		}
		
	}
	
	for(int i=0; i<100; i++)
	{
		/*if(cell[i]==1) 
		{
		++count;
		cout<<count;
		}*/
		cout<<cell[i];
	}
	
	cout<<count;
	
	return 0;
}
