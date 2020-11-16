#include<iostream>
using namespace std;

class Room{
	
	int width;
	int height;
	static int copyConsCount;
	
	public:
		
	Room(){
		width = 12;
		height = 8;
	}
	
	Room(Room& r){
		width = r.width;
		height = r.height;	
		copyConsCount++;
	}
	
	void dispCopyConsCount(){
		cout<<copyConsCount;
	}
	void show(){
		cout<<width; 
	}	
};

int Room::copyConsCount = 0;

int main(){
	Room objRoom1;
	Room objRoom2(objRoom1) ;
	Room objRoom3 = objRoom1;
	Room objRoom4;
	objRoom4 = objRoom3;
	objRoom4.dispCopyConsCount();
	cout<<objRoom2.show();
	return 0;
}

