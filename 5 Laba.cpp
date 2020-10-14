// ConsoleApplication34.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

int main(void)
{
	int i, j, n, m, sum, k;
	float sr;
	int a[400][400];
	setlocale(LC_ALL, "Russian");
	sum = 0;
	printf("Введите количество строк матрицы:");
	scanf_s("%d", &n);
	printf("Введите количество столбцов матрицы:");
	scanf_s("%d", &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			//printf("a[%d][%d]=",i,j);
			//scanf_s("%d", &a[i][j]);
			a[i][j] = rand() % 10;
		}
	printf("Первоначальная матрица:");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < m; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");
	for (j = 0; j < m; j++)
	{
		sum = 0;
		k = 0;
		printf("%d", j);
		printf("-й столбец матрицы, сумма элементов:");
		for (i = 0; i < n; i++)
		{
			sum = sum + a[i][j];
			k = 5;
		}
		sr = sum / k;
		printf("%d ", sum);
		printf("\n");
		printf("%f ", sr);
		printf("\n");
	}
	system("pause");
	return 0;
}


