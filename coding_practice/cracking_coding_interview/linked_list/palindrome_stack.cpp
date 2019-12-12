/*
	Check if the given linkedlist is palindrome using stack
*/
#include <iostream>
#include <stack>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void insert(node* &head, node* &tail, int num){
	node* new_node = new node(num);
	if(head==NULL){
		head = new_node;
		tail = head;
	}
	else{
		node* curr = head;
		while(curr->next!=NULL){
			curr = curr->next;
		}
		curr->next = new_node;
		tail = new_node;
	}
}

void print(node* head){
	if(head==NULL){
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

bool check_palindrome(node* head){
	if(head==NULL||head->next==NULL){
		return true;
	}
	stack<int> stk;
	node* s = head;
	node* f = head->next;
	cout<<"here";
	while(f!=NULL && f->next!=NULL){
		stk.push(s->data);
		s = s->next;
		f = f->next->next;
	}
	cout<<"here";
	if(f->next==NULL){
		//stk.push(s->data);
		s = s->next;
	}
	
	int t;
	while(s!=NULL){
		t = stk.top();
		if(t!=s->data){
			return false;
		}
		stk.pop();
		s = s->next;
	}

	return true;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=0;
	int num;
	node* head = NULL;
	node* tail = NULL;
	while(i<n){
		cin>>num;
		insert(head, tail, num);
		i++;
	}
	print(head);
	check_palindrome(head);
	// if(check_palindrome(head)){
	// 	cout<<"Palindrome"<<"\n";
	// }
	// else{
	// 	cout<<"Not a palindrome"<<"\n";
	// }
	return 0;
}