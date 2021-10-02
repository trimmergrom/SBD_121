#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &coord);
	const int n = 5;//SIZE
	int arr[n] = { 3, 5, 8 };
	//n-1 или SIZE-1
	cout << "Введите значения элементов (5 штука):";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}