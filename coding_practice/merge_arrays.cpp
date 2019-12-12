/*
Given two sorted arrays, array1 has m elements and is of size (m+n). Array2 has n elements. Merge the two arrays into one without any extra space
*/

#include<iostream>
using namespace std;
void mergeArray(int arr1[], int arr2[], int m, int n, int total){
	int i = m-1;
	int j = n-1;
	int k = total - 1;
	while(i>=0 && j>=0){
		if(arr1[i]>arr2[j]){
			arr1[k] = arr1[i];
			i--;
			k--;
		}
		else{
			arr1[k] = arr2[j];
			j--;
			k--;
		}
	}
	while(j>=0){
		arr1[k] = arr2[j];
		j--;
		k--;
	}
}

int main(int argc, char const *argv[])
{
	int arr1[10]={4, 8 , 10, 12, 15};
	int arr2[5]={1, 3, 5, 9, 11};
	mergeArray(arr1, arr2, 5, 5, 10);
	for (int i = 0; i < 10; i++)
	{
		cout<<arr1[i]<<" ";
		/* code */
	}
	return 0;
}