#include <iostream>

using namespace std;
class Stack
{
private:
	struct Node
	{
		Node* data;
		Node *next;
	};

public:
	Node* top;

	Stack() // constructure
	{
		top = NULL;
	}
	void push(Node* value); // to insert an element
	void pop();  // to delete an element
	void show(); // to show the stack'=
	bool isEmpty();


};
