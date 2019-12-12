/*
	Mergesort using recursion
*/

#include <iostream>
using namespace std;
void merge(int left[], int right[], int arr[], int s1, int s2, int e1, int e2){
	int i=s1;
	int j=s2;
	int k = s1;
	while(i<=e1 && j<=e1){
		if(left[i]<right[j]){
			arr[k] = left[i];
			i++;
			k++;
		}
		else{
			arr[k] = right[j];
			j++;
			k++;
		}
	}
	while(i<=e1){
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j<=e2){
		arr[k] = right[j];
		j++;
		k++;
	}
	return;
}
void mergesort(int arr[], int s, int e){
	if(s==e){
		return;
	}
	int mid = (s+e)/2;
	int left[1000];
	int right[1000];
	for (int i = s; i <= mid; i++)
	{
		left[i] = arr[i];
		/* code */
	}
	for (int i = s; i <= e; i++)
	{
		right[i] = arr[i];
		/* code */
	}
	mergesort(left, s, mid);
	mergesort(right, mid+1, e);
	merge(left, right, arr, s, mid+1, mid, e);
	
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
	mergesort(arr, 0, n-1);
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	return 0;
}