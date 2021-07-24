#pragma warning(disable:4326)
//отключает предупреждение: main should be int insted of void

#include<iostream>
using namespace std;

//#define UNARY_BINARY

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR	//оператор присваивания =
//#define INCREMENT_DECREMENT	//(++/--)
//#define COMPOUND_ASSIGNMENTS
#define COMPARISON_OPERATORS	//Операторы сравнения

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef UNARY_BINARY
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//
	//*3;		//Have no sence  
#endif // UNARY_BINARY

#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+ -;
	//Binary:	+ - * / %;
	//% - остаток от деления (reminder)
	cout << 4. % 18 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//l-value = r-value;
	/*int a = 2;
	int b = a + 1;
	int c = a + b;
	a = a + b;*/
	//a = b + c * d + e;
	//2 + 3 + 4 + 5
	int a, b, c;
	a = b = c = 0;
#endif

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор...
	//Decrement (--) - это унарный оператор...
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	//---------------------------
	a += b;	//a = a + b;
	a -= b;	//a = a - b;
	a *= b;	//a = a * b;
	a /= b;	//a = a / b;
	a %= b;	//a = a % b;
#endif // COMPOUND_ASSIGNMENTS

}