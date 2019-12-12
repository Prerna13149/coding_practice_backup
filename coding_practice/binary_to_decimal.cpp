/*
Convert binary to decimal
*/

#include <iostream>
#include <cmath>
using namespace std;

int convert_decimal_2_binary(int n){
	int ans = 0;
	int i=0;
	while(n>0){
		ans = ans + (n%2 * pow(10, i));
		n = n/2;
		i++;
	}
	return ans;
}

int convert_to_decimal(int n){
	int ans = 0;
	int i = 0;
	while(n>0){
		ans = ans + (n%10 * pow(2, i));
		i++;
		n = n/10;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int bin = convert_decimal_2_binary(n);
	cout<<bin<<"\n";
	cout<<convert_to_decimal(bin)<<"\n";
	return 0;
}