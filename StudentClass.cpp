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
NEW:
	cout << "-------������--------" << endl;
	cout << "��� ������?" << endl;
	cout << "---�������� ��������: 1" << endl;
	cout << "---������� ������ :   2" << endl;
	cout << "---������� ��������:  3" << endl;
	cout << "---������� ������:    4" << endl;
	cout << "---������� ������:    5" << endl;
	cout << "---�����:             0" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		j1.addStudent();
		goto NEW;
		break;
	case 2:
		cout << "---������� ����� ��������:" << endl;
		cin >> number;
		j1.addMark(number);
		goto NEW;
		break;
	case 3:
		cout << "---������� ����� ��������:" << endl;
		cin >> number;
		j1.delStudent(number);
		goto NEW;
		break;
	case 4:
		j1.averageStudent();
		goto NEW;
		break;
	case 5:
		j1.infoJournal();
		goto NEW;
		break;
	case 0:
		break;
	}
}

