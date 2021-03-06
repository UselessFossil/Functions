#include<iostream>
using namespace std;

#define tab "\t"

int g_a; // Глобальная переменная, её видят все функции и её может изменить любая функция
         // Поэтому использование глобальных переменных настоятельно НЕ рекомендуется (DEPRECATED),
         // поскольку неизвестно, что в ней хранится.
		 //	g_ - Global (Hungarian notation - Вергерская нотация).
//НО, глобальные константы используются очень широко. Константу изменить никто НЕ может, но все её видят и могут прочитать.

const int ROWS = 5;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS); //Function declaration - Объявление функции (Прототип функции).

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(short arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
void PrintReverse(float arr[], const int n);
void PrintReverse(char arr[], const int n);
void PrintReverse(short arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
int Sum(char arr[], const int n);
int Sum(short arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(char arr[], const int n);
double Avg(short arr[], const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
int minValueIn(char arr[], const int n);
short minValueIn(short arr[], const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
int maxValueIn(char arr[], const int n);
short maxValueIn(short arr[], const int n);

//#define ARRAYS_1
#define ARRAYS_2


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef ARRAYS_1
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	FillRand(arr, n);
	cout << "int array" << endl;
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << endl << endl;

	//Function overload
	cout << "double array" << endl;
	double d_arr[n];	//double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, n) << endl;
	cout << endl << endl;

	cout << "float array" << endl;
	float f_arr[n];
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, n) << endl;
	cout << endl << endl;

	cout << "char array" << endl;
	char c_arr[n];
	FillRand(c_arr, n);
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "Сумма элементов массива: " << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(c_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, n) << endl;
	cout << endl << endl;

	cout << "short array" << endl;
	char s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "Сумма элементов массива: " << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(s_arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(s_arr, n) << endl;
#endif // ARRAYS_1

#ifdef ARRAYS_2
	cout << "\n=======================2D arrays==========================\n";

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
#endif // ARRAYS_2
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100; //Функция rand() возвращает псевдослучайное число, в промежутке от 0 до 32 767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand()%100)/10;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand()%100)/10;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)//Function defenition - Определение функции (Реализация функции).
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << int(arr[i]) << tab;
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(float arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(char arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << int(arr[i]) << tab;
	}
	cout << endl;
}
void PrintReverse(short arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += int(arr[i]);
	}
	return sum;
}
int Sum(short arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(short arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(char arr[], const int n)
{
	short min = int(arr[0]);
	for (int i = 0; i < n; i++)
	{
		if (int(arr[i]) < min)min = arr[i];
	}
	return min;
}
short minValueIn(short arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(char arr[], const int n)
{
	int max = int(arr[0]);
	for (int i = 0; i < n; i++)
	{
		if (int(arr[i]) > max)max = int(arr[i]);
	}
	return max;
}
short maxValueIn(short arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}