#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void rotate(char a[100], int k=1)
{
	int i=strlen(a),s=0,j,nullmark;
	
	while(i>=0)
	{
		a[i+k]=a[i];
		--i;
	}
	
	i=strlen(a);
	j=strlen(a)-k;
	nullmark=j;
	while(j<i)
	{
		a[s]=a[j];
		++s;
		++j;
	}
	a[nullmark]='\0';
	
}

int main()
{
	char a[100]=" "; 
	int k;
	gets(a);
	cin>>k;
	rotate(a,k);
	cout<<endl;
	puts(a);
	return 0;
}
