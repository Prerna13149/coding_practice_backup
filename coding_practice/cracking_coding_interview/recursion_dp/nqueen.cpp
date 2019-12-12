/*
	arrange n queens in a NXN board 
*/

#include <iostream>
using namespace std;
bool isSafe(int mat[100][100], int x, int y, int n){
	for (int j = 0; j < n; j++)
	{
		if(mat[x][j] || mat[j][y]){
			return false;
		}
		/* code */
	}
	int p = x;
	int q = y;
	while(p>=0 && q>=0){
		if(mat[p][q]){
			return false;
		}
		p--;
		q--;
	}
	p = x;
	q = y;
	while(p<n && q>=0){
		if(mat[p][q]){
			return false;
		}
		p++;
		q--;
	}
	return true;
}
bool nqueen(int n, int i, int mat[100][100]){
	if(i==n){
		for(int l = 0;l<n;l++){
			for(int k = 0;k<n;k++){
				cout<<mat[l][k]<<" ";
			}
			cout<<"\n";
		}
		return true;
	}
	for(int j = 0;j<n;j++){
		bool safe = isSafe(mat, i, j, n);
		if(safe){
			mat[i][j] = 1;
			bool aage = nqueen(n, i+1, mat);
			if(aage){
				return true;
			}
			else{
				mat[i][j] = 0;
			}
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int mat[100][100] = {0};
	nqueen(n,0, mat);
	return 0;
}