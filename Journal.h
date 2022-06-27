#include <iostream>
#include "Student.h"

using namespace std;
class Journal:public Student
{
private:
	string name;
	string surname;
	string patronymic;
	int studentSize = 0;
	Journal* j1 = new Journal[0];
public:
	Journal(){}
	~Journal() {
		delete[]j1;
	}
	void addStudent();
	void addMark(int number);
	void delStudent(int number);
	void infoJournal();
	void averageStudent(int a);
};

