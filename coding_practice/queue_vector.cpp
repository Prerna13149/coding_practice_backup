/*
	Implement queue using vectors
*/

#include <iostream>
#include <vector>
using namespace std;

class queue{
public:
	vector<int> v;
	int cs;
	queue(){
		cs = 0;
	}
	void push(int data){
		v.push_back(data);
		cs++;
	}
	void pop(){
		v.erase(v.begin());
		cs--;
	}
	bool empty(){
		return v.size()==0;
	}
	int front(){
		return v[0];
	}
	int size(){
		return v.size();
	}
};

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	queue q;
	while(i<n){
		cin>>num;
		q.push(num);
		i++;
	}
	while(!q.empty()){
		cout<<q.front()<<"\n";
		q.pop();
	}
	return 0;
}