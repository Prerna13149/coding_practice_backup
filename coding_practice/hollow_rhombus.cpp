/*
HOLLOW RHOMBUS PATTERN
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.


Input Format:
Single integer N.

Constraints:
N <= 20

Output Format:
Print pattern.

Sample Input:
5
Sample Output:
    *****
   *   *
  *   *
 *   *
*****
Explanation:
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

Time Limit: 1 sec
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int line = 1;
	while(line <= n){
		int sp = 1;
		while(sp<=(n-line)){
			cout<<" ";
			sp++;
		}
		cout<<"*";
		if(line==1 || line==n){
			int ct = 1;
			while(ct<=(n-2)){
				cout<<"*";
				ct++;
			}
		}
		else{
			int ct = 1;
			while(ct<=(n-2)){
				cout<<" ";
				ct++;
			}
		}
		cout<<"*";
		cout<<"\n";
		line++;
	}
	return 0;
}
