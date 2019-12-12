/*
	Spiral printing
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int r;
	int c;
	cin>>r>>c;
	int arr[1000][1000]={0};
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin>>arr[i][j];
			/* code */
		}
		/* code */
	}
	int sr = 0;
	int er = r-1;
	int sc = 0;
	int ec = c-1;
	while(sc<=ec){
		cout<<arr[sr][sc]<<" ";
		sc++;
	}
	//sc--;
	sr++;
	while(sr<=er){
		cout<<arr[sr][sc]<<" ";
		sr++;
	}
	sr--;
	while(sc>=0){
		cout<<arr[er][sc]<<" ";
		sc--;
	}
	sc++;
	// while(er>=){

	// }

	// sr--;
	// ec--;
	// while(ec>=sc)
	return 0;
}