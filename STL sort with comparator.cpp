#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	return a>b;
}// return in descending order

int main(){
	int arr[1000];
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	//sorts from begin to end-1 index
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	} 
	cout<<"\n";
	sort(arr,arr+n,compare);
	// sort with comparator-- compare is not called here, it is called internally.
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
	
