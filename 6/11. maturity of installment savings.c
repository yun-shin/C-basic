#include <stdio.h>

int main()
{
	double x = 10000.0;
	double result;
	int i;
	result = x + (0.045)*x;
	for(i=1; i<10; i++)
	{
		result = result + ((0.045)*result);
	}
	printf("10�� ����� �ݾ��� %lf�� �Դϴ�.\n", result);
	
	return 0;
}