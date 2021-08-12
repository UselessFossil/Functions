#pragma once
#include"stdafx.h"

template<typename T>void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);

template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS); //Function declaration - Объявление функции (Прототип функции).
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(short arr[ROWS][COLS], const int ROWS, const int COLS);