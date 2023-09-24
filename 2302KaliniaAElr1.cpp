#include <locale>
#include <iostream>
#include <iomanip>
#include "Listt.h"
#include "func.h"
using namespace std;
int main()
{
    int Vart, cnt = 0;
    double x;
    lisst *head = new lisst;
    lisst *cur = new lisst;
    lisst* prev = new lisst;
    setlocale(LC_ALL, "Russian");
    head->Next = NULL;
    cur->Next = NULL; 
    prev->Next = NULL;
    cur = head;
    cout << "Создание списка: \n";
    cout << "Для создания нового элемента вводите значения, для завершения создания списка введите 0.\n";
    while (1)
    {
        cin >> x;
        if (x != 0)
        {
            cnt++;
            cur->Next = new lisst;
            cur->num = x;
            prev = cur;
            cur = cur->Next;
        }
        else
        {
            if (cnt == 0)
                head = NULL;
            prev->Next = NULL;
            break;
        }
    }
    cur = head;
    cout << "Исходный список с данными, считанными из файла: \n";
    while (cur != NULL)
    {
        cout << cur->num << " -> ";
        cur = cur->Next;
    }
    cout << "NULL\n";
    while (1) {
    cout << "0.      завершение работы программы\n1.	добавление в конец списка\n2.	добавление в начало списка\n3.	удаление последнего элемента\n4.	удаление первого элемента\n5.	добавление элемента по индексу(вставка перед элементом, который был ранее доступен по этому индексу)\n6.	получение элемента по индексу\n";
    cout << "7.	удаление элемента по индексу\n8.	получение размера списка\n9.	удаление всех элементов списка\n10.	замена элемента по индексу на передаваемый элемент\n11.	проверка на пустоту списка\n12.	меняет порядок элементов в списке на обратный\n13.	вставка другого списка в список, начиная с индекса\n14.	вставка другого списка в конец\n";
    cout << "15.	вставка другого списка в начало\n16.	проверка на содержание другого списка в списке, можно сделать целочисленного типа\n17.	поиск первого вхождения другого списка в список\n18.	поиск последнего вхождения другого списка в список\n19.	обмен двух элементов списка по индексам\n";
    cout << "Введите номер функции: \n";
    cin >> Vart;
    if (Vart == 0)
    {
        cout << "Завершение работы программы\n";
        DelAll(&head, cur);
        break;
    }
    switch (Vart) {
    case 1: InEnd(&head, cur); break;
    case 2: InBeg(&head, cur); break;
    case 3: DelEnd(&head, cur); break;
    case 4: DelBeg(&head, cur); break; 
    case 5: NewEl(&head, cur); break;
    case 6: Ind(head, cur); break;
    case 7: DelInd(&head, cur); break;
    case 8: Siz(head, cur); break;
    case 9: DelAll(&head, cur); break;
    case 10: NumChng(&head, cur); break;
    case 11: IsEmp(head, cur); break;
    case 12: Chng(&head, cur); break;
    case 13: InsInd(&head, cur); break;
    case 14: InsEnd(&head, cur); break;
    case 15: InsBeg(&head, cur); break;
    case 16: Iflist(head, cur); break;
    case 17: FirstList(head, cur); break;
    case 18: LastList(head, cur); break;
    case 19: Exch(&head, cur); break;
    default: cout << "Не существует соответствующей функции. \n";
        break;
    }
}

}