#include<iostream>
using namespace std;

//#define ASCII
//#define TERNARY

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE		(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define VERT_LINE			(char)179
#define HORIZ_LINE			"\xC4\xC4"//(char)196
#define WHITE_BOX			"\xDB\xDB"//(char)219
#define BLACK_BOX			"  "

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef ASCII
	cout << "ASCII-таблица\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		//char i; //объявление
		//(char)i;//преобразование
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";//(char)i - явное преобразование счетчика 'i' в тип данных char
	}
#endif // ASCII

	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;

	int n;
	cout << "Введите размер доски: "; cin >> n;

#ifdef TERNARY
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (j % 2 == i % 2)cout << "+ ";
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;
#endif // TERNARY


	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
				//(i + j) % 2 == 0 ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
	setlocale(LC_ALL, "Russian");
	cout << "Вот и сказочке конец :-)" << endl;
}