#include <stdio.h>

int main ()
{
	float x, y, z, Add, Average;							// ���� 5�� ����

	printf("�Ǽ� 3���� �Է��Ͻÿ�.\n");						// scanf ����
	scanf("%f %f %f", &x, &y, &z);							// �Ǽ� 3�� �Է¹���

	Add = x+y+z;											// �Ǽ� 3���� �� ����
	Average = (x+y+z)/3;									// �Ǽ� 3���� ��հ� ����

	printf("�հ�� %f\n��հ��� %f\n", Add, Average);		// �Ǽ� 3���� �հ� ��հ� ���
	
	return 0;
}