/*
	Find maximum sum subarray
*/

#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	int cum_arr[1000]={0};
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if(i==0){
			cum_arr[i] = arr[i];
		}
		else{
			cum_arr[i] = cum_arr[i-1] + arr[i];
		}
		/* code */
	}
	int max_sum = INT_MIN;
	int max_j = 0;
	int max_i = 0;
	for (int i = 0; i < n; i++)
	{
		int st = i;
		for (int j = i; j < n; j++)
		{
			int curr_sum = cum_arr[j]-cum_arr[i-1];
			if(curr_sum>max_sum){
				max_sum = curr_sum;
				max_i = i;
				max_j = j;
			}
		}
		/* code */
	}
	for (int i = max_i; i <= max_j ; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}