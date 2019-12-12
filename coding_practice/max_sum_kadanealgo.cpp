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
		/* code */
	}
	int max_sum = INT_MIN;
	int curr_sum = 0;
	int max_j = 0;
	int max_i = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		curr_sum = curr_sum + arr[i];
		if(curr_sum<0){
			curr_sum = curr_sum - arr[i];
			j = i+1;
		}
		if(max_sum<curr_sum){
			max_sum = curr_sum;
			max_i = j;
			max_j = i;
		}
		/* code */
	}
	cout<<max_sum<<"\n";
	for (int i = max_i; i <= max_j ; i++)
	{
		//cout<<"I am here";
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}