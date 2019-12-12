/*
	Coins[] = {1, 7, 10}
	Amt = 15
	You can use any coin any number of times. Use coins to create amt s.t you use minimun number of coins
*/

#include <iostream>
#include <climits>
using namespace std;

int find_ways(int amt, int coins[], int n){
	if(amt==0){
		return 0;
	}
	int val = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if(amt - coins[i]>= 0){
			//cout<<"Here";
			val = min(val, 1 + find_ways(amt - coins[i], coins, n));
			//cout<<val<<" ";	
		}
		
		/* code */
	}
	return val;
}

int find_ways_topdown(int amt, int coins[], int n, int dp[]){
	if(amt==0){
		return 0;
	}
	if(dp[amt]!=-1){
		return dp[amt];
	}
	int val = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if(amt - coins[i]>= 0){
			val = min(val, 1 + find_ways(amt - coins[i], coins, n));
			//cout<<val<<" ";	
		}
		
		/* code */
	}
	dp[amt] = val;
	return val;
}

int find_ways_bottomup(int amt, int coins[], int n){
	int dp[1000];
	if(amt==0){
		dp[amt] = 0;
		return 0;
	}

	for (int i = 1; i <= amt ; i++)
	{
		int val = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			if(amt - coins[i]>= 0){
				val = min(val, 1 + dp[i - coins[j]]);
			//cout<<val<<" ";	
			}
		}
		dp[i] = val;
		/* code */
	}
	
	return dp[amt];
}

int main(int argc, char const *argv[])
{
	int coins[3]={1, 7, 10};
	int amt = 15;
	cout<<find_ways(amt, coins, 3)<<"\n";
	int dp[1000];
	for (int i = 0; i <=amt; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<find_ways_topdown(amt, coins, 3, dp)<<"\n";
	cout<<find_ways_bottomup(amt, coins, 3)<<"\n";
	return 0;
}