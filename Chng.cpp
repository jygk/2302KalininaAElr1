#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Chng(lisst** head, lisst* cur)
{
	lisst* prev = new lisst;
	lisst* next = new lisst;
	prev = NULL;
	next = NULL;
	if (*head == NULL)
		cout << "Список пуст, элементы отсутствуют\n";
	else {
		cout << "Список до смены порядка элементов: ";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
		cur = *head;
		while (cur != NULL)
		{
			next = cur->Next;
			cur->Next = prev;
			prev = cur;
			cur = next;
		}
		*head = prev;
		cout << "После смены порядка элементов в списке на обратный: \n";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
}
