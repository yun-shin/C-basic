/* ������ ���� ���� �������ͷ� ȯ���ϴ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define P 3.3058							// ��ȣ���

int main()
{
	int p;									// ���� p
	double je;								// ���� je
	
	printf("���� �Է��ϼ���.:");			// �Է� �ȳ�
	scanf("%d",&p);

	je = p * P;								// �������� ���
	
	printf("%f������ �Դϴ�.", je);		// ����� ���

	return 0;
}