// ConsoleApplication69.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"

int main(void)
{
	int i,k,sum;
	int b[100];
	sum = 0;
	setlocale(LC_ALL, "Russian");
	printf("Введите количество чисел:");
	scanf_s("%d", &k);
	 for (i = 0; i < k; i++)
	 {
		 printf("b[%d]=", i);
		 scanf_s("%d", &b[i]);
	 }
	 printf("Первоначальный массив:");
	 for (i = 0; i < k; i++)
	 {
		 printf("%d ", b[i]);
	 }
	  for (i = 0; i < k; i++)
	  {
		  sum = sum + b[i];
	  }
	   printf("\n");
	   printf("Сумма элементов:");
	   printf("%d", sum);
	   printf("\n");
    return 0;
}

