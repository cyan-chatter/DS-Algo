#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<limits>
using namespace std;

bool myComp(pair<string,int> p1, pair<string,int> p2){
	return p1.first < p2.first; //lexicographic comparison because string class has already overloaded operators
}

bool priceComp(pair<string,int> p1, pair<string,int> p2){
	return p1.second > p2.second;
}

int main(){
	
//	int a[] = {0,1,2,2,2,2,2,3,4};
//	int n = sizeof(a)/sizeof(int);
//	
//	auto first = lower_bound(a,a+n,2) - a;
//	auto last = upper_bound(a,a+n,2) - a-1; 
//	
//	cout<<first<<"\n";
//	cout<<last<<"\n";
//	
	vector<pair<string,int>> v;
	int n;
	cin>>n;
	cin.get();
	string s;
	int p;
	for(int i=0; i<n; i++){
		
		cin>>s;
		cin>>p;
		pair<string,int> myPair(s,p);
		v.push_back(myPair);
		
	}
	
	sort(v.begin(), v.end(), priceComp);
	
	for(auto p:v){
		cout<<p.first<<"  :  "<<p.second<<"\n";
	}
	
	return 0;
}
