#include <iostream>
#include <cstdlib>
#include "Stackk.h" 
using namespace std;

bool Stack::isEmpty()
{
	return (top == NULL);
}

void Stack::push(Node* value)
{
	Node*ptr;
	ptr = new Node;
	ptr->data = value;
	ptr->next = NULL;
	if (isEmpty())
	{
		top = ptr;
	}
	else
	{
		ptr->next = top;
		top = ptr;
	}
}
void Stack::pop()
{
	Node *temp;
	if (top == NULL)
	{
		cout << "\nThe stack is empty!!!";
	}
	temp = top;
	top = top->next;
	delete temp;
};
void Stack::show()
{
	Node *temp;
	temp = top;
	while (temp != NULL)
	{
		cout << temp->data << ",";
		temp = temp->next;
	}
}

int main ()
{ return 0 ; }
