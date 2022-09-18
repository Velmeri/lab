#include "Book.h"

using namespace std;

Book::Book(const char* n)
{
	int length = strlen(n);
	name = new char[length];
	for (int i = 0; i < length; i++)
		name[i] = n[i];
	name[length] = '\0';
}
Book::Book(const char* n, int p) : Book(n)
{
	pages = p;
}
void Book::Print()
{
	cout << name << endl;
	cout << pages << endl;
}
Book::~Book()
{
	delete[] name;
}
