/*
	Bubble sort
*/

#include <iostream>
using namespace std;

void bubleSort(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
			/* code */
		}
		/* code */
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[10000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	bubleSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}