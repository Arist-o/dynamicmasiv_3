#include <iostream>
#include <Windows.h>
#include "create_mas_func.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	bool povtor = true;
	int variant = 0,rozmir =0,*arr;
	while (povtor)
	{
		cout << R"(Умова 'Розробити функцію для визначення числа кратного п’яти і функції, що її використовує для визначення кількості і суми елементів даного одновимірного динамічного масиву, кратних п’яти.'
					1 Виконати програму
					2 Закрити програму)" << endl;
		cin >> variant;
		switch (variant)
		{
		case 1:
			rozmirr(rozmir);
			arr = new int[rozmir];
			create_sort_mas_func(arr, rozmir);
			task(arr, rozmir);
			delete[]arr;
			break;
		case 2:
			povtor = false;
			break;
		default:
			cout << "Неправильно введений варіант.Введіть ще раз" << endl;
			break;
		}
	}
}
