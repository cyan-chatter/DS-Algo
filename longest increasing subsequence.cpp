#include<iostream>
using namespace std;

int lis(int a[], int n){
	int dp[51]={};	
	for(int i=0; i<n; ++i){
		dp[i]	= 1;	
	}
	int best = -1;
	for(int i=1; i<n; ++i){
		for(int j=0; j<i; j++){	
			
			if(a[j]<=a[i]){
				int curlen = 1 + dp[j];
				dp[i] = max(curlen, dp[i]);
			}
			
		}
		best = max(best , dp[i]);
	}
	for(int i=0;i<n;i++) cout<<dp[i]<<" ";
	return best;
}

//10, 22, 9, 33, 21, 50, 41, 60, 80
//6

int main(){
	int a[50];
	int size;
	cin>>size;
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	int ans = lis(a,size);
	cout<<"\n"<<ans;
	return 0;
}

