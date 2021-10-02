//Functions
#include<iostream>
#include<Windows.h>
using namespace std;

int Add(int a, int b = 0);		//Прототип функции - Объявление функции (Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);*/

	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	int c = Add(a);	//Вызов функции (Function call) - это использование функции.
	cout << c << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;
}

int Add(int a, int b/* = 0*/)	//Реализация функции - Определение функции (Function definition)
		//E:redefinition ^ of default parameter
{//Addition - Сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{//Multiplication - Умножение
	return a * b;
}
double Div(int a, int b)
{//Division - Деление
	return (double)a / b;
}

//Too many arguments in function call - если передать больше параметров, чем она принимает
//Too few arguments in function call - если передать меньше параметров, чем она принимает

//Function doesn't take N arguments.
//----------------------------------------------------------



//			UNRESOLVED EXTERNALS
//(LNK - linker)