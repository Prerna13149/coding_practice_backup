#include<iostream>
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
node* createTree(){
	int n;
	cin>>n;
	node* root = new node(n);
	char ch[1000];
	cin>>ch;
	if(ch[0]=='t'){
		root->left = createTree();
	}
	else{
		root->left = NULL;
	}
	cin>>ch;
	if(ch[0]=='t'){
		root->right = createTree();
	}
	else{
		root->right = NULL;
	}
	return root;
}
int sumTree(node* root, int &sum){
	if(root==NULL){
		return 0;
	}
	sum = sum + root->data;
	return sumTree(root->left, sum) + sumTree(root->right, sum);
}
int main() {
	node* root = createTree();
	int s = 0;
	cout<<sumTree(root, s)<<"\n";
	return 0;
}