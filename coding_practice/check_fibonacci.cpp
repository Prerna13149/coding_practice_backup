/*
CHeck if a number is a part of the fibonnaci series
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a=0;
	int b=1;
	int c=0;
	while(c<=n){
		if(c==n){
			cout<<"True, it is a part of fibonnaci"<<"\n";
			return 0;
		}
		c = a + b;
		a = b;
		b = c;

	}
	cout<<"False, it is not a part of fibonnaci"<<"\n";
	return 0;
}