#include<iostream>
#include<math.h>
using namespace std;

bool canPlace(int mat[][9], int i, int j, int n, int num){
	for(int x=0; x<n; x++){
		if(mat[x][j] == num || mat[i][x] == num) return false;
	}
	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;
	for(int x=sx; x<(sx+rn); x++){
		for(int y=sy; y<(sy+rn); y++){
			if(mat[x][y] == num) return false;
		}
	}
	return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n){
	if(i==n){
		
		return true; 
	}
	if(j==n){
		return solveSudoku(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return solveSudoku(mat,i,j+1,n);
	}
	for(int num=1; num<=n; num++){
		if(canPlace(mat,i,j,n,num)){
			mat[i][j] = num;
			bool couldWeSolve = solveSudoku(mat,i,j+1,n);
			if(couldWeSolve) return true;
		}
	}
	mat[i][j] = 0;
	return false;
}



int main(){
	int n=9;
	bool flag;
	int mat[9][9] = {
		{5,3,0,0,7,0,0,0,0
		},
		{6,0,0,1,9,5,0,0,0
		},
		{0,9,8,0,0,0,0,6,0
		},
		{8,0,0,0,6,0,0,0,3
		},
		{4,0,0,8,0,3,0,0,1
		},
		{7,0,0,0,2,0,0,0,6
		},
		{0,6,0,0,0,0,2,8,0
		},
		{0,0,0,4,1,9,0,0,5
		},
		{0,0,0,0,8,0,0,7,9
		}
	};
	flag = solveSudoku(mat,0,0,9);
	int rn = sqrt(n);
	if(flag){
		for(int x=1; x<=n; x++){
			for(int y=1; y<=n; y++){
				cout<<mat[x-1][y-1]<<" ";
				if(y%3 == 0 && y!=n){
					cout<<"| ";
				}
			}
			cout<<"\n";
			if(x%rn == 0){
				for(int t=0; t<(n+rn); t++){
					cout<<"--";
				}
				cout<<"\n";
			} 
		}
	}
  if(!flag) cout<<"\nImpossible to solve this\n";
	return 0;
}
