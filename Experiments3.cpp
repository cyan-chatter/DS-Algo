#include <iostream>
using namespace std;
class Length{
int feet;
float inches;
public:
Length(){
feet = 5.0;
inches = 6.0;	
}
Length(int f, float In){
feet  = f;
inches = In;
}
Length addlength(Length l){
l.inches += this->inches;
l.feet += this->feet;
if(l.inches>12){
l.inches-=12;
l.feet++;	
}
return l;	
}

int getFeet(){
	cout<<"called";
	return feet;
}

int getInches(){
	return inches;
}

//Length obj(10,1);
//obj.getFeet();
};


int main()
{
Length objlength1(5, 6.5);
objlength1.getFeet();
return 0;
}
