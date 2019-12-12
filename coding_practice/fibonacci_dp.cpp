/*
	FIbonannci series using dp
*/

#include <iostream>
using namespace std;

int fib_rec(int n){
	if(n==0){
		return 0;
	}
	if(n==1||n==2){
		return 1;
	}
	return fib_rec(n-1) +  fib_rec(n-2);
}

int fib_topdown(int n, int dp[]){
	if(n==0){
		dp[n] = 0;
		return dp[n];
	}
	if(n==1||n==2){
		dp[n] = 1;
		return dp[n];
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	dp[n] = fib_topdown(n-1, dp) + fib_topdown(n-2, dp);
	return dp[n];
}

int fib_bottomup(int n){
	int dp[1000];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
		/* code */
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fib_rec(n)<<"\n";
	int dp[1000];
	for (int i = 0; i <= n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<fib_topdown(n, dp)<<"\n";
	cout<<fib_bottomup(n)<<"\n";
	return 0;
}