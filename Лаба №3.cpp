// ConsoleApplication69.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	printf("������� ���������� �����:");
	scanf_s("%d", &k);
	 for (i = 0; i < k; i++)
	 {
		 printf("b[%d]=", i);
		 scanf_s("%d", &b[i]);
	 }
	 printf("�������������� ������:");
	 for (i = 0; i < k; i++)
	 {
		 printf("%d ", b[i]);
	 }
	  for (i = 0; i < k; i++)
	  {
		  sum = sum + b[i];
	  }
	   printf("\n");
	   printf("����� ���������:");
	   printf("%d", sum);
	   printf("\n");
    return 0;
}

