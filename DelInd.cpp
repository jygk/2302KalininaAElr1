#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void DelInd(lisst** head, lisst* cur)
{
	int n, i = 0;
	lisst* tmp = new lisst;
	cout << "Введите индекс, по которому нужно удалить элемент: \n";
	tmp->Next = NULL;
	cin >> n;
	if (*head == NULL)
		cout << "Список пуст, невозможно удалить элемент\n";
	else
	{
		cur = *head;
		if (n == 0)
		{
			tmp = *head;
			*head = (*head)->Next;
			cout << "После удаления значения по заданному индексу, список выглядит следующим образом: \n";
			cur = *head;
			delete tmp;
			while (cur != NULL)
			{
				cout << cur->num << " -> ";
				cur = cur->Next;
			}
			cout << "NULL\n";
		}
		else {
			while ((cur != NULL) && (i < n - 1))
			{
				cur = cur->Next;
				i++;
			}
			if ((cur == NULL) || (cur->Next == NULL))
				cout << "Индекс элемента больше размера списка\n";
			else
			{
				tmp = cur->Next;
				cur->Next = (cur->Next)->Next;
				delete tmp;
				cout << "После удаления значения по заданному индексу, список выглядит следующим образом: \n";
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