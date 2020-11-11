// ConsoleApplication73.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

char sravnenie(char **str, int b);
char summa(char ** str, int b);

int main(void)
{
	char **str;
	int k, n, i, b;
	char *tmp;
	setlocale(LC_ALL, "Russian");
	printf("Введите количество строк:");
	scanf_s("%d", &k);
	printf("Введите размер строк:");
	scanf_s("%d", &n);
	str = (char**)malloc(k * sizeof(char*));
	if (str == NULL)
	{
		printf("Не хватает памяти:");
		return 1;
	}
	for (i = 0; i < k; i++)
	{
		*(str + i) = (char*)malloc(n * sizeof(char));
		printf("\nВведите %d-ю строку: ", i);
		gets_s(*(str + i), n);
	}
	printf("Первоначальные строки: ");
	for (i = 0; i < k; i++)
	{
		printf(" %s", *(str + i));
		printf("\n");
	}
	for (i = 0; i < k - 1; i++)
		for (b = k - 1; b > i; b--)
		{
			if (sravnenie(str, b) > 0)
			{
				tmp = *(str + b);
				*(str + b) = *(str + b - 1);
				*(str + b - 1) = tmp;
			}
		}
	printf("Измененные строки: ");
	for (i = 0; i < k; i++)
	{
		printf(" %s", *(str + i));
		printf("\n");
	}
	return 0;
}

char sravnenie(char **str, int b)
{
	int j;
	j = 0;
	while ((*(*(str + b) + j)) == (*(*(str + b + 1) + j)) && (*(*(str + b) + j)) != '\0' && (*(*(str + b + 1) + j)) != '\0')
	{
		j++;
	}
	return((*(*(str + b - 1) + j)) - (*(*(str + b) + j)));
}

char summa(char **str, int b)
{
	int p, s, j;
	p = 0;
	s = 0;
	j = 0;
	while (*(*(str + b) + j) != '\0' && *(*(str + b) + j) > 57)
	{
		j++;
	}
	while (*(*(str + b) + j) == ' ' && *(*(str + b) + j) != '\0')
	{
		j++;
	}
	while (*(*(str + b) + j) != ' ')
	{
		s = s * 10 + *(*(str + b) + j + 1);
	}
	p = p + s;
	while (*(*(str + b) + j) == ' ')
	{
		j++;
	}
	s = 0;
	return(p);
}

