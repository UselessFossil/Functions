#include"FillRand.h"

template<typename T>void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100; //Функция rand() возвращает псевдослучайное число, в промежутке от 0 до 32 767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 100) / 10;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100) / 10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS)//Function defenition - Определение функции (Реализация функции).
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 100) / 10;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = float(rand() % 100) / 10;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}