#include "list.h"

LIST::LIST()
{
	first = NULL;
}
void LIST::PushBack(int item)
{
	if (first == NULL)
	{
		first = new Node();
		first->Data = item;
		first->next = NULL;
	}
	else
	{
		Node* current = first;
		while (current->next != NULL)
			current = current->next;
		current->next = new Node();
		current->next->Data = item;
		current->next->next = NULL;
	}
}
int LIST::SearchIndex(int item)
{
	Node* current = first;
	int i = 0;
	while (current != NULL)
	{
		if (current->Data == item) return i;
		current = current->next;
		i++;
	}
	return -1;
}
void LIST::PrintList()
{
	Node* current = first;
	do {
		cout << current->Data << endl;
		current = current->next;
	} while (current != NULL);
}
void LIST::DeleteNextElement(int index)
{
	Node* current = first;
	for (int i = 0; i < index; i++)
		current = current->next;
	Node* DeletItem = current->next;
	current->next = current->next->next;
	first->next = current;
	delete DeletItem;

}
void LIST::InserdNextElement(int index, int item)
{
	Node* current = first;
	for (int i = 0; i < index; i++)
		current = current->next;
	Node* InserdetItem = new Node();
	InserdetItem->Data = item;
	InserdetItem->next = current->next;
	current->next = InserdetItem;
}