/*
 * 8_6.c
 * Определить количество положительных элементов квадратной матрицы,
 * превышающих по величине среднее арифметическое всех элементов главной
 * диагонали. Реализовать функцию среднее арифметическое главной диагонали.
 * 
 */

#include <stdio.h>

int massiv_diag_avg(int size, int massiv[size][size])
{
	int summa = 0; 
	for(int i = 0; i < size; i++)
		summa += massiv[i][i];
	return summa / size;
}

int main()
{
	int size;
	printf("Введите размер матрицы, Шеф: ");
	scanf("%d", &size);
	int massiv [size][size]; 
	printf("Вводите матрицу: \n");
		for(int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				scanf("%d", &massiv[i][j]);
	int mda = massiv_diag_avg(size, massiv);
	int x = 0;
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				if ((massiv[i][j] > 0) && (massiv[i][j] > mda))
					x++;
	printf("Среднее арифметическое большой диагонали (САБД) равно: %d", mda);
	printf(" \n");
	printf("Кол-во положительных элементов массива больше САБД равно: %d ", x);
	return 0;
}
