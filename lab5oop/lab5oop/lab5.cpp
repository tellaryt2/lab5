#include "Person.h"
#include "Post.h"
#include "Product.h"
#include <crtdbg.h>
#include "DistanteCalculatedIO.h"

int main()
{
	setlocale(LC_ALL, "russian");

	cout << ("Выберите пункт:\n");
	cout << ("1 - 5.1\n");
	cout << ("2 - 5.2\n");
	cout << ("3 - 5.3\n");
	cout << ("10 - задачка \n");
	cout << ("4 - Выход\n");
	
	while (true)
	{
		cout << ("Выберите пункт:\n");
		cout << "> ";
		int command = SetPositive();
		switch (command)
		{
			case 1:
			{
				DemoPerson();
				break;
			}
			case 2:
			{
				DemoPost();
				break;
			}
			case 3:
			{
				DemoProduct();
				break;
			}
			case 10:
			{
				UniformDistanteCalculator speed1(SetDoublePositive());
				AcceleratedDistanceCalculator speed2(SetDoublePositive(), 15);

				double time = 40;
				cout << "Равномерное движение за время " << time
					<< " со скоростью " << speed1.GetSpeed()
					<< " Пройденный путь: " << speed1.Calculate(time) << endl;

				cout << "Равноускоренное движение за время " << time
					<< " со скоростью " << speed2.GetSpeed()
					<< " с ускорением " << speed2.GetAcceliration()
					<< " Пройденный путь: " << speed2.Calculate(time) << endl;
			}
			case 4:
			{
				return 0;
			}
			default:
			{
				cout << "Введите число от 1-4" << endl;
			}
		}
	}
	return 0;
}
