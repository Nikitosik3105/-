// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"
#include "conio.h"


char dlina(char *a, int i);
char a[1000];

int main(void)
{
	int i, n, dl, k;
	i = 0;
	k = 0;
	setlocale(LC_ALL, "Russian");
	printf("Введите строку:");
	gets_s(a);
	printf("Исходная строка: %s", a);
	printf("\n");
	printf("Введите задуманное число: ");
	scanf_s("%d", &n);
	printf("Нужные вам слова:");
	while (*(a + i) != '\0')
	{
		while (*(a + i) == ' ')
		{
			i++;
		}
		if (dlina(a, i) > n)
		{
			k++;
			while (*(a + i) != ' ' && *(a + i) != '\0')
			{
				printf("%c", *(a + i));
				i++;
			}
			printf("\n");
		}
		else
			while (*(a + i) != ' ' && *(a + i) != '\0')
			{
				i++;
			}
	}
	if (k == 0)
	{
		printf("Нужные вам слова отсутствуют:");
	}
	return 0;
}
char dlina(char *a, int i)
{
	int dl;
	dl = 0;
	while (*(a + i) != ' ' && *(a + i) != '\0')
	{
		i++;
		dl++;
	}
	return(dl);
}


