//sell all the wine bottles - 1 bottle per year, - 1 from any end - such that profit maximizes - Older the wine, more the profit
//find the max profit
#include<iostream>
using namespace std;

int wineProfit(int wine[], int n){
	int i,j,k,dp[n+1];
	dp[0] = 0;
	for(i=0, j=n-1, k=1; i<=j; ++k ){
		if(wine[i]<=wine[j]){
			dp[k] = wine[i]*k + dp[k-1];
			++i;
		}
		else{
			dp[k] = wine[j]*k + dp[k-1];
			--j;
		}
	}
	return dp[n];
}

int main(){
	int profitMax = 0, size, wine[100];
	cin>>size;
	for(int i=0;i<size; i++){
		cin>>wine[i];
	}
	profitMax = wineProfit(wine,size);
	cout<<profitMax;
	return 0;
}
