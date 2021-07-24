#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef WHILE
	int n;	//Количество итераций
	int i = 0;//Счетчик цикла
	cout << "Введите количество итераций: "; cin >> n;
	/*while (i < n)
	{
		cout << ++i << " Hello World\n";
		//i++;
	}*/

	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
#endif // WHILE

	char key;	//Будет хранить код клавиши
	do
	{
		key = getch();	//ASCII-код
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
}