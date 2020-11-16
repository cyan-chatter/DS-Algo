#include<iostream>
using namespace std;

int Rladder(int n){
	if(n==0){
		return 1;
	}
	
	if(n<0){
		return 0;
	}
	
	int ans = Rladder(n-1) + Rladder(n-2) + Rladder(n-3) ;
	return ans;
}

int RladderForK(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans = 0;
    for(int j=1;j<=k;j++){

        ans += RladderForK(n-j,k);
    }
    return ans;
}

int DPladderTD(int n, int k, int *dp){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    dp[n] = 0;
    for(int j=1;j<=k;j++){
				dp[n] += DPladderTD(n-j,k,dp);
    }
    return dp[n];
}

int DPladderBU(int n, int k){
	int *dp = new int[n];
	dp[0]=1;
	for(int step = 1; step<=n; step++){
		dp[step] = 0;
		for(int j=1; j<=k; j++){
			if(step-j >= 0){
				dp[step] += dp[step - j];
			}
		}
	}
	return dp[n];
}

int DPladder_ConstantTime(int n, int k, int *dp){
	//dp[n+1] = 2dp[n] - dp[n-k]
	if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    dp[n] = 0;
    for(int j=1;j<=k;j++){
				dp[n] += 2*DPladder_ConstantTime(n-1,k,dp) - DPladder_ConstantTime(n-1-j,k,dp);
    }
    return dp[n];
}

int main(){
	int n,c=0,d=0,e=0,f=0,g=0;
	cin>>n;
	int dp1[50]={}, dp2[50]={} ;
	//c = Rladder(n);
	//d = RladderForK(n,3);
	e = DPladderBU(n,3);
	f= DPladderTD(n,3,dp1);
	g= DPladder_ConstantTime(n,3,dp2);
	cout<<e<<"\n";
	cout<<f<<"\n";
	//cout<<g;
}
