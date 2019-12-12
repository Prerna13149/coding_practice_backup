/*
	Every number in an array orrcus thrice except one number, find that number
*/
#include <iostream>
#include <cmath>
using namespace std;

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
	int bit_arr[32]={0};
	int k = 31;
	for (int i = 0; i < n; i++)
	{
		int n = arr[i];
		k = 31;
		while(n!=0){
			int set = n & 1;
			bit_arr[k] = (bit_arr[k] + set)%3;
			k--;
			n = n>>1;
		}
		/* code */
	}
	// for (int i = 0; i < 32; i++)
	// {
	// 	cout<<bit_arr[i];
	// 	/* code */
	// }
	int num = 0;
	int j = 0;
	for (int i = 31; i >= 0; i--)
	{
		num = num + bit_arr[i]*pow(2, 31-i);
		/* code */
	}
	cout<<num<<"\n";

	return 0;
}