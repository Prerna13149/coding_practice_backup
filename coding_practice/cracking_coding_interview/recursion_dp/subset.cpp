/*
	Find all the subsets of a set
*/

#include <iostream>
#include <vector>
using namespace std;

void findSubsets(int arr[], int i, int n, vector<int> soln){
	if(i==n){
		for (int j = 0; j < soln.size() ; j++)
		{
			cout<<soln[j]<<" ";
			/* code */
		}
		cout<<"\n";
		return;
	}
	findSubsets(arr, i+1, n, soln);
	soln.push_back(arr[i]);
	findSubsets(arr, i+1, n, soln);
}
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	int arr[100];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		/* code */
	}
	vector<int> soln;
	findSubsets(arr, 0, n, soln);
	return 0;
}