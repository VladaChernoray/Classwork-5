#include <iostream>
#include <fstream>

class _stack
{
public:
	STACK();
	~STACK();
	void pop();
	void push();
	bool isEmpty();
	void print();
private:
	struct Node
	{
		int d;
		Node *next;
	};	
	Node* top;
};

_stack::_stack() :top(NULL) {}

void _stack::push()
{
	Node* pv = new Node;
	pv->d = d;
	pv->next = top;
	top = pv;
}
void _stack::pop()
{
	if (isEmpty() == true) 
		return false;
	int temp = top->d;
	Node* pv = top;
	top = top->next;
	delete pv;
	return temp;
}

void _stack::isEmpty()
{
	if (top != NULL) return false;
	else return true;
}

void _stack::print()
{
	while (top!=NULL)
		cout << pop()<< endl;
}

int main()
{
	_stack data;
	ifstream file("C:\\Users\\VLADA\\Desktop\\LAB5.txt");
	int click = _getch();
	while (click)
	{
		switch(click)
		{
		case 49:
			int pr;
			pr->data;
			data.push(pr);
			data.print(pr);
		case 50:
			int pr;
			pr-> data;
			data.pop(pr);
			data.print(pr)
		}
	}
	return 0;
}