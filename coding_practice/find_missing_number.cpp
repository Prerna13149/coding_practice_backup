/*
	Find the Missing Number

You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

Example :

Input: arr[] = {1, 2, 4,, 6, 3, 7, 8}
Output: 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
*/

#include <iostream>
using namespace std;

int missing_num_app1(int arr[], int n){
	int sum = (n * (n+1))/2;
	int s = 0;
	for (int i = 0; i < n-1; i++)
	{
		s = s + arr[i];
		/* code */
	}
	return sum - s;

}

int missing_num_app2(int arr[], int n){
	int xor1 = 0;
	int xor2 = 0;
	for (int i = 1; i <=n; i++)
	{
		xor1 = xor1^i;
		/* code */
	}
	for (int i = 0; i < n-1; i++)
	{
		xor2 = xor2 ^ arr[i];
		/* code */
	}
	return xor2^xor1;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i < n-1; i++)
	{
		cin>>arr[i];
		/* code */
	}
	cout<<missing_num_app1(arr, n)<<"\n";
	cout<<missing_num_app2(arr, n)<<"\n";
	return 0;
}