//ControlStructures
#include<iostream>
using namespace std;

//#define IF_SIMPLE_CONDITION
//#define TARGET

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef IF_SIMPLE_CONDITION
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // IF_SIMPLE_CONDITION

#ifdef TARGET
	int number;	//Число, вводимое с клавиатуры
	cout << "Введите число: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "Цель поражена" << endl;
	}
	else
	{
		cout << "Вы Firefox" << endl;
	}
#endif // TARGET

	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы в пустыне" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 20)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Сильный мороз" << endl;
	}
}