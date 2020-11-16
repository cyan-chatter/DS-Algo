#include <iostream> 
using namespace std;
class Test{
int y;
int const p=20;
int q;
public:

int x; 
Test(int);
void mody(){
	y=10;
}
int gety(){
	return y;
}
void cfun() const;

};

Test:: Test(int z){
	cout<<"\n";
	x=5;
	y=z;
	z=17;
	cout<<x<<" "<<y<<" "<<z<<"\n";
} 

void Test::cfun() const{
	cout<<"\n"<<p<<"\n";
}

int main(){
	Test T(7);
	Test *t = new Test(0);
	//T.mody();
	t = &T;
	cout<<"y: "<<t->gety();	
	int Test::*p = &Test::x; 
	cout<<"\n"<<t->*p<<" "<<T.*p;
	int m=4;
	const Test C(m);
	C.cfun();
	m=30;
	cout<<m<<"\n";
//	C.x=15;
//	cout<<" "<<C.x;
}
	
	
