#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void Siz(lisst* head, lisst* cur)
{
	int i = 0;
	cur = head;
	while (cur != NULL)
	{
		i++;
		cur = cur->Next;
	}
	cout << "Размер списка равен: "<< i << "\n";
}