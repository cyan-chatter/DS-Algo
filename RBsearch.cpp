#include<iostream>
using namespace std;

int RBsearch(int a[], int l, int h, int key){
	int mid = (l+h)/2;
	if(l>h){
		return -1;
	}
	else if(a[mid]==key){
		return mid;
	}
	else if(key>a[mid]){
		return RBsearch(a,mid,h,key);
	}
	else{
		return RBsearch(a,l,mid,key);
	}
	
}


int main(){
	int num, n, pos;
	int a[]={1,4,7,9,10,17,21,25,44,66};
	cin>>num;
	n = sizeof(a)/sizeof(int);
	pos = RBsearch(a,0,n,num);
	if(pos!=-1){
		cout<<pos;
	}
	else{
		cout<<"\nElement Not Found\n";
	}
	
	return 0;
}
