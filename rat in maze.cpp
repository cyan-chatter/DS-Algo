#include<iostream>
using namespace std;

ratMaze(char maze[10][10], int soln[10][10], int i,int j, int m, int n){
	
	if(i==m && j==n){
		soln[m][n] = 1;
		for(int i=0; i<=m; i++){
				for(int j=0; j<=n; j++){
					cout<<soln[i][j]<<" ";
				}
				cout<<"\n";	
		}
		cout<<"\n";
		return true;
	}
	if(i>m || j>n) return false;
	if(maze[i][j] == 'X') return false;
	
	soln[i][j] = 1;
	
	bool rightScs = ratMaze(maze, soln, i,j+1,m,n);
	bool downScs = ratMaze(maze, soln, i+1,j,m,n);
	
	soln[i][j] = 0;
	
	if(rightScs || downScs) return true;
	
	return false;
}

int main(){
	
	char maze[10][10]={ "00X0",
								 		  "X000",
								 		  "00X0",
								 		  "X000" };
	int soln[10][10]={0};
	int m=4,n=4;
	bool ans = ratMaze(maze,soln,0,0,m-1,n-1);
	if(ans == false){
		cout<<"\nNo Path Exists\n"; 
	}
	return 0;
}
