#pragma once
#include<iostream>
//using namespace std;    //DEPRACATED
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

extern int g_a; // Глобальная переменная, её видят все функции и её может изменить любая функция
         // Поэтому использование глобальных переменных настоятельно НЕ рекомендуется (DEPRECATED),
         // поскольку неизвестно, что в ней хранится.
         //	g_ - Global (Hungarian notation - Вергерская нотация).
//НО, глобальные константы используются очень широко. Константу изменить никто НЕ может, но все её видят и могут прочитать.

const int ROWS = 5;
const int COLS = 8;