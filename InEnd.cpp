#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InEnd(lisst** head, lisst* cur)
{
	double i;
	cout << "������� ��������, ������� ����� �������� � ����� ������: \n";
	cin >> i;
	if (*head!=NULL)
	{
		cur = *head;
		while (cur->Next != NULL)
			cur = cur->Next;
		cur->Next = new lisst;
		cur = cur->Next;
		cur->num = i;
		cur->Next = NULL;
	}
	else
	{
		lisst* tmp = new lisst;
		tmp->num = i;
		tmp->Next = *head;
		*head = tmp;
	}
	cout << "����� ������� ������ �������� � ����� ������, ������ �������� ��������� �������: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
}