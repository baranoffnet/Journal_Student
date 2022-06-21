#include <string>
using namespace std;
class Student
{
private:
	string name;
	string surname;
	string patronymic;
	int* mathematics = new int[0];
	int* russian = new int[0];
	int* physics = new int[0];
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;
public:
	Student() {};
	Student(string name, string surname, string patronymic) {
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
	}
	Student(const Student& stud2) {
		this->name = stud2.name;
		this->surname = stud2.surname;
		this->patronymic = stud2.patronymic;
		delete[]mathematics;
		delete[]russian;
		delete[]physics;
		mathematics = new int[size1];
		for (int i = 0; i < size1; i++) {
			mathematics[i] = stud2.mathematics[i];
		}
		int* russian = new int[size2];
		for (int i = 0; i < size2; i++) {
			russian[i] = stud2.russian[i];
		}
		int* physics = new int[size3];
		for (int i = 0; i < size3; i++) {
			physics[i] = stud2.physics[i];
		}
	}
	void operator= (const Student& stud2) {
		this->name = stud2.name;
		this->surname = stud2.surname;
		this->patronymic = stud2.patronymic;
		delete[]mathematics;
		delete[]russian;
		delete[]physics;
		mathematics = new int[size1];
		for (int i = 0; i < size1; i++) {
			mathematics[i] = stud2.mathematics[i];
		}
		int* russian = new int[size2];
		for (int i = 0; i < size2; i++) {
			russian[i] = stud2.russian[i];
		}
		int* physics = new int[size3];
		for (int i = 0; i < size3; i++) {
			physics[i] = stud2.physics[i];
		}
	}
	~Student() {
		delete[]mathematics;
		delete[]russian;
		delete[]physics;
	}
	void setName(string name, string surname, string patronymic) {
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
	}
	void addMarkMath(int mark);
	void addMarkRus(int mark);
	void addMarkPhy(int mark);
	void showInfo();
};

