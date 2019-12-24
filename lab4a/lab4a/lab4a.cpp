#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int m, l, k, c, a, b;
	k = c = a = b = m = l = 0;
	int arr[20];

	cout << "Введите 20 чисел\n";
	for (int i = 0; i < 20; i++) 
	{
		cout << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = -5 + i * 5; j < 6 + 5 * (i - 1); j++) 
		{
			if (arr[j] > 0) m += arr[j];
			else if (arr[j] == 0) l++;
		}
		if (m > k) 
		{
			k = m;
			b = i;
		}
		if (l > c) 
		{
			c = l;
			a = i;
		}
		m = l = 0;
	}

	cout << "Сумма полож. максимальна в " << b << "-й пятерке. ";
	cout << "Больше всего нулей в: ";

	if (a == 1)
		for (int i = 0; i < 5; i++)
			cout << arr[i] << " ";
	if (a == 2)
		for (int i = 5; i < 10; i++)
			cout << arr[i] << " ";
	if (a == 3)
		for (int i = 10; i < 15; i++)
			cout << arr[i] << " ";
	if (a == 4)
		for (int i = 15; i < 20; i++)
			cout << arr[i] << " ";

	for (int i = 0; i < 20 - 1; i++)
		for (int j = i + 1; j < 20; j++)
			if (arr[j] < arr[i])
			{
				int r = arr[j];
				arr[j] = arr[i];
				arr[i] = r;
			}
	cout << "В порядке возрастания: ";
	for (int i = 0; i < 20; i++)
		cout << arr[i] << " ";

	return 0;
}