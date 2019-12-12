/*
	Given an array, sort the array using selection sort
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			if(arr[min]>arr[j]){
				min = j;
			}
			/* code */
		}
		swap(arr[i], arr[min]);
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
	selectionSort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}