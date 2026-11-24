#pragma once

class List
{
	struct Node
	{
		int data;
		Node* next;
	};

	Node* head;
	int length;

public:
	List();
	void ListallElem(Node* head);
	void removeElem(int pos);
	void insertElem(int pos, int val);
};

