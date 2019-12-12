/*
	Given an array and a number X. Find the number of pairs which sum to X
*/

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int st, int end, int num){
	if(st>end){
		return -1;
	}
	int mid = (st+end)/2;
	if(arr[mid]==num){
		return mid;
	}
	else if(arr[mid]>num){
		return binarySearch(arr, st, mid-1, num);
	}
	else{
		return binarySearch(arr, mid+1, end, num);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[10000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int x;
	cin>>x;
	sort(arr, arr+n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = x - arr[i];
		if(sum==0){
			count++;
			//continue;
		}
		int ans = binarySearch(arr, i+1, n-1, sum);
		if(ans!=-1){
			count++;
		}
		/* code */
	}
	cout<<count<<"\n";
	return 0;
}