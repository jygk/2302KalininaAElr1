#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void DelInd(lisst** head, lisst* cur)
{
	int n, i = 0;
	lisst* tmp = new lisst;
	cout << "������� ������, �� �������� ����� ������� �������: \n";
	tmp->Next = NULL;
	cin >> n;
	if (*head == NULL)
		cout << "������ ����, ���������� ������� �������\n";
	else
	{
		cur = *head;
		if (n == 0)
		{
			tmp = *head;
			*head = (*head)->Next;
			cout << "����� �������� �������� �� ��������� �������, ������ �������� ��������� �������: \n";
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
				cout << "������ �������� ������ ������� ������\n";
			else
			{
				tmp = cur->Next;
				cur->Next = (cur->Next)->Next;
				delete tmp;
				cout << "����� �������� �������� �� ��������� �������, ������ �������� ��������� �������: \n";
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