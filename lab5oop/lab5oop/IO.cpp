#include "IO.h"

int SetYearBook()
{
	int year;
	cout << "������� ��� �����: ";
	cin >> year;
	while (true)
	{
		if (year > 0 && year < 2022)
		{
			return year;
		}
		else
		{
			cout << "��� ������ ���� ������������� � �� ������ �������� 2022, ������� ������" << endl;
			cin >> year;
		}
	}
}

int SetCountBookStr()
{
	int str;
	cout << "������� ���������� �������: ";
	cin >> str;
	while (true)
	{
		if (str > 0)
			return str;
		else
		{
			cout << "���������� ������� ������ ���� ������ 0, ������� ������" << endl;
			cin >> str;
		}
	}
}

int SetCountAuhtorsBook()
{
	int count;
	cout << "������� ���������� �������: ";
	cin >> count;
	while (true)
	{
		if (count >= 1 && count <= 10)
			return count;
		else
		{
			cout << "���������� ������� ������ ���� �� 1 �� 10, ������� ������" << endl;
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
			cout << "����� �����, ����������������� �����, ������� ������ � ���������� "
				"������ ����� ���� ������ 0. ��������� �������" << endl;
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
			cout << "����� ��� ������ �� ������ ���� ���������������, ��������� �������!" << endl;
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
			cout << "����� ������ ���� �������������, ��������� �������!" << endl;
			cin >> value;
		}
	}
	return 0;
}

void ErrorMessege()
{
	cout << "����� ����� ���" << endl;
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
			cout << "����� ������ ���� ������������� � �� 0 �� 5, ��������� �������!" << endl;
			cin >> value;
		}
	}
	return 0;
}

double SetDoublePositive()
{
	cout << "������� ��������: ";
	double value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "�������� ������ ���� �������������, ��������� �������!" << endl;
			cin >> value;
		}
	}
	return 0.0;
}

