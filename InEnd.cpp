#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InEnd(lisst** head, lisst* cur)
{
	double i;
	cout << "¬ведите значение, которое нужно вставить в конец списка: \n";
	cin >> i;
	if (*head!=NULL)
	{
		cur = *head;
		while (cur->Next != NULL)
			cur = cur->Next;
		cur->Next = new lisst;
		cur = cur->Next;
		cur->num = i;
		cur->Next = NULL;
	}
	else
	{
		lisst* tmp = new lisst;
		tmp->num = i;
		tmp->Next = *head;
		*head = tmp;
	}
	cout << "ѕосле вставки нового значени€ в конец списка, список выгл€дит следующим образом: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
}