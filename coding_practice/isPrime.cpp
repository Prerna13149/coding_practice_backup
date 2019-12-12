/*
Check if a given number is prime or not
*/

#include <iostream>
using namespace std;
bool checkPrime(int n){
	if(n==2){
		return true;
	}
	else if(n<2){
		return false;
	}
	else{
		int i = 2;
		while(i < n){
			if(n%i == 0){
				return false;
			}
			i++;
		}
		return true;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(checkPrime(n)){
		cout<<"It is prime"<<"\n";
	}
	else{
		cout<<"It is not prime"<<"\n";
	}
	return 0;
}