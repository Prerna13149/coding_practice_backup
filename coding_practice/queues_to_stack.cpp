/*
	Use 2 queues to implement a stack
*/

#include <iostream>
#include <queue>

using namespace std;

class queue_using_stack{
public:
	queue<int> q1;
	queue<int> q2;
	// queue_using_stack(){
	// 	q1 = new queue<int>();
	// 	q2 = new queue<int>();
	// }
	void mypush(int data){
		q1.push(data);
	}
	bool isempty(){
		return q1.empty();
	}
	void mypop(){
		if(q1.empty()){
			return;
		}
		int n = q1.size();
		while(n > 1){
			int t = q1.front();
			q1.pop();
			q2.push(t);
			n--;
		}
		q1.pop();
		swap(q1, q2);
		// while(!q2.empty()){
		// 	int t = q2.top();
		// 	q2.pop();
		// 	q1.push(t);
		// }
	}
	int mytop(){
		if(q1.empty()){
			return -1;
		}
		int n = q1.size();
		while(n > 1){
			int t = q1.front();
			q1.pop();
			q2.push(t);
			n--;
		}
		int ans = q1.front();
		q1.pop();
		q2.push(ans);
		swap(q1, q2);
		return ans;

	}
	void print(){
		while(!q1.empty()){
			cout<<q1.front()<<" ";
			q1.pop();
		}
		cout<<"\n";
	}
};

int main(int argc, char const *argv[])
{
	queue_using_stack obj;
	int n = 5;
	int i = 0;
	while(i <= 5){
		obj.mypush(i);
		i++;
	}
	while(!obj.isempty()){
		cout<<obj.mytop()<<" ";
		obj.mypop();
	}

	return 0;
}