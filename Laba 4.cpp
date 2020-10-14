// ConsoleApplication63.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "locale.h"
#include "stdio.h"
#include "stdlib.h"
#include "windows.h"

int pusirek(int *a, int n);

int main(void)
{
	int i, n;
	int *a;
	setlocale(LC_ALL, "Russian");
	printf("Введите размер массива:");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		printf("Не достаточно памяти");
		return 1;
	}
	 for (i = 0; i < n; i++)
	 {
		 printf("a[%d]=", i);
		 scanf_s("%d", (a + i));
	 }
	 printf("Первоначальный массив:");
	 for (i = 0; i < n; i++)
	 {
		 printf("%d ", *(a + i));
	 }
	 pusirek(a, n);
	 printf("\n");
	 printf("Изменненный массив:");
	 for (i = 0; i < n; i++)
	 {
		 printf("%d ", *(a + i));
	 }
	return 0;
}

int pusirek(int *a, int n)
{
	int e, d, tmp;
	 for(e = 0; e < n - 1; e++)
		 for(d = n - 1; d > e; d--)
			 if (*(a + d - 1) > *(a + d))
			 {
				 tmp = *(a + d - 1);
				 *(a + d - 1) = *(a + d);
				 *(a + d) = tmp;
			 }
	 return(a, n);
}
