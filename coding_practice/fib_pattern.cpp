/*
FIBONACCI PATTERN (PATTERN 4)
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34


Constraints:
0 < N < 100

Sample Input:
4
Sample Output:
0 
1    1 
2    3     5 
8   13    21    34
Explanation:
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int line = 1;
	int a = 0;
	int b = 1;
	int c = 0;
	int ct = 0;
	while(line <= n){
		int ele = 1;
		while(ele <= line){
			if(ct == 0||ct == 1){
				cout<<ct<<" ";
				ct++;
			}
			else{
				c = a+b;
				cout<<c<<" ";
				a = b;
				b = c;
			}
			ele++;
		}
		cout<<"\n";
		line++;
	}
	return 0;
}