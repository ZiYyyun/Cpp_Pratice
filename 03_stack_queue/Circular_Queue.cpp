#include <Circular_Queue.h>


bool Circular_Queue::Circulatenqueue(int value)
{
	if (rear == front) return false;

	data[rear] = value;
	rear = (rear + 1) % size;

	size++;

	return true;
}

//对于出队操作，不需要移动rear--因为出队是把第一个元素出去
bool Circular_Queue::dequeue()
{
	if (size == 0) return false;

	front = (front + 1) % CAPACITY;
	rear--;

	return true;
}