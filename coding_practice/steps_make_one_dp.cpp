/*
	N has either 3 options: substract 1, divide by 2, divide by 3. Find minimum number of steps to make N=1.
*/

#include <iostream>
#include <climits>
using namespace std;

int min_steps(int n){
	if(n==1){
		return 0;
	}
	int op1 = 1 + min_steps(n-1);
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	if(n%2==0){
		op2 = 1 + min_steps(n/2);
	}
	if(n%3==0){
		op3 = 1 + min_steps(n/3);
	}
	return min(op1, min(op2, op3));
}

int min_steps_topdown(int n, int dp[]){
	if(n==1){
		dp[n] = 0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int op1 = 1 + min_steps(n-1);
	int op2 = INT_MAX;
	int op3 = INT_MAX;
	if(n%2==0){
		op2 = 1 + min_steps(n/2);
	}
	if(n%3==0){
		op3 = 1 + min_steps(n/3);
	}
	dp[n] = min(op1, min(op2, op3));
	return dp[n];
}

int min_steps_bottomup(int n){
	int dp[1000] = {0};
	dp[1]==0;
	for (int i = 2; i <=n ; i++)
	{
		int op1 =  1 + dp[i-1];
		int op2 = INT_MAX;
		int op3 = INT_MAX;
		if(i%2 == 0){
			op2 = 1 + dp[i/2];
		}
		if(i%3 == 0){
			op3 = 1 + dp[i/3];
		}
		dp[i] = min(op1, min(op2, op3));
		/* code */
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<min_steps(n)<<"\n";
	int dp[1000]={0};
	for (int i = 0; i <=n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<min_steps_topdown(n, dp)<<"\n";
	cout<<min_steps_bottomup(n)<<"\n";
	return 0;
}