/*
	Reverse an array
*/

#include <iostream>
using namespace std;

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
	int i = n-1;
	while(i>=0){
		cout<<arr[i]<<" ";
		i--;
	}
	return 0;
}