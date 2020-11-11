// ConsoleApplication75.cpp: определ€ет точку входа дл€ консольного приложени€.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<iostream>
#include <conio.h>



int sravnenie(char **str, int k, int j);
int sum(char **str, int k);

int sravnenie(char **str, int k, int j)
{

	while (*(*(str + k - 1) + j) == *(*(str + k) + j) && *(*(str + k - 1) + j) != '\0' && *(*(str + k) + j) != '\0')
	{
		j++;
	}

	return(*(*(str + k - 1) + j) - *(*(str + k) + j));
}


int sum(char **str, int k)
{
	int j = 0;
	int f = 0;
	int s = 0;
	int p = 0;
	while (*(*(str + k) + j) != '\0' || *(*(str + k) + j) > 57 || (*(*(str + k) + j) == ' '))
	{
		j++;
	}
	while (*(*(str + k) + j) != '\0')
	{
		while (*(*(str + k) + j) != ' ' && *(*(str + k) + j) != '\0')
		{
			s = s * 10 + *(*(str + k) + j);
			j++;
		}
		p = p + s;
		s = 0;

		while (*(*(str + k) + j) == ' ' && *(*(str + k) + j) != '\0')
			j++;

	}


	return(s);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	system("CLS");
	int n, m, i, j;
	char **str;
	char *temp;
	printf("¬ведите количество строк: ");
	scanf_s("%d", &n);
	printf("¬ведите длину строк: ");
	scanf_s("%d", &m);

	str = (char**)calloc(n, sizeof(char*));
	if (str == NULL)
	{
		printf("/nЌ≈“ —¬ќЅќƒЌќ… ѕјћя“»");
		return 0;
	}


	for (int i = 0; i < n; i++)
	{
		*(str + i) = (char*)malloc(m * sizeof(char));
		fflush(stdin);

		printf("\n\t¬ведите %d - ю строку : ", i);
		gets_s(*(str + i), m);
		//printf("\n\n\ti=%d ", i);
		//printf("\n\n\t%s ", *(str+i));
	}
	printf("\n\t¬веденные данные :");

	for (int i = 1; i < n; i++)
	{
		printf("\n\n\t%s", *(str + i));
	}


	for (i = 1; i < n - 1; i++) //пузырек
	{
		for (int k = n - 1; k > i; k--)
		{
			j = 0;
			if (sravnenie(str, k, j) > 0)
			{
				temp = *(str + k);
				*(str + k) = *(str + k - 1);
				*(str + k - 1) = temp;
			}

		}

	}
	printf("\n\t»тоговые данные :");

	for (int i = 0; i < n; i++)
	{
		printf("\n\n\t%s", *(str + i));
	}

	printf("\n\t—ортировка по зарплате :");
	for (i = 1; i < n - 1; i++) //пузырек
	{
		for (int k = n - 1; k > i; k--)
		{
			if (sum(str, k) < sum(str, k - 1))
			{
				temp = *(str + k);
				*(str + k) = *(str + k - 1);
				*(str + k - 1) = temp;
			}


		}

	}
	printf("\n\t»тоговые данные сортировки по зарплате :");

	for (int i = 0; i < n; i++)
	{
		printf("\n\n\t%s", *(str + i));
	}
	return (0);

}


