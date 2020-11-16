//Identify the error in the following program.
#include <iostream>
#include <malloc.h>
using namespace std;
char* allocateMemory(){
	char* str = "Memory allocation test. ";
	return str;	
}
int main(){
void *str;
int *dtr;
int l=5;
dtr = &l;
str = dtr;
l=6;
cout<<*dtr<<" "<<l;
return 0;
}





