#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
	//1.stores elements in sorted order
	//2. unique elements, each repeating element occurs only once
	
	set<int> s;
	s.insert(1);
	s.insert(4);
	s.insert(3);
	s.insert(8);
	s.insert(7);
	s.insert(10);
	s.insert(8);
	
	for(int x:s){
		cout<<x<<endl;
	} 
	cout<<"Size: "<<s.size()<<endl;
	
	for(set<int>:: iterator it = s.begin(); it!=s.end(); it++){
		cout<<(*it)<<"\n";
	}
	
	
	
	return 0;
}
