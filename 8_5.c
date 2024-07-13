/*
 * 
 * 8_5.c
 * Составить функцию, которая меняет в массиве минимальный и
 * максимальный элемент местами. Прототип функции:
 * void change_max_min(int size, int a[])
 * 
 */

#include <stdio.h>

int minpos(int size, int massiv[]) 
{
	int min = massiv[0], i, pos = 0;
	for (i = 1; i < size; i++)
		if (min > massiv[i])
		{
			min = massiv[i];
			pos = i;
		}
	return pos;
}

int maxpos(int size, int massiv[]) 
{
	int max = massiv[0], i, pos = 0;
	for (i = 1; i < size; i++)
		if (max < massiv[i])
		{
			max = massiv[i];
			pos = i;
		}
	return pos;
}

void change_max_min(int size, int massiv[])
{
	int minposval = minpos(size, massiv);
	int maxposval = maxpos(size, massiv);
	int x = massiv[minposval];
		massiv[minposval] = massiv[maxposval];
		massiv[maxposval] = x;
}

int main()
{
	int size;
	printf("Введите размер массива, Шеф: ");
	scanf("%d", &size);
	int massiv [size]; 
	printf("Введите массив: \n");
		for(int i = 0; i < size; i++)
			scanf("%d", &massiv[i]);
	change_max_min(size, massiv);
		for (int i = 0; i < size; i++)
			printf("%d ", massiv[i]);
		printf("\n");
	return 0;
}
