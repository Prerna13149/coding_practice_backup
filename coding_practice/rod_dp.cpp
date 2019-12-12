/*
	Given a rod of length l. Sell it in peices. Cost of each piece = {2, 3,2 , 5}. Find max cost.
*/

#include <iostream>
#include <climits>
using namespace std;


int max_cost(int l, int len[], int cost[], int n){
	if(l==0){
		return 0;
	}
	int val = INT_MIN;
	for (int i = 0; i <n ; i++)
	{
		if(l-len[i] >= 0){
			val = max(val, cost[i] + max_cost(l-len[i], len, cost, n));
		}
		
		/* code */
	}
	return val;
}

int max_cost_bottomup(int l, int len[], int cost[], int n){
	int dp[100]={0};
	dp[0] = 0;
	
	for (int j = 1; j <= l; j++)
	{
		/* code */
		int val = INT_MIN;
		for (int i = 0; i <n ; i++)
		{
			if(j-len[i] >= 0){
				val = max(val, cost[i] + dp[j-len[i]]);
			}
		
		/* code */
		}
		dp[j] = val;
	}
	
	return dp[l];
}

int main(int argc, char const *argv[])
{
	int l = 4;
	int cost[] = {2, 3, 2, 5};
	int len[] = {1, 2, 3, 4};
	cout<<max_cost(l, len, cost, 4)<<"\n";
	cout<<max_cost_bottomup(l, len, cost, 4)<<"\n";
	return 0;
}