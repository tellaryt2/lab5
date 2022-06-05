#include "Person.h"

Person::Person(string name, string surname, string patronymic)
{
	SetName(name);
	SetSurname(surname);
	SetPatronymic(patronymic);
}

Person::~Person()
{

}

void Person::SetName(string name)
{
	this->_name = name;
}

void Person::SetSurname(string surname)
{
	this->_surname = surname;
}

void Person::SetPatronymic(string patronymic)
{
	this->_patronymic = patronymic;
}

string Person::GetName()
{
	return this->_name;
}

string Person::GetSurname()
{
	return this->_surname;
}

string Person::GetPatronymic()
{
	return this->_patronymic;
}

Student::Student(string name, string surname, string patronymic, int number, int year) : Person(name, surname, patronymic)
{
	SetYear(year);
	SetNumber(number);
}

Student::~Student()
{

}

void Student::SetNumber(int number)
{
	this->_number = number;
}

void Student::SetYear(int year)
{
	this->_year = year;
}

int Student::GetYear()
{
	return this->_year;
}

int Student::GetNumber()
{
	return this->_number;
}

Teacher::Teacher(string name, string surname, string patronymic, string post) : Person(name, surname, patronymic)
{
	SetPost(post);
}

Teacher::~Teacher()
{

}

void Teacher::SetPost(string post)
{
	this->_post = post;
}

string Teacher::GetPost()
{
	return this->_post;
}

void ShowName(Person* person)
{
	cout << person->GetSurname() << " " << person->GetName() << " " << person->GetPatronymic() << endl;
}

void DemoPerson()
{
	setlocale(LC_ALL, "russian");
	Person* person = new Person("Николай", "Безбородов", "Александрович");
	ShowName(person);
	Student* student = new Student("Радислав", "Павлов", "Геннадиевич", 15, 2019);
	ShowName(student);
	Teacher* teacher = new Teacher("Николай", "Попов", "Николаевич", "Учитель");
	ShowName(teacher);
	delete person;
	delete student;
	delete teacher;
}