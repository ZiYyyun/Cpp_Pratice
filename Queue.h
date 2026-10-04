#pragma once

class Queue
{
public:
	Queue();
	void enqueue(int value);
	void dequeue();

private:
	struct Node {
		int data;
		Node* next;
	};
	Node* front;
	Node* rear;
	int size;
};
