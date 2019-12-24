// ivan17.1.cpp : Дан целочисленный массив A размера N. Назовем серией группу подряд идущих одинаковых элементов, 
//а длиной серии — количество этих элементов (длина серии может быть равна 1). Сформировать два новых целочисленных массива B и C одинакового размера,
//записав в массив B длины всех серий исходного массива, а в массив C — значения элементов, образующих эти серии.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int i, N, k;

	k = 0;

	cout << "Ведите, пожалуйста, размер массива... ";
	cin >> N;
	cout << endl;

	while (N < 0);

	int* arr_1 = new int[N];
	int* arr_2 = new int[N];
	int* arr_3 = new int[N];

	cout << "Введите, пожалуйста, массив... ";

	for (i = 0; i < N; i++)
	{
		cin >> arr_1[i];
	}

	arr_2[k] = 1;
	arr_3[k] = arr_1[k];

	for (i = 1; i < N; i++)
	{
		if (arr_1[i] == arr_1[i - 1])
		{
			arr_2[k]++;
		}
		else
		{
			k++;
			arr_2[k] = 1;
			arr_3[k] = arr_1[i];
		}
	}

	cout << "Mассив B : " << endl;
	for (i = 0; i <= k; i++)
	{
		cout << arr_2[i] << " ";
	}

	cout << endl;
	cout << "Mассив C : " << endl;

	for (i = 0; i <= k; i++)
	{
		cout << arr_3[i] << " ";
	}
	return 0;
}
