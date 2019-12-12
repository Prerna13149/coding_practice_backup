#include<iostream>
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
int length(node* head){
	if(head==NULL){
		return 0;
	}
	int i=0;
	while(head!=NULL){
		i++;
		head = head->next;
	}
	return i;
}
void printLink(node* head){
	if(head==NULL){
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	return;
}
void delete_head(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head==tail){
		head = NULL;
		tail = NULL;
	}
	else{
		node* temp= head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
}
void delete_tail(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head==tail){
		head = NULL;
		tail = NULL;
	}
	else{
		node* temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}
		temp->next=NULL;
		tail = temp;
	}
}
void delete_node(node* &head, node* &tail, int a){
	if(head==NULL){
		return;
	}
	int n = length(head);
	//cout<<"length: "<<n<<"\n";
	if(a>n){
		//printLink(head);
		return;
	}
	if(a==0){
		delete_head(head, tail);
		return;
	}
	if(a==n-1){
		delete_tail(head, tail);
		return;
	}
	else{
		int j = 0;
		node* curr=head;
		node* prev=NULL;
		while(j!=a){
			prev= curr;
			curr=curr->next;
			//cout<<"here"<<" "<<j<<""<<curr->data<<"\n";
			j++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		//delete curr;
	}
	//printLink(head);
	return;
}
int main() {
	int n, q;
	cin>>n>>q;
	int i=0;
	int num;
	node* head = NULL;
	node* tail = NULL;
	while(i<n){
		cin>>num;
		node* new_node = new node(num);
		if(i==0){
			head = new_node;
			tail = head;
		}
		else{
			tail->next = new_node;
			tail = new_node;
		}
		i++;
	}
	//printLink(head);
	int j=0;
	while(j<q){
		cin>>num;
		delete_node(head, tail, num);
		printLink(head);
		cout<<"\n";
		j++;
	}
	return 0;
}