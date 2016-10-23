#include <iostream>
#include "Node.h"
#include "Binary.h"

using namespace std;

int main()
{
	int numberOfNodes = 0;
	Binary bt;
	int key=0;
	cout << "Enter the number of nodes you want to insert"<<endl;
	cin >> numberOfNodes;

	while(numberOfNodes)
	{
		cin>> key;
		bt.insert(key);

		numberOfNodes--;
	}

	cout << "Came out of insert loop"<<endl;

	bt.display();

	cout << "before end"<<endl;


}