/* �簢���� ���̿� �ѷ��� ���ϴ� ���α׷� */
#include <stdio.h>

int main ()
{
	double w, h, area, perimeter;												// �Ǽ� ������ �ѹ��� ��ħ

	printf("w���� h���� �������ֽʽÿ�.\n");									// scanf�� ����
	scanf("%lf %lf", &w, &h);													// w���� h���� �Է��Ҽ� �ְ���

	area = w*h;																	// ������ �� ����

	perimeter = 2*(w+h);														// �ѷ��� �� ����
	printf("�簢���� ���� : %lf\n�簢���� �ѷ� : %lf\n", area, perimeter);		// ������ ���� �ѷ��� �� ��� 

	return 0;
}

