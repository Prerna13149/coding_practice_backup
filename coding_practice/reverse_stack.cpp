/*
	Reverse a stack
*/

#include <iostream>
#include <stack>
using namespace std;

void insert_bottom(stack<int> &s, int ele){
	if(s.empty()){
		s.push(ele);
		return;
	}
	int y = s.top();
	s.pop();
	insert_bottom(s, ele);
	s.push(y);
}
void reverse_rec(stack<int> &s){
	if(s.empty()){
		return;
	}
	int t = s.top();
	s.pop();
	reverse_rec(s);
	insert_bottom(s, t);

}
int main(int argc, char const *argv[])
{
	int n = 5;
	stack<int> s;
	int i=0;
	int num;
	while(i<n){
		s.push(i);
		i++;
	}
	reverse_rec(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}