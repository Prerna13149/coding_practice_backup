/*
Print the pattern:
N=5
*
* *
* * *
* * * *
* * * * *

*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int line = 1;
	while(line <= n){
		int ele = 1;
		while(ele <= line){
			cout<<"*"<<"\t";
			ele++;
		}
		cout<<"\n";
		line++;
	}
	return 0;
}