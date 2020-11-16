#include<iostream>
using namespace std;

RLsearch(int a[], int n, int key){
	if(n<0){
		return -1;
	}
	else if(a[n]==key){
		return n;
	}
	else return RLsearch(a,n-1,key);
	
}

int main(){
	
	int num, n, pos;
	int a[]={4,67,23,98,45,23,56,90,12,50};
	cin>>num;
	n = sizeof(a)/sizeof(int);
	pos = RLsearch(a,n,num);
	if(pos!=-1){
		cout<<pos;
	}
	else{
		cout<<"\nElement Not Found\n";
	}
	return 0;
	
}
