#include "IO.h"

int SetYearBook()
{
	int year;
	cout << "¬ведите год книги: ";
	cin >> year;
	while (true)
	{
		if (year > 0 && year < 2022)
		{
			return year;
		}
		else
		{
			cout << "год должен быть положительным и не больше текущего 2022, введите заново" << endl;
			cin >> year;
		}
	}
}

int SetCountBookStr()
{
	int str;
	cout << "¬ведите количество страниц: ";
	cin >> str;
	while (true)
	{
		if (str > 0)
			return str;
		else
		{
			cout << "количество страниц должно быть больше 0, введите заново" << endl;
			cin >> str;
		}
	}
}

int SetCountAuhtorsBook()
{
	int count;
	cout << "¬ведите количество авторов: ";
	cin >> count;
	while (true)
	{
		if (count >= 1 && count <= 10)
			return count;
		else
		{
			cout << "количество авторов должно быть от 1 до 10, введите заново" << endl;
			cin >> count;
		}
	}
}

int SetNumberRace()
{
	int nubmer;
	cin >> nubmer;
	while (true)
	{
		if (nubmer > 0)
			return nubmer;
		else
		{
			cout << "номер рейса, продолжительность рейса, частота рейсов и количество "
				"рейсов дожны быть больше 0. ѕовторите попытку" << endl;
			cin >> nubmer;
		}
	}
}

double SetRectangle()
{
	double value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "ƒлина или ширина не должны быть отрицательнными, повторите попытку!" << endl;
			cin >> value;
		}
	}
}

int SetPositive()
{
	int value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "„исло должно быть положительным, повторите попытку!" << endl;
			cin >> value;
		}
	}
	return 0;
}

void ErrorMessege()
{
	cout << "“акой песни нет" << endl;
}

int SetRate()
{
	int value;
	cin >> value;
	while (true)
	{
		if (value > 0 && value <= 5)
			return value;
		else
		{
			cout << "„исло должно быть положительным и от 0 до 5, повторите попытку!" << endl;
			cin >> value;
		}
	}
	return 0;
}

double SetDoublePositive()
{
	cout << "¬ведите скорость: ";
	double value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "—корость должна быть положительной, повторите попытку!" << endl;
			cin >> value;
		}
	}
	return 0.0;
}

