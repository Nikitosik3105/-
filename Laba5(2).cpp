// ConsoleApplication36.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdafx.h"
#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

int main(void)
{
	int i, j, k;
	float sr, sum;
	int a[5][6];
	setlocale(LC_ALL, "Russian");
	sum = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 6; j++)
		{
			//printf("a[%d][%d]=",i,j);
			//scanf_s("%d", &a[i][j]);
			a[i][j] = rand() % 10;
		}
	printf("Первоначальная матрица:");
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 6; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");
	for (j = 0; j < 6; j++)
	{
		sum = 0;
		printf("%d", j);
		printf("-й столбец матрицы, сумма элементов:");
		for (i = 0; i < 5; i++)
		{
			sum = sum + a[i][j];
			k = 5;
		}
		sr = sum / k;
		printf("%.2f ", sum);
		printf("\n");
		printf("%.2f ", sr);
		printf("\n");
	}
	system("pause");
	return 0;
}




