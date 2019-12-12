/*
	CReating stack class 
*/

#include <iostream>
#include <vector>
using namespace std;

class stack{
public:
	vector<int>v;
	int cs;
	stack(){
		cs = 0;
	}
	void push(int data){
		v.push_back(data);
		cs++;
	}
	int getSize(){
		return cs;
	}
	void pop(){
		v.erase(v.end()-1);
		cs--;
	}
	bool isEmpty(){
		return v.size()==0;
	}
	int top(){
		return v[v.size()-1];
	}
};
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	stack s;
	while(i<n){
		cin>>num;
		s.push(num);
		i++;
	}
	while(!s.isEmpty()){
		cout<<s.top()<<"\n";
		s.pop();
	}
	/* code */
	return 0;
}