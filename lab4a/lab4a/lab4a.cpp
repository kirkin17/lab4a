#include <iostream>
using namespace std;

int main()
{
	setlocale(1, "Russian");
	int A[20];
	int max = 0;
	int nom = 0;
	int sum = 0;

	cout << "Введите 20 элементов массива:\n";
	for (int i = 1; i <= 20; i++)
	{
		cin >> A[i];
//		A[i] = 1 + rand() % 10;
	}
	for (int i = 1; i <= 20; i++)
	{
		for (int k = 1; k <= 5; k++)
		{
			sum += A[i];
		}
		if (sum > max) { nom++; };
	}
	cout << "Номер пятерки, в которой сумма элементов больше всех: " << nom << "\n";
}