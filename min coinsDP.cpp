#include<iostream>
using namespace std;

int RminCoins(int coins[], int amount, int n){
	if(amount == 0){
		return 0;
	}
	int coinsNeeded = INT_MAX;
	
	for(int i=0; i<n; i++){
		if(amount - coins[i] >= 0){
			int smallAns = RminCoins(coins, amount-coins[i], n);
			if(smallAns != INT_MAX){
				coinsNeeded = min(coinsNeeded, smallAns+1);
			}
		}
	}
	return coinsNeeded;
}

int DPminCoins(int coins[], int amount, int n){
	int *dp = new int[amount+1];
	for(int i=0; i<=amount; i++){
		dp[i] = INT_MAX;
	}
	dp[0]=0;
	for(int rupay=1; rupay<=amount; rupay++){
		for(int i=0; i<n; i++){
			if(coins[i]<=rupay){
				int smallAns = dp[rupay - coins[i]];
				if(smallAns!=INT_MAX){
					dp[rupay] = min(dp[rupay], smallAns+1);
				}	
			}
		}
	}
	return dp[amount];
}

int main(){
	int us_coins[] = {1,7,10};
	int ind_coins[] = {1,2,5,10};
	int amount, us_ans=0, ind_ans=0;
	cin>>amount;
	
	us_ans = DPminCoins(us_coins,amount,3);
	ind_ans = DPminCoins(ind_coins,amount,4);

	cout<<us_ans<<"\n";
	cout<<ind_ans<<"\n";
}
