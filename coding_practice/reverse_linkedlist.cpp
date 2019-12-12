/*
	Reverse a linked list
*/

#include <iostream>
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

void insert(node* &head, node* &tail, int data){
		node* new_node = new node(data);
		if(head==NULL){
			head = new_node;
			tail = head;
			return;
		}
		node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = new_node;
		tail = new_node;
		return;
}
void print_list(node* head){
	if(head==NULL){
		return;
	}
	while(head!=NULL){
		cout<<head->data<<"--->";
		head  = head  -> next;
	}
	cout<<"\n";
	return;
}

void reverse(node* &head){
	if(head==NULL || head->next==NULL){
		return;
	}
	node* curr = head;
	node* prev = NULL;
	node* next;//curr->next;
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	node* head = NULL;
	node* tail = NULL;
	int i=0;
	int num;
	while(i<n){
		cin>>num;
		insert(head, tail, num);
		i++;
	}
	print_list(head);
	reverse(head);
	print_list(head);
	return 0;
}