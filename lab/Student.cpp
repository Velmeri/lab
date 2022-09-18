#include "Student.h"

using namespace std;

Student::Student() : step(0), book(nullptr, 0) {}

Student::Student(const char* n, double st, const char* bookName, int bookPages) : step(st), book(bookName, bookPages)
{
	int length = strlen(n);
	name = new char[length+1];
	for (int i = 0; i < length; i++)
		name[i] = n[i];
	name[length] = '\0';
}

Student::~Student()
{
	delete[] name;
}

void Student::Print()
{
	cout << name << endl;
	cout << step << endl;
	book.Print();
}
