#include <iostream>
#include <windows.h>
#include "Journal.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Journal j1;
	int a = 0;
	int number = 0;
	do {
		cout << "-------������--------" << endl;
		cout << "��� ������?" << endl;
		cout << "---�������� ��������: 1" << endl;
		cout << "---������� ������ :   2" << endl;
		cout << "---������� ��������:  3" << endl;
		cout << "---������� �������:    4" << endl;
		cout << "---������� ������:    5" << endl;
		cout << "---�����:             0" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			j1.addStudent();
			break;
		case 2:
			cout << "---������� ����� ��������:" << endl;
			cin >> number;
			j1.addMark(number);
			break;
		case 3:
			cout << "---������� ����� ��������:" << endl;
			cin >> number;
			j1.delStudent(number);
			break;
		case 4:
			j1.averageStudent(3);
			break;
		case 5:
			j1.infoJournal();
			break;
		case 0:
			break;
		}
	} while (a != 0);
}

