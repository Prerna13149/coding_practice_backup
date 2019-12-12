#include <iostream>
using namespace std;

int ways(int mat[1000][1000], int i, int j, int n, int m){
	if(i==n-1 && j==(m-1)){
		return 1;
	}
	else if(i==(n-1)){
		return ways(mat, i, j+1, n, m);
	}
	else if(j==(m-1)){
		return ways(mat, i+1, j, n, m);
	}
	else{
		return ways(mat, i+1, j, n, m) + ways(mat, i, j+1, n, m);
	}
}

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	int mat[1000][1000]={0};
	
	cout<<ways(mat, 0, 0, n, m)<<"\n";
	return 0;
}