#include "Queue.h"

Queue::Queue()
{
	rear = front = nullptr;
	size = 0;
}

void Queue::enqueue(int value)
{
	Node* node = new Node;
	node->data = value;
	node->next = nullptr;

	if (size == 0)
	{
		front = rear = node;
	}
	else
	{
		rear->next = node;
		rear = node;
	}
	size++;
}

void Queue::dequeue()
{
	Node* temp = rear;
	rear = nullptr;
	size--;
	delete temp;
}