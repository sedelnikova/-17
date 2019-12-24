// ivan17.2.cpp : Дано целое число L (> 0) и целочисленный массив размера N. Заменить каждую серию массива, длина которой больше L, на один элемент с нулевым значением

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int i, j, N, k, s, L;

	k = 0;
	
	cout << "Ведите, пожалуйста, размер массива... ";
	cin >> N;
	cout << endl;

	cout << "Ведите, пожалуйста, число L (целое)... ";
	cin >> L;
	cout << endl;

	while (N < 0);
	
	int* arr = new int[N];
	int* arr_1 = new int[N - 1];

	cout << "Введите, пожалуйста, массив... ";

	for (i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		s = 1;

		for (j = i + 1; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				s++;
			}
			else
			{
				break;
			}
		}

		if (s > L)
		{
			arr_1[k] = 0;
			k++;
			i = i + s - 1;
		}
		else
		{
			arr_1[k] = arr[i];
			k++;
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << arr_1[i] << " ";

	}

	return 0;
}
