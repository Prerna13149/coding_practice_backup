/*
	Ways to reach a staircase from last k stairs using dp
*/

#include <iostream>
using namespace std;

int ways(int n, int k){
	if(n<=0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int a = 0;
	for (int i = 1; i <= k; i++)
	{
		a = a + ways(n-i, k);
		/* code */
	}
	return a;
}

int ways_topdown(int n, int k, int dp[]){
	if(n<=0){
		dp[n] = 0;
		return 0;
	}
	if(n==1){
		dp[n] = 1;
		return 1;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int a = 0;
	for (int i = 1; i <= k; i++)
	{
		a = a + ways(n-i, k);
		/* code */
	}
	dp[n] = a;
	return dp[n];
}

int ways_bottomup(int n, int k){
	int dp[1000];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <=n; i++)
	{
		int sum = 0;
		for (int j = 1; j <=k; j++)
		{
			if(i-j>=0){
				sum = sum + dp[i-j];
			}
			
			/* code */
		}
		dp[i] = sum;
		/* code */
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	int k;
	cin>>n>>k;
	cout<<ways(n, k)<<"\n";
	int dp[1000];
	for (int i = 0; i <= n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<ways_topdown(n, k, dp)<<"\n";
	cout<<ways_bottomup(n, k)<<"\n";
	return 0;
}