#include <iostream>

using namespace std;
void rozmirr(int& rozmir)
{
	do
	{
		cout << "Введіть розмір масива" << endl; cin >> rozmir;
		if (rozmir < 1 || rozmir > 30)	cout << "Розмір масива не може бути меньшие 0 і більше 30.Введіть розмір ще раз" << endl;

	} while (rozmir < 1 || rozmir > 30);
}

bool kratne5(int num)
{
	if (num % 5 == 0) return true;
}
void create_sort_mas_func(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
	}
	cout << "Згенерований масив" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
void task(int* arr, int size)
{
	int count = 0, sum = 0;

	for (int i = 0; i < size; i++) {
		if (kratne5(arr[i])) {
			count++;
			sum += arr[i];
		}
	}
	cout << endl;
	cout << "Кількість чисел, кратних 5: " << count << endl;
	cout << "Сума чисел, кратних 5: " << sum << endl;
}
