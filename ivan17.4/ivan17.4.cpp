// ivan17.4.cpp : Дано множество A из N точек (точки заданы своими координатами x, y). Среди всех точек этого множества, 
// лежащих во второй четверти, найти точку, наиболее удаленную от начала координат. Если таких точек нет, то вывести точку с нулевыми координатами.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, j;

	cout << "Введите, пожалуйста, N ... ";
	cin >> N;

	int** arr = new int* [N];


	for (i = 0; i < N; i++) 
	{
		arr[i] = new int[2];
	}

	for (i = 0; i < N; i++) 
	{
		for (j = 0; j < 2; j++) 
		{
			cin >> arr[i][j];
		}
	}

	int max_x = 0;
	int max_y = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 1; j++) 
		{
			if (arr[i][j] < 0 && arr[i][j + 1] > 0 && arr[i][j] >= max_x && arr[i][j + 1] <= max_y && arr[i][j] != 0 && arr[i][j] != 0)
			
			{
				max_x = arr[i][j];
				max_y = arr[i][j + 1];
			}
		}
	}

	cout << max_x << " " << max_y << endl;
}
