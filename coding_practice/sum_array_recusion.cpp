/*
	Sum of elements of an array
*/

#include <iostream>
using namespace std;

int getSum(int arr[], int n, int i, int &sum){
	if(i==n){
		return sum;
	}
	sum = sum + arr[i];
	return getSum(arr, n, i+1, sum);
}

int search(int arr[], int n, int i, int k){
	if(i==n){
		return -1;
	}
	if(arr[i]==k){
		return i;
	}
	return search(arr, n, i+1, k);
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
	int sum = 0;
	cout<<getSum(arr, n, 0, sum)<<"\n";
	int k;
	cin>>k;
	cout<<search(arr, n, 0, k)<<"\n";
	return 0;
}