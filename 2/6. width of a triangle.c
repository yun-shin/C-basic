/* �ﰢ�� ���� ���ϴ� ���α׷� */
#include <stdio.h>

int main ()
{
	float b, h, area;								// ���� �غ�, ����, ���� ����

	printf("�ﰢ���� �غ��� ������ �ּ���.\n");		// scanf ����
	scanf("%f", &b);								// ���� �غ� ����

	printf("�ﰢ���� ���̸� ������ �ּ���.\n");		// scanf ����
	scanf("%f", &h);								// ���� ���� ����

	area = 0.5*h*b;									// area �� ����

	printf("�ﰢ���� ���� : %f\n", area);			// area �� ���

	return 0;
}