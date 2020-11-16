#include<iostream>
using namespace std;

int main()
{
	int image[10][10]={ },n;
	cin>>n;	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>image[i][j];
		}
	}//input image
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i)
			swap(image[i][j],image[j][i]);
		}
	}//transpose image(transpose is mirror image of the rotated image)
	
	for(int i=0;i<n;i++)
	{
		for(int j=0, k=n-1; j<k; j++, k--)
		{
			swap(image[i][j],image[i][k]);
		}
	}//mirror image of transpose= Rotated Image
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<image[i][j]<<"\t";
		}
		cout<<endl;
	}//outputs image
	
	return 0; 
}
