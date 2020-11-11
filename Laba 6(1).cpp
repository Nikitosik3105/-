// ConsoleApplication74.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

int modul(int *a, int k, int t, int n);

int main(void)
{
	int *a;
	int *b;
	int n, max, t, k, t_max, k_max;
	setlocale(LC_ALL, "Russian");
	printf("Введите размер матрицы:");
	scanf_s("%d", &n);
	a = (int*)malloc(n *n * sizeof(int));
	if (a == NULL)
	{
		printf("Не достаточно памяти");
		return 1;
	}
	b = (int*)malloc((n - 1)* (n - 1) * sizeof(int));
	if (b == NULL)
	{
		printf("Не достаточно памяти");
		return 1;
	}
	for (k = 0; k < n; k++)
		for (t = 0; t < n; t++)
		{
			//printf("a[%d][%d]=",i,j);
			//scanf_s("%d", (a + i*n + j));
			*(a + k*n + t) = rand() % 100 - 50;
		}
	printf("Первоначальная матрица:");
	for (k = 0; k < n; k++)
	{
		printf("\n\n");
		for (t = 0; t < n; t++)
		{
			printf("%3d ", *(a + k*n + t));
		}
	}
	printf("\n");
	max = 0;
	for (k = 0; k < n; k++)
		for (t = 0; t < n; t++)
		{
			if (modul(a, k, t, n) > max)
			{
				max = modul(a, k, t, n);
				t_max = t;
				k_max = k;
			}
		}
	printf("\nМаксимальное число по модулю в матрице:");
	printf("%d", max);
	printf("\n");
	for (k = 0; k < n; k++)
		for (t = 0; t < n; t++)
		{
			if (t < t_max && k < k_max)
			{
				*(b + k * n + t) = *(a + k * n + t);
			}
			if (t > t_max && k < k_max)
			{
				*(b + k * n + t - 1) = *(a + k * n + t);
			}
			if (t < t_max && k > k_max)
			{
				*(b + (k - 1) * n + t) = *(a + k * n + t);
			}
			if (t > t_max && k > k_max)
			{
				*(b + (k - 1) * n + t - 1) = *(a + k * n + t);
			}
		}
	for (k = 0; k < n - 1; k++)
	{
		printf("\n");
		for (t = 0; t < n - 1; t++)
		{
			printf("%3d ", *(b + k * n + t));
		}
	}
	return 0;
}


int modul(int *a, int k, int t, int n)
{
	int p;
	p = 0;
	if (*(a + k * n + t) < 0)
	{
		p = *(a + k * n + t) * (-1);
	}
	return(p);
}
