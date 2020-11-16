#include<iostream>
using namespace std;

int partition(int *a, int s, int e){
	
	int i=s-1;
	int j=s;
	int pivot = a[e];
	for(;j<e;j++){
		if(a[j]<=pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[e]);
	return i+1;
}

void RQuickSort(int *a, int s, int e){
		if(s>=e){
			return; 
		}
		int p = partition(a,s,e);
		
		RQuickSort(a,s,p-1);
		RQuickSort(a,p+1,e);
}

int main(){
	int size,a[]={8,19,17,38,23,2,21,60,44,10};
	size = sizeof(a)/sizeof(int);
	RQuickSort(a,0,size-1);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
