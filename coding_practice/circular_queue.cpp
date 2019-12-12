/*
	Implement a circular queue
*/

#include <iostream>
using namespace std;

template<typename T>

class queue{
public:
	T* arr;
	int cs;
	int ts;
	int f;
	int r;
	queue(int p){
		arr = new int[p];
		cs = 0;
		ts = p;
		f = 0;
		r = p-1;
	}
	bool isFull(){
		return cs==ts;
	}
	bool isEmpty(){
		return cs==0;
	}
	void push(int data){
		if(!isFull()){
			r = (r+1)%ts;
			arr[r] = data;
			cs++;
		}
		
	}
	void pop(){
		if(!isEmpty()){
			cs--;
			f = (f+1)%ts;
		}
		
	}
	T getfront(){
		return arr[f];
	}

};
int main(int argc, char const *argv[])
{
	queue<int> q(4);
	for (int i = 1; i <= 6; i++)
	{
		q.push(i);
		/* code */
	}
	q.pop();
	q.push(8);
	while(!q.isEmpty()){
		cout<<q.getfront()<<"\n";
		q.pop();
	}
	return 0;
}
