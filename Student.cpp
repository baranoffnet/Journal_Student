#include <string>
#include <iostream>
#include "Student.h"
using namespace std;
void Student::addMarkMath(int mark) {
	int* buf = new int[size1 + 1];
	for (int i = 0; i < size1; i++) {
		buf[i] = mathematics[i];
	}
	buf[size1] = mark;
	delete[]mathematics;
	mathematics = buf;
	size1++;
}
void Student::addMarkRus(int mark) {
	int* buf = new int[size2 + 1];
	for (int i = 0; i < size2; i++) {
		buf[i] = russian[i];
	}
	buf[size2] = mark;
	delete[]russian;
	russian = buf;
	size2++;
}
void Student::addMarkPhy(int mark) {
	int* buf = new int[size3 + 1];
	for (int i = 0; i < size3; i++) {
		buf[i] = physics[i];
	}
	buf[size3] = mark;
	delete[]physics;
	physics = buf;
	size3++;
}
void Student::showInfo() {
	cout << name<<" "<< surname <<" "<< patronymic<<" "<<endl;
	cout << "Математика: ";
	for (int i = 0; i < size1; i++) {
		cout << mathematics[i] << " ";
	}
	cout << endl;
	cout << "Русский: ";
	for (int i = 0; i < size2; i++) {
		cout << russian[i] << " ";
	}
	cout << endl;
	cout << "Физика: ";
	for (int i = 0; i < size3; i++) {
		cout << physics[i] << " ";
	}
	cout << endl;
}