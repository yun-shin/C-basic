/* ȯ���� ����ϴ� ���α׷� */
#include <stdio.h>

int main()
{
	float rate;												// ��/�޷� ȯ��
	float usd;												// �޷�ȭ
	int krw;												// ��ȭ

	printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ�: ");			// �Է¾ȳ� �޽���
	scanf("%f", &rate);										// ����ڷκ��� ȯ���Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");						// �Է¾ȳ� �޽���
	scanf("%d", &krw);										// ��ȭ �ݾ� �Է�

	usd = krw / rate;										// �޷�ȭ�� ȯ��

	printf("��ȭ %d���� %f�޷��Դϴ�. \n", krw, usd);		// ��� ��� ���

	return 0;												// �Լ� ����� ��ȯ
}