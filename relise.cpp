#include <iostream>

using namespace std;
void rozmirr(int& rozmir)
{
	do
	{
		cout << "������ ����� ������" << endl; cin >> rozmir;
		if (rozmir < 1 || rozmir > 30)	cout << "����� ������ �� ���� ���� ������� 0 � ����� 30.������ ����� �� ���" << endl;

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
	cout << "������������ �����" << endl;
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
	cout << "ʳ������ �����, ������� 5: " << count << endl;
	cout << "���� �����, ������� 5: " << sum << endl;
}
