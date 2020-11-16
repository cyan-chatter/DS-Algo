class Solution {
public:
    int countSquares(matrix[100][], int m, int n) {
        int i, j, count = 0;
        
        int dp[m+1][n+1]; 
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                if (matrix[i - 1][j - 1]) {
                    dp[i][j] = 1 + min( dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                    count += dp[i][j];
                }
            }
        }
        return count;
    }
};

int main(){
	int m,n,c, mat[100][];
	m=4; n=6;
	c = countSquares(mat,m,n);	
	return 0;
}
