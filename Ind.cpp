#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Ind(lisst* head, lisst* cur)
{
	int n, i;
	bool err = false;
	cout << "������� ������, �� �������� ����� �������� �������: \n";
	cin >> n;
	if (head == NULL)
		cout << "������ ����, ���������� ����� ������� �� �������\n";
	else
	{
		i = 0;
		cur = head;
		while (i != n)
		{
			if (cur->Next == NULL)
			{
				cout << "������ �������� ������ ������� ������\n";
				err = true;
				break;
			}
			cur = cur->Next;
			i++;
		}
		if (!err)
			cout << "�������� ��������, ������������ ��� �������� " << n << ": " << cur->num << "\n";
	}
	
}