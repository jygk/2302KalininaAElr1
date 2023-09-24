#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InsEnd(lisst** head, lisst* cur)
{
	lisst* head1 = new lisst;
	lisst* cur1 = new lisst;
	lisst* prev1 = new lisst;
	double x;
	int cnt = 0;
	head1->Next = NULL;
	cur1->Next = NULL;
	cur1 = head1;
	cout << "Создание нового списка, который будет вставлен в конец списка:\n";
	cout << "Для создания нового элемента вводите значения, для завершения создания списка введите 0.\n";
	while (1)
	{
		cin >> x;
		if (x != 0)
		{
			cnt++;
			cur1->Next = new lisst;
			cur1->num = x;
			prev1 = cur1;
			cur1 = cur1->Next;
		}
		else
		{
			if (cnt == 0)
				head1 = NULL;
			prev1->Next = NULL;
			break;
		}
	}
	cout << "Список 1: ";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
	cout << "Список 2: ";
	cur1 = head1;
	while (cur1 != NULL)
	{
		cout << cur1->num << " -> ";
		cur1 = cur1->Next;
	}
	cout << "NULL\n";
	if (head1 != NULL)
	{
		if (*head == 0)
			*head = head1;
		else
		{
			cur = *head;
			while (cur->Next != NULL)
				cur = cur->Next;
			cur->Next = head1;
		}
	}
	cout << "После вставки нового списка в конец списка, список выглядит следующим образом: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
}