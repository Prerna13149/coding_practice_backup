/*
	Rat and maze problem
*/

#include <iostream>
using namespace std;

bool check_right(int mat[4][4], int m, int n, int i, int j){
	if(j==n||i==m){
		return false;
	}
	if(mat[i][j+1]!=-1){
		return true;
	}
	return false;
}
bool check_down(int mat[4][4], int m, int n, int i, int j){
	if(j==n||i==m){
		return false;
	}
	if(mat[i+1][j]!=-1){
		return true;
	}
	return false;
}

void rat_maze(int mat[4][4], int m,int n, int r, int c){
	if(m == r && n==c){
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout<<mat[i][j]<<" ";
				/* code */
			}
			cout<<"\n";
			/* code */
		}
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if(mat[r][i]==0){
			//cout<<"here"<<" ";
			mat[r][i] = 1;
			bool kyaright = check_right(mat, m, n, r, i);
			bool kyaneeche = check_down(mat, m, n, r, i);
			if(kyaright){
				rat_maze(mat, m, n, r, i+1);
			}
			else{
				
				if(kyaneeche){
					rat_maze(mat, m, n, r+1, i);
				}
			}
			
			if(!kyaneeche && !kyaright){
				mat[r][i] = 0;
			}
		}
		/* code */
	}
	// for (int i = 0; i < m; i++)
	// 	{
	// 		for (int j = 0; j < n; j++)
	// 		{
	// 			cout<<mat[i][j]<<" ";
	// 			/* code */
	// 		}
	// 		cout<<"\n";
	// 		/* code */
	// 	}
	return;
}

int main(int argc, char const *argv[])
{
	int mat[4][4]={{0, 0, 0, 0}, {0, 0, -1, -1}, {0, 0, 0, 0}, {-1, -1, 0, 0}};
	rat_maze(mat, 4, 4, 0, 0);
	return 0;
}