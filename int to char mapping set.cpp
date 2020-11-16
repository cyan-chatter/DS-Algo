#include<iostream>
using namespace std;

void setsMap(char *a, int i, char *out, int j){
	
	if(a[i] == '\0'){
		out[j] = '\0';
		puts(out);
		cout<<"\n";
		return;
	}
	
	int digit1 = a[i] - '0';
	char ch = digit1 + 64;
	out[j] = ch;
	setsMap(a,i+1,out,j+1);
	if(a[i+1]!='\0'){
		int digit2 = a[i+1] - '0';
		int no = digit1*10 + digit2;
		if(no<=26){
			ch = no + 64;
			out[j] = ch;
			setsMap(a,i+2,out,j+1);
		}
	}	
}


int main(){
	char in[100]="";
	char out[100]="";
	gets(in);
	setsMap(in,0,out,0);
	return 0;
}
