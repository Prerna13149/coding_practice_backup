/*
	Reverse a stack using one extra stack
*/

#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n){
	int i = 0;
	while(i < n){
		int t = s1.top();
		s1.pop();
		s2.push(t);
		i++;
	}
	return;
}
void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<"\n";
}
void reverse(stack<int> &s1, stack<int> &s2){
	for (int i = 0; i < s1.size(); i++)
	{
		int x = s1.top();
		s1.pop();
		int n_v = s1.size() - i;
		transfer(s1, s2, n_v);
		print(s2);
		s1.push(x);
		transfer(s2, s1, n_v);
		print(s1);
		/* code */
	}
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	return;
}

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
	stack<int> s1;
	stack<int> s2;
	int n = 5;
	int i=1;
	while(i<=n){
		s1.push(i);
		i++;
	}
	reverse(s1, s2);
	reverse_rec(s1);
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	cout<<"\n";
	return 0;
}