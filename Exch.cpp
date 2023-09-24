#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Exch(lisst** head, lisst* cur)
{
	if (*head == NULL)
		cout << "Список пуст, невозмонжно поменять местами элементы.";
	else
	{
		int a, b, i1, i2;
		lisst* prev = new lisst;
		lisst* cur1 = new lisst;
		lisst* prev1 = new lisst;
		lisst* next = new lisst;
		lisst* next1 = new lisst;
		cout << "Введите индекс первого элемента:\n";
		cin >> a;
		cout << "Введите индекс второго элемента:\n";
		cin >> b;
		cur = *head;
		cur1 = *head;
		if (a == b) {
			cout << "Нет необходимости обменивать элементы с одинаковыми индексами\n";
		}
		else {
			cout << "Список до обмена двух элементов списка: ";
			cur = *head;
			while (cur != NULL)
			{
				cout << cur->num << " -> ";
				cur = cur->Next;
			}
			cout << "NULL\n";
			i1 = i2 = 0;
			cur = *head;
			while ((cur != NULL) && (i1 < a))
			{
				prev = cur;
				cur = cur->Next;
				i1++;
			}
			while ((cur1 != NULL) && (i2 < b))
			{
				prev1 = cur1;
				cur1 = cur1->Next;
				i2++;
			}
			if (cur == NULL || cur1 == NULL) {
				cout << "Один или оба индекса выходят за пределы списка";
			}
			if (abs(i1 - i2) == 1)
			{
				if (a < b)
				{
					next = cur->Next;
					next1 = cur1->Next;
					if (a == 0)
					{
						cur = *head;
						*head = cur1;
						cur1->Next = cur;
						cur->Next = next1;

					}
					prev->Next = cur1;
					cur1->Next = cur;
					cur->Next = next1;
				}
				else {
					next = cur->Next;
					next1 = cur1->Next;
					if (b == 0)
					{
						cur1 = *head;
						*head = cur;
						cur->Next = cur1;
						cur1->Next = next;

					}
					prev1->Next = cur;
					cur->Next = cur1;
					cur1->Next = next;
				}
			}
			else
			{
				next = cur->Next;
				next1 = cur1->Next;
				if (a < b)
				{
					if (a == 0)
					{
						cur = *head;
						*head = cur1;
						cur1->Next = cur->Next;
						prev1->Next = cur;
						cur->Next = next1;

					}
					prev->Next = cur1;
					cur1->Next = next;
					prev1->Next = cur;
					cur->Next = next1;

				}
				else {
					if (b == 0)
					{
						cur1 = *head;
						*head = cur;
						cur->Next = cur1->Next;
						prev->Next = cur1;
						cur1->Next = next;

					}
					prev1->Next = cur;
					cur->Next = next1;
					prev->Next = cur1;
					cur1->Next = next;
				}

			}

		}
		cout << "После обмена элементов списка, список выглядит следующим образом: \n";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
		
}