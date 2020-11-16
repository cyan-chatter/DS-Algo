//#include<iostream> 
//using namespace std; 
//  
//class Test { 
//    int &t; 
//public: 
//    Test(int &t):t(t) {}  //Initializer list must be used 
//    int getT() { return t; } 
//}; 
//  
//int main() { 
//    int x = 20; 
//    Test t1(x); 
//    cout<<t1.getT()<<endl; 
//    x = 30; 
//    cout<<t1.getT()<<endl; 
//    return 0; 
//} 



//#include<iostream>
//using namespace std;
//  
//class Test
//{
//public:
//  Test();
//};
//  
//Test::Test()  {
//    cout << " Constructor Called. ";
//}
//  
//void fun() {
//  static Test t1;
//}
//  
//int main() {
//    cout << " Before fun() called. ";
//    fun();
//    fun();
//    cout << " After fun() called. ";  
//    return 0;
//}

//int main()
//{
//	int s=1;
//int p=10;
//p = ++s;
//cout<<s<<" "<<p;
//
//	return 0;
//}
