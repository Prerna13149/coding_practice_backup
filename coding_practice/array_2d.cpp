/*
	Wave print a 2D array
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[100][100]={0};
	int r;
	int c;
	cin>>r>>c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin>>arr[i][j];
			/* code */
		}
		/* code */
	}
	int i, j;
	cout<<"\n";
	for (i = 0; i < c; i++)
	{
		if(i%2==0){
			for (j = 0; j < r; j++)
			{
				cout<<arr[j][i]<<" ";
				/* code */
			}
		}
		else{
			for (j = r-1; j >=0 ; j--)
			{
				cout<<arr[j][i]<<" ";
				/* code */
			}
		}
		
		/* code */
	}
	return 0;
}