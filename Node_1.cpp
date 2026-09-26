#include "Node_1.hpp"
#include <iostream>

void ListallElem(Node* head)
{
	Node* p = head;
	while (p != nullptr)
	{
		std::cout << p->data << std::endl;
		p = p->next;
	}
}

