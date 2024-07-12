/*
 * 8_3.c
 * 
 * Написать функцию, которая находит максимальный элемент в массиве. 
 * Прототип функции: 
 * int find_max_array(int size, int a[])
 * 
 */

#include <stdio.h>

int find_max_array(int size, int a[])
{
	int find_max_array=a[0];
		for (int i = 1; i < size; i++)
			if (find_max_array < a[i])
				find_max_array = a[i];
		return find_max_array;
}

int main()
{
	int size;
	printf("Сколько чисел будем считать? ");
	scanf("%d", &size);
	printf("Введите числа через пробел: \n");
	int i; 
	int a[size];
		for(i = 0; i < size; i++)
			scanf("%d", &a[i]);
	printf("%d ", find_max_array(size, a));
	return 0;
}
