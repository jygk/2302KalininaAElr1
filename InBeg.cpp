#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InBeg(lisst **head, lisst *cur)
{
	lisst* tmp = new lisst;
	cout << "������� ��������, ������� ����� �������� � ������ ������: \n";
	cin >> tmp->num;
	tmp->Next = *head;
	*head = tmp;
	cout << "����� ������� ������ �������� � ������ ������, ������ �������� ��������� �������: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
}