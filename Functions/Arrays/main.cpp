#include<iostream>
using namespace std;

void FillRand(int arr[], const unsigned int n);	//Заполняет массив случайными числами
void Print(int arr[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "");
	const unsigned int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}

void FillRand(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}