#include<iostream>
using namespace std;

//#define IF_CALC


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef IF_CALC
	//5+3
	double a, b;	//„исла, вводимые с клавиатуры
	char s;		//Sign - знак операции
	do
	{
		cout << "¬ведите простое арифметическое выражение: "; cin >> a >> s >> b;
		//cout << a << s << b << endl;
		if (s == '+')
		{
			cout << a << " + " << b << " = " << a + b << endl;
		}
		else if (s == '-')
		{
			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (s == '*')
		{
			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (s == '/')
		{
			cout << a << " / " << b << " = " << a / b << endl;
		}
		else
		{
			cout << "Error: No operation" << endl;
		}
	} while (true);
#endif 
	double a, b;	//„исла, вводимые с клавиатуры
	char s;			//Sign - знак операции
	cout << "¬ведите простое арифметическое выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}

#ifdef SWITCH_SYNTAX
	int var = 0;
	int code1;
	int code2;
	int code3;
	int codeN;
#define CONST_1	1
#define CONST_2	2
#define CONST_3	3
#define CONST_N 'N'

	switch (var)
	{
	case CONST_1: code1; break;
	case CONST_2: code2; break;
		//...
		//...
	case CONST_N: codeN; break;
	default: default_code;
	}
#endif // SWITCH_SYNTAX

}