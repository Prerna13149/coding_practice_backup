/*
	Fibonnaci series using recursion
*/

#include <iostream>
using namespace std;

int fib(int n){
	if(n==0||n==1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int fib_topdown(int n, int dp[]){
	if(n == 0||n == 1){
		dp[n] = n;
		return n;
	}
	if(dp[n]!= 0){
		return dp[n];
	}
	dp[n] = fib_topdown(n-1, dp) + fib_topdown(n-2, dp);
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fib(n)<<"\n";
	int dp[1000] = {0};
	cout<<fib_topdown(n, dp)<<"\n";
	return 0;
}