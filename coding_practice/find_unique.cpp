/*
	Every number occurs twice except one number. Find that number
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ans = 0;
	int i=0;
	int num;
	while(i < n){
		cin>>num;
		ans = ans^num;
		i++;
	}
	cout<<ans<<"\n";

	return 0;
}