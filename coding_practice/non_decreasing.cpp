#include <iostream>
using namespace std;

bool non_dec(int res[], int n){
	int ct = 0;
	for(int i=1;i<n;i++){
		if(res[i]>res[i-1]){
			ct++;
			if(i==1 || (res[i]>res[i-2])){
				res[i-1] = res[i];
			}
			else{
				res[i-1] = res[i-2];
			}
		}
	}
	if(ct<=1){
		return true;
	}
	else{
		return false;
	}
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(non_dec(arr, n)){
		cout<<"true"<<"\n";
	}
	else{
		cout<<"false"<<"\n";
	}
	return 0;
}