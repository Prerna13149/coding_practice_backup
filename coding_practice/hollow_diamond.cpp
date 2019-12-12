/*
HOLLOW DIAMOND PATTERN(PATTERN 6)
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

Constraints:
0 < N < 10 (where N is an odd number)

Sample Input:
5
Sample Output:
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
Explanation:
Each '*' is separated from other by a tab.

Time Limit: 2 sec
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int half = (n+1)/2;
	int line = 1;
	while(line <= half){
		int ele = 1;
		while(ele <= (half-line+1)){
			cout<<"*";
			ele++;
		}
		int sp=1;
		while(sp<=(line-1)){
			cout<<" ";
			sp++;
		}
		sp=1;
		while(sp<(line-1)){
			cout<<" ";
			sp++;
		}
		ele=1;
		if(line==1){
			while(ele < (half-line+1)){
				cout<<"*";
				ele++;
			}
		}
		else{
			while(ele <= (half-line+1)){
			cout<<"*";
			ele++;
			}
		}
		
		cout<<"\n";
		line++;
	}
	line = half-1;
	while(line > 0){
		int ele = 1;
		while(ele <= (half-line+1)){
			cout<<"*";
			ele++;
		}
		int sp=1;
		while(sp<=(line-1)){
			cout<<" ";
			sp++;
		}
		sp=1;
		while(sp<(line-1)){
			cout<<" ";
			sp++;
		}
		ele=1;
		if(line==1){
			while(ele < (half-line+1)){
				cout<<"*";
				ele++;
			}
		}
		else{
			while(ele <= (half-line+1)){
			cout<<"*";
			ele++;
			}
		}
		
		cout<<"\n";
		line--;
	}
	return 0;
}