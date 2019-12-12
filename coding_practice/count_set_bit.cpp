/*
	count number of set bits in a given number
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int mask = 1;
	int count = 0;
	while(n>0){
		int a = n & mask;
		count = count + a;
		n = n>>1; 
	}
	cout<<count<<"\n";
	return 0;
}