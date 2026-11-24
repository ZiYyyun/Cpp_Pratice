#pragma once

class Stack {
	private:
		struct Node
		{
			int data;
			Node* next;
		};
		Node* top;
		int size;

	public:
		Stack();
		void push(int value);
		void pop();
		bool peek(int& value);
		bool empty();
};