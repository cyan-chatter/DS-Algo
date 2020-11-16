#include<iostream>
using namespace std;

//BST - all the nodes in left are smaller or equal, In the right, they are greater, All subtrees are BSTs, Inorder traversal gives sorted list
//best case: O(log n)
//worst case: O(n)

template<typename> type
class node{
	public:
		type data;
		node* left;
		node* right;
		
		node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}	
};

node* insertBST(node *root, type data){
	//base case
	if(root == NULL){
		return new node(data);
	}
	//rec case - insert in the subtree
	if(data <= root->data){
		root = insertBST(root->left, data);	
	}
	else{
		root = insertBST(root->right, data);
	}
}

node* build(){
	type data;
	cin>>data;
	node *root = NULL
	while(data != -1){
		root = insertBST(root, data);	
	}
	
}
