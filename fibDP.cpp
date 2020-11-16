#include<iostream>
using namespace std;
// top down DP = recusion + memoization

int fib(int n){
	if(n==0 || n==1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}// T:O(2^n), S:O(n) 


int fibDPTopDown(int n, int *dp){
	if(n==0 || n==1){
		dp[n]=n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	else{
		dp[n] = fibDPTopDown(n-1,dp) + fibDPTopDown(n-2,dp);
		return dp[n];
	}	
} //O(n) both

int fibDPBottomUp(int n){
	
	int *dp = new int[n];
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	return dp[n];
}  // O(n) both

int main(){
	int n;
	cin>>n;
	int dp[100];
	for(int i=0; i<100; i++){
		dp[i] = -1;
	}
	cout<<fibDPTopDown(n,dp)<<"\n";
	cout<<fibDPBottomUp(n)<<"\n";
	return 0;
}
