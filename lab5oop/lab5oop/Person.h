#pragma once
#include "IO.h"

class Person 
{
private:
	string _name;
	string _surname;
	string _patronymic;

public:
	void SetName(string name);
	void SetSurname(string surname);
	void SetPatronymic(string patronymic);

	string GetName();
	string GetSurname();
	string GetPatronymic();

	Person(string name, string surname, string patronymic);
	~Person();
};

class Student : public Person 
{
private:
	int _number;
	int _year;

public:
	void SetNumber(int number);
	void SetYear(int year);

	int GetNumber();
	int GetYear();

	Student(string name, string surname, string patronymic, int number, int year);
	~Student();
};

class Teacher : public Person 
{
private:
	string _post;

public:
	void SetPost(string post);
	string GetPost();

	Teacher(string name, string surname, string patronymic, string post);
	~Teacher();
};

void ShowName(Person* person);
void DemoPerson();