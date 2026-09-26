#include "Dynamic_arr.hpp"
#include <iostream>

MyArray::MyArray()
{
	size = 0;
}

void MyArray::pushBack(int value)
{
	if (size >= 10)
	{
		std::cout << "error! : array size overflow!" << std::endl;
		return;
	}

	arr[size] = value;
	size++;
}

void MyArray::popBack()
{
	if (size > 0)
	{
		size--;
	}
}

void MyArray::insert(int pos, int value)
{

}

void MyArray::print()
{
	
	for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << std::endl;
		}
}