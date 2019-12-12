/*
	Ways to reach a particular (i, j)
*/

#include <iostream>
using namespace std;

int find_ways(int mat[100][100], int i, int j){
	if(i==0 && j==0){
		//mat[i][j] = 1;
		return 1;
	}
	else if(j==0){
		//mat[i][j] = find_ways(mat, r, c, i-1, j);
		return find_ways(mat, i-1, j);
	}
	else if(i==0){
		//mat[i][j] = find_ways(mat, r, c, i, j+1);
		return find_ways(mat, i, j-1);
	}
	else{
		//mat[i][j] = find_ways(mat, r, c, i-1, j) + find_ways(mat, r, c, i, j+1);
		return find_ways(mat, i-1, j) + find_ways(mat, i, j-1);
	}

}

int main(int argc, char const *argv[])
{
	int r;
	int c;
	cin>>r>>c;
	int mat[100][100]={0};
	cout<<find_ways(mat, r, c)<<"\n";
	// for (int i = 0; i < r; i++)
	// {
	// 	for (int j = 0; j < c; j++)
	// 	{
	// 		cout<<mat[i][j]<<" ";
	// 		/* code */
	// 	}
	// 	cout<<"\n";
	// 	/* code */
	// }
	return 0;
}