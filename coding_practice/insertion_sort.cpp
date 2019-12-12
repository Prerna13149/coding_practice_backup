/*
	Insertion Sort

*/

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = i-1; j >=0 ; j--)
		{
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
			else{
				break;
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
	insertion_sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}