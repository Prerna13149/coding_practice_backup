#include <iostream>

using namespace std;

bool pytha(int arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				int a = arr[i] * arr[i];
				int b = arr[j] * arr[j];
				int c = arr[k] * arr[k];
				if(a==(b+c) || b==(c+a) || c==(a+b)){
					return true;
				}
			}
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int arr[100000];
	int n;
	cin>>n;
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