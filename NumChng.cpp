#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void NumChng(lisst** head, lisst* cur)
{
	lisst* tmp = new lisst;
	lisst* prev = new lisst;
	int n, i = 0;
	bool err = false;
	cout << "Введите индекс, по которому нужно заменить элемент: \n";
	cin >> n;
	cout << "Введите значение, на которое нужно заменить: \n";
	cin >> tmp->num;
	if (*head == NULL)
		cout << "Список пуст, невозможно заменить ни один элемент \n";
	else
	{
		cur = *head;
		if (n == 0)
		{
			tmp->Next = (* head)->Next;
			*head = tmp;
			cout << "После замены значения по заданному индексу, список выглядит следующим образом: \n";
			cur = *head;
			while (cur != NULL)
			{
				cout << cur->num << " -> ";
				cur = cur->Next;
			}
			cout << "NULL\n";
		}
		else {
			while (i < n)
			{
				if ((cur == NULL)||(cur->Next==NULL))
				{
					cout << "Индекс элемента больше размера списка\n";
					err = true;
					delete tmp;
					break;
				}
				prev = cur;
				cur = cur->Next;
				i++;
			}
			if (!err)
			{
				prev->Next = tmp;
				tmp->Next = cur->Next;
				cout << "После замены значения по заданному индексу, список выглядит следующим образом: \n";
				cur = *head;
				while (cur != NULL)
				{
					cout << cur->num << " -> ";
					cur = cur->Next;
				}
				cout << "NULL\n";
			}
		}
	}

}