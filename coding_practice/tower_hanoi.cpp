/*
	Tower of hanoi
*/

#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
	if(n==0){
		return;
	}
	hanoi(n-1, a, c, b);
	cout<<"TRansferring "<<n<<" from "<<a<<" to "<<c<<"\n";
	hanoi(n-1, b, a, c);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char s = 'A';
	char h = 'B';
	char d = 'C';
	hanoi(n, s, h, d);
	return 0;
}