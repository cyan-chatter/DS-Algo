#include<iostream>
using namespace std;


int tiles(int n){
	
	if(n==1 || n==2 || n==3){
		return 1;
	}
	
	if(n<1){
		return 0;
	}
	
	if(n==4){
		return 2;
	}
	
	return  tiles(n-1) + tiles(n-4);	 
}


int main(){
	
	int res, N;
	cin>>N;
	res = tiles(N);
	cout<<res;
	return 0;
}
