#pragma once

class MyArray
{
public:
	MyArray();
	void pushBack(int value);
	void insert(int pos, int value);
	void remove(int pos);
	int get(int pos);
	void popBack();
	void print();
private:
	int arr[10];
	int size;
};
