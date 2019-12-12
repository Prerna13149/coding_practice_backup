#include <iostream>
using namespace std;

void permute(int arr[], int n){
	int i = 0;
	int j = n-1;
	while(j>=0){
		int k = j-1;
		while(k>=0){
			if(arr[k]<arr[j]){
				swap(arr[k], arr[j]);
				return;
			}
			k--;
		}
		j--;
	}
}
int main(int argc, char const *argv[])
{
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[1000000];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			/* code */
		}
		permute(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<" ";
			/* code */
		}
	}
	return 0;
}