#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//O(nln(n))

void shuffle(int *a, int s, int e){
	
	srand(time(NULL));	
	int i,j,temp;
	for(int i=e;i>0;i--){
		j = rand()%(i+1);
		swap(a[i],a[j]);
	}
}



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
	int size,a[]={1,4,7,8,10,17,19,21,25,44};
	size = sizeof(a)/sizeof(int);
	shuffle(a,0,size-1);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	RQuickSort(a,0,size-1);
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
