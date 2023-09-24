#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void LastList(lisst* head, lisst* cur)
{
	lisst* head1 = new lisst;
	lisst* cur1 = new lisst;
	lisst* prev1 = new lisst;
	double x, t = 0;
	int k = 0, k1 = 0, inb = 0, col, ine = 0, cnt = 0;
	bool cont = false;
	head1->Next = NULL;
	cur1->Next = NULL;
	cur1 = head1;
	cout << "Создание нового списка, который будет вставлен в конец списка:\n";
	cout << "Для создания нового элемента вводите значения, для завершения создания списка введите 0.\n";
	while (1)
	{
		cin >> x;
		if (x != 0)
		{
			cnt++;
			cur1->Next = new lisst;
			cur1->num = x;
			k1++;
			prev1 = cur1;
			cur1 = cur1->Next;
		}
		else
		{
			if (cnt == 0)
				head1 = NULL;
			prev1->Next = NULL;
			break;
		}
	}
	col = 0;
	cout << "Список 1: ";
	cur = head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
	cout << "Список 2: ";
	cur1 = head1;
	while (cur1 != NULL)
	{
		cout << cur1->num << " -> ";
		cur1 = cur1->Next;
	}
	cout << "NULL\n";
	cur = head;
	while (cur != NULL)
	{
		cur = cur->Next;
		k++;
	}
	if ((k != 0) && (k1 != 0))
	{
		if (k >= k1)
		{
			cur = head;
			while (cur != NULL)
			{
				cur1 = head1;
				while (cur1 != NULL)
				{
					if (cur->num == cur1->num)
					{
						if (cur != NULL)
							cur = cur->Next;
						cur1 = cur1->Next;
						col++;
						t++;
					}
					else
					{
						t = 0;
						break;
					}
					if (t == 1)
						inb = col - 1;
				}
				if (t == k1)
				{
					cont = true;
					ine = col - 1;
				}
				col++;
				if (cur!=NULL)
					cur = cur->Next;
			}
		}
		else
		{
			cur1 = head1;
			while (cur1 != NULL)
			{
				cur = head;
				while (cur != NULL)
				{
					if (cur->num == cur1->num)
					{
						cur = cur->Next;
						if (cur1!=NULL)
							cur1 = cur1->Next;
						col++;
						t++;
					}
					else
					{
						t = 0;
						break;
					}
					if (t == 1)
						inb = col - 1;
				}
				if (t == k)
				{
					cont = true;
					ine = col - 1;
				}
				col++;
				if (cur1!=NULL)
					cur1 = cur1->Next;
			}

		}
	}
	

	if (cont)
		cout << "Список входит в другой список в последний раз с " << inb << " индекса по " << ine << " индекс\n";
	else
		cout << "Список не входит в другой список \n";
}