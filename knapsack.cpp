#include<iostream>
using namespace std;

int knapsack(int wts[], int prices[], int n, int w){
	if(n==0 || w==0){
		return 0;
	}
	int inc = 0, exc = 0;
	if(wts[n-1]<=w){
		inc = prices[n-1] + knapsack(wts, prices, n-1, w - wts[n-1]);	
	}// ^ to change this into an unbounded knapsack change n-1 -> n in the above line
	exc = knapsack(wts, prices, n-1, w);
	
	return max(inc, exc);
}

int DPknapsackBU(int wts[], int prices[], int N, int W){
	
	int dp[100][100]={0};
	for(int n=0; n<=N; n++){
		for(int w=0; w<=W; w++){
			if(n==0 || w==0){
				dp[n][w] = 0;
			}
			else{
				int inc = 0, exc = 0;
				if(wts[n-1]<=w){
					inc = prices[n-1] + dp[n-1][w - wts[n-1]];					
				}//prices and wts arrays start indices from 0 so prices[n-1] and wts[n-1] are done
				 //dp array starts index with 1 and we add price of current element to the total price of n-1 elements already selected so dp[n-1] is done
				 // ^ to change into unbounded knapsack change dp[n-1] -> dp[n]	
				exc = dp[n-1][w];
				
				dp[n][w] = max(inc, exc);
			}
		}
	}
	
	for(int i=0;i<=N;i++){
		for(int j=0;j<=N+1;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[N][W];
	
}

int main(){
	int wts[] = {2,2,3,1};
	int prices[] = {5,20,100,30};
	int N = 4;
	int W = 5;
	int maxProfit = DPknapsackBU(wts, prices, N, W);
	cout<<maxProfit;
	return 0;
}



