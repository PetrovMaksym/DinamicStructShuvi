#include "main.h"
#include "list.h"
using namespace std;
/*
������� �������� ���������������� ������ �� ����� �����. �������� � ������ ��������� ������ ������� 
����� ������� ��������� ��������
*/
void midle()
{
	system("cls");
	cout << "\nMidle task level: \n";
	List list;
	int count = 10;
	Node* temp = nullptr;
	for (size_t i = 0; i < count; i++)
	{
		int var = rand() % 100;
		list.push_back(var);
			
	}
	if (count  % 2 == 0 )
		temp = list.getLast();
	else
	{
		Node* p = list.getFirst();
		int counter = 1;
		do {
			if (counter == count-1)
			{
				temp = p;
			}
			p = list.Next(p);
			counter++;
		} while (p != nullptr);
	}

	cout << "\n���������� ��������� � ������: " << list.getCount() <<endl;
	cout << "\n�������� ������ �� ��������� ���������: \n";
	list.Print();

	Node* p = list.getFirst();
	int counter = 1;
	do {
		if (counter % 2 != 0)
		{
			list.push_back(temp->field, p); 
		}
		p = list.Next(p);
		p = list.Next(p);
		counter++;
	} while (p != nullptr);
	cout << "\n����� ���������� ��������� � ������: " << list.getCount() << endl;
	cout << "\n�������� ������ ����� ��������� ���������: \n";
	list.Print();
		cout << "\nPress Enter to exit...\n";
	while (getchar() != '\n')
		continue;
}
