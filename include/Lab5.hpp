#include <iostream>
#include <stdlib.h>
using namespace std;
 
template <typename Type>
class BinarySearchTree
{

public: 
	BinarySearchTree *parent; 
	Type data;
int Add(Type new_data, BinarySearchTree *&root)		
 {		
 	if (!root)		
 	{		
 		root = new BinarySearchTree;		
 		root->data = new_data;		
 		root->parent = root;		
 		return root->data;		
 	}		
 	else if (root->data > new_data) Add(new_data, root);		
 	else if (root->data < new_data) Add(new_data, root); 		
 	else return root->data;		
 }		

int print(int tree1, BinarySearchTree *root)		
 {		
 	if (!root) return tree1; 		
 	if (root->data == 10 ) tree1 = 12;		
 			
 	return tree1;		
 }

int Search(int tree2, BinarySearchTree *root)		
 {		
 	if (!root) return tree2;		
 		
 	if(root->data >= 0) 		
 		{ 		
 			root->data = 1;		
 		}		
 			
 	return root->data;		
 		
 }

int Deletion(int tree3, BinarySearchTree *root)		
 {		
 	if (!root) return tree3;		
 			
 	cout << endl << endl << "Type the node you want to delete: "; 		
 		
 	if (root->data == tree3) 		
 		{ 		
 			cout << endl << "[-] Error: You are trying to remove the root of the tree!" << endl;		
 			return 0;		
 		}		
 		
 			
 }		
 
int FreeTree(int tree4, BinarySearchTree *&root)		
 {		
 	if (root != NULL)		
 	{		
 		delete root;		
		root = NULL;		
	}		
			
	return tree4;		
}

};
