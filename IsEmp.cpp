#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void IsEmp(lisst* head, lisst* cur)
{
	if (head == NULL)
		cout << "Список пуст\n";
	else
	{
		cout << "Список не пуст: \n";
		cur = head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
}