/*
	Factorial using recursion
*/

#include <iostream>
using namespace std;
int factorial(int n){
	if(n<1){
		return 1;
	}
	else if(n==1||n==2){
		return n;
	}
	else{
		return n * factorial(n-1);
	}
}

int factorial_topdown(int n, int dp[]){
	if(n<1){
		dp[n]=1;
		return 1;
	}
	else if(n==1||n==2){
		dp[n]=n;
		return n;
	}
	else if(dp[n]!=0){
		return dp[n];
	}
	else{
		dp[n] = n* factorial_topdown(n-1, dp);
		return dp[n];
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<factorial(n)<<"\n";
	int dp[1000]={0};
	cout<<factorial_topdown(n, dp)<<"\n";
	return 0;
}