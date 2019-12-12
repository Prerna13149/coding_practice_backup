#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int diff = -1;
	int ct = 0;
	for(int i=0;i<n-1;i++){
		diff = arr[i+1]-arr[i];
		if(diff<0){
			ct++;
		}
	}
	if(ct<=1){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}