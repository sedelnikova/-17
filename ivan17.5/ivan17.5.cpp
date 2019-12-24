// ivan17.5.cpp : 5. Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). Найти наибольший периметр треугольника, 
//вершины которого принадлежат различным точкам множества A, и сами эти точки (точки выводятся в том же порядке, в котором они перечислены при задании множества A).

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, j, k;

	cout << "Введите, пожалуйста, N ... ";

	do 
	{
		cin >> N;
	} 
	
	while (N <= 2);

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

	double a;
	double a_max = INT_MIN;
	int p1, p2, p3;

	for (i = 0; i < N; i++) 
	{
		for (j = i + 1; j < N; j++) 
		{
			for (k = j + 1; k < N; k++) 
			{
				a = 0;
				a += sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
				a += sqrt(pow(arr[i][0] - arr[k][0], 2) + pow(arr[i][1] - arr[k][1], 2));
				a += sqrt(pow(arr[j][0] - arr[k][0], 2) + pow(arr[j][1] - arr[k][1], 2));

				if (a >= a_max) 
				{
					a_max = a;
					p1 = i;
					p2 = j;
					p3 = k;
				}
			}
		}
	}

	cout << "[" << arr[p1][0] << "] [" << arr[p1][1] << "]"<< endl;
	cout << "[" << arr[p2][0] << "] [" << arr[p2][1] << "]" << endl;
	cout << "[" << arr[p3][0] << "] [" << arr[p3][1] << "]" << endl;

}