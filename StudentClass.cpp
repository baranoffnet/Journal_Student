#include <iostream>
#include <Windows.h>
#include "Student.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student st1("Петров", "Петр", "Петрович");
	Student st2("Сидоров", "Сидр", "Сидорович");
	Student st3("Николаев", "Николай", "Николаевич");
	st1.addMarkMath(4);
	st1.addMarkMath(3);
	st1.addMarkMath(5);
	st1.addMarkRus(3);
	st1.addMarkRus(1);
	st1.addMarkRus(2);
	st1.addMarkPhy(5);
	st1.addMarkPhy(5);

	st2.addMarkMath(4);
	st2.addMarkMath(3);
	st2.addMarkMath(5);
	st2.addMarkRus(3);
	st2.addMarkRus(1);
	st2.addMarkRus(2);
	st2.addMarkPhy(5);
	st2.addMarkPhy(5);

	st3.addMarkMath(4);
	st3.addMarkMath(3);
	st3.addMarkMath(5);
	st3.addMarkRus(3);
	st3.addMarkRus(1);
	st3.addMarkRus(2);
	st3.addMarkPhy(5);
	st3.addMarkPhy(5);

	st1.showInfo();
	st2.showInfo();
	st3.showInfo();
}

