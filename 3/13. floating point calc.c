/* �ε� �Ҽ��� �ڷ����� ũ�� ��� */
#include <stdio.h>

int main ()
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float�� ũ�� = %d\n", sizeof(float));		// float�� ũ�� ���
	printf("double�� ũ�� = %d\n", sizeof(double));		// double�� ũ�� ���

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);
	
	return 0;
}