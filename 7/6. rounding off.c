#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double round(double f);

void main()
{
	double f;

	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &f);

	round(f);


}


double round(double f)
{
	f = (int)(f + 0.5);
	printf("�ݿø��� ���� %lf�Դϴ�.\n", f);

	return f;
}
