/*
	Bubble sort recursion
*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int i){
	if(i==n){
		return;
	}
	for (int i = 0; i < n; i++)
	{
		/* code */
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	bubbleSort(arr, 0, n-1, 0);
	return 0;
}