#include "Journal.h"
void Journal:: addStudent() {
	cout << "������� �������: ";
	cin >> name;
	cout << endl;
	cout << "������� ���: ";
	cin >> surname;
	cout << endl;
	cout << "������� ��������: ";
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
NEW:
	cout << "�������� �������: " << endl;
	cout << "--- 1. ����������." << endl;
	cout << "--- 2. ������� �����." << endl;
	cout << "--- 3. ������." << endl;
	cout << "--- 0. �����." << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "������� �������: ";
		cin >> mark;
		j1[number - 1].addMarkMath(mark);
		goto NEW;
		break;
	case 2:
		cout << "������� �������: ";
		cin >> mark;
		j1[number - 1].addMarkRus(mark);
		goto NEW;
		break;
	case 3:
		cout << "������� �������: ";
		cin >> mark;
		j1[number - 1].addMarkPhy(mark);
		goto NEW;
		break;
	case 0:
		break;
	}

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

	cout << "������� ������!" << endl;
}
void Journal::averageStudent() {
	cout << "����������: ";
	for (int i = 0; i < j1[0].size1; i++) {
		cout << j1[0].mathematics[i] << " ";
	}
}

void Journal::infoJournal() {

	for (int i = 0; i < studentSize; i++) {
		j1[i].showInfo();
	}
}