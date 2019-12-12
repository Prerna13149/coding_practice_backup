/*
	Print array using recusion
*/

#include <iostream>
using namespace std;

void print_array(int arr[], int s, int e, int i){
	if(i>e){
		return;
	}
	cout<<arr[i]<<" ";
	print_array(arr, s, e, i+1);
	return;
}

bool checkSorted(int arr[], int s, int e, int i){
	if(i >= e){
		return true;
	}
	if(arr[i]>arr[i+1]){
		return  false;
	}
	else{
		return checkSorted(arr, s, e, i+1);
	}

}
int checkSorted_topdown(int arr[], int s, int e, int i, int dp[]){
	if(i>=e){
		dp[i] = 1;
	}
	if(dp[i]!=-1){
		return dp[i];
	}
	if(arr[i]>arr[i+1]){
		dp[i] = 0;
		return  dp[i];
	}
	else{
		dp[i] = checkSorted_topdown(arr, s, e, i+1, dp);
		return dp[i];
	}
}
int main(int argc, char const *argv[])
{
	int arr[10000];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	print_array(arr, 0, n-1, 0);
	if(checkSorted(arr, 0, n-1, 0)){
		cout<<"Sorted "<<"\n";
	}
	else{
		cout<<"Unsorted "<<"\n";
	}
	//Using dp
	int dp[1000];
	for (int i = 0; i < n; i++)
	{
		dp[i] = -1;
		/* code */
	}
	cout<<"Answer from dp: ";
	if(checkSorted_topdown(arr, 0, n-1, 0, dp)){
		cout<<"Sorted "<<"\n";
	}
	else{
		cout<<"Unsorted "<<"\n";
	}
	return 0;
}