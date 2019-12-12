/*
	Square root of a number which is not a perfect square
*/

#include  <iostream>
using namespace std;

float squareRoot(int n, int prec){
	int j = 1;
	float step = 1;
	float i = 1;
	while(j <= prec){
		while(i*i<=n){
			//cout<<"here"<<i;
			//cout<<"step"<<step;
			i = i + step;
		}
		i = i - step;
		step = step/10.0;
		j++;
	}
	return i;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int prec;
	cin>>prec;
	cout<<squareRoot(n, prec)<<"\n";
	return 0;
}