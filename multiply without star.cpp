#include<iostream>
using namespace std;

int multiply(int a,int b){
	if(b<=1){
		return a;
	}
	return a + multiply(a, b-1);
	
}

int main(){
	
	int a,b,res;
	cin>>a>>b;
	res = multiply(a,b);
	cout<<"\n"<<res;
}
