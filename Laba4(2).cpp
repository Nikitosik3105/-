// ConsoleApplication59.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
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
	printf("������� ������ �������:");
	scanf_s("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	if (a == NULL)
	{
		printf("�� ���������� ������");
		return 1;
	}
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", (a + i));
	}
	printf("�������������� ������:");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
	pusirek(a, n);
	printf("\n");
	printf("����������� ������:");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(a + i));
	}
	system("pause");
	return 0;
}

int pusirek(int *a, int n)
{
	int e, d, tmp;
	for (e = 0; e < n - 1; e++)
		for (d = n - 1; d > e; d--)
			if (*(a + d - 1) > *(a + d) && *(a + d) <= 0)
			{
				tmp = *(a + d - 1);
				*(a + d - 1) = *(a + d);
				*(a + d) = tmp;
			}
	return(a, n);
}

