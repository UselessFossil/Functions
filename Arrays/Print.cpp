#include"Print.h"

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T>void PrintReverse(T arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void PrintReverse(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = COLS - 1; j >= 0; j--)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}