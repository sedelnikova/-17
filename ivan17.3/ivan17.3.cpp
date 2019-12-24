// ivan17.3.cpp : Дано целое число K (> 0) и целочисленный массив размера N. Поменять местами последнюю серию массива и его серию с номером K 

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int N, K, i, j;

	cout << " Введите, пожалуйста, К ... ";

	cin >> K;

	if (K <= 0) 
	{
		cout << "Пардон, данные некорректны ;)";
		return 0;
	}

	cout << "Введите, пожалуйста, размер массива N ... ";

	cin >> N;

	int* arr = new int[N];
	int* arr2 = new int[N];


	for (i = 0; i < N; i++) 
	{
		cin >> arr[i];
	}

	int a = 0;
	int index_k = 0;
	int length_k;
	int number_k;

	for (i = 0; i < N; i++) 
	{
		length_k = 1;

		for (j = i + 1; j < N; j++) 
		{
			if (arr[j] == arr[j - 1]) 
			{
				length_k++;
			}

			else 
			{
				a++;

				if (length_k > 1) 
				{
					i += length_k - 1;
				}
				break;
			}
		}
		if (a == K) 
		{
			index_k = i - length_k + 1;
			number_k = arr[i];
			break;
		}
	}
	int number_a = arr[N - 1];
	int length_a = 1;

	for (i = N - 1; i > index_k; i--) 
	{
		if (arr[i] == arr[i - 1]) 
		{
			length_a++;
		}
		else 
		{
			break;
		}
	}

	for (i = 0; i < index_k; i++) 
	{
		arr2[i] = arr[i];
	}

	for (i = index_k; i < index_k + length_a; i++) 
	{
		arr2[i] = number_a;
	}

	int s = index_k + length_k;

	for (i = index_k + length_a; i < N - length_k; i++) 
	{
		arr2[i] = arr[s];
		s++;
	}

	for (i = N - length_k; i < N; i++) 
	{
		arr2[i] = number_k;
	}

	for (i = 0; i < N; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}
