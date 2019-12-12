#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int s, int e, int ele){
    if(s>=e){
        return -1;
    }
    int mid = (s+e)/2;
    if(arr[mid]==ele){
        return mid;
    }
    else if(arr[mid]>ele){
        return binarySearch(arr, s, mid-1, ele);
    }
    else{
        return binarySearch(arr, mid+1, e, ele);
    }
}

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    int arr2[100000];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr2[i] = arr[i];
	    }
	    sort(arr2, arr2+n);
	    for(int i=0;i<n;i++){
	        cout<<arr2[i]<<" ";
	    }
	    for(int i=0;i<n;i++){
	        int a = binarySearch(arr2, 0, n-1, arr[i]);
	        cout<<a<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}