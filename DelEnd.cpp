#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void DelEnd(lisst** head, lisst* cur)
{
	if (*head != NULL)
	{
		cur = *head;
		if (cur->Next == NULL)
		{
			delete cur;
			*head = NULL;
		}
		else {
			while ((cur->Next)->Next != NULL)
			{
				cur = cur->Next;
			}
			delete (cur->Next)->Next;
			cur->Next = NULL;
		}
		cout << "ѕосле удалени€ последнего значени€ списка, список выгл€дит следующим образом: \n";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
	else
		cout << "—писок пуст, нельз€ инчего удалить\n";
	
}