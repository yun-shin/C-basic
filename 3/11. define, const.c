/* define �� const�� ����� ���α׷� */
#include <stdio.h>
#define TAX_RATE 0.2									// define�� �̿��� ��� ����

int main ()
{
	const int MONTHS = 23;								// const�� �̿��� ��ȣ ��� ����
	int m_salary, y_salary;								// ��������
	
	MONTHS = 10;										// const�� ����� ������ �ѹ� �ٲ㺸�Ҵ�.			(����)

	printf("������ �Է��Ͻÿ�: ");						// �Է� �ȳ���
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;						// ������ ���

	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %f�Դϴ�.\n", y_salary*TAX_RATE);

	return 0;
}