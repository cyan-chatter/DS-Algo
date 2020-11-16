#include<iostream>
#include<queue>
#include<vector>
#include<functional>
using namespace std;

class Car{
	public:
		int x;
		int y;
		int id;
		
	Car(int id, int x, int y){
		this->id = id;
		this->x = x;
		this->y = y;
	}
	int dist(){
		return x*x + y*y;
	}
	void print(){
		cout<<"ID: "<<id<<"\n";
		cout<<"x: "<<x<<"\n";
		cout<<"y: "<<y<<"\n";
	}
};

//Functor - Functional Objects

class CarCompare{
	public:
		// Method to overload () operator
	bool operator()(Car a, Car b){
		//cout<<"Comparing "<<a<<" and "<<b;
		return a.dist() > b.dist(); 
	}	
};


int main(){

	CarCompare cc;
	//cc(5,10);

	priority_queue< Car, vector<Car>, CarCompare > pq;
	int x[10] = {5,6,17,18,9,11,0,3};
	int y[10] = {1,-2,8,9,10,91,1,2};
	
	for(int i=0; i<8; i++){
		Car C(i,x[i],y[i]);
		pq.push(C);
	}
	
	//can specify && poppings <= 3 
	while(!pq.empty()){
		Car p = pq.top();
		p.print();
		pq.pop();
	}
	return 0;
}
