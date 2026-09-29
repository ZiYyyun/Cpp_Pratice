#include "List.hpp"
#include <iostream>

List::List()
{
	head = nullptr;
	length = 0;
}

void List::ListallElem(Node* head)
{
	Node* p = head;

	while (p != nullptr)
	{
		std::cout << p->data << std::endl;
		p = p->next;
	}
}

void List::insertElem(int pos, int val)
{
	Node* newNode = newNode;
	newNode->data = val;

	if (pos == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		Node* p = head;

		for (size_t i = 0; i < pos - 1; i++)
		{	// 如果没有循环到 pos - 1的位置，那么下一行将一直执行。
			p = p->next;    //直到i指向我们要找的节点之前一位，那么它的next就是目标节点
		}

		newNode->next = p->next;
		p->next = newNode;
	}
	length++;
}

void List::removeElem(int pos)
{
	if (pos == 0)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	else {
		Node* p = head;
		for (size_t i = 0; i < pos - 1; i++)
		{
			p = p->next;
		}

		Node* temp = p->next;            //先把要删除的节点摘出来
		p->next = p->next->next;         //修改前面一个元素的next
		delete temp;                     //删除摘出来的元素
		/* 如果不做temp这一步，就会内存泄漏 */
	}
	length--;
}