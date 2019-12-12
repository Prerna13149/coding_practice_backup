/*
	Find subarrays of a given  - subarays are continous in occurence
*/
#include <iostream>
using namespace std;

void print_arr(int arr[], int s, int e){
	while(s<=e){
		cout<<arr[s];
		s++;
	}
	return;
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

	for (int i = 0; i < n; i++)
	{
		int st = i;
		for (int j = i; j < n; j++)
		{
			print_arr(arr, st, j);
			cout<<"\n";
			/* code */
		}
		/* code */
	}
	return 0;
}