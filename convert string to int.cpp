#include<iostream>
using namespace std;

int length(char str[]){
	int res;
	for(int i=0; str[i]!='\0'; i++){
		++res;
	}
	return res;
}

int convertStringToInt(char a[]){
	int len;
	int res = 0;
	len = length(a);
	for(int i=0; i<len; i++){
		res *= 10;
		res += int(a[i])- 48; 
	}
	return res;
}

int RConvert(char a[], int n){
	if(n == -1){
		return 0;	
	}
	if(n > -1){
		return  ( RConvert(a, n-1) ) * 10 + (int(a[n])- 48);
	}
	
}


int main(){
	
	int res1, res2, len = 0 ;
	char a[20];
	gets(a);
	res1 = convertStringToInt(a);
	len = length(a);
	res2 = RConvert(a,len);
	cout<<"\nConvert: "<<res1;
	cout<<"\nRConvert: "<<res2;
	return 0;
}
