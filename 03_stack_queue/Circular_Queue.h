#pragma once

class Circular_Queue
{
private:
	static const int CAPACITY = 5;
	int data[CAPACITY];
	int front;
	int rear;
	int size;

public:
	Circular_Queue();
	bool Circular_enqueue(int value);
	bool Circular_dequeue();
};