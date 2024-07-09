/*
 * 8_1.c
 * 
 * ������� �㭪��, ����� ������ ���ᨢ �� �����⠭��. 
 * ��ண� ᮣ��᭮ ���⨯�. ��� �㭪樨 � �� ��㬥��� ������ ����:
 * void sort_array(int size, int a[])
 * 
 * 
 */

#include <stdio.h>

void sort_array(int size, int a[])
{
	int x1 = 0; 
	int x2 = 0; 
	int x3 = 0;
	for(x1 = 0; x1 < size; ++x1)
	{
		for(x2 = x1; x2 < size; ++x2)
		{
			if(a[x1] > a[x2])
			{
				x3 = a[x1];
				a[x1] = a[x2];
				a[x2] = x3;
			}
		}
	}
}

int main()
{
	int size;
	printf("����쪮 �ᥫ �㤥� �����? ");
	scanf("%d", &size);
	printf("������ �᫠ �१ �஡��: \n");
	int i; 
	int a[size];
		for(i = 0; i < size; i++)
			scanf("%d", &a[i]);
		sort_array(size, a);
		for (int i = 0; i < size; i++)
			printf("%d ", a[i]);
		printf("\n");
	return 0;
}


