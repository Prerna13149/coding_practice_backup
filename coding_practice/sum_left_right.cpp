/*
	Given an array, find an element such that sum on the left and right are equal.
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		sum = sum + arr[i];
		/* code */
	}
	int left_sum = 0;
	int right_sum = sum - arr[0];
	//cout<<right_sum<<" "<<arr[0]<<"\n";
	if(arr[0]==right_sum || left_sum ==right_sum){
		cout<<arr[0]<<"\n";
		return 0;
	}
	for (int i = 1; i < n; i++)
	{
		left_sum = left_sum + arr[i-1];
		right_sum = right_sum - arr[i];
		cout<<left_sum<<" "<<right_sum<<"\n";
		if(left_sum == right_sum){
			cout<<arr[i]<<"\n";
			break;
		}
		/* code */
	}

	return 0;
}