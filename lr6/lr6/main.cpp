#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	LIST a = LIST();
	a.PushBack(5);
	a.PushBack(6);
	a.PushBack(7);
	cout << "Print list:" << endl;
	a.PrintList();
	cout << "Searching index (0):" << endl;
	cout << a.SearchIndex(5) << endl;
	cout << "Print list and Inserd next element:" << endl;
	a.InserdNextElement(1, 2);
	a.PrintList();
	cout << "Delete a Element and Print list:" << endl;
	a.DeleteNextElement(1);
	a.PrintList();
	cout << "Push back and Print list:" << endl;
	a.PushBack(6);
	a.PrintList();
	return 0;
}