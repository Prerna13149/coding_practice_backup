/*
	Minimum cost distance. Given a grid, we have to find the minimum cost to reach from start to end of matrix.
*/
#include <iostream>
using namespace std;

int mincost(int grid[3][3], int n, int m){
	int dp[100][100]={0};
	dp[0][0] = grid[0][0];
	for (int i = 1; i < m; ++i)
	{
		dp[0][i] = grid[0][i] + dp[0][i-1];
		
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		dp[i][0] = grid[i][0] + dp[i-1][0];
		/* code */
	}

	for (int i = 1; i < m; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			int op1 = grid[i][j] + dp[i-1][j];
			int op2 = grid[i][j] + dp[i][j-1];
			dp[j][i] = min(op1, op2);
			/* code */
		}
		/* code */
	}
	return dp[n-1][m-1];
}

int main(int argc, char const *argv[])
{
	int grid[3][3]={{1,2,3}, {4, 8, 2}, {1, 5, 3}};
	cout<<mincost(grid, 3, 3)<<"\n";
	return 0;
}