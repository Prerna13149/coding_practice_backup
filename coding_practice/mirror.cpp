#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		node(int x){
			data = x;
			left = NULL;
			right = NULL;
		}

};

node* createTree(){
	int n;
	cin>>n;
	if(n==-1){
		return NULL;
	}
	node* root = new node(n);
	root->left = createTree();
	root->right = createTree();
	return root;
}


void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	return;
}

node* mirror(node* root){
	if(root==NULL){
		return NULL;
	}
	node* temp = new node(root->data);
	temp->left = mirror(root->right);
	temp->right = mirror(root->left);
	return temp;
}
int main(int argc, char const *argv[])
{
	node* root = createTree();
	inorder(root);
	cout<<"\n";
	node* mirror_root = mirror(root);
	inorder(mirror_root);
	return 0;
}