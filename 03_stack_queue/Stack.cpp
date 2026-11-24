#include "Stack.h"

Stack::Stack()
{
	top = nullptr;
	size = 0;
}

void Stack::push(int value)
{
	//创建一个新Node
	Node* node = new Node;
	node->data = value;
	node->next = top;
	top = node;

	size++;
}

void Stack::pop()
{
	if (empty()) return;

	Node* temp = top;
	top = top->next;
	delete temp;
	size--;
}

bool Stack::peek(int& value)
{
	if (empty()) return false;
	value = top->data;
	return true;
}

bool Stack::empty()
{
	return top == nullptr;
}