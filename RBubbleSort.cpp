#include<iostream>
using namespace std;

void RBubbleSort1(int a[], int size){
	if(size==1){
		return; 
	}
	
	for(int i=0;i<size-1;i++){
		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	RBubbleSort1(a,size-1);
}

void RBubbleSort2(int a[], int i, int size){
	if(size==1){
		return; 
	}
	if(i==size-1){
		return RBubbleSort2(a,0,size-1);
	}
	
	if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
	RBubbleSort2(a,i+1,size);
	return;
}



int main(){
	int j=0;
	int size,a[]={8,19,17,38,23,2,21,60,44,10};
	size = sizeof(a)/sizeof(int);
	//RBubbleSort1(a,size);
	RBubbleSort2(a,j,size);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
