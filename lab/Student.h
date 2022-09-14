#pragma once
#include "Book.h"

class Student
{
	char* name;
	const double step;
	Book book;
public:
	Student() :step(0), book(nullptr, 0)
	{

	}
	Student(const char* n, double st, const char* bookName, int bookPages);
	~Student();
	void Print();

};