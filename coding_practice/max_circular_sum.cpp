#include<iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n){
	int cs = 0;
	int ms = INT_MIN;
	int maxi, maxj;
	for(int i=0;i<n;i++){
		cs = cs + arr[i];
		if(cs<0){
			cs = cs - arr[i];
			maxi = i+1;
		}
		if(cs>ms){
			ms = cs;
			maxj = i;
		}
	}
	int s = 0;
	for(int i=maxi;i<=maxj;i++){
		s = s + arr[i];
	}
	return s;
}
int findMaxSum(int arr[], int n){
	int sum = kadane(arr, n);
	int s = 0;
	for(int i=0;i<n;i++){
		s = s + arr[i];
		arr[i] = -1 * arr[i];
	}
	int sum2 = s + kadane(arr, n);
	cout<<sum<<" "<<sum2<<"\n";
	return max(sum, sum2);
}
int main() {
	int test;
	cin>>test;
	while(test--){
		int n;
		int arr[100000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<findMaxSum(arr, n)<<"\n";
	}
	return 0;
}