#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void NewEl(lisst** head, lisst* cur)
{
	int n, i = 0;
	bool err = false;
	lisst* tmp = new lisst;
	lisst* next = new lisst;
	cout << "Введите индекс, по которому нужно вставить элемент: \n";
	cin >> n;
	cout << "Введите значение, которое нужно вставить по индексу: \n";
	cin >> tmp->num;
	cur = *head;
	if (n == 0)
	{
		tmp->Next = *head;
		*head = tmp;
		cout << "После вставки нового значения по заданному индексу, список выглядит следующим образом: \n";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
	else{
		while ((cur!=NULL)&&((i + 1) < n))
		{
			cur = cur->Next;
			i++;
		}
		if ((cur == NULL)||(cur->Next == NULL))
		{
			cout << "Индекс элемента больше размера списка\n";
			delete tmp;
		}
		else
		{
			next = cur->Next;
			cur->Next = tmp;
			tmp->Next = next;
			cout << "После вставки нового значения по заданному индексу, список выглядит следующим образом: \n";
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