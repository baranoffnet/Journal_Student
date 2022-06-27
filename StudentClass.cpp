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
		cout << "-------ЖУРНАЛ--------" << endl;
		cout << "Что делаем?" << endl;
		cout << "---Добавить студента: 1" << endl;
		cout << "---Вывести оценки :   2" << endl;
		cout << "---Удалить студента:  3" << endl;
		cout << "---Вывести средний:    4" << endl;
		cout << "---Вывести журнал:    5" << endl;
		cout << "---Выход:             0" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			j1.addStudent();
			break;
		case 2:
			cout << "---Вывечти номер студента:" << endl;
			cin >> number;
			j1.addMark(number);
			break;
		case 3:
			cout << "---Вывечти номер студента:" << endl;
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

