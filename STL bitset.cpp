#include<iostream>
#include<bitset>

using namespace std;

int main(){
	
	bitset<30> b;
	b[12] = b[7] = b[29] = 1;
	cout<<b<<"\n";
	return 0;
}
