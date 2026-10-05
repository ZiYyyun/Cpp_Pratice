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
	if (front == nullptr) return;

	//队列出列是从front出
	Node* node = front;
	front = front->next;

	if (front == nullptr) rear = nullptr;

	delete node;
	size--;
}