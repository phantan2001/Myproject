#include <bits/stdc++.h>
using namespace std;

class BinarySearchTree
{
	struct node
	{
		int data;
		node *left;
		node *right;

	};
	node *root;

	//insert node

		node *insert(int value, node *t){
			if(t == NULL){
				t = new node;
				t->data = value;
				t->left = t->right = NULL;
			}
			else if(value < t->data){
				t->left = insert(value, t->left);
			}
			else{
				t->right = insert(value, t->right);
			}
				
				return t;
		}

	// find min

		node *findMin(node *t){
			if(t == NULL){
				return NULL;
			}else if(t->left == NULL){
				return t;
			}else {
				return findMin(t->left);
			}
		}

		//find max

		node *findMax(node *t){
			if(t == NULL){
				return NULL;
			}else if(t->right == NULL){
				return t;
			}else {
				return findMax(t->right);
			}
		}

		//duyệt cây

		void inOrder(node *t){
			if(t == NULL){
				return;
			}
			inOrder(t->left);
			cout << t->data << " ";
			inOrder(t->right);
		}

		// tìm kiếm

		node *find(int value, node *t){
			if(t == NULL){
				return NULL;
			}else if(value < t->data){
				return find(value, t->left);
			}else if(value > t->data){
				return find(value, t->right);
			}else {
				return t;
			}
			
		}


public:
		BinarySearchTree() {
			root = NULL;
		}
		// ~BinarySearchTree();
		void insert(int value){
			root = insert(value, root);
		}
		void disPlay(){
			inOrder(root);
			cout << endl;
		}
		bool search(int value){
			node *temp = find(value, root);
			if(temp != NULL){
				return cout << value << "\n", true;
			}else
				return cout << "error!\n" , false;
			
		}
		
		
	};

int main(){
	BinarySearchTree t;
	t.insert(5);
	t.insert(4);
	t.insert(9);
	t.insert(6);
	t.insert(2);
	t.insert(3);
	t.insert(7);
	t.insert(1);
	t.insert(8);
	t.disPlay();
	t.search(10);

return 0;
}