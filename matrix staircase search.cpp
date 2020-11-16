#include<iostream>
using namespace std;
 
 int staircaseSearch(int a[10][10], int m, int n,int key)
 {
 		
	 
		for(int i=0, j=n-1; i<m && j>=0;)
		{
			if(key==a[i][j])
			{
				cout<<"\nElement Found at index: [ "<<i<<","<<j<<" ]\n";
				return 1;	
			}
			else if(key>a[i][j])
			++i;
			else if(key<a[i][j])
			--j;
		}
	 	
	 	return 0;
	 
 }
 
 
int main()
{
	int mat[10][10],m,n,key,flag=0;
	
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}	
	cin>>key;
	
	flag=staircaseSearch(mat,m,n,key);
	cout<<endl<<flag<<endl; 
	
	return 0;
}
