#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void InBeg(lisst **head, lisst *cur)
{
	lisst* tmp = new lisst;
	cout << "¬ведите значение, которое нужно вставить в начало списка: \n";
	cin >> tmp->num;
	tmp->Next = *head;
	*head = tmp;
	cout << "ѕосле вставки нового значени€ в начало списка, список выгл€дит следующим образом: \n";
	cur = *head;
	while (cur != NULL)
	{
		cout << cur->num << " -> ";
		cur = cur->Next;
	}
	cout << "NULL\n";
}