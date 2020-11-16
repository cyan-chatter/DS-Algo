//STL-OVERLORD
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	return a>b;
}// return in descending order

class Vector{
	int *arr;
	int cs;
	int maxSize;
	
	public:
		Vector(int defaultSize = 5){
			maxSize = defaultSize;
			cs = 0;
			arr = new int[maxSize];
		}
		
		int getMaxSize(){
			return maxSize;
		}
		
		int getSize(){
			return cs;
		}
		
		void operator()(char *c){
			cout<<c<<"\n";
		}
		
		void push_back(int data){
			if(cs==maxSize){
				//doubling required now
				int *oldArr = arr;
				maxSize = 2*maxSize;
				arr = new int[maxSize];
				for(int i=0; i<cs; i++){
					arr[i] = oldArr[i];
				}
				//delete the oldArr now
				delete [] oldArr;
			}
			arr[cs] = data;
			cs++;
		}
		
		bool empty(){
			return cs==0;
		}
		
		void pop_back(){
			cs--;
			if(!empty()){
				cs--;
			}
		}
		
		void print(){
			for(int i=0; i<cs; i++){
				cout<<arr[i]<<endl;
			}
		}
		int at(int i){
			return arr[i];
		}
		
		int& operator[](int i){
			return arr[i];
		}		
};

ostream& operator << (ostream &os, Vector &v){
	v.print();
	return os;
}

//istream& operator >> (istream &is, Vector &v){
//	//input vector
//	return is;
//}

int main(){
	
//	
	
	/* 
	VECTOR
	1. inbuilt
	2. user made by defining vector class
	
	this is resizable array - Doubles its size automatically when index exceeds size	
	*/
	
	Vector v;
	for(int i=0; i<=4; ++i){
		v.push_back(i*i);
	}
	v.print();
	cout<<"\n";
	cout<<v.getMaxSize()<<"\n";
	v.push_back(7);
	cout<<"\n";
	cout<<v.getMaxSize()<<"\n";
	cout<<"\n";
	v.print();
	v("Leo");
	cout<<"Third element in vector: "<<v[2]<<"\n";
//	for(int i=0;i<v.getSize();++i){
//		cout<<v[i]<<"\n";
//	}
	cout<<"\n";
	cout<<v<<"\n"; // operator overloading returns ostream so cascading is possible
	v[2] += 7;
	cout<<v[2];
	return 0;
}
 

