/* ���� ������ ����ϴ� ���α׷� */
#include <stdio.h>

int main()
{
	float radius;						// ���� ������
	float area;							// ����

	printf("�������� �Է��Ͻÿ�: ");	// �Է� �ȳ� �޽���
	scanf("%f", &radius);				// ����ڷκ��� ������ �Է�

	area = 3.14 * radius * radius;		// ���� ���� ���

	printf("���� ����: %f\n", area);	// ��� ��� ���

	return 0;							// �Լ� ����� ��ȯ
}