#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>
#define size 10
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int task, length = size;
	do
	{
		cout << "Введите номер задания от 1 до 10 - ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			/*1.	Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки.*/
			int m[size][size], sum;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout << m[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < length; i++)
			{
				sum = 0;
				for (int j = 0; j < length; j++)
				{
					sum += m[i][j];
				}
				cout << "Сумма элементов " << i << "-й строки = " << sum << endl;
			}
		} break;

		case 2:
		{
			/*2.	Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов*/
			int m[4][4], sum = 0, min = 0;
			for (int i = 0; i < 4; i++)
			{
				cout << i + 1 << ". ";
				for (int j = 0; j < 4; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				if (i == 0)
					min = sum;
				if (sum <= min)
					min = sum;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += m[i][j];
				}
				if (sum == min)
				{
					cout << "Строка с наименьшей суммой - " << i + 1 << endl;
					cout << "Её сумма = " << sum << endl;
				}

			}
		} break;

		case 3:
		{
			/*3.	Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.*/
			int m[6][8], all = 1;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					m[i][j] = -50 + rand() % 100;
					if (j == 0)
						if (m[i][j] > 0)
							all *= m[i][j];
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			cout << "Произведение положительных элементов первого столбца = " << all << endl;
		} break;

		case 4:
		{
			/*4.	Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2,
			записывая их в нее "по спирали" по часовой стрелке.*/
			int const n = size;
			int A[n][n];
			int i = 1, j, k, p = n / 2;
			for (k = 1; k <= p; k++)
			{
				for (j = k - 1; j<n - k + 1; j++)
					A[k - 1][j] = i++;
				for (j = k; j<n - k + 1; j++)
					A[j][n - k] = i++;
				for (j = n - k - 1; j >= k - 1; --j)
					A[n - k][j] = i++;
				for (j = n - k - 1; j >= k; j--)
					A[j][k - 1] = i++;
			}
			if (n % 2 == 1) A[p][p] = n*n;
			for (i = 0; i<n; i++)
				for (j = 0; j<n; j++)
				{
					cout << A[i][j] << "\t";
					if (j == n - 1) printf("\n");
				}
		} break;

		case 5:
		{
			/*5.	Дан двухмерный целочисленный массив A(M, N).Составить  одномерный массив B из номеров строк этого массива*/
			int m[size][size], m2[size];
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -100 + rand() % 200;
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < length; i++)
			{
				m2[i] = i + 1;
				cout << m2[i] << endl;
			}

		} break;

		case 6:
		{
			/*6.	Написать программу, которая в матрице чисел A(N, M) находит все элементы,
			превышающие по абсолютной величине заданное число B.Подсчитать число
			таких элементов и записать их в массив C.*/
			int m[size][size], b = 1 + rand() % 100, count = 0, a, m2[100];
			cout << "b = " << b << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = -100 + rand() % 200;
					if (m[i][j] > b)
					{
						a = m[i][j];
						m2[count] = a;
						count++;
					}
					cout << m[i][j] << "\t";
				} cout << endl;
			} cout << "Кол-во элементов больше числа " << b << " -- " << count << endl;
			for (int i = 0; i < count; i++)
			{
				cout << m2[i] << endl;
			}
		} break;

		case 7:
		{
			/*7.	Дана целочисленная матрица размера 8х5.Определить:
			a.сумму всех элементов второго столбца массива;
			b.сумму всех элементов 3 - й строки массива.*/
			int m[8][5], sum1 = 0, sum2 = 0;
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					m[i][j] = -50 + rand() % 100;
					if (j == 1)
						sum1 += m[i][j];
					if (i == 2)
						sum2 += m[i][j];
					cout << m[i][j] << "\t";
				} cout << endl;
			} cout << "сумму всех элементов второго столбца массива = " << sum1 << endl;
			cout << "сумму всех элементов 3-й строки массива = " << sum2 << endl;
		} break;

		case 8:
		{
			/*8.	Дана целочисленная прямоугольная матрица размера M·N.
			Сформировать одномерный массив, состоящий из элементов, лежащих в интервале[1, 10].
			Найти произведение елементов полученного одномерного массив*/
			int m[5][6], m2[30], count = 0, mas, all = 1;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					m[i][j] = -50 + rand() % 100;
					cout << m[i][j] << "\t";
				} cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					if (m[i][j] >= 1 && m[i][j] <= 10)
					{
						mas = m[i][j];
						m2[count] = mas;
						count++;
					}
				}
			} cout << "\nОдномерный массив из " << count << "-и элементов\n" << endl;
			for (int i = 0; i < count; i++)
			{
				cout << m2[i] << "  ";
				all *= m2[i];
			} cout << "\nПроизведение элементов = " << all << endl;
		} break;

		case 9:
		{
			/*9.	Дана целочисленная квадратная матрица.Указать столбец(назвать его номер),
			где минимальное количество элементов, кратных сумме индексов*/
			int m[size][size], index = 0, min = 0, count = 0;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					m[i][j] = 100 + rand() % 400;
					cout << m[i][j] << "\t";
				}
				cout << endl;
				index += i;
			}
			cout << "\nСумма индексов = " << index << endl;
			for (int i = 0; i < length; i++)
			{
				for (int j = 0; j < length; j++)
				{
					if (m[i][j] % index == 0)
						count++;
					if (i == 0)
						min = count;
					if (j == length - 1)
						if (count <= min)
							min = count;
				}
			}
			cout << min << "\n==========\n" << count << endl;
			for (int i = 0; i < length; i++)
			{
				count = 0;
				for (int j = 0; j < length; j++)
				{
					if (m[i][j] % index == 0)
						count++;
					if (j == length - 1)
						if (count > min)
						{
							cout << "столбец, где минимальное количество элементов,\nкратных сумме индексов (" << index << ") --- " << i << endl;
							break;
						}
				}
			}
		} break;

			case 10:
			{
				/*10.	Дана целочисленная квадратная матрица.Найти сумму элементов матрицы, лежащих выше главной диагонали*/
				int m[size][size], sum = 0;
				for (int i = 0; i < length; i++)
				{
					for (int j = 0; j < length; j++)
					{
						m[i][j] = 1 + rand() % 100;
						cout << m[i][j] << "\t";
					} cout << endl;
				}

				for (int i = 0; i < length - 1; i++)
				{
					sum += m[i][i + 1];
					cout << m[i][i + 1] << endl;
				}
				cout << "Сумма = " << sum << endl;
			} break;
		}
	} while (task > 0);


	system("pause");
}