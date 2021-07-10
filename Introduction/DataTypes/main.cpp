#include<iostream>
using namespace std;

//#define BOOLEAN
//#define INTEGRAL_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined BOOLEAN
//если определено BOOLEAN, то нижеследующий код до директивы #endif
//будет виден компилятору.
	cout << "DataTypes" << endl;
	cout << endl;
	cout << "\n";
	
	cout << false << endl;
	cout << (bool)-.0001 << endl;
	bool is_winter = false;
	bool is_morning = false;
	bool is_heat = true;
#endif

#if defined INTEGRAL_TYPES
	cout << "SHORT:\n";
	cout << sizeof(short) << endl;
	//Макроопределений Visual Studio
	cout << SHRT_MIN << "\t" << SHRT_MAX << endl;
	//usr - user
	//src - source
	cout << "LONG LONG INT\n";
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;
#endif

	//float, double

	cout << sizeof(float) << endl;
	cout << FLT_MIN << "\t" << FLT_MAX << endl;

	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
}