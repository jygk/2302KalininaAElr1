#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Chng(lisst** head, lisst* cur)
{
	lisst* prev = new lisst;
	lisst* next = new lisst;
	prev = NULL;
	next = NULL;
	if (*head == NULL)
		cout << "������ ����, �������� �����������\n";
	else {
		cout << "������ �� ����� ������� ���������: ";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
		cur = *head;
		while (cur != NULL)
		{
			next = cur->Next;
			cur->Next = prev;
			prev = cur;
			cur = next;
		}
		*head = prev;
		cout << "����� ����� ������� ��������� � ������ �� ��������: \n";
		cur = *head;
		while (cur != NULL)
		{
			cout << cur->num << " -> ";
			cur = cur->Next;
		}
		cout << "NULL\n";
	}
}
