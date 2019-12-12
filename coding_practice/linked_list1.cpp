/*
	Linked list functions
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

void print_linkedlist(node* head){
	if(head==NULL){
		return;
	}
	while(head!=NULL){
		cout<<head->data<<"-->";
		head = head ->next;
	}
	return;
}

void insertion_at_front(node* &head, node* &tail, int data){
	if(head==NULL && tail == NULL){
		node* temp = new node(data);
		head = temp;
		tail = temp;
	}
	else{
		node* temp = new node(data);
		temp->next = head;
		head = temp;
	}
	return;
}

void insert_at_end(node* &head, node* &tail, int data){
	if(head==NULL){
		return;
	}

	node* temp = new node(data);
	tail->next = temp;
	tail = temp;
	return;
}

int length(node* head){
	int ct = 0;
	if(head==NULL){
		return 0;
	}
	else{
		while(head!=NULL){
			ct++;
			head = head -> next;
		}
		return ct;
	}
}

void insert_at_pos(node* &head, node* &tail, int n, int data){
	if(head==NULL){
		return;
	}
	int len = length(head);
	if(n>(len+1)){
		return;
	}
	else{
		if(n==0){
			insertion_at_front(head, tail, data);
		}
		else if(n==len){
			node* temp = new node(data);
			tail->next = temp;
			tail = temp;
		}
		else{
			node* temp = new node(data);
			node* temp2 = head;
			int ct = 1;
			while(ct<n){
				temp2 = temp2->next;
				ct++;
			}
			node* temp3 = temp2->next;
			temp2->next = temp;
			temp->next = temp3;
		}
			return;
		}

}


node* nth_node_from_end(node* head, int n){
	int len = length(head);
	if(head==NULL){
		return head;
	}
	if(n>len){
		return NULL;
	}
	node* s = head;
	int ct = 0;
	while(ct<n){
		s = s->next;
		ct++;
	}
	//cout<<"Here"<<"\n";
	node* f = head;
	while(s!=NULL && s->next!=NULL){
		f = f->next;
		s = s->next;
	}
	//cout<<"Here"<<"\n";
	return f;
}

bool detect_cycle(node* head, node* tail){
	if(head==NULL || head->next==NULL){
		return false;
	}
	node* s = head;
	node * f = head->next;
	while(f!=NULL && f->next!=NULL){
		if(s==f){
			return true;
		}
		s = s->next;
		f = f->next->next;
	}
	return false;
}

node* mid_point(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* slow = head;
	node* fast = head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;

}

node* search(node* head, int data){
	if(head==NULL){
		return head;
	}
	node* temp = head;
	while(temp!=NULL){
		if(temp->data == data){
			return temp;
		}
		temp = temp -> next;
	}
	return temp;
}

void delet_front(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		delete head;
		head = NULL;
		tail = NULL;
	}
	else{
		node* temp = head;
		head = head->next;
		delete temp;

	}
}

void delete_end(node* &head, node* &tail){
	if(head==NULL){
		return;
	}
	if(head==tail){
		delete head;
		head = NULL;
		tail = NULL;
	}
	else{
		node* temp = head;
		while(temp->next!=tail){
			temp = temp->next;
		}
		temp->next = NULL;
		delete tail;
		tail = temp;
	}
}

void delete_pos(node* &head, node* &tail, int n){
	if(head==NULL){
		return;
	}
	if(n==1){
		delet_front(head, tail);
		return;
	}

	int len = length(head);
	if(n==len){
		delete_end(head, tail);
	}
	else{
		int i=1;
		node* temp = head;
		while(i<n){
			temp = temp->next;
			i++;
		}
		node* s = temp->next->next;
		delete temp->next;
		temp->next = s;
		return;

	}
}

node* merge(node* &head1, node* &head2){
	if(head1==NULL && head2==NULL){
		return head1;
	}
	else if(head1==NULL){
		return head2;
	}
	else if(head2==NULL){
		return head1;
	}
	else{
		node* temp;
		if(head1->data < head2->data){
			temp = head1;
			temp->next = merge(head1->next, head2);
		}
		else{
			temp = head2;
			temp->next = merge(head1, head2->next);
		}
		return temp;
	}
}

node* mergeSort(node* &head){
	if(head == NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}
	node* mid = mid_point(head);
	node* temp = mid->next;
	mid->next = NULL;
	node* left = mergeSort(head);
	node* right = mergeSort(temp);
	return merge(left, right);
}

void reverse(node* &head){
	if(head==NULL||head->next==NULL){
		return;
	}
	node* curr= head;
	node* prev = NULL;
	node* n;
	while(curr){
		n = curr->next;
		curr->next = prev;
		prev = curr;
		curr= n;
	}
	head  = prev;

}

int main(int argc, char const *argv[])
{

	node* head = NULL;
	node* tail = NULL;
	insertion_at_front(head, tail, 5);
	insertion_at_front(head, tail, 4);
	insertion_at_front(head, tail, 3);
	insertion_at_front(head, tail, 2);
	insertion_at_front(head, tail, 1);
	//tail->next = head;
	print_linkedlist(head);
	cout<<"\n";
	cout<<length(head)<<"\n";
	node* ans = mid_point(head);
	if(ans!=NULL){
		cout<<"mid point is "<<ans->data<<"\n";
	}
	int n;
	cin>>n;
	node* nth_node = nth_node_from_end(head, n);
	if(nth_node!=NULL){
		cout<<"Nth node from end is "<<nth_node->data<<"\n";
	}
	if(detect_cycle(head, tail)){
		cout<<"Cycle is detected"<<"\n";
	}
	insert_at_pos(head, tail, 2, 10);
	print_linkedlist(head);
	cout<<"\n";
	insert_at_end(head, tail, 12);
	insert_at_end(head, tail, 13);
	insert_at_end(head, tail, 14);
	insert_at_end(head, tail, 15);
	print_linkedlist(head);
	cout<<"\n";
	node *found = search(head, 12);
	if(found!=NULL){
		cout<<"Found data"<<"\n";
	}
	delet_front(head, tail);
	delete_end(head, tail);
	print_linkedlist(head);
	cout<<"\n";
	delete_pos(head, tail, 2);
	print_linkedlist(head);
	cout<<"\n";
	mergeSort(head);
	print_linkedlist(head);
	cout<<"\n";
	reverse(head);
	print_linkedlist(head);
	cout<<"\n";
	return 0;
}