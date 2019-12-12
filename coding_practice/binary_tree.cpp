/*
	BInary TRee
*/
#include <iostream>
#include <cmath>
#include <climits>
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
}

void pre_order(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);
}

void post_order(node* root){
	if(root==NULL){
		return;
	}
	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
}

int count_node(node* root, int &count){
	if(root==NULL){
		return 0;
	}
	count = count + 1;
	count_node(root->left, count);
	count_node(root->right, count);
	return count;
}

int sum_node(node* root, int &sum){
	if(root==NULL){
		return 0;
	}
	sum = sum + root->data;
	sum_node(root->left, sum);
	sum_node(root->right, sum);
	return sum;
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	int l = height(root->left);
	int r = height(root->right);
	return max(l, r)+1;
}

node* create_height_bal(int s, int e, int arr[]){
	if(s>e){
		return NULL;
	}
	int mid = (s+e)/2;
	node* root = new node(arr[mid]);
	root->left = create_height_bal(s, mid-1, arr);
	root->right = create_height_bal(mid+1, e, arr);
	return root;
}

bool isBalanced(node* root){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return true;
	}
	int l = height(root->left);
	int r = height(root->right);
	if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right)){
		return true;
	}
	return false;

}

node* create_tree_pre(int pre[], int in[], int i, int s, int e, int n){
	if(s>e){
		return NULL;
	}
	if(i==n){
		return NULL;
	}
	node* root = new node(pre[i]);
	int j=s;
	int flag = 0;
	for (j = s; j <= e; j++)
	{
		if(in[j]==pre[i]){
			flag = 1;
			break;
		}
		/* code */
	}
	if(flag==1){
		root->left = create_tree_pre(pre, in, i+1, s, j-1, n);
		root->right = create_tree_pre(pre, in, i+1, j+1, e, n);
	}
	else{
		root = create_tree_pre(pre, in, i+1, s, e, n);
	}
	
	return root;
}

node* create_tree_post(int post[], int in[], int i, int s, int e, int n){
	if(i<0){
		return NULL;
	}
	if(s>e){
		return NULL;
	}
	node* root = new node(post[i]);
	int j;
	int flag = 0;
	for (int j = s; j <= e; j++)
	{
		if(post[i]==in[j]){
			flag =1;
			break;
		}
		/* code */
	}
	if(flag==1){
		root->left = create_tree_post(post, in, i-1, s, j-1, n);
		root->right = create_tree_post(post, in, i-1, j+1, e, n);
	}
	else{
		root = create_tree_post(post, in, i-1, s, e, n);
	}
	return root;
}

int replaceSum(node* root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL && root->right==NULL){
		return root->data;
	}
	int temp = root->data;
	root->data = replaceSum(root->left) +  replaceSum(root->right);
	return root->data +  temp;
}

bool check_bst(node* root, int minV=INT_MIN, int maxV = INT_MAX){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return true;
	}
	if(root->data >= minV && root->data<=maxV && check_bst(root->left, minV, maxV) && check_bst(root->right, minV, maxV)){
		return true;
	}
	return false;

}

bool search_bst(node* root, int num){
	if(root==NULL){
		return false;
	}
	if(root->data == num){
		return true;
	}
	if(num > root->data){
		return search_bst(root->right, num);
	}
	else{
		return search_bst(root->left, num);
	}
}

int main(int argc, char const *argv[])
{
	node* root = createTree();
	inorder(root);
	cout<<"\n";
	int count = 0;
	int sum = 0;
	cout<<count_node(root, count)<<"\n";
	cout<<sum_node(root, sum)<<"\n";
	cout<<height(root)<<"\n";
	if(isBalanced(root)){
		cout<<"Tree is balanced"<<"\n";
	}
	else{
		cout<<"Tree is not balanced"<<"\n";
	}
	int arr[]={1,2,3,4,5,6};
	node *root2 = create_height_bal(0, 5, arr);
	inorder(root2);
	cout<<"\n";
	int pre[]={1,2,3,4,8,5,6,7};
	int in[] = {3,2,8,4,1,6,7,5};
	int post[] = {3, 8, 4, 2, 7, 6, 5, 1};
	node* root3 = create_tree_pre(pre, in, 0, 0, 7, 8);
	inorder(root3);
	cout<<"\n";
	node* root4 = create_tree_post(post, in, 7, 0, 7, 8);
	inorder(root4);
	cout<<"\n";
	if(search_bst(root, 4)){
		cout<<"Found it"<<"\n";
	}
	return 0;
}