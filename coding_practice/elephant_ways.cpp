/*
	Ways to reach (i, j) for an elephant
*/
#include <iostream>
using namespace std;

int find_ways(int r, int c){
	if(r==0 && c==0){
		return 1;
	}
	else if(r==0){
		int ways=0;
		while(c>0){
			ways = ways + find_ways(r,c-1);
			c--;
		}
		return ways;
	}
	else if(c==0){
		int ways=0;
		while(r>0){
			ways = ways + find_ways(r-1,c);
			r--;
		}
		return ways;
	}
	else{
		return find_ways(r-1, c) + find_ways(r, c-1);
	}
}

int main(int argc, char const *argv[])
{
	int r;
	int c;
	cin>>r>>c;
	cout<<find_ways(r, c)<<"\n";
	return 0;
}