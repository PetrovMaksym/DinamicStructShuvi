#include "main.h"
#include "list.h"
using namespace std;
/*
������� �������� ���������������� ������ �� ����� �����. ������� �� ������ ������ ������� �� 
��������� ������ -10.
*/

void low()
{
	system("cls");
	cout << "\nLow task level: \n";
    List list;
    for (size_t i = 0; i < 10; i++)
    {
        list.push_back(-20+rand()%30);
    }
    list.Print();
    cout << "����� ������: \n";  
    Node* p = list.getFirst();
    do {
        if (list.getValue(p) < -10)
        {
            p = list.remove(p); break;
        }
        else
            p = list.Next(p);
    } while (p != nullptr);
    list.Print();
    list.Clear();
	cout << "Press Enter to exit...\n";
	while (getchar() != '\n')
		continue;
}


