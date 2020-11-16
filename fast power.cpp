#include<iostream>
using namespace std;

fastPower(int a, int b){
	if(b==0){
		return 1;
	}
	int smallAns = fastPower(a,b/2);
	smallAns *= smallAns;
	if(b&1){
		return a*smallAns;
	}
	return smallAns;
}



int main(){
	
	int a, b;
	cin>>a>>b;
	cout<<fastPower(a,b)<<"\n";
	return 0;
}
