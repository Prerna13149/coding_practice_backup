/*
Print pattern:
n=4
 A
 A B
 A B C
 A B C D
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int line = 1;
	while(line<=n){
		int ele = 1;
		char ch = 'A';
		while(ele<=line){
			cout<<ch<<" ";
			ele++;
			ch++;
		}
		cout<<"\n";
		line++;
	}
	return 0;
}