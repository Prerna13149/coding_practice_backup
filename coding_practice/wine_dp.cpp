/*
	Wine problem using dp
*/

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int wine_profit(int wine[], int st, int end, int year){
	if(st>end){
		return 0;
	}
	int op1 = wine[st] * year + wine_profit(wine, st+1, end, year+1);
	int op2 = wine[end] * year + wine_profit(wine, st, end-1, year+1);
	return max(op1, op2);
}

int wine_profit_topdown(int wine[], int dp[100][100], int st, int end, int year){
	if(st>end){
		dp[st][end] = 0;
		return 0;
	}
	if(dp[st][end]!=0){
		return dp[st][end];
	}
	int op1 = wine[st] * year + wine_profit(wine, st+1, end, year+1);
	int op2 = wine[end] * year + wine_profit(wine, st, end-1, year+1);
	dp[st][end] = max(op1, op2);
	return max(op1, op2);
}

int wine_profit_bottomup(int wine[], int n){
	int dp[100][100]={0};
	int year = n;
	for (int i = 0; i <=n; ++i)
	{
		dp[i][i] = n * wine[i];
		/* code */
	}
	year--;
	for (int len = 2; len <= n; ++len)
	{
		int st = 0;
		int end = n - len;
		while(st<=end){
			int endwindow = st + len - 1;
			int op1 = wine[st]*year + dp[st+1][endwindow];
			int op2 = wine[end]*year + dp[st][endwindow-1];
			dp[st][endwindow] = max(op1, op2);
			st++;
		}
		year--;
		/* code */
	}

	for (int s = 0; s < n; ++s)
	{
		for (int e = 0; e < n; ++e)
		{
			cout<<dp[s][e]<<" ";
			/* code */
		}
		cout<<"\n";
		/* code */
	}
	return dp[0][n-1];

}

int main(int argc, char const *argv[])
{
	int wine[] = {2, 3, 5, 1, 4};
	cout<<wine_profit(wine,0, 4, 1)<<"\n";
	int dp[100][100]={0};
	cout<<wine_profit_topdown(wine, dp, 0, 4, 1)<<"\n";
	cout<<wine_profit_bottomup(wine, 5)<<"\n";
	return 0;
}