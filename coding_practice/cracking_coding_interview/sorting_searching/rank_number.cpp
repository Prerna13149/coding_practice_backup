/*
	Given an continuous input of numbers, find the rank of a number.
*/

#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

void inorder_tree(node* root){
	if(root==NULL){
		return;
	}
	inorder_tree(root->left);
	cout<<root->data<<" ";
	inorder_tree(root->right);
	return;
}
void inorder(node* root, int ele, int &ct){
	if(root==NULL){
		return;
	}
	if(root->data == ele){
		return;
	}
	ct = ct + 1;
	inorder(root->left, ele, ct);
	inorder(root->right, ele, ct);
	return;
}
void insert(node* &root, int ele){
	node* new_node = new node(ele);
	if(root==NULL){
		root = new_node; 
	}
	if(root->data > ele){
		insert(root->left, ele);
	}
	else{
		insert(root->right, ele);
	}
	return;
}

int main(int argc, char const *argv[])
{
	node* root = NULL;
	int n;
	while(1){
		cin>>n;
		if(n==-1){
			return 0;
		}
		else{
			insert(root, n);
			//inorder_tree(root);
			cout<<"\n";
			int ct = 0;
			// inorder(root, n, ct);
			// cout<<ct<<"\n";
		}
	}
	return 0;
}