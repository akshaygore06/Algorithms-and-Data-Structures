#ifndef BINARY_H
#define BINARY_H

#include <iostream>
#include "Node.h"
class Binary
{
	private:
		Node *root;
		void insertKey(int key, Node* leaf);
		void displayKey(Node* leaf);
		

	public:
		Binary();
		//~Binary();
		void insert(int key);
		void display();
};


#endif
