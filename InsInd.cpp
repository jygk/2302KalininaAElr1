#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InsInd(lisst** head, lisst* cur)
{
	lisst* head1 = new lisst;
	lisst* cur1 = new lisst;
	lisst* tmp = new lisst;
	double x;
	int ind, k, cnt = 0;
	head1->Next = NULL;
	cur1->Next = NULL;
	cur1 = head1;
	cout << "�������� ������ ������, ������� ����� �������� � ������:\n";
	cout << "��� �������� ������ �������� ������� ��������, ��� ���������� �������� ������ ������� 0.\n";
	while (1)
	{
		cin >> x;
		if (x != 0)
		{
			cnt++;
			cur1->Next = new lisst;
			cur1->num = x;
			tmp = cur1;
			cur1 = cur1->Next;
		}
		else
		{
			if (cnt == 0)
				head1 = NULL;
			tmp->Next = NULL;
			break;
		}
	}
	cout << "������ 1: ";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
	cout << "������ 2: ";
	cur1 = head1;
	while (cur1 != NULL)
	{
		cout << cur1->num << " -> ";
		cur1 = cur1->Next;
	}
	cout << "NULL\n";
	if (head1 != NULL)
	{
		if (*head == NULL)
		{
			*head = head1;
		}
		else {
			cout << "������� ������, � �������� ������ ���������� ������� ������ � ������: \n";
			cin >> ind;
			cur = *head;
			k = 0;
			while ((k < ind - 1) && (cur != NULL))
			{
				cur = cur->Next;
				k++;
			}
			if (cur == NULL)
			{
				cout << "������ �������� ������ ������� ������\n";
			}
			else {
				if (ind == 0)
				{
					cur1 = head1;
					while (cur1->Next != NULL)
						cur1 = cur1->Next;
					cur1->Next = *head;
					*head = head1;
				}
				else {
					tmp = cur->Next;
					cur->Next = head1;
					cur1 = head1;
					while (cur1->Next != NULL)
						cur1 = cur1->Next;
					cur1->Next = tmp;
				}
			}
		}
	}
	
	cout << "����� ������� ������ � ������, ������� � ��������� ��������: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
			cur = cur->Next;
	}
	cout << "NULL\n";
	
}