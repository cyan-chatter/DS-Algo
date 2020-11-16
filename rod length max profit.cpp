//Rod length Cut -> Profit
// 1->2, 2->3, 3->2, 4->5
// max profit by cutting and whole rod of total length 4

#include<iostream>
using namespace std;

int rodProfit(int piece[], int n){
	int dp[n+1]={};
	
	for(int i=1; i<=n; ++i){
		int best = 0;
		for(int j=1; j<=i; ++j){
			best = max(best, piece[j] + dp[i-j]);		
		}
		dp[i] = best;
		cout<<dp[i]<<"\t";
	}
	return dp[n];
}


int main(){
	int size;
	int pieceProfit[50];
	cin>>size;
	 for(int i=0; i<size; ++i){
	 	cin>>pieceProfit[i];
	 }
	int maxProfit = rodProfit(pieceProfit, size);
	cout<<maxProfit;
	return 0;
}  
