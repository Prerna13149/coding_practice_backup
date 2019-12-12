/*
Largest of n numbers
*/
#include <iostream>
#include <climits>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i = 0;
	int num;
	int max_num = INT_MIN;
	while(i < n){
		cin>>num;
		if(num > max_num){
			max_num = num;
		}
		i++;
	}
	cout<<max_num<<"\n";
	return 0;
}