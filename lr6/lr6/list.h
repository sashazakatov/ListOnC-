#pragma once

#include <iostream>

using namespace std;

struct LIST
{
private:
	struct Node
	{
		int Data;
		Node* next;
	};
	Node* first;
public:
	LIST();
	void PushBack(int item);
	int SearchIndex(int item);
	void PrintList();
	void DeleteNextElement(int index);
	void InserdNextElement(int index, int item);
};