#include "Binary.h"

using namespace std;


Binary::Binary()
{
	root = NULL;
}

void Binary::insert(int key)
{
	if(root != NULL)
	{
		insertKey(key,root);
	}
	else
	{
		root = new Node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;

		
	}
}

void Binary::insertKey(int key , Node* leaf)
{
	if(key > leaf->data)
	{
		if(leaf->right != NULL)
		{
			insertKey(key, leaf->right);	
		}
		else
		{
			Node* node = new Node;
			node->data = key;
			node->left = NULL;
			node->right = NULL;
			leaf->right = node;
			//cout << "new node created -->"<<endl;
			//cout << "node->data:" <<node->data<<endl;

		}
		
	}
	else
	{
		if(leaf->left != NULL)
		{
			insertKey(key,leaf->left);	
		}
		else
		{
			Node* node = new Node;
			node->data = key;
			node->left = NULL;
			node->right = NULL;
			leaf->left = node; 
		}
		
	}

}

void Binary::display()
{
	displayKey(root);
}


void Binary::displayKey(Node* leaf)
{
	if(root != NULL)
	{
		if(leaf != NULL)
		{
			
			displayKey(leaf->left);
	 		displayKey(leaf->right);
	 		cout << leaf->data <<endl;
		}

	}
	else
	{
		cout << "tree is empty!!"<<endl;
	}

}


