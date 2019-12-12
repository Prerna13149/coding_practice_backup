#include <iostream>
#include <algorithm>
using namespace std;

bool pytha(int arr[], int n){
	for(int i=0;i<n;i++){
		int temp = arr[i]*arr[i];
		arr[i] = temp;
	}
	sort(arr, arr+n);
	int a = n-1;
	while(a>1){
		int s = 0;
		int e = a-1;
		while(s<e){
			if((arr[s] + arr[e])==arr[a]){
				return true;
			}
			else if((arr[s] + arr[e])>arr[a]){
				e--;
			}
			else{
				s++;
			}
		}
		a--;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(pytha(arr, n)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}