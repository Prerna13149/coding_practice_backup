/*
	N queens
*/

#include <iostream>
using namespace std;

bool isSafeToPut(int mat[100][100], int n, int r, int c){
	for (int i = 0; i < n; i++)
	{
		if(mat[i][c]||mat[r][i]||mat[r][c]){
			return false;
		}
		/* code */
	}
	int temp_r = r;
	int temp_c = c;
	while(temp_r < n && temp_c < n){
		if(mat[temp_r][temp_c]){
			return false;
		}
		temp_c = temp_c + 1;
		temp_r = temp_r + 1;
	}
	temp_r = r;
	temp_c = c;
	while(temp_r>=0 && temp_c>=0){
		if(mat[temp_r][temp_c]){
			return false;
		}
		temp_c = temp_c - 1;
		temp_r = temp_r - 1;
	}

	return true;
}
bool nqueen(int mat[100][100], int n, int i){
	if(i==n){
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				cout<<mat[j][k]<<" ";
				/* code */
			}
			cout<<"\n";
			/* code */
		}
		return true;

	}

	for (int c = 0; c < n; c++)
	{
		bool safety = isSafeToPut(mat, n, i, c);
		if(safety){
			mat[i][c] = 1;
			bool kyaAgeRakhPayi = nqueen(mat, n, i+1);
			if(!kyaAgeRakhPayi){
				mat[i][c] = 0;
			}

		}
		/* code */
	}
	return false;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int mat[100][100]={0};
	nqueen(mat, n, 0);
	return 0;
}