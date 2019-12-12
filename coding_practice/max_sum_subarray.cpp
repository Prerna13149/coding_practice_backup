/*
	Find maximum sum subarray
*/

#include <iostream>
#include <climits>
using namespace std;

void print_arr(int arr[], int s, int e, int &max_sum, int &max_i, int &max_j){
	int sum = 0;
	int temp = s;
	while(s<=e){
		sum = sum + arr[s];
		s++;
	}
	if(sum > max_sum){
		max_sum = sum;
		max_i = temp;
		max_j = e;
	}
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
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
			print_arr(arr, st, j, max_sum, max_i, max_j);
			//cout<<"\n";
			/* code */
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