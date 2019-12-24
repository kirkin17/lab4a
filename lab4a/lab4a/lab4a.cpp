#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int sum, l, k, c, n, b;
	k = c = n = b = sum = l = 0;
	int a[20];

	cout << "Введите 20 чисел\n";
	for (int i = 0; i < 20; i++) 
	{
		cout << i + 1 << ": ";
		cin >> a[i];
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = -5 + i * 5; j < 5 * i + 1; j++) 
		{
			if (a[j] > 0) sum += a[j];
			if (a[j] == 0) l++;
		}
		if (sum > k) 
		{
			k = sum;
			b = i;
		}
		if (l > c) 
		{
			c = l;
			n = i;
		}
		sum = l = 0;
	}

	cout << "Пятерка с максимальной суммой: " << b << endl;
	cout << "Больше всего нулей в: ";

	if (n == 1)
		for (int i = 0; i < 5; i++)
			cout << a[i] << " ";
	if (n == 2)
		for (int i = 5; i < 10; i++)
			cout << a[i] << " ";
	if (n == 3)
		for (int i = 10; i < 15; i++)
			cout << a[i] << " ";
	if (n == 4)
		for (int i = 15; i < 20; i++)
			cout << a[i] << " ";


	for (int i = 0; i < 20 - 1; i++)
		for (int j = i + 1; j < 20; j++)
			if (a[j] < a[i])
			{
				int r = a[j];
				a[j] = a[i];
				a[i] = r;
			}
	cout << "В порядке возрастания: ";
	for (int i = 0; i < 20; i++)
		cout << a[i] << " ";
}