/*
	Find magic number. Given a sorted array of  distinct A[0..n-1], find a no. such that A[i]=i
*/

#include <iostream>
using namespace std;

int findMagic(int arr[], int s, int e){
	if(s>e){
		return -1;
	}
	int mid = (s+e)/2;
	if(arr[mid]==mid){
		return mid;
	}
	if(arr[mid]<mid){
		return findMagic(arr, mid+1, e);
	}
	return findMagic(arr, mid-1, e);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	cout<<findMagic(arr, 0, n-1)<<"\n";
	return 0;
}