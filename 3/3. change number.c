/* int���� ���� x�� y�� ���� ���� ��ȯ�ϴ� ���α׷� */
#include <stdio.h>

int main()
{
	int x = 10;							// x�� 10���� �ʱ�ȭ
	int y = 20;							// y�� 20���� �ʱ�ȭ
	int tmp;							// ���� tmp

	printf("x = %d, y = %d\n", x, y);		// ���

	tmp = x;							// tmp�� x�� ����
	x = y;								// x���� y�� ����
	y = tmp;							// tmp ���� y�� ����

	printf("x = %d, y = %d\n", x, y);		// ����� ���

	return 0;
}