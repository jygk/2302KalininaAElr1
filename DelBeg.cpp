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
		cout << "����� ������� �������� ������, ������ �������� ��������� �������: \n";
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
	else
		cout << "������ ����, ���������� ������ �������\n";
	
}