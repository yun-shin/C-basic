/* �����÷ο�, ����÷ο� �߻���Ű�� */
#include <stdio.h>

int main ()
{
	float x = 1e39;				// ���� �ʹ� ŭ
	float y = 1.23456e-38;		// ���� �ʹ� ����
	float z = 1.23456e-40;		// ���� �ʹ� ����
	float w = 1.23456e-46;		// ���� �ʹ� ����

	printf("x = %e\n", x);		// �����÷ο� �߻�

	printf("y = %e\n". y);		// ����÷ο� �߻�
	printf("z = %e\n", z);		// ����÷ο� �߻�
	printf("w = %e\n", w);		// ����÷ο� �߻�

	return 0;
}