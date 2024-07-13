/*
 * 8_6.c
 * ��।����� ������⢮ ������⥫��� ����⮢ �����⭮� ������,
 * �ॢ����� �� ����稭� �।��� ��䬥��᪮� ��� ����⮢ �������
 * ���������. ����������� �㭪�� �।��� ��䬥��᪮� ������� ���������.
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
	printf("������ ࠧ��� ������, ���: ");
	scanf("%d", &size);
	int massiv [size][size]; 
	printf("������ ������: \n");
		for(int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				scanf("%d", &massiv[i][j]);
	int mda = massiv_diag_avg(size, massiv);
	int x = 0;
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				if ((massiv[i][j] > 0) && (massiv[i][j] > mda))
					x++;
	printf("�।��� ��䬥��᪮� ����让 ��������� (����) ࠢ��: %d", mda);
	printf(" \n");
	printf("���-�� ������⥫��� ����⮢ ���ᨢ� ����� ���� ࠢ��: %d ", x);
	return 0;
}
