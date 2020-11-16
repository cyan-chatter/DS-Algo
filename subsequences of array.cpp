#include<iostream>
using namespace std;

int c=0;

void recExp(int in[], int out[], int i, int j){
	
	if(i >= 4){
		for(int k=0; k<j; k++){
			cout<<out[k]<<" ";
		}
		++c;
		cout<<"\t\t"<<c<<"\n";
		return;
	}
	
	out[j] = in[i];
	recExp(in, out, i+1, j+1);
	recExp(in, out, i+1, j);
	
}


int main(){
	int input[] = {4,7,10,18};
	int output[10]={};
	recExp(input,output,0,0);  
	return 0;
}
