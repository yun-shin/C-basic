/* ���� �ڷ����� ����ϴ� ���α׷����� ���� 21�� �̻��� ����Ϸ� �� �� */
#include <stdio.h>

int main ()
{
	short year = 0;										// ���� ��
	int sale = 0;										// ���� ���ⷮ 
	long total_sale = 0;								// ���� ��ü ���ⷮ
	long long larg_value;								// 64����Ʈ ������

	year = 100;											// �� �� ����
	sale = 200000000;									// ���ⷮ ����
	total_sale = year * sale;							// ��ü ���ⷮ ���

	printf("total_sale = %d\n", total_sale);			// ��ü ���ⷮ ���

	return 0;
}
