/*
	n staircase
*/
#include <iostream>
using namespace std;

int get_stair(int n){
	if(n==0){
		return 1;
	}
	if(n==1||n==2){
		return n;
	}
	return get_stair(n-1) + get_stair(n-2) + get_stair(n-3);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<get_stair(n)<<"\n";
	return 0;
}