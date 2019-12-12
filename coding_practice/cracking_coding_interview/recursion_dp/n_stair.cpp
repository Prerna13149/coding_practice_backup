/*
	NO ways to reach a nth stair.
*/

#include <iostream>
using namespace std;

int nways(int n){
	if(n<=0){
		return 1;
	}
	if(n==1||n==2){
		return n;
	}
	return nways(n-1) + nways(n-2) + nways(n-3);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<nways(n)<<"\n";
	return 0;
}