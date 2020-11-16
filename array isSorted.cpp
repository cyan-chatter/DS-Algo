#include<iostream>
using namespace std;

int isSorted(int *a, int n){
	if(n==1){
		return 1;
	}
	if(a[0]<=a[1] && isSorted(a+1,n-1)){
		return 1;
	}
	else return 0;
	
}



int main(){
	
	int arr[10], ans, size;
	cout<<"\nEnter the number of elements in array\n";
	cin>>size;
	cout<<"\nEnter the elements\n";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	ans = isSorted(arr,size);
	if(ans)
	cout<<"\nSorted";
	else
	cout<<"\nUnsorted";
	return 0;
}
