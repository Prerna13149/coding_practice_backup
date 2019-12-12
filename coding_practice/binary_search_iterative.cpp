#include<iostream>
using namespace std;

int binarySearch(int arr[], int st, int end, int num){
	if(st > end){
		return -1;
	}
	int mid = (st + end)/2;
	if(arr[mid]==num){
		return mid;
	}
	else if(arr[mid] > num){
		return binarySearch(arr, st, mid-1, num);
	}
	else{
		return binarySearch(arr, mid+1, end, num);	
	}

}

int main(int argc, char const *argv[])
{
	int arr[1000];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	int num;
	cin>>num;
	cout<<binarySearch(arr, 0, n-1, num)<<"\n";
	return 0;
}