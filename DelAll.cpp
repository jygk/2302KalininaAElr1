#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h";
using namespace std;
void DelAll(lisst** head, lisst* cur)
{
	while (*head != NULL)
	{
		lisst* tmp = new lisst;
		tmp = *head;
		*head = (*head)->Next;
		delete tmp;
	}
	cout << "Список удалён. \n";
}