#include <iostream>
using namespace std;

void leftmost(int arr[], int s, int e, int ele, int &ans){
	if(s>e){
		//ans = -1;
		return;
	}
	int mid = (s+e)/2;
	//cout<<mid<<"\n";
	if(arr[mid] == ele){
		ans = mid;
		leftmost(arr, s, mid-1, ele, ans);
		return;
	}
	if(arr[mid] > ele){
		leftmost(arr, s, mid-1, ele, ans);
		return;
	}
	else{
		leftmost(arr, mid+1, e, ele, ans);
		return;
	}
}

void rightmost(int arr[], int s, int e, int ele, int &ans){
	if(s>e){
		//ans = -1;
		return;
	}
	int mid = (s+e)/2;
	//cout<<mid<<"\n";
	if(arr[mid] == ele){
		ans = mid;
		rightmost(arr, mid+1, e, ele, ans);
		return;
	}
	if(arr[mid] > ele){
		rightmost(arr, s, mid-1, ele, ans);
		return;
	}
	else{
		rightmost(arr, mid+1, e, ele, ans);
		return;
	}
}

int main(){
	int arr[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ele;
	cin>>ele;
	int ans = -1;
	int r = -1;
	leftmost(arr, 0, n-1, ele, ans);
	cout<<ans<<"\n";
	rightmost(arr, 0, n-1, ele, r);
	cout<<r<<"\n";
}

