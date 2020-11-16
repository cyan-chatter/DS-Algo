#include<iostream>
using namespace std;


int countWaysToClimbStairs(int n, int k){
  static int c=0;
	if(n==0){
		++c;
		return 0;
	}
	if(n<0){
		return 0;
	}
	for(int i=1; i<=k; ++i){
		 countWaysToClimbStairs(n-i,k);
	}
	return c;
}

int main(){
	int n,k,ans=0;
	cin>>n;
	cin>>k;
	ans = countWaysToClimbStairs(n,k);
	cout<<"\n"<<ans;
	return 0;
}
