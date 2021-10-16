#include"FillRand.h"
#include"Print.h"
#include"Constants.h"

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	//srand(5);
	int minRand, maxRand;
	//cout << "Введите минимальное случайное число: "; cin >> minRand;
	//cout << "Введите максимальное случайное число: "; cin >> maxRand;
	FillRand(arr, n, 200,300);
	Print(arr, n);
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);

	int i_arr_2[ROWS][COLS] = 
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	Print(i_arr_2, ROWS, COLS);
}