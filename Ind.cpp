#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Ind(lisst* head, lisst* cur)
{
	int n, i;
	bool err = false;
	cout << "Введите индекс, по которому нужно получить элемент: \n";
	cin >> n;
	if (head == NULL)
		cout << "Список пуст, невозможно найти элемент по индексу\n";
	else
	{
		i = 0;
		cur = head;
		while (i != n)
		{
			if (cur->Next == NULL)
			{
				cout << "Индекс элемента больше размера списка\n";
				err = true;
				break;
			}
			cur = cur->Next;
			i++;
		}
		if (!err)
			cout << "Значение элемента, находящегося под индексом " << n << ": " << cur->num << "\n";
	}
	
}