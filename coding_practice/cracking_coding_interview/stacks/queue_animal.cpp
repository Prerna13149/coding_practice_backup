/*
	IMplement a queue for animal problem
*/
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
public:
	int data;
	char animal;
	node* next;
	node(int d, char a){
		data = d;
		animal = a;
		next = NULL;
	}
};
class myQueue{
public:
	node* dog_tail;
	node* cat_tail;
	node* animal_head;
	node* animal_tail;
	myQueue(){
		dog_tail = NULL;
		cat_tail = NULL;
		animal_head = NULL;
		animal_tail = NULL;
	}
	void enqueue(int d, char a){
		node* temp = new node(d, a);
		if(animal_head == NULL){
			animal_head = temp;
			animal_tail = temp;
			if(a=='c'){
				cat_tail = temp;
			}
			else{
				dog_tail = temp;
			}
		}
		else{
			temp->next= animal_head;
			animal_head = temp;
		}

	}
	node* find_new_tail(node* &temp, char a){
		if(temp==NULL){
			return NULL;
		}
		int i = INT_MIN;
		int j = 0;
		node* x;
		while(temp!=NULL){
			
			if(temp->animal==a && i<j){
				x = temp;
				i = j;
			}
			temp = temp->next;
			j++;
		}
		return x;
	}
	void dequeueCat(){
			if(animal_tail->animal == 'c'){
				node* temp = animal_head;
				while(temp->next!=animal_tail){
					temp = temp->next;
				}
				temp->next = NULL;
				animal_tail = temp;
			}
			else{
				node* temp=animal_head;
				while(temp->next!=cat_tail){
					temp = temp->next;
				}
				temp->next = cat_tail->next;
				cat_tail = find_new_tail(animal_head, 'c');

			}
		}

	void dequeueDog(){
			if(animal_tail->animal == 'd'){
				node* temp = animal_head;
				while(temp->next!=animal_tail){
					temp = temp->next;
				}
				temp->next = NULL;
				animal_tail = temp;
			}
			else{
				node* temp=animal_head;
				while(temp->next!=dog_tail && dog_tail!=NULL){
					temp = temp->next;
				}
				temp->next = dog_tail->next;
				delete dog_tail;
				dog_tail = find_new_tail(animal_head, 'd');

			}

	}

	void dequeueAny(){
		node* temp = animal_head;
		char o = temp->animal;
		while(temp->next!=animal_tail){
			temp = temp->next;
		}
		temp->next = NULL;
		animal_tail = temp;
		if(o=='d'){
			if(animal_tail->animal== 'd'){
				dog_tail = animal_tail;
			}
			else{
				dog_tail = find_new_tail(animal_head, 'd');
			}
		}
		else{
			if(animal_tail->animal== 'c'){
				cat_tail = animal_tail;
			}
			else{
				cat_tail = find_new_tail(animal_head, 'c');
			}
		}
		//delete temp;
	}
	void print(node* head){
		if(head==NULL){
			return;
		}
		while(head!=NULL){
			cout<<head->animal<<","<<head->data<<" -->";
			head = head->next;
		}
		cout<<"\n";
	}
};

int main(int argc, char const *argv[])
{
	myQueue q;

	q.enqueue(1, 'd');
	q.enqueue(2, 'c');
	q.enqueue(3, 'd');
	q.enqueue(4, 'c');
	q.enqueue(5, 'c');
	q.print(q.animal_head);
	q.dequeueAny();
	q.print(q.animal_head);
	q.dequeueDog();
	q.print(q.animal_head);
	q.dequeueCat();
	
	q.print(q.animal_head);
	return 0;
}