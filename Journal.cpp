#include "Journal.h"
void Journal:: addStudent() {
	cout << "Ввидите Фамилию: ";
	cin >> name;
	cout << endl;
	cout << "Ввидите Имя: ";
	cin >> surname;
	cout << endl;
	cout << "Ввидите Отчество: ";
	cin >> patronymic;
	Journal* buf = new Journal[studentSize + 1]{};
	for (int i = 0; i < studentSize; i++) {
		buf[i] = j1[i];
	}
	buf[studentSize].setName(name, surname, patronymic);
	j1 = buf;

	studentSize++;
}
void Journal::addMark(int number) {
	int a = 0;
	int mark = 0;
	do {
		cout << "Выбирите придмет: " << endl;
		cout << "--- 1. Математика." << endl;
		cout << "--- 2. Русский язвык." << endl;
		cout << "--- 3. Физика." << endl;
		cout << "--- 0. Выход." << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Ввидите оцентку: ";
			cin >> mark;
			j1[number - 1].addMarkMath(mark);
			break;
		case 2:
			cout << "Ввидите оцентку: ";
			cin >> mark;
			j1[number - 1].addMarkRus(mark);
			break;
		case 3:
			cout << "Ввидите оцентку: ";
			cin >> mark;
			j1[number - 1].addMarkPhy(mark);
			break;
		}
	}
	while (a != 0);
}
void Journal::delStudent(int number) {
	studentSize--;
	Journal* buf = new Journal[studentSize]{};
	for (int i = 0; i < number - 1; i++) {
		buf[i] = j1[i];
	}
	for (int i = number - 1; i < studentSize; i++) {
		buf[i] = j1[i + 1];
	}
	j1 = buf;

	cout << "Студент УДАЛЕН!" << endl;
}
void Journal::averageStudent(int a) {
	for (int i = 0; i < studentSize; i++) {
		float summ = 0;
		for (int j = 0; j < j1[i].size1; j++) {
			summ += j1[i].mathematics[j];
		}
		if (summ !=0 && float(summ / j1[i].size1) <= a) {
			cout << "Средний бал Математика: " <<summ / j1[i].size1 << endl;
			j1[i].showInfo();
		}
	}
	for (int i = 0; i < studentSize; i++) {
		float summ = 0;
		for (int j = 0; j < j1[i].size2; j++) {
			summ += j1[i].russian[j];
		}
		if (summ != 0 && float (summ / j1[i].size2) <= a) {
			cout << "Средний бал Русский: "  << summ / j1[i].size2<<endl;
			j1[i].showInfo();
		}
	}
	for (int i = 0; i < studentSize; i++) {
		float summ = 0;
		for (int j = 0; j < j1[i].size3; j++) {
			summ += j1[i].physics[j];
		}
		if (summ != 0 && float (summ / j1[i].size3) <= a) {
			cout << "Средний бал Физика: " << summ / j1[i].size3 << endl;
			j1[i].showInfo();
		}
	}
}
void Journal::infoJournal() {

	for (int i = 0; i < studentSize; i++) {
		j1[i].showInfo();
	}
}