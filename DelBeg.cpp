#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void DelBeg(lisst** head, lisst* cur)
{
	lisst* tmp = new lisst;
	if (*head != NULL)
	{
		cur = *head;
		tmp = cur;
		cur = cur->Next;
		delete tmp;
		*head = cur;
		cout << "После первого значеиня списка, список выглядит следующим образом: \n";
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
	else
		cout << "Список пуст, невозможно ничего удалить\n";
	
}