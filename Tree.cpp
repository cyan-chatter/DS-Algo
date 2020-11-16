#include<iostream>
using namespace std;
//Binary Tree
class node{
 public:
 	int data;
 	node*left;
 	node*right;
	
	//Constructor
	node(int d){
		data = d;
		left = NULL;
		right = NULL; 
	}
};

node* buildTree(){
	int d;
	cout<<"\nEnter Node Data\n";
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node*n = new node(d);
	n->left = buildTree();
	n->right = buildTree();
	return n;
}

void printPreorder(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<", ";
	printPreorder(root->left);
	printPreorder(root->right);
}

void printLevel(node*root, int level){
	if(root==NULL || level<0){
		return;
	}
	if(level==0){
		cout<<root->data<<" ";
		return;
	}
	printLevel(root->left, level-1);
	printLevel(root->right, level-1);
}

int countNodes(node*root){
	if(root==NULL){
		return 0;
	}
	int ans = 1 + countNodes(root->left) + countNodes(root->right);
	return ans;
}

int height(node* root){
	if(root==NULL){
		return 0;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	return max(lh,rh) + 1;
} //time is more than O(n)- (best case) Skew Tree takes O(n^2) time- (worst case)

void printLevelOrder(node*root){
	int min_level = 0;
	int max_level = height(root);
	cout<<"\n";
	for(int depth = min_level; depth<=max_level; depth++){
		printLevel(root,depth);
		cout<<"\n";
	}
}

void printInorder(node*root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	cout<<root->data<<", ";
	printInorder(root->right);
}

void printPostorder(node*root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	printInorder(root->right);
	cout<<root->data<<", ";
}

//form a tree with a node having cumulative sum of all its children 
int formCumulativeSumOfChildren(node*root){
	if(root==NULL){
		return 0;
	}
	int leftSum = formCumulativeSumOfChildren(root->left);
	int rightSum = formCumulativeSumOfChildren(root->right);
	root->data += leftSum + rightSum;
	return root->data;  
} 

int replaceWithChildSum(node*root){
	if(root==NULL){
		return 0;
	}
	if(root->left == NULL && root->right==NULL){
		return root->data;
	}
	int lsum = replaceWithChildSum(root->left);
	int rsum = replaceWithChildSum(root->right);
	int temp = root->data;
	root->data = lsum + rsum;
	return root->data + temp;
}

int main(){
	node*root = NULL;
	node*cSum = NULL;
	root = buildTree();
	cout<<"\nPrint Pre Order: ";
	printPreorder(root);
	cout<<"\nThe Elements on Level 2: ";
	printLevel(root,2);
	cout<<"\nNumber of Nodes in the Tree: "<<countNodes(root);
	cout<<"\nThe Height of the Tree is: "<<height(root);
	cout<<"\nPrint Cumulative Sum in Level Order: ";
	printLevelOrder(root);
	cout<<"\nPrint In Order: ";
	printInorder(root);
	cout<<"\nPrint Post Order: ";
	printPostorder(root);
	//formCumulativeSumOfChildren(root);
	replaceWithChildSum(root);
	cout<<"\nPrint Child Sum Tree in Level Order: ";
	printLevelOrder(root);
	return 0;
}
